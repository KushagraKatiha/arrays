#include<iostream>
using namespace std;

int main(){

    int sumArr[] = {1,2,4,3,6};
    int len = sizeof(sumArr)/sizeof(sumArr[0]);
    int sum = 0;

    for(int i = 0; i < len; i++){
        sum += sumArr[i];
    }

    cout<<"Sum of elements of Array is: "<<sum<<endl;
        
    return 0;
}