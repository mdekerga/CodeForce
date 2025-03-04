#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,a,b,c;
 
    cin >> t;
 
    while(t--){
        cin >> a >> b >> c;
 
        string res = ((a+b >= 10) || (b+c >= 10) || (a+c >= 10)) ? "YES" : "NO";
 
        cout << res << endl;
    }
}