// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch ((num > 0) - (num < 0)) {
//         case 1:
//             printf("The number is positive.\n");
//             break;
//         case -1:
//             printf("The number is negative.\n");
//             break;
//         case 0:
//             printf("The number is zero.\n");
//             break;
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, sum = 0, i = 1;

//     // Input: Enter the value of n
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // While loop to calculate the sum
//     while (i <= n) {
//         sum += i;
//         i++;
//     }

//     // Output: Display the sum
//     printf("The sum of the first %d natural numbers is: %d\n", n, sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, first = 0, second = 1, next, i;

//     // Input: Enter the number of terms
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci series: ");

//     for (i = 0; i < n; i++) {
//         if (i <= 1)
//             next = i;
//         else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         printf("%d ", next);
//     }

//     printf("\n");
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int num1, num2;
//     printf("Enter the num1:");
//     scanf("%d", &num1);

//     printf("Enter the num2:");
//     scanf("%d", &num2);

//     if(num1>num2){
//         printf("%d is greater", num1);
//     }
//     else{
//         printf("%d is greater", num2);
//     }
// }

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the year:");
//     scanf("%d", &year);
    
//     if(year % 400 == 0){
//         printf("%d is leap year", year);
//     }
//     else if(year % 100 == 0){
//         printf("%d is not a leap year", year);
//     }
//     else if(year % 4 == 0){
//         printf("%d is a leap year", year);
//     }
//     else{
//         printf("%d is not a leap year", year);
//     }
//     return 0;
// }


// ASCII value of character
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter the character: ");
//     scanf("%c", &ch);
//     printf("The ASCII value of %c is %d\n",ch ,ch);
// }



// display the sum of two largest values out of the three numbers entered. 
// #include <stdio.h>
// int main()
// { 
// int 
// a,b,c,sum=0;
// printf("Enter number:");
// scanf("%d%d%d", &a,&b,&c);
// if(a>b && a>c)
//     {
// sum=sum+a;
// if(b>c)
// sum=sum+b;
// else
// sum=sum+c;
//     }
// else if (b>a &&b>c)
//     {
// sum=sum+b;
// if (a>c)
// sum=sum+a;

// else
// sum=sum+c;
//     }
// else
//     {
// sum=sum+c;
// if(a>b)
// sum=sum+a;
// else
// sum=sum+b;
//     }
// printf("%d",sum);
// return 0;
// }


// Chitkara University, there are some rules and regulations to allow a student to appear in the End Term Exams (ETE). Every student should have at least 75% attendance overall to appear in exams. But, if his/her attendance is below 75% then, a student will be only allowed to appear in ETE if he/she has a medical cause. Ask the user for medical cause (Y or N or y or n) in case if attendance percentage is below 75%. 
// Take the following input from the user:
// No. of classes attended, No. of classes held
// If the attendance is below 75% then ask user to enter whether he or she has medical cause or not (Enter either n, N , y or Y)
// Print the status of the student as “Allowed” or “Not allowed” accordingly.


// Input Format:
// The input consists of two integer values, Number of classes attended, Number of classes held.
// And if the percentage is below 75% then only the user needs to enter the medical cause.  

// #include<stdio.h>
// int main(){
//     int classes_attended, classes_held; char medical_cause;
//     float percentage;
//     scanf("%d%d", classes_attended, classes_held);
//     percentage=(float)classes_attended/classes_held*100;
//     if(percentage>=75)
//     printf("Allowed");

//     else{
//         scanf("%c", &medical_cause);
//         if(medical_cause=='Y' || medical_cause=='y')
//         printf("Allowed");
//     }
//     else
//     printf("Not allowed");
// }


// # include <stdio.h>
// int main ()
// {
// int m1, m2, m3, m4, m5, avg;
// scanf ("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
// avg = (m1 + m2 + m3 + m4 + m5)/5;
// if (avg>= 60)
// printf ("A");
// else
//     {
// if (avg>= 50)
// printf ("B");
// else
//     {
// if (avg>= 40)
// printf ("C");
// else
// printf ("Fail");
//     }
// }




// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("\nMultiplication Table:\n");
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= cols; j++) {
//             printf("%4d", i * j);
//         }
//         printf("\n"); 
//     }

//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     printf("\n2D Grid:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf(" * ");

//         printf("\n"); 
//     }

//     return 0;
// }




// #include<Stdio.h>
// void square(int side);
// int main(){
//     int side;
//     printf("enter side:");
//     scanf("%d",&side);
    
//     square(side);
//     return 0;
// }
// void square(int side){
//     printf("area of sqaure : %d",side*side);
// }




// #include<Stdio.h>
// void interest(int a,int b,int c);
// int main(){
//     int a,b,c;
//     printf("enter a:");
//     scanf("%d",&a);
//     printf("enter b:");
//     scanf("%d",&b);
//     printf("enter c:");
//     scanf("%d",&c);

//     interest(a,b,c);

//     return 0;
// }




// void interest(int a,int b,int c){
//     printf("simple interest is %d",(a*b*c/100));
// }

// #include <stdio.h>
// #include <time.h>

// int main() {
//     // Declare a variable to hold the current time
//     time_t currentTime;
    
//     // Get the current time
//     time(&currentTime);

//     // Convert the current time to local time
//     struct tm *localTime = localtime(&currentTime);




// #include <stdio.h>
// #include <math.h>

// int is_prime(int n) {
//     if (n < 2) return 0;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return 0;
//     }
//     return 1;
// }

// int is_armstrong(int n) {
//     int sum = 0, temp = n, digits = 0;
//     while (temp) {
//         temp /= 10;
//         digits++;
//     }
//     temp = n;
//     while (temp) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }
//     return sum == n;
// }

// int is_perfect(int n) {
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) sum += i;
//     }
//     return sum == n;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (is_prime(num))
//         printf("%d is a Prime number.\n", num);
//     else
//         printf("%d is not a Prime number.\n", num);
    
//     if (is_armstrong(num))
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);
    
//     if (is_perfect(num))
//         printf("%d is a Perfect number.\n", num);
//     else
//         printf("%d is not a Perfect number.\n", num);
    
//     return 0;
// }


