#include<iostream>
using namespace std;

int main(){

    int myArr[] = {1,2,5,3,4};
    
    cout<<sizeof(myArr)<<endl;
    cout<<"Length of Array would be: "<<sizeof(myArr)/sizeof(myArr[0])<<endl;

    // Array without inputs
    int myArr1[5];

    cout<<myArr1[0]<<endl;
    cout<<myArr1[1]<<endl;
    cout<<myArr1[2]<<endl;
    cout<<myArr1[3]<<endl;
    cout<<myArr1[4]<<endl;
    cout<<myArr1[5]<<endl;

    return 0;
}