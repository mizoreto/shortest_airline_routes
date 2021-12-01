#pragma once

#include <string>
#include <map>

using namespace std;

class Airports {
    public:
    struct airport {
        string ID; //ID stores 3 or 4 airport letter ID.
        double lat, lon; //latitude and longitude
    };

    void readRawData();

    void writeCleanData(map<string, airport*> airports);

    void readCleanData();
    
    map<string, airport*> airports;
};

