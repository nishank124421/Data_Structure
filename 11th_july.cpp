#include<iostream>
using namespace std;

// int main(){
//     int arr[5]={0,2,3,4,5},max=0,min=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout << "Maximum: " << max << endl;
//     cout << "Minimum: " << min << endl;
//     return 0;  

// }

// reverse the array 
// int main(){
//     int n;
//     cout << "Enter the size of the array: "; 
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int j=0;j<n/2;j++){
//         int temp=arr[j];
//         arr[j]=arr[n-j-1];
//         arr[n-j-1]=temp;
//     }
//     cout << "Reversed array: ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }


// find the second largest element in the array
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int max=0,second_max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             second_max=max;
//             max=arr[i];
//         } else if(arr[i]>second_max){
//             second_max=arr[i];
//         }
//     }
//     cout << "Second largest element: " << second_max;
//     return 0;
// }

