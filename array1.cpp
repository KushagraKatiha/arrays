#include<iostream>
using namespace std;

int main(){

    int myArr[] = {1,2,5,3,4};
    
    cout<<sizeof(myArr)<<endl;
    cout<<"Length of Array would be: "<<sizeof(myArr)/sizeof(myArr[0])<<endl;

    return 0;
}