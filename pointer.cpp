#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int v1,v2;
    int *a=&v1;
    int *b=&v2;
    cin>>*a>>*b;
    
    int temp = (*a) + (*b);
    int temp_two = abs(*a-*b);
    *b = temp_two;
    cout<<temp<<endl;
    cout<<*b<<endl;
    return 0;
}
