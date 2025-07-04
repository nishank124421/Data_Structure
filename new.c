// #include <stdio.h>

// int main()
// {
//     // declaration with definition
//     int defined_var;

//     printf("Defined_var: %d\n", defined_var);


//     defined_var = 12;

//     // declaration + definition + initialization
//     int ini_var = 25;

//     printf("Value of defined_var after assignment: %d\n", defined_var);
//     printf("Value of ini_var: %d", ini_var);
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size = 3;

    // Allocate initial memory for 3 integers
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initially allocated memory address: %p\n", ptr);

    // Reallocate memory for 5 integers
    size = 5;
    int *new_ptr = (int *)realloc(ptr, size * sizeof(int));
    if (new_ptr == NULL) {
        printf("Memory reallocation failed\n");
        free(ptr); // Free the old memory
        return 1;
    }

    printf("Memory address after reallocation: %p\n", new_ptr);

    // Check if memory address changed
    if (new_ptr != ptr) {
        printf("Memory address has changed during reallocation.\n");
    } else {
        printf("Memory address remains the same after reallocation.\n");
    }

    // Free the allocated memory
    free(new_ptr);

    return 0;
}