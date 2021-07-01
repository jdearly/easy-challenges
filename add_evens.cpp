#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    long long N;
    cin >> N; cin.ignore();
    int r,n;
    do{
        n = N%10;
        if (n%2==0){
            r+=n;
        }
    } while(N/=10);
    cout << r << endl;
}
