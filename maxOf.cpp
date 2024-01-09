#include<iostream>
using namespace std;

int main(){

    int myArr[] = {1,2,4,2,6,3,13,5,2,1};
    int len = sizeof(myArr)/sizeof(myArr[0]);
    int max = myArr[0];

    for(int i = 0; i < len; i++){
        if(myArr[i] > max){
            max = myArr[i];
        }
    }

    cout<<"Maximum element of given Array is: "<<max<<endl;
    return 0;
}