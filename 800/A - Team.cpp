#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,p,v,t,sum;
    
    sum = 0;
    
    cin >> n;
    
    while(n--){
        cin >> p >> v >> t;
        vector<int> vi = {p,v,t};
        
        if((p+v+t) >= 2){
            sum++;
        }   
    }
    cout << sum;
}
 