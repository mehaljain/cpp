#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(int a[],  int s, int e, int key){
    int mid = s + (e - s)/2;

    while(s<=e){
 

        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            return binary_search(a,0,mid -1,key);
        }else{
            return binary_search(a,mid +1, e,key);
        }

        // int mid = s + (e - s)/2;

    }
    return -1;
    
}

int main() {

    int a[6] = {2,4,6,8,12,14};
    int n = sizeof(a)/sizeof(a[0]);

    cout << " index of 8 is " << binary_search(a, 0 , n -1, 8 ) << endl;

    
    return 0;

}