#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long arr[n];
	    for(long i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    long y= 1000000000;
	    for(long i=0;i<n-1;i++)
	    {
	        long x=arr[i+1]-arr[i];
	        if(x<y){
	            y=x;
	        }
	    }
	    cout<<y<<endl;
	}
	return 0;
}

//time complexity== o(tn)
//space complexity== o(n)