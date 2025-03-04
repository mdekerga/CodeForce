#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    
    cin >> str; 
    
    set<char> string_set(str.begin(),str.end());
    
    
    if(string_set.size() % 2 == 0){
        cout << "CHAT WITH HER!" ;
    }else{
        cout << "IGNORE HIM!";
    }
    
    return 0;
}