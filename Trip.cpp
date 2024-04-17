#include "Trip.h"

Trip::Trip(string src, string dest, float dist, string drv, string model, int max) {
    source = src;
    destination = dest;
    distance = dist;
    driver = drv;
    busModel = model;
    maxTravelers = max;
}

string Trip::getSource() { return source; }
string Trip::getDestination() { return destination; }
float Trip::getDistance() { return distance; }
string Trip::getDriver() { return driver; }
string Trip::getBusModel() { return busModel; }
int Trip::getMaxTravelers() { return maxTravelers; }
