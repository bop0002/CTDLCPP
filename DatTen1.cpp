#include <bits/stdc++.h>
using namespace std;

bool OK;
vector<int> x;
vector<string> y;
int n, k;

void Init() {
    x.clear();
    y.clear();
    cin >> n >> k;
    OK = true;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        y.push_back(temp);
    }

    sort(y.begin(), y.end()); // Sắp xếp để đảm bảo thứ tự từ điển

    for (int i = 0; i < k; i++) {
        x.push_back(i);
    }
}

void Next() {
    int i = k - 1;
    while (i >= 0 && x[i] == n - k + i) {
        i--;
    }
    if (i >= 0) {
        x[i]++;
        for (int j = i + 1; j < k; j++) {
            x[j] = x[j - 1] + 1;
        }
    } else {
        OK = false;
    }
}

void Res() {
    for (int i = 0; i < k; i++) {
        cout << y[x[i]] << " ";
    }
    cout << endl;
}

int main() {
    Init();
    while (OK) {
        Res();
        Next();
    }
}
