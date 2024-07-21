#include<iostream>
using namespace std;

bool isPresent(int a[][3], int target, int i, int j){

    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if( a[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
} 

void printSum(int a[][3], int i, int j){

int sum =0;
    cout<<"Printing sum : "<<endl;
    for(int i=0; i<3; i++){
        
        for(int j=0; j<3; j++){
            sum += a[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
   int a[3][3];

   cout<<"enter the elements"<<endl;

   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>a[i][j];
    }
   }

   cout<<"printing the array"<<endl;
   for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
       
   }
   cout<<"enter the element to search"<<endl;
   int target;
   cin>> target;

   if(isPresent(a,target,3,3 )){
    cout<<"element found"<<endl;
   }else{
    cout<<"not found"<<endl;
   }
   printSum(a,3,3);
   return 0;
} 