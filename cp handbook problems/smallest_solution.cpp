// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool ok(int x){
    return (x>= 3);
}

int smallest_solution(int t[], int n){
    int x = -1;
    for(int b = n; b>=1; b/=2){
        while(!ok(b+x)) x+=b;
    }
    return x+1;
}

int main() {
    int t[] ={0,1,2,3,4,5,6};
    int n = sizeof(t)/sizeof(t[0]);
        // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout <<"\n"<<smallest_solution(t,n);
    return 0;
}