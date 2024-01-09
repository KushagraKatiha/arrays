#include<iostream>
#include<vector>
using namespace std;

// Basic Operations on vectors (dynamic arrays)
int main(){

    vector<int> v = {1,3,5,6,0};

    // Insert element at the end
    v.push_back(12);
    cout<<v.size()<<" and "<<v.capacity()<<endl;

    // Insert element at given index
    v.insert(v.begin(), 199);
    cout<<v.size()<<" and "<<v.capacity()<<endl;

    // Delete element from the end
    v.pop_back();
    cout<<v.size()<<" and "<<v.capacity()<<endl;

    // Delete element from given index
    v.erase(v.end()-1);
    cout<<v.size()<<" and "<<v.capacity()<<endl;

    // Resizing the vector
    v.resize(16);
    cout<<v.size()<<" and "<<v.capacity()<<endl;

    return 0;
}