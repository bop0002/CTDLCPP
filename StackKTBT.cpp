#include <bits/stdc++.h>
using namespace std;

bool Check(string s) {
    stack<char> Data;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ')') {
            int cnt = 0;
            while (!Data.empty() && Data.top() != '(') {
                if (Data.top() == '+' || Data.top() == '-' || Data.top() == '*' || Data.top() == '/')
                    cnt++; 
                Data.pop();
            }
            if (!Data.empty()) Data.pop(); 
            if (cnt == 0) return true; 
        } else {
            Data.push(s[i]);
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (Check(s)) 
            cout << "Yes";
        else 
            cout << "No";
        cout << endl;
    }
}
