#include<iostream>
using namespace std;

void merge(int *a, int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = a[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0;i<len2;i++){
        second[i] = a[mainArrayIndex++];
    } 

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    


    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            a[mainArrayIndex++] = first[index1++];
        }else{
            a[mainArrayIndex++] = second[index2++];
        }
    
    } 

    while(index1 < len1){
        a[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        a[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *a, int s, int e){

    if(s>=e){
        return ;
    }

    int mid = (s+e)/2;
    
    //left part sort karna hai
    mergeSort(a,s,mid);
    
    //right part sort krna hai
    mergeSort(a,mid+1,e);

    //merge
    merge(a,s,e);

}

int main(){

    int arr[5] = {5, 9 , 6, 8 , 7};
    int n = 5;

    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0; 

}