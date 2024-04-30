#include "Trip.h"
#include <iostream>

Trip::Trip(const std::string& src, const std::string& dest, float dist, const std::string& drv, const std::string& model, int max)
        : source(src), destination(dest), distance(dist), driver(drv), busModel(model), maxTravelers(max) {}

std::string Trip::getSource() const {
    return source;
}

std::string Trip::getDestination() const {
    return destination;
}

float Trip::getDistance() const {
    return distance;
}

std::string Trip::getDriver() const {
    return driver;
}

std::string Trip::getBusModel() const {
    return busModel;
}

int Trip::getMaxTravelers() const {
    return maxTravelers;
}

std::string Trip::getDetails() const {
    // Format the trip details as a string
    std::string details = "Source: " + source + "\n";
    details += "Destination: " + destination + "\n";
    details += "Distance: " + std::to_string(distance) + " miles\n";
    details += "Driver: " + driver + "\n";
    details += "Bus Model: " + busModel + "\n";
    details += "Max Travelers: " + std::to_string(maxTravelers) + "\n";
    return details;
}

// Implementation of the output operator (outside the class definition)
std::ostream& operator<<(std::ostream& os, const Trip& trip) {
    os << "Trip Details:" << std::endl;
    os << trip.getDetails();
    return os;
}