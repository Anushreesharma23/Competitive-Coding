// Question link
// https:https://www.codechef.com/problems/SRTARR?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int count=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
           if(str[i]=='1' && str[i+1]=='0'){
            count++;
            }
        }
        
        cout<<count<<endl;;
    }
	return 0;
}