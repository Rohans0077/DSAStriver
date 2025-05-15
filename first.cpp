
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if (n<m){
        return "lesser";
        }
        else if(n>m){
        return "greater";
        }
        else if(n==m){
        return "equal";
        
        }
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; 
		cin >> n >> m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
