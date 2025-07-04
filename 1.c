// AREA AND CIRCUFRENCE OF CIRCLE
// #include<stdio.h>
// #define PI 3.14
// int main(){
//     float area, circumfrence, radius;
//     printf("Enter the radius of circle:");
//     scanf("%f", &radius);
//     area=PI * radius * radius;
//     printf("Area of circle: %.2f\n" ,area);
    
//     circumfrence=2 * PI * radius;
//     printf("Enter the radius of circle:");
//     scanf("%f", &radius);
//     printf("Circumfrence of circle is: %.2f\n", circumfrence);
// }


// AREA OF TRIANGLE
// #include<stdio.h>
// int main(){
//     float area, base, height;
//     printf("Enter the height of triangle:");
//     scanf("%f" , &height);
//     printf("Enter the base of triangle:");
//     scanf("%f", &base);
//     area=0.5 * base * height;
//     printf("The area of triangle is: %.2f\n" , area);
// }


// PERCENTAGE OF 5 SUBJECTS
// #include <stdio.h>

// int main() {
//     int marks[5];
//     int total = 0, max_marks = 100;
//     float percentage;

//     printf("Enter marks for 5 subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Subject %d: ", i + 1);
//         scanf("%d", &marks[i]);
//         total += marks[i];
//     }

//     percentage = (float)total / (5 * max_marks) * 100;

//     printf("Total Marks: %d\n", total);
//     printf("Percentage: %.2f%%\n", percentage);

//     return 0;
// }


// CONVERT CELCIUS TO FARENHIT
// #include<stdio.h>
// int main(){
//     float celcius, farenhit;
//     printf("Enter Temperature in celcius:");
//     scanf("%f", &celcius);
//     farenhit=(celcius * 9/5)+32;
//     printf("Temperature in farenhit is: %.2f\n", farenhit);

// }


// #include<stdio.h>
// int main(){
//     int n, sum;
//     printf("enter n ");
//     scanf("%d", &n);
//     int i=1;
//     while(i<=n){
//         sum=sum+i;
//         printf("%d", sum);
//         i++;
//     }

// }


// #include <stdio.h>
// #include <math.h>

// // Function to check if a number is Prime
// int isPrime(int num) {
//     if (num < 2) return 0;
//     for (int i = 2; i * i <= num; i++)
//         if (num % i == 0) return 0;
//     return 1;
// }

// // Function to check if a number is Armstrong
// int isArmstrong(int num) {
//     int sum = 0, temp = num, digits = 0;

//     // Counting number of digits
//     int n = num;
//     while (n > 0) {
//         n /= 10;
//         digits++;
//     }

//     // Calculate sum of digits raised to power of total digits
//     temp = num;
//     while (temp > 0) {
//         int remainder = temp % 10;
//         sum += pow(remainder, digits);
//         temp /= 10;
//     }

//     return sum == num;
// }

// // Function to check if a number is Perfect
// int isPerfect(int num) {
//     if (num < 2) return 0; // Perfect numbers are greater than 1

//     int sum = 1; // Start with 1 as it's always a divisor
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             sum += i;
//             if (i != num / i) // Avoid adding the same divisor twice
//                 sum += num / i;
//         }
//     }

//     return sum == num;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("%d is %sa Prime Number\n", num, isPrime(num) ? "" : "not ");
//     printf("%d is %san Armstrong Number\n", num, isArmstrong(num) ? "" : "not ");
//     printf("%d is %sa Perfect Number\n", num, isPerfect(num) ? "" : "not ");
//     return 0;}



// #include <stdio.h>

// // Function to swap numbers using Call by Value
// void swapByValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("After Swap (Inside Function - Call by Value): a = %d, b = %d\n", a, b);
// }

// // Function to swap numbers using Call by Reference
// void swapByReference(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;
    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);

//     printf("Before Swap: x = %d, y = %d\n", x, y);

//     // Call by Value
//     swapByValue(x, y);
//     printf("After Swap (Outside Function - Call by Value): x = %d, y = %d\n", x, y);

//     // Call by Reference
//     swapByReference(&x, &y);
//     printf("After Swap (Call by Reference): x = %d, y = %d\n", x, y);

//     return 0;
// }





// #include <stdio.h>

// struct Employee {
//     char name[30];
//     int id;
//     float salary;
// };

// int main() {
//     struct Employee emp[5];
//     int i;

//     for (i = 0; i < 5; i++) {
//         printf("\nEnter details of employee %d\n", i + 1);
//         printf("Name: ");
//         scanf("%s", emp[i].name);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);
//         printf("Salary: ");
//         scanf("%f", &emp[i].salary);
//     }

//     printf("\nEmployee Details:\n");
//     for (i = 0; i < 5; i++) {
//         printf("Name: %s, ID: %d, Salary: %.2f\n", emp[i].name, emp[i].id, emp[i].salary);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int i = 10;
//     void *p = &i;
//     printf("%d\n" (int)*p);
//     return 0;
//   }
  
