#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//TODO: add problem statement and set of tests
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    // game loop
    /* 
        1. Set L to 0 and R to n-1.
        2. If L>R, the search terminates as unsuccessful.
        3. Set m (the position of the middle element) to the floor of L+R/2, which is the greatest integer less than or equal to L+R/2.
        4. If Am<T, set L to m+1 and go to step 2.
        5. If Am>T, set R to m-1 and go to step 2.
        6. Now Am=T, the search is done; return m.
    */
    int LX = 0, LY = 0, HX = W - 1, HY = H - 1;
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();
        if (bombDir == "U") {
            HY = Y0 - 1;
        }
        if (bombDir == "D") {
            LY = Y0 + 1;
        }
        if (bombDir == "R") {
            LX = X0 + 1;
        }
        if (bombDir == "L") {
            HX = X0 - 1;
        }
        if (bombDir == "UR") {
            HY = Y0 - 1;
            LX = X0 + 1;
        }
        if (bombDir == "DR") {
            LY = Y0 + 1;
            LX = X0 + 1;
        }
        if (bombDir == "UL") {
            HY = Y0 - 1;
            HX = X0 - 1;
        }
        if (bombDir == "DL") {
            LY = Y0 + 1;
            HX = X0 - 1;
        }
        X0 = (HX + LX) / 2;
        Y0 = (HY + LY) / 2;

        // the location of the next window Batman should jump to.
        cout << X0 << " " << Y0 << endl;
    }
} 
