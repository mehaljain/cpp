#include<iostream>
using namespace std;

void simple(int n){

    for(int i =0; i<n; i++){
        for(int j=0; j<=i; j++){

            cout<<"*";
        }
        cout<<" "<<endl;
    }
}
int main(){

    int n;
    simple(5);
    return 0;
}