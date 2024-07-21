#include<iostream>>
using namespace std;

int main(){

    char name[20];

    cout<<"my name is:"<<endl;
    cin>>name;
    name[2] = '\0';

    cout<<"my name is:"<<name<<endl;

    return 0;
}