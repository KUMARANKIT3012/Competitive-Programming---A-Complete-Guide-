#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int result = 0;
	
	while(x != 0){
	if((x - 5) >= 0){
	    x = x-5;
	    result++;
	}
	else if((x-4) >= 0){
	    x = x-4;
	    result++;
	}
	else if((x-3) >= 0){
	    x = x-3;
	    result++;
	}
	else if((x-2) >= 0){
	    x = x-2;
	    result++;
	}
	else if(x-1 >= 0){
	    x = x-1;
	    result++;
	}
	}
	
	cout<<result;
	

}
