#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctgmath>
#include <cfloat>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

class Defib {
    private:
        string name, address;
        string lat, lon;
        double x, y, d; 
    public:
        //Defib();
        //Defib(int, string, string, double, double);
        void setName(string s) {
            name = s; 
        }
        string getName() {
            return name;
        }
        void  setLat(string l) {
            lat = l;
        }
        void setLon(string l) {
            lon = l;
        }
        void setDistance(double userLat, double userLon) {
                x = (stod(lon) - userLon) * cos((userLat + stod(lat)) / 2.0);
                y = (stod(lat) - userLat);
                d = sqrt(x*x+y*y) * 6371;
        }
        double getDistance() {
            return d; 
        }

};

int main()
{
    string LON;
    cin >> LON; cin.ignore();
    string LAT;
    cin >> LAT; cin.ignore();
    int N;
    cin >> N; cin.ignore();
    Defib res;
    double min_dist = DBL_MAX;
    string nameRes;
    for (int i = 0; i < N; i++) {
        string DEFIB;
        getline(cin, DEFIB);

        std::replace(DEFIB.begin(), DEFIB.end(), ',', '.');
        std::replace(LON.begin(), LON.end(), ',', '.');
        std::replace(LAT.begin(), LAT.end(), ',', '.');

        int number = DEFIB.find(';'); 
        int name = DEFIB.find(';', number+1);
        res.setName(DEFIB.substr(number+1, name-number-1));

        int address = DEFIB.find(';', name+1);
        int id = DEFIB.find(';', address+1);
        int latitude = DEFIB.find(';', id+1);
        res.setLon(DEFIB.substr(id+1, latitude-id-1));

        int longitude = DEFIB.find(';', latitude+1);
        res.setLat(DEFIB.substr(latitude+1, longitude-latitude-1));

        res.setDistance(stod(LAT), stod(LON));

        if (res.getDistance() < min_dist) {
            min_dist = res.getDistance();
            nameRes = res.getName();
        }
    }

    cout << nameRes << endl;
}
