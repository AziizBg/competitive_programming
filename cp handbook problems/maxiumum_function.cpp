// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int f(int x){
    x+=3; //maximum = -3
    return -(x*x);
}

bool increasing(int x){
    return f(x)<f(x+1);
}

int maximum(int t[], int n){
    int x = -1;
    for(int b = n; b>=1; b/=2){
        cout<<"b:"<<b<<"   "<<"b+x:"<<b+x<<"   "<<"increasing("<<t[b+x]<<")="<<increasing(t[b+x])<<"\n";
        while(increasing(t[b+x])) {x+=b;cout<<x<<"\n";}
    }
    cout <<"max\n"<<t[x+1];
    return t[x+1];
}

int main() {
    int t[] ={-6,-3,0,2,3,5,8,15};
    int n = sizeof(t)/sizeof(t[0]);
    cout << "function: ";
    for (int i = 0; i < n; i++) {
        cout << f(t[i]) << " ";
    }
    cout<<"\n";
    maximum(t,n);
    return 0;
}