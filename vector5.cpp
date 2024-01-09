#include<iostream>
#include<vector>
using namespace std; 

int main(){
    // Find number of elements greater than given number.

    vector<int> v(6);
    int searchNo; 

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    cout<<"Enter nubmer to compare: ";
    cin>>searchNo;

    int counter = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > searchNo){
            counter++;
        }
    }

    cout<<"Number of elements greater than given element are: "<<counter<<endl;
    return 0;
}