#include<iostream>
using namespace std;

 int main(){
    int num = 5;

    cout<<num<<endl;

    cout<<"Address of num is: "<<&num<<endl;

    int *p = &num;

    cout<<"Address is : "<<p<<endl;
    cout<<"Value is : "<<*p<<endl;

    return 0;
 }