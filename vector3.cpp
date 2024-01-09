#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(6);
    int searchNo;

    int idx = -1;

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    cout<<"Enter number to be find: ";
    cin>>searchNo;
    cout<<endl;

    // for(int i = 0; i < v.size(); i++){
    //     if(v[i] == searchNo){
    //         idx = i;
    //     }
    // }

    // Start from the last to find the first occurence (which will be the last occurence of the element)

    for(int i = v.size()-1; i >= 0; i--){
        if(v[i] == searchNo){
            idx = i;
            break;
        }
    }

    if(idx == -1){
        cout<<"Number is not present !!";
    }else{
        cout<<"Number is present at index: "<<idx<<endl;
    }
    return 0;
}