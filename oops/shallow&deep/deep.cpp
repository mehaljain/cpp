#include<iostream>
using namespace std;

class Hero{

     private:
       int health;

     public:
       char *name;
       char level;

       Hero(){
         cout<<"constructor called"<<endl;
       }

       Hero(int health){
         
       } 


};