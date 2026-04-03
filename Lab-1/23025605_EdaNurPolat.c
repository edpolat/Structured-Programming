#include <stdio.h>
#include <stdlib.h>

int **matrixreader(int n)
{
    int i;
    int j;
    i = 0;
    int **arr;
    arr = malloc(n * sizeof(int *));
    while (i < n)
    {
        arr[i] = malloc(n * sizeof(int));
        i ++;
    }
    int **arr2;
    i = 0;
    while(i < n)
    { 
        j = 0;
        while(j < n)
        {
            scanf("%d", &(*(*(arr+i)+j)));
            j++;
        }
        i++;
    }
    return(arr);
}
void freematrix(int **arr, int n)
{
    int i;
    i = 0;
    while (i < n) 
    {
        free(*(arr + i));
        i++;
    }
    free(arr);
}
int main (void)
{
    int n;
    printf("Enter the matrix size: ");
    scanf("%d", &n);
    printf("Enter the matrix elements: ");
    int **arr1;
    arr1 = matrixreader(n);
    int i;
    int j;
    i = 0;
    int flag;
    int **arr;
    arr = (int **)malloc(sizeof(int *));
    *arr = (int *)malloc(sizeof(int));
    int toplam;
    toplam = 0;
    printf("Yerel tepe elemanlar;");
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            flag = 1;
            **arr = *(*(arr1 + i) + j);

            if (i > 0 && *(*(arr1 + (i - 1)) + j) >= **arr) 
                flag = 0;
            
            if (i < n - 1 && *(*(arr1 + (i + 1)) + j) >= **arr) 
                flag = 0;
            
            if (j > 0 && *(*(arr1 + i) + (j - 1)) >= **arr) 
                flag = 0;
            
            if (j < n - 1 && *(*(arr1 + i) + (j + 1)) >= **arr) 
                flag = 0;

            if(flag == 1)
            {
                printf("Deger: %d, Konum: (%d, %d)\n", **arr, i, j);
                toplam += **arr;
            }    
            j++;
        } 
        i++;
    }
    printf("Toplam: %d", toplam);
    freematrix(arr, n);
    freematrix(arr1, n);
}
