//
// Created by Riley on 3/24/2024.
//

#ifndef FINAL_BOOKING_H
#define FINAL_BOOKING_H

#include "Trip.h"
#include <string>
using namespace std;

class Booking {
private:
    Trip trip;
    int numTravelers;
    float totalPrice;
    float discountPercentage;
    const float pricePerMile = 0.5; // 0.5 cents per mile

public:
    Booking(Trip t, int travelers, string method, bool isStudent, bool isMilitary, bool isClubMember);
    Booking& operator=(Booking&& other) noexcept;
    void calculateTotalPrice();
    void displayBookingDetails();
    void cancelBooking();
};

#endif //FINAL_BOOKING_H

