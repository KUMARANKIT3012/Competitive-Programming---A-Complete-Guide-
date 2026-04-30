#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    while(n--){
        string s;
        cin>>s;
        
        for(char &c : s){
            c = tolower(c);
        }
        
        if(s == "yes"){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
}
