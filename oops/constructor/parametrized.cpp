#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char *name;
    char level;

    Hero(){
        
    }

    // Hero(int health){
    //     cout<<"this -> "<<this<<endl;
    //     this -> health = health;
    // }
    
    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }
     
     int getHealth(){
        return health;
     }

      char getLevel(){
        return level;
     }

     void setHealth(int h){
         health = h;
     }

     void setLevel(char ch){
        level = ch;
     }

     void print(){
        cout<<level<<endl;
        cout<<health<<endl;
     }


};
int main(){

    Hero ramesh(10,'.');
    ramesh.print();

    Hero *h = new Hero();
    h -> print();

    // Hero h(70,'a');
    // h.print();

    return 0;

}