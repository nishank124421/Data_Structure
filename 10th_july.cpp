#include<iostream>
using namespace std;

// pattern printing
int main(){
    int n;
    cout << "enter the number of rows: ";
    cin >> n;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << " * ";
        }
        cout <<  "\n";
    }
}