#include<iostream>
using namespace std;

// Taking user input in array
int main(){

    char vowels[5];
    // using for loop
    for(int i = 0; i < 5; i++){
        cin>>vowels[i];
    }

    cout<<"Elements are: ";
    for(int i = 0; i < 5; i++){
        cout<<vowels[i]<<" ";
    }

    // using for each loop
    // & operater will be used to input data using for each loop
    for(char &element:vowels){
        cin>>element;
    }

    cout<<"Elements of for-each loop are: ";
    for(int i = 0; i < 5; i++){
        cout<<vowels[i]<<" ";
    }


    cout<<endl;

    return 0;
}