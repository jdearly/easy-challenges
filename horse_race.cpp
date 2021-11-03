#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    cin >> N; cin.ignore();
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        v.push_back(Pi);
    }

    sort(v.begin(), v.end());
    int min_dist;
    for (int i = 0; i < v.size(); ++i) {
        if ((v[i]-v[i-1]) < min_dist) {
            min_dist = v[i]-v[i-1];
        }
    }

    cout << min_dist << endl;
}
