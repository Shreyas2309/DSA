#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 7, 8, 6, 7, 6};
    int max = arr[0];
    for(int i=0;i<arr.size()-1;i++){
        if(max<arr[i+1]){
            max = arr[i+1];
        }
    }
    cout<<max;
}