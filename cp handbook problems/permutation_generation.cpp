// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

set<int> s={0,1,2};
vector<int> p;
vector<int> chosen = {0,0,0};

void print_permutation(){
    for(auto x: p) cout << x << "  ";
        cout << "\n";
}

void permutation(int n){
    if(p.size()==n) print_permutation();
    else{
        for(int i =0; i<n; i++){
            if(chosen[i]) continue;
            chosen[i]= 1;
            p.push_back(i);
            permutation(n);
            chosen[i]= 0;
            p.pop_back();            
        }
    }
}

// method 2 :
void permutation2(int n){
    for(int i =0; i<n;i++){
        p.push_back(i);
    }
    do{
        print_permutation();
    }while(next_permutation(p.begin(), p.end()));
}

int main() {
    permutation(3);
    return 0;
}