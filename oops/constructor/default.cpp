#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"constructor called"<<endl;
    }
};
int main(){
    Hero ramesh;

    Hero *h = new Hero;

}