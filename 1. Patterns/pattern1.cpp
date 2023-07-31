#include<iostream>
using namespace std;

void print(int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    int n,m;
    cin>>n>>m;

    print(n, m);
    return 0;
}