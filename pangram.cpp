#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    vector<int> a(256, 0);
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        a[s[i]]++;
    }
    for (char c = 'a'; c <= 'z'; c++){
        if (a[c] + a[c - 'a' + 'A'] == 0){
            cout << "not pangram\n";
            return 0;
        }
    }
    cout << "pangram\n";
    
    return 0;
}
