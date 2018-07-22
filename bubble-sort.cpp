/*
BUBBLE SORT
worst case runtime: O(n^2)

*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void bubbleSort(std::vector<int> & v){
    for(int i=0;i<v.size()-1;i++){
        for(int j= 0; j < v.size()-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v = {7,6,5,2,3,1};
    bubbleSort(v);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

