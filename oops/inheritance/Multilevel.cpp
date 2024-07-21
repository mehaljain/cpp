#include<iostream>
using namespace std;

class Animal{

    public:
      int age;
      int weight;

    public:
      void speak(){
        
        cout<<"speaking"<<endl;

      }
};
class Dog:public Animal{

};
class Tommy:public Dog{

};
int main(){
    Tommy g;
    g.speak();

    return 0;
}