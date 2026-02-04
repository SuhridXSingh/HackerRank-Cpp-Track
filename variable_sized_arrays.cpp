#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n,q;
    cin>>n>>q;
    vector<vector<int>>a;
    
    for (int i=0; i<n; i++){
        int k;
        cin>>k;
        vector<int>temp;
        
        for(int j=0; j<k; j++){
            int v;
            cin>>v;
            temp.push_back(v);
        }
        
        a.push_back(temp);
        
    }
    
    for(int k=0; k<q;k++){
        int i,j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
       
    return 0;
}
