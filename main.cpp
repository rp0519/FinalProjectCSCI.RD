#include <iostream>
#include "Trip.h"
#include "Booking.h"
#include "BusTransitCompany.h"

using namespace std;

int main() {
    BusTransitCompany company;

    // Create a few trips
    Trip trip1("Hartford", "New York City", 116, "John Stockton", "Standard Bus", 30);
    Trip trip2("Windsor Locks", "Brooklyn", 130, "Bob Swift", "Double Decker Bus", 80);
    Trip trip3("Guilford", "Ansonia", 25, "Tony Gossi", "Greyhound Bus", 40);

    // Add trips to the company's list of trips
    company.addTrip(trip1);
    company.addTrip(trip2);
    company.addTrip(trip3);

    while (true) {
        cout << "Would you like to see available trips, buy a ticket, or cancel a ticket?" << endl;
        cout << "Enter '1' to see available trips, '2' to buy a ticket, or '3' to cancel a ticket: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            // Display all trips
            company.displayAllTrips();
        } else if (choice == 2) {
            // Buy a ticket
            cout << "Enter the number of the trip you would like to buy a ticket for: ";
            int tripNumber;
            cin >> tripNumber;

            if (tripNumber >= 1 && tripNumber <= company.getNumberOfTrips()) {
                Trip selectedTrip = company.getTrip(tripNumber - 1);

                cout << "How many travelers? ";
                int numTravelers;
                cin >> numTravelers;

                cout << "Are you a student? (yes/no) ";
                string studentInput;
                cin >> studentInput;
                bool isStudent = (studentInput == "yes" || studentInput == "Yes" || studentInput == "YES");

                cout << "Are you military or a veteran? (yes/no) ";
                string militaryInput;
                cin >> militaryInput;
                bool isMilitary = (militaryInput == "yes" || militaryInput == "Yes" || militaryInput == "YES");

                cout << "Are you a member of the BUS_TRIPS club? (yes/no) ";
                string clubInput;
                cin >> clubInput;
                bool isClubMember = (clubInput == "yes" || clubInput == "Yes" || clubInput == "YES");

                // Book the ticket
                Booking booking(selectedTrip, numTravelers, "online", isStudent, isMilitary, isClubMember);
                booking.displayBookingDetails();
            } else {
                cout << "Invalid trip number. Please try again." << endl;
            }
        } else if (choice == 3) {
            // Cancel a ticket
            cout << "Enter the number of the ticket you would like to cancel: ";
            int ticketNumber;
            cin >> ticketNumber;

            if (ticketNumber >= 1 && ticketNumber <= company.getNumberOfTrips()) {
                // Cancel the ticket
                company.cancelTrip(ticketNumber - 1);
            } else {
                cout << "Invalid ticket number. Please try again." << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl; // Add a new line for better readability
    }

    return 0;
}
