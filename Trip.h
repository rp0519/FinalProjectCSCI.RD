//
// Created by Riley on 3/24/2024.
//

#ifndef FINAL_TRIP_H
#define FINAL_TRIP_H

#include <string>

class Trip {
private:
    std::string source;
    std::string destination;
    float distance; // in miles
    std::string driver;
    std::string busModel;
    int maxTravelers; // Max number of travelers

public:
    Trip(const std::string& src, const std::string& dest, float dist, const std::string& drv, const std::string& model, int max);

    std::string getSource() const;
    std::string getDestination() const;
    float getDistance() const;
    std::string getDriver() const;
    std::string getBusModel() const;
    int getMaxTravelers() const;
    std::string getDetails() const; // Existing method

    // Friend function to define the output operator for Trip
    friend std::ostream& operator<<(std::ostream& os, const Trip& trip);
};



#endif //FINAL_TRIP_H
