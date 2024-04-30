#include "BusTransitCompany.h"
#include <iostream>

void BusTransitCompany::addTrip(const Trip& trip) {
    trips.push_back(trip);
    std::cout << "Trip successfully added." << std::endl;
}

void BusTransitCompany::cancelTrip(int index) {
    if (index >= 0 && index < trips.size()) {
        trips.erase(trips.begin() + index);
        std::cout << "Trip successfully canceled." << std::endl;
    } else {
        std::cout << "Invalid index. Please provide a valid trip index." << std::endl;
    }
}

void BusTransitCompany::displayAllTrips() const {
    if (trips.empty()) {
        std::cout << "No trips available." << std::endl;
    } else {
        std::cout << "All Trips:" << std::endl;
        for (size_t i = 0; i < trips.size(); ++i) {
            std::cout << "[" << i + 1 << "] " << trips[i] << std::endl;
        }
    }
}

int BusTransitCompany::getNumberOfTrips() const {
    return trips.size();
}

#include "BusTransitCompany.h"

const Trip& BusTransitCompany::getTrip(int index) const {
    if (index >= 0 && index < trips.size()) {
        // Return a reference to the trip at the given index
        return trips[index];
    } else {
        // Error message
        std::cerr << "Invalid trip index: " << index << std::endl;
    }
}
