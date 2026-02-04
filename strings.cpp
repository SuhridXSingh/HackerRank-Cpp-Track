#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    auto i = a.begin();
    auto j = b.begin();
    
    int temp = *i ;
    *i = *j;
    *j = temp;
    
    cout<<a<<" "<<b;
    
       
    return 0;
}
