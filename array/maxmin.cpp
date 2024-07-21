#include<iostream>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

    for(int i=0; i<n; i++){
       if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n){

    int maxi = INT_MIN;

     for(int i=0; i<n; i++){

        maxi = max(maxi, num[i]);
        // if(num[i] > max){
        //     max = num[i];
        // }
    }
    return maxi;
}

int main(){

    int size;
    cin >> size;

    int num[100];

    for (int i=0; i<size; i++){
        cin >> num[i];
    }

    cout<< "max value is " << getMax(num , size) << endl;
    cout<< "min value is " << getMin(num , size) << endl;

    return 0; 
}