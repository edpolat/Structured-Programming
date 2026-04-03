 # Structured Programming Lab-1 Question 1st Session

**Duration:** 55 min + 5 min Upload

## Question
Write a C program that determines the **local peak elements** in an N x N integer matrix.

An element is considered a **local peak element** if:
* it is not at a corner and is greater than all of its up, down, left, and right neighbors,
* it is on an edge and is greater than all of its **existing neighbors** only,
* it is at a corner and is greater than all of its **available neighbors**.

The program must find the local peak elements in the matrix, print these elements together with their positions, and calculate their sum.

## Rules
* The matrix size N will be entered by the user.
* The result must be printed as the local peak elements, their positions, and their total sum.
* **Only pointer arithmetic must be used** to access matrix elements. `matrix[i][j]` or similar array notation **must not be used.**
* Memory for the matrix must be allocated **dynamically**. For this purpose, `malloc` or `calloc` must be used.
* At the end of the program, the allocated memory must be released using **`free`**. No extra array may be used; otherwise, the solution will be considered invalid.
* Neighbor checks must be handled carefully. Out-of-bounds access must be avoided.
* **Global variables, `break`, and `continue`** must not be used.
* While writing the program, students may solve it either entirely in `main` or by using functions.
* When uploading your answer file, you must name it as **StudentNumber_FullName.c**.

> **Note/Hint:** Use pointer arithmetic in the format `*(*(arr + i) + j)` to navigate and access matrix elements.

## Example

**Enter the matrix size:** 4

**Enter the matrix elements:**
```text
3  8  2  1
7  5  9  4
6 10  3  2
1  4  2  8

Output:
Yerel tepe elemanlar:
Deger: 8, Konum: (0,1)
Deger: 7, Konum: (1,0)
Deger: 9, Konum: (1,2)
Deger: 10, Konum: (2,1)
Deger: 8, Konum: (3,3)
Toplam: 42