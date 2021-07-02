#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

int main()
{
    int width; // the number of cjells on the X axis
    cin >> width; cin.ignore();
    int height; // the number of cells on the Y axis
    cin >> height; cin.ignore();

    char arr[width][height];

    for (int i = 0; i < height; i++) {
        string line;
        getline(cin, line); // width characters, each either 0 or .
        cerr << line << endl;
        for (int j = 0; j < width; j++) {
            arr[i][j] = line[j];
        }
    }

    /* Steps
    *   Walkthrough each row to find a node
    *   Once found, continue to next node, otherwise print -1 -1
    *   Continue down columns to next node, otherwise print -1 -1
    */
    int rx, ry, bx, by;

    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
            if (arr[i][j] == '.') continue;
                int right = j;
               rx = ry = bx = by = -1;
                for(int x = right+1; x < width; ++x) {
                    if(arr[i][x] == '0') {
                        rx = x;
                        ry = i;
                        break;
                    }
                }

                int down = i;
                for(int y = down+1; y < height; ++y) {
                    if(arr[y][j] == '0') {
                        bx = j;
                        by = y;
                        break;
                    }
                }
                
                cout << j << " " << i << " " ;
                cout << rx << " " << ry << " "; 
                cout << bx << " " << by << endl;
        }
    }
} 
