#include<iostream>
using namespace std;

int main(){

    int myArr[] = {2,3,5,7,1,0,8};
    int len = sizeof(myArr)/sizeof(myArr[0]);
    int searchNum = 1;

    int reqIdx = -1;
    for(int i = 0; i < len; i++){
        if(myArr[i] == searchNum){
            reqIdx = i;
            break;
        }
    }

    if(reqIdx == -1){
        cout<<"Number is not present"<<endl;
    }else{
        cout<<"Number is present at index: "<<reqIdx<<endl;
    }
    return 0;
}