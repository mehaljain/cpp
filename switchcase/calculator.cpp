#include<iostream>
using namespace std;

int main(){
   
     int a, b;

     cout <<"enter the value of a"<<endl;
     cin>>a;

     cout <<"enter the value of b"<<endl;
     cin>>b;

     char op;
     cout<<"Enter the operation you want to perform";
     cin>>op;

     switch (op){
         case '+': cout<< (a+b) <<endl;
                   break;

         case '-':cout<< (a-b) <<endl;
                   break;

         case '*':cout<< (a*b) <<endl;
                   break;

         case '/':cout<< (a/b) <<endl;
                   break;

          case '%':cout<< (a%b) <<endl;
                   break;


     }



}