#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s=0,e=n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }

}

int getLength(char name[]){

    int count =0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;

}

int main(){

    char name[30];
    int len;

    cout<<"name"<<endl;
    cin>>name;

    len = getLength(name);

    reverse(name,len);

    cout<<"after swap"<<name<<endl;
    cout<<"length of string"<<len<<endl;
}