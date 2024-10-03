// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

set<int> s={0,1,2};
vector<int> subset;

void print_subset(){
    if(!subset.size()) cout << "{}" << "\n";
    else{
        for(auto x: subset) cout << x << "  ";
        cout << "\n";
    }
}

void search_bitmask(int k, int n){
    for(int b=0; b<(1<<n); b++){
        subset={};
        for(int i=0; i<n; i++)
            if(b&(1<<i)) subset.push_back(i);
        print_subset();
    }
}

void search(int k, int n){
    if(k==n){
        print_subset();
    } else{
        search(k+1, n);
        subset.push_back(k);
        search(k+1,n);
        subset.pop_back();
    }   
}

int main() {
    // search(0, 3);
    search_bitmask(0, 3);
    return 0;
}