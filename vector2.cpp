#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    // Taking user input in vectors
    for(int i = 0; i < 6; i++){
        int ele; 
        cin>>ele;
        v.push_back(ele);
    }

    // Traversing the vectors
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl<<v.size()<<endl;
    return 0;
}