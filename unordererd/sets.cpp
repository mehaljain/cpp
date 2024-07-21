#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

//--------------------------------------time complexity : O(1)------------------------------------------
//----------------------------------------worst case : O(n)------------------------------------------

int main(){

//----------------------------------------------------------------------------------------------

    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(9);

    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<(*it)<<endl;
    }

    cout<<"number of elements"<<s.size()<<endl;


//-----------------------------------------------------------------------------------------
    // s.clear();
    // cout<<"number of elements"<<s.size()<<endl;


//------------------------------------------------------------------------------------------

    // int key = 25;
    // if(s.find(key) == s.end()){

    //     cout<<"key not found"<<endl;

    // }else{
    //     cout<<"key found"<<endl;
    // }




//----------------------------------------------------------------------------------------------
    // int delete_key = 15;
    // s.erase(delete_key);
    // for(auto it = s.begin(); it!=s.end(); it++){
    //     cout<<(*it)<<endl;
    // }

    // cout<<"number of elements "<<s.size()<<endl;




//----------------------------------------------------------------------------------------------
    //   int key = 5;
    // if(s.find(key) == s.end()){

    //     cout<<"key not found"<<endl;

    // }else{
    //     cout<<"key found"<<endl;
    //     auto temp = s.find(key);
    //     s.erase(temp);
    //  }

    //  for(auto it = s.begin(); it!=s.end(); it++){
    //     cout<<(*it)<<endl;
    // }

    // cout<<"number of elements "<<s.size()<<endl;




//----------------------------------------------------------------------------------------------
//count() is substitute of find() function 
//find() function return the iterator to that element
//count() function return the '1if it present or '0' if not   
 if(s.count(15)){
     cout<<"key found"<<endl;
    }else{
     cout<<"key not found"<<endl;}

}