#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

    unordered_map<string,int> ump;
    ump["prince"] = 44;
    ump["gfg"] = 90;
    ump["golu"] = 44;
    ump["kolal"] = 49;
    ump["nikku"] = 54;

    // for(auto x : ump)
    // cout<<x.first<<" "<<x.second<<endl;

    for(auto itr = ump.begin(); itr!=ump.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl; 
    }

    string key = "golu";
    if(ump.find(key) != ump.end()){
        cout<<"key found"<<endl<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }

    if(ump.find(key) != ump.end()){
        cout<<"key found"<<endl;

        auto temp = ump.find(key);
        cout<<"key is:"<<temp->first<<endl;
        cout<<"value is: "<<temp->second<<endl;
    }

    ump.insert(make_pair("mehal",58));
     for(auto itr = ump.begin(); itr!=ump.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl; 
    }

    cout<<ump.size()<<endl;



    //--------------------------------------------example-------------------------------------------------

     int a[] = {7, 2, 6, 0, 6, 8, 6, 9, 1, 3, 2, 7, 6};
     unordered_map<int,int>umap;

     for(int i=0; i<15; i++){
        int key = a[i];
        umap[key]++;
     }

      for(auto itr = umap.begin(); itr!=umap.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl; 
    }


}