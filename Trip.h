//
// Created by Riley on 3/24/2024.
//

#ifndef FINAL_TRIP_H
#define FINAL_TRIP_H

#include <string>
using namespace std;

class Trip {
private:
    string source;
    string destination;
    float distance; // in miles
    string driver;
    string busModel;
    int maxTravelers; // Max number of travelers

public:
    Trip(string src, string dest, float dist, string drv, string model, int max);
    string getSource();
    string getDestination();
    float getDistance();
    string getDriver();
    string getBusModel();
    int getMaxTravelers();
};

#endif //FINAL_TRIP_H
