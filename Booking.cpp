//
// Created by Riley on 3/24/2024.
//

#include "Booking.h"
#include <iostream>

Booking::Booking(Trip t, int travelers, string method, bool isStudent, bool isMilitary, bool isClubMember) :
        trip(t), numTravelers(travelers), discountPercentage(0) {

    // Apply discounts based on the method used/status
    if (method == "online" || isStudent) {
        discountPercentage += 0.15; // 15% off for online orders or students
    }
    if (isMilitary) {
        discountPercentage += 0.10; // 10% off for military and veterans
    }
    if (isClubMember) {
        discountPercentage += 0.20; // 20% off for club members
    }

    calculateTotalPrice();
}

Booking& Booking::operator=(Booking&& other) noexcept {
    if (this != &other) {
        trip = std::move(other.trip);
        numTravelers = other.numTravelers;
        totalPrice = other.totalPrice;
        discountPercentage = other.discountPercentage;
    }
    return *this;
}

void Booking::calculateTotalPrice() {
    float distance = trip.getDistance();
    float pricePerMile = 0.5; // 0.5 cents per mile
    float basePrice = distance * pricePerMile;
    float discountAmount = basePrice * discountPercentage;
    totalPrice = basePrice - discountAmount;
}

void Booking::displayBookingDetails() {
    std::cout << "Trip Details:" << std::endl;
    std::cout << "Source: " << trip.getSource() << std::endl;
    std::cout << "Destination: " << trip.getDestination() << std::endl;
    std::cout << "Distance: " << trip.getDistance() << " miles" << std::endl;
    std::cout << "Driver: " << trip.getDriver() << std::endl;
    std::cout << "Bus Model: " << trip.getBusModel() << std::endl;
    std::cout << "Maximum Travelers: " << trip.getMaxTravelers() << std::endl;
    std::cout << "Number of Travelers: " << numTravelers << std::endl;
    std::cout << "Base Price: $" << trip.getDistance() * 0.5 * numTravelers << std::endl;
    std::cout << "Discount Percentage: " << discountPercentage * 100 << "%" << std::endl;
    std::cout << "Total Price (After Discount): $" << totalPrice << std::endl;
}

// Cancel booking
void Booking::cancelBooking() {
    // Reset booking details
    numTravelers = 0;
    totalPrice = 0;
    discountPercentage = 0;
}
