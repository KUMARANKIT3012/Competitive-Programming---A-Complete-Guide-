#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a>b) swap(a,b);
	    if(a>c) swap(a,c);
	    if(b>c) swap(b,c);
	    
	    cout<<b<<endl;
	}
	
	
	return 0;

}
