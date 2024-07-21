#include<iostream>
using namespace std;

class Hero{

    private:
     int health;

    public :
     char *name;
     char level;

     Hero(){
        cout<<"simple constructor called"<<endl;
        name = new char[100];
     }

     //parametrized contructor

     Hero(int health){

        this->health = health;

     }

     Hero(int health, char level ){
         this->health = health; 
         this->level = level;
     }

     //copy constructor
    //  Hero(Hero& temp){
    //     cout<<"copy constructor"<<endl;
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    //  }

     void print(){
        cout<<endl;
        cout<<"[ Name:"<<this->name<<",";
        cout<<"health"<<this->health<<",";
        cout<<"Level:"<<this->level<<"]"<<endl;
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

    void setName(char name[]) {
        strcpy(this->name, name);
    }
 };

int main(){
    Hero h;

    h.setHealth(12);
    h.setLevel('D');
    char name[7] = "mehal";

    h.print();

    Hero h1(h);
    h1.print();

    h.name[0]='G';
    h.print();

    h1.print();

    return 0;
}

