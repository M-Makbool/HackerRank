#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q, num;
    vector<int> v;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> num;
        v.push_back(num);
    }
    cin >> Q;
    for (int i=0; i<Q; i++) {
        cin >> num; 
        auto lower_bound_iterator = lower_bound(v.begin(), v.end(), num);
        if (num == *lower_bound_iterator)
            cout << "Yes ";
        else
            cout << "No ";
        cout << distance(v.begin(), lower_bound_iterator) + 1 << endl;
    }
    return 0;
}