// #include <stdio.h>
// #include <math.h>

// // Function to calculate factorial
// long long factorial(int num) {
//     long long fact = 1;
//     for (int i = 1; i <= num; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// k
// double calculateSin(double x, int n) {
//     double result = x;
//     int sign = -1;

//     for (int i = 3; i <= (2 * n - 1); i += 2) {
//         result += sign * (pow(x, i) / factorial(i));
//         sign *= -1;
//     }

//     return result;
// }

// int main() {
//     double x;
//     int n;

//     // Input from user
//     printf("Enter value of x in radians: ");
//     scanf("%lf", &x);
//     printf("Enter number of terms: ");
//     scanf("%d", &n);

//     // Calculate and display result
//     printf("sin(%.2f) ≈ %.10f\n", x, calculateSin(x, n));

//     return 0;
// }

// 23/6/25
// #include<stdio.h>
// int main()
// {
//     int n,digit,sum = 0,sum2 = 0,temp;
//     printf("Enter 6 Digit Serial Number: ");
//     scanf("%d",&n);
//     while(n > 0)
//     {
//         digit = n % 10;
//         sum += digit;
//         n = n / 10;
//     }
//     temp = sum;
//     if(sum > 26)
//     {
//         while(sum > 0)
//     {
//         digit = sum % 10;
//         sum2 += digit;
//         sum = sum / 10;
//     }
//     }
//     if(temp > 26)
//     {
//         printf("%c",'A'+(sum2 - 1));
//     }
//     else
//     {
//         printf("%c",'A'+ (sum - 1));

//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The elements of the array are:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     float sum = 0, average;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i]; // Calculate the sum
//     }

//     // Calculate the average
//     average = sum / n;

//     printf("Average: %.2f\n", average);


//     printf("Differences from the average:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: %.2f\n", arr[i], arr[i] - average);
//     }

//     return 0;
// }

//Star rectangle pattern
// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter the number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=n;i++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//Number Square pattern
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=n;i++){
//             printf("%d", i);
//         }
//         printf("\n");
//     }
// }

// //Star triangle pattern
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Array input an print

// #include <stdio.h>
// int main(){
//     int arr[5];

//     for(int i=0;i<=4;i++){
//         printf("\nEnter the number of array: %d", i+1);
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d", arr[i]);
//     }
// }

// print the index of array whose number are less than 35

// #include<stdio.h>
// int main(){
//     int marks[10]={12, 23, 45, 67, 89, 34, 56, 78, 90, 11};
//     for(int i=0;i<=9;i++){
//         if(marks[i]<35){
//             printf("The index of array whose number are less than 35 is: %d\n", i);
//         }
//     }
// }

// #include <stdio.h>
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int sum=1;
//     for(int i=0;i<=5;i++){
//         sum=sum*arr[i];

//     }
//     printf("%d", sum);

// }

// #include <stdio.h>  
// int main()  
// {  
//     int arr[5] ={1, 2, 3, 4, 5};
//     int max= -1;
//     for(int i=0;i<=5;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//         printf("%d", max);
//         return 0;
//     }
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<=4;i++){
//         if(i%2!=0){
//             arr[i]=arr[i]*2;
//         }
//         else{
//             arr[i]=arr[i]+10;
//         }

//     printf("%d  ", arr[i]);
//     }
// }

// STRINGS
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     puts("Enter the string: ");
//     gets(str);
//     puts("the reverse is:");
    
// }

// #include <stdio.h>

//     int fact(int n){
//         if(n==0)
//             return 1;
//             return n*fact(n-1);
//     }
//     int main(){
//         int num;
//         scanf("%d",&num);
//         printf("Factorial of %d is %d\n", num, fact(num));

//     }

// #include<stdio.h>
// int main(){
//     int n, count=0;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         count+=arr[i];
//     }
//     printf("%d",count);

// }


// #include<stdio.h>
// int main()
// {
//     int temp[7][3],sum = 0,max = 0,max_index = 0,min = 1000,min_index = 0;
//     float avg[7];
//     for(int i = 0;i < 7;i++)
//     {
//         for(int j = 0;j < 3;j++)
//         {
//             scanf("%d",&temp[i][j]);
//             sum += temp[i][j];
//         }
//         avg[i] = sum / 3.0;
//         if(avg[i] > max)
//         {
//             max = avg[i];
//             max_index = i;
//         }
//         if(avg[i] < min)
//         {
//             min = avg[i];
//             min_index = i;
//         }
//         sum = 0;
//     }
//     for(int i = 0;i < 7;i++)
//     {
//         printf("%.1f\n",avg[i]);
//     }
//     printf("%d\n",max_index+1);
//     printf("%d",min_index+1);
//     return 0;
// }
#include <stdio.h>
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int main() {
    printf("%d", factorial(5));
    return 0;
}
