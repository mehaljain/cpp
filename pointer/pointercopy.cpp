#include<iostream>
using namespace std;

int main(){
    int n=5;

    int *p = &n;
    (*p)++;
    cout<<"value of pointer"<<n<<endl;

    int *q = p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

}