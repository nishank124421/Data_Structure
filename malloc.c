// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//   int numItems = 15;
//   int *myArray = malloc(numItems * sizeof(int));

//   for(int i = 0; i < numItems; i++) {
//     printf("%d ", myArray[i]);
// }

//   free(myArray);
//   myArray = NULL;
  
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *num;
//     int sum = 0;

//     num = (int *)malloc(3 * sizeof(int));

//     if (num == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     printf("Enter 3 numbers:\n");
//     for (int i = 0; i < 3; i++) {
//         printf("Number %d: ", i + 1);
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < 3; i++) {
//         sum += num[i];
//     }

//     printf("The sum of the 3 numbers is: %d\n", sum);

//     free(num);

//     return 0;
// }