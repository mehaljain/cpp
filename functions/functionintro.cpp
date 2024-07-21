#include<iostream>
using namespace std;

int main(){

    // pow(a,b)

    int a,b;
     
     cin>> a >>b;

     int ans = 1;

     for (int i = 1; i<=b; i++) {
        ans = ans * a;
     }

     cout <<"answer is "<< ans <<endl;


 int m,n;
     
     cin>> m>>n;

     int ans = 1;

     for (int i = 1; i<=n; i++) {
        ans = ans * m;
     }

     cout <<"answer is "<< ans <<endl;


     return 0;
} 