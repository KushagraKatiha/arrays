#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Check if the array is sorted or not

    vector<int> v(6);
    bool flag = true;

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    for(int i = 1; i < v.size(); i++){
        if(v[i] <= v[i-1]){
            flag = false;
        }
    }

    if(flag == true){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
    
    return 0;
}