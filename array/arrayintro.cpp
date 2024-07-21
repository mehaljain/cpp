#include<iostream>
using namespace std;

void printArray() {

}

int main(){

    int a[15];

    cout << " value of index 14 is " << a[14] << endl;

    cout << endl <<" everithing is fine " << endl << endl;

    int b[3] = {5,8,3};

    cout << "value of index 2 is " << b[2] << endl;

    int c[15] = {2,5};
    
    int n = 15;
    cout << "printing the array "<< endl;

    for(int i=0; i<n; i++){
         cout << c[i] << " ";
    }

    return 0;
}