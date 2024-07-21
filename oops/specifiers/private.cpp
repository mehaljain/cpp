#include<iostream>
using namespace std;

class Hero{

public:
    int health;

private:
    char level;

    void print(){
        cout<<"level"<<level<<endl;  
    }    

};
int main(){
    Hero h1;
      
    h1.health = 70;
    // h1.level = 'a';
    cout<<"health is :"<<h1.health<<endl;
    // cout<<"level is :"<<h1.level<<endl;

    return 0;
}


