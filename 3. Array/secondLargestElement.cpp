#include<bits/stdc++.h>
using namespace std;

int secondLargest(int n , vector<int> &arr) {
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=1; i<n; i++) {
        if(arr[i]> largest) {
            slargest = largest;
            largest = arr[i];
        } else if(arr[i]<largest && arr[i]>slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int n, vector<int> &arr) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i=1; i<n; i++) {
        if(arr[i]<smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }else if(arr[i]>smallest && arr[i]<ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int ssmallest = secondSmallest(n, a);
    int slargest = secondLargest(n, a);

    return {slargest, ssmallest};

}


int main(){
    vector<int> arr = {3,4, 5, 2};
    vector<int> res;

    /* Basic Solution */
    // vector<int> res;
    // sort(arr.begin(), arr.end());
    // res.push_back(arr[arr.size()-2]);
    // res.push_back(arr[1]);
    // for(int i: res){
    //     cout<<i<<" ";
    // }
    
    /* Optimized Solution */
    res = getSecondOrderElements(4, arr);
    for (int i : res) { cout << i << " "; }
      
    return 0;

}
