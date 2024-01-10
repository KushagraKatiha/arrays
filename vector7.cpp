#include<iostream>
#include<vector>
using namespace std;

// Find the difference between sum of elements at even indices and sum of elements at odd indices

int main(){
    
    vector<int> v = {1,2,1,2,1,2};

    int ansSum = 0;

    for(int i = 0; i < v.size(); i++){
        if(i%2 == 0){
            ansSum += v[i];
        }else{
            ansSum -= v[i];
        }
    }

    cout<<"Required answer is: "<<ansSum<<endl;
    return 0;
}