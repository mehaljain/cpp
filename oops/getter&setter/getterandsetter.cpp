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

    // void setHealth(int h){
    //     health = h;
    // }

    void setHealth(int h){

            health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
    };

int main(){
    Hero ramesh;

    // cout<<"Health is:"<<ramesh.getHealth()<<endl;
     
    // ramesh.health = 70;
    // ramesh.level = 'A';

    ramesh.setHealth(70);
    ramesh.level = 'A';
     
    cout<<"Level is:"<<ramesh.getLevel()<<endl; 
    cout<<"Health is:"<<ramesh.getHealth()<<endl;

    return 0;
}

