#include<iostream>
#include <climits>    
#include <sstream> 
#include<vector>    
using namespace std;
int maxi = INT_MAX;
int max(int a, int b)
{ 
    return (a > b)?a:b;
}
void Time(int total, int sum, int i, vector<int> v1)
{  
    if(max(sum, total-sum) < maxi)	
    {		
        maxi = max(sum, total-sum);	
    } 
    if(v1[i]) 
        return; 
    Time(total, sum + v1[i], i+1, v1); 
    Time(total, sum, i+1, v1); 
    return;
}
int main()
{ 
    int n, i = 1, sum=0;
    string s;	
    vector<int> v1; 
    getline(cin, s, '\n');	
    stringstream ss(s); 
    while(ss>>n)	
    {		
        sum+=n;		
        v1.push_back(n);	
    } 
    Time(sum, 0, 0, v1);	
    cout<<maxi;
}
