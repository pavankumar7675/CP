#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,x;
    cout << "enter n value: ";
    cin >> n;
    cout << "enter n numbers: ";
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }  
    for(int t : v)
        cout << t << " ";
}