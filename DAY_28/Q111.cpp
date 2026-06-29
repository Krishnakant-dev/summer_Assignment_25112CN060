// Write a program to Create ticket booking system.
#include <iostream>
#include <vector>
#include <string>

class Ticket {
public:
    std::string event;
    std::string location;
    double price;
    int seatNumber;

    Ticket(std::string e, std::string l, double p, int s) : event(e), location(l), price(p), seatNumber(s) {}
};

class TicketBookingSystem {
private:
    std::vector<Ticket> tickets;

public:
    void addTicket(const Ticket& ticket) {
        tickets.push_back(ticket);
    }

    void displayTickets() {
        for (const auto& ticket : tickets) {
            std::cout << "Event: " << ticket.event << ", Location: " << ticket.location << ", Price: $" << ticket.price << ", Seat Number: " << ticket.seatNumber << std::endl;
        }
    }
};

int main() {
    TicketBookingSystem bookingSystem;
    bookingSystem.addTicket(Ticket("Concert", "Stadium", 50.0, 101));
    bookingSystem.addTicket(Ticket("Movie", "Cinema", 15.0, 201));
    bookingSystem.displayTickets();
    return 0;
}