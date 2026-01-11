#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    
    if (b>a){
        a = b;
    }
    if (c>a){
        a = c;
    }
    if (d>a){
        a = d;
    }
    
    return a;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c,d;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    cout<<max_of_four(a,b,c,d)<<endl;
    
    return 0;
}
