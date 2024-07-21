#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffix(vector<int>& a){

    int total_sum = 0;
    for(int i=0; i<a.size(); i++){
        total_sum += a[i];

    }
    
    int prefix_sum =0;
    for(int i=0; i<a.size(); i++){
        prefix_sum += a[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum){
            return 1;
        }
    }

    return 0;

}
int main(){

    int n;
    cin>>n;

    vector<int>a;
    for(int i =0; i<n; i++){
        int ele;
        cin>>ele;
        a.push_back(ele);
    }

    cout<<checkPrefixSuffix(a)<<endl;
    return 0;

}