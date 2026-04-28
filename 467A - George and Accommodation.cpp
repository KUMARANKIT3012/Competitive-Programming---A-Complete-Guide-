#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int count = 0;
	
	for(int i = 0; i<n; i++){
	    int a,b;
	    cin>>a>>b;
	    
	    if(b - a >= 2){
	        count++;
	    }
	}
	cout<<count<<endl;

}
