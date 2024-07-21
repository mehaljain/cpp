#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    char level;

    Hero(){

        cout<<"cc"<<endl;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    Hero(Hero& temp){

        cout<<"copy constructor called"<<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout<<"health: "<<this -> health<<endl;
        cout<<"level: "<<this -> level<<endl;

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
};
int main(){

    Hero h( 550,'A');
    h.print();

    Hero c(h);
    c.print();

    return 0;


}