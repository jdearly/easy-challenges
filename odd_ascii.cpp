#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string T;
    getline(cin, T);
    int result, count = 0;

    for(int i = 0; i < T.length(); ++i) {
        if (T[i] == ' ') {
            if(result%2!=0) {
                ++count;
                result = 0;
            }
        } else {
            result+=(int)T[i];
        }
    }
    cout << count+1 << endl;
}
