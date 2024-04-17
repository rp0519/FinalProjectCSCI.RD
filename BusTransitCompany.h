//
// Created by Riley on 3/26/2024.
//

#ifndef FINAL_BUSTRANSITCOMPANY_H
#define FINAL_BUSTRANSITCOMPANY_H

#include "Trip.h"
#include <vector>

class BusTransitCompany {
private:
    std::vector<Trip> trips;

public:
    void addTrip(const Trip& trip);
    void removeTrip(int index);
    void displayAllTrips() const;
    int numberOfTrips() const;
    const Trip& getTrip(int index) const;
};


#endif //FINAL_BUSTRANSITCOMPANY_H
