#include<iostream>
using namespace std;
void reverse(string& str, int i, int j){

    if(i>j)
    return ;

    swap(str[i],str[j]);

    return reverse(str,i+1,j-1);
}
int main(){

    string name = "mehal";
    cout<<endl;
    reverse(name, 0 ,name.length() - 1);
    cout<<name<<endl;

    return 0;
}