#include<iostream>
using namespace std;
#include<climits>

int Largestrowsum(int a[][3], int i, int j){

    int maxi = INT_MIN;
    int rowIndex = -1;
    

    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += a[i][j];
        }
    

    if(sum>maxi){
        maxi = sum;
        int rowIndex = i;
    }
    }
    cout<<"the maximium sum is"<< maxi <<endl;
    return i;

}

int main(){

    int a[3][3];

  for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int ansIndex = Largestrowsum(a, 3,3);
    cout<<"max row is at index"<<ansIndex<<endl;

    return 0;
}