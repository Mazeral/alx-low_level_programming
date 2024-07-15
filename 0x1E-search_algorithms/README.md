# 0x1E. C - Search Algorithms

This repository contains various search algorithm implementations and their analysis in C. The tasks include implementing linear search, binary search, and analyzing their time and space complexities.

## Tasks

### 0. Linear Search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

- **Prototype:** `int linear_search(int *array, size_t size, int value);`
- The function should:
  - Return the first index where `value` is located.
  - Return `-1` if the value is not present or if the array is `NULL`.
  - Print each value in the array being compared.

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

Compile and run:
```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
./0-linear
```

**File:** `0-linear.c`

### 1. Binary Search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

- **Prototype:** `int binary_search(int *array, size_t size, int value);`
- The function should:
  - Assume the array is sorted in ascending order.
  - Return the index where `value` is located.
  - Return `-1` if the value is not present or if the array is `NULL`.
  - Print the array being searched each time it changes.

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

Compile and run:
```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
./1-binary
```

**File:** `1-binary.c`

### 2. Big O #0

Determine the time complexity (worst case) of a linear search in an array of size `n`.

**File:** `2-O`

### 3. Big O #1

Determine the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`.

**File:** `3-O`

### 4. Big O #2

Determine the time complexity (worst case) of a binary search in an array of size `n`.

**File:** `4-O`

### 5. Big O #3

Determine the space complexity (worst case) of a binary search in an array of size `n`.

**File:** `5-O`

### 6. Big O #4

Determine the space complexity of the following function:

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

**File:** `6-O`

## Repository

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x1E-search_algorithms`
