#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(6);
    int searchNo; 

    int counter = 0;

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    cout<<"Enter number to be found: ";
    cin>>searchNo;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == searchNo){
            counter++;
        }
    }

    cout<<"Occurence of given number in the array is: "<<counter<<" times"<<endl;

    return 0;
}