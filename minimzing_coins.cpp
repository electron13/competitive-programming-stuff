#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int t,n;
    cin >> t; 
    cin >> n;
    int s = n;
    int y = 0;
    int p = n;
    vector<int> v = {1,5,7};
    sort(v.begin(),v.end());
    for(int i=v.size();i>=0;i--){
        s = s%i;
        y = y + (p-s)/i;
        p = s;
    } 
    cout << t;
    
}