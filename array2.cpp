#include<iostream>
using namespace std;

// Traversing through array using loops
int main(){
    
    int myArr[] = {1,2,3,6,4,7};
    int len = sizeof(myArr)/sizeof(myArr[0]);

    // for loop
    for(int i = 0; i < len; i++){
        cout<<myArr[i]<<endl;
    }

    // for each loop
    for(int ele:myArr){
        cout<<ele<<endl;
    }

    // while loop
    int i = 0;
    while(i < len){
        cout<<myArr[i]<<endl;
        i++;
    }

    return 0;
}