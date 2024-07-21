#include<iostream>
using namespace std;

bool isPresent(int a[][4], int target, int i, int j){
     
      for(int i=0; i<3; i++){
        for (int j = 0; j < 4; j++)
        {
            if(a[i][j] == target){
                return 1;
            }
        }
      }

     return 0;

}

int main(){

    int a[3][4];

     for(int i=0; i<3; i++){
        for (int j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }

         for(int i=0; i<3; i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout << endl;
        
    }

    cout<< "enter the element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent(a, target, 3, 4)){
        cout<<"element found"<<isPresent<<endl;
    }else{
        cout<<"not found"<<isPresent<<endl;
    }
    return 0;


}