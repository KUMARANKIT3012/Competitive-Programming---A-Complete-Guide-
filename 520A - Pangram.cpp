#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    string sentence;
    cin>>sentence;
    
    vector<int>seen(26, false);
    
    for(char ch : sentence){
        if(isalpha(ch)){
            ch = tolower(ch);
            seen[ch - 'a'] = true;
        }
    }
    
    for(bool val : seen){
        if(!val){
            cout<<"NO"<<endl;
            return 0;
        } 
    }
    
    cout<<"YES"<<endl;
    return 0;
}
