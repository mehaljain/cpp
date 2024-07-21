#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    
    cout << "printing the array "<< endl;

    for(int i=0; i<n; i++){
         cout << arr[i] << " " ;
    }

    cout  << endl << "printing done "<< endl;
    
}

int main(){


    int c[15] = {2,5};
    int n = 15;
    printArray(c, 15);  //here c is arr and 15 is n(size)

    return 0;
}