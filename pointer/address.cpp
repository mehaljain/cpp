#include<iostream>
using namespace std;

int main(){
    //   int arr[10] = {5,6,6,9};

    //   cout<<"the add of the array"<<arr<<endl;
    //   cout<<arr[0]<<endl;
    //   cout<<"the add of the array"<<&arr[0]<<endl;


    //   int i=3;
    //   cout<<i[arr]<<endl;

    int arr[10];
    //arr = arr + 1; // errror

    int *ptr = &arr[0];
        cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;



       

      return 0;

}