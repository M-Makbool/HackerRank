#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int N, num;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> num;
        v.push_back(num);
    }
    cin >> num;
    v.erase(v.begin()+num-1);
    cin >> N >> num;
    v.erase(v.begin()+N-1, v.begin()+num-1);
    cout << v.size() << endl;
    for (auto i : v)
        cout << i << " ";
    return 0;
}

