#include<iostream>
using namespace std;

void sortArray(int *a, int n){

    if(n==0 || n==1)
        return ;
    
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            swap(a[i], a[i+1]);
        }
    }

     sortArray(a,n-1);


}
int main(){

    int arr[5] = {2,5,1,6,9};

    sortArray(arr,5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<< " "; 
    }

    return 0;
}