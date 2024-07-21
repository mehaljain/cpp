#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,5,8,9,3};
    char ch[6] = "abcde";

    cout<<ch<<endl;
    cout<<arr<<endl;

    char *c = &ch[0];
    cout<< c<<endl;

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl;


return 0;




}