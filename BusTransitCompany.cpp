

#include "BusTransitCompany.h"
#include <iostream>

void BusTransitCompany::addTrip(const Trip& trip) {
    trips.push_back(trip);
}

void BusTransitCompany::removeTrip(int index) {
    if (index >= 0 && index < trips.size()) {
        trips.erase(trips.begin() + index);
    }
}

void BusTransitCompany::displayAllTrips() const {
    for (const auto& trip : trips) {
        std::cout << trip;
    }
    std::cout << std::endl;
}

int BusTransitCompany::numberOfTrips() const {
    return trips.size();
}

const Trip& BusTransitCompany::getTrip(int index) const {
    return trips[index];
}


std::ostream& operator<<(std::ostream& os, const Trip& trip) {
    os << "Trip details: " << trip.getDetails() << std::endl;
    return os;
}