#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n ;
    string str; 
    
    cin >> n;
    
 
    while(n--){
        cin >> str;
        if(str.size() > 10 ){
            cout << str[0] << str.size() - 2<<str[str.size()-1] << "\n";
        }else{
            cout << str << "\n";
        }
    }
}