#include<iostream>
using namespace std;

bool checkpallindrome(string str, int i, int j){

    if(i>j)
    return true;

    if(str[i] != str[j]){
        return false;
    }else{
        return checkpallindrome(str, i+1, j-1);
    }

}

int main(){

    string name = "mehallahem";
    cout<<endl;
    
    bool isPall = checkpallindrome(name, 0, name.length() -1);
    if(isPall){
        cout<<"pall"<<endl;
    }else{
        cout<<"not pall"<<endl;
    }

    return 0;
}