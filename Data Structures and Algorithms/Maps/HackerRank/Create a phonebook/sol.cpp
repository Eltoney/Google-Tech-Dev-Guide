#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    string name , phone;
    map<string , string> phonebook;
    for(int i = 0 ; i < n ; i++){
        cin>>name>>phone;
        phonebook[name] = phone;
    }
    while(cin>>name){
        if(phonebook.find(name) == phonebook.end()){
            cout<<"Not found\n";
        }else{
            cout<<name<<"="<<phonebook[name]<<'\n';
        }
    }
     
    return 0;
}

