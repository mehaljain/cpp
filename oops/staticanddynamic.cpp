#include<iostream>
using namespace std;

class Hero{

    private:
     int health;

    public :
     char level;

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

    //static allocation
    Hero ramesh;

    cout<<"Level is:"<<ramesh.level<<endl; 
    cout<<"Health is:"<<ramesh.getHealth()<<endl;
 

    //dynamic allocation
    Hero *b = new Hero;
    cout<<"Level is:"<<(*b).level<< endl;
    cout<<"Health is:"<<(*b).getHealth()<<endl;



    return 0;
}

