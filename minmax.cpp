#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//optimal solution for finding max and min element
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int small=INT_MAX;
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        small=min(arr[i],small);
        large=max(arr[i],large);
    }
    cout<<"Smallest number is: "<<small<<endl;
    cout<<"Largest number is: "<<large<<endl;
    return 0;
}