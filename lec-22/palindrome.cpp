#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n){
    int s=0, e = n-1;
     
     while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
     }
     return 1;
}

void reverse(int n,char name[]){
    int s=0, e = n-1;
     
     while(s<e){
        swap(name[s++], name[e--]);
     }
}
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
   
    char name[20];
     cin>>name;
    int len = getLength(name);

    cout<<len<<endl;
    cout<<"pallindrome no"<<checkPalindrome(name, len)<<endl;
}