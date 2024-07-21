#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int a = n;
    a++;

    cout<<n<<endl;
    

    int *p=&n;
    cout<<"before"<<n<<endl;
    (*p)++;
    cout<<"after"<<n<<endl;

    return 0;
}