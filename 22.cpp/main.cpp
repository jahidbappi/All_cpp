#include <iostream>
#include <string>
using namespace std;

class TicketBooking
{
private:
    int BookingId;
    int customerid;

public:
    string CustName;
    string flight_time;
    string Destination_from;
    string Destination_to;

    TicketBooking()
    {
        BookingId = 0;
        customerid = 0;
        CustName = "";
        flight_time = "";
        Destination_from = "";
        Destination_to = "";
    }

    TicketBooking(int i, int j, string name, string time, string from, string to)
    {
        BookingId = i;
        customerid = j;
        CustName = name;
        flight_time = time;
        Destination_from = from;
        Destination_to = to;
    }

    int getBookingId()
    {
        return BookingId;
    }

    void setBookingId(int id) {
        BookingId = id;
    }

    int getCustomerId()
    {
        return customerid;
    }

    void setCustomerId(int id) {
        customerid = id;
    }

    void display()
    {
        cout << "Booking ID: " << BookingId << endl;
        cout << "Customer ID: " << customerid << endl;
        cout << "Customer name: " << CustName << endl;
        cout << "Flight time: " << flight_time << endl;
        cout << "From: " << Destination_from << endl;
        cout << "To: " << Destination_to << endl;
    }

    ~TicketBooking()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    TicketBooking t1, t2;

    cout << "Enter Booking ID for customer 1: ";
    int bookingId;
    cin >> bookingId;
    t1.setBookingId(bookingId);

    cout << "Enter Customer ID for customer 1: ";
    int customerId;
    cin >> customerId;
    t1.setCustomerId(customerId);

    cout << "Enter Customer Name for customer 1: ";
    cin >> t1.CustName;

    cout << "Enter Flight Time for customer 1: ";
    cin >> t1.flight_time;

    cout << "Enter Destination From for customer 1: ";
    cin >> t1.Destination_from;

    cout << "Enter Destination To for customer 1: ";
    cin >> t1.Destination_to;

    cout << "Enter Booking ID for customer 2: ";
    cin >> bookingId;
    t2.setBookingId(bookingId);

    cout << "Enter Customer ID for customer 2: ";
    cin >> customerId;
    t2.setCustomerId(customerId);

    cout << "Enter Customer Name for customer 2: ";
    cin >> t2.CustName;

    cout << "Enter Flight Time for customer 2: ";
    cin >> t2.flight_time;

    cout << "Enter Destination From for customer 2: ";
    cin >> t2.Destination_from;

    cout << "Enter Destination To for customer 2: ";
    cin >> t2.Destination_to;

    cout << "Information for customer 1:" << endl;
    t1.display();

    cout << "Information for customer 2:" << endl;
    t2.display();

    return 0;
}

