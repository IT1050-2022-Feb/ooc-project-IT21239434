#include"RegisteredUser.h"
#include"Taxi.h"
#include"Offer.h"

//class implementaion
class Booking
{
	private:                    //attributes
		char Bookingid[5];
		char StartPlace[20];
		char EndPlace[20];
		char Date[6];
		char time[4];

		class relationship
		Taxi* tax[2];
		Offer* offers[2];
		int NoOfRegisteredUsers;
		RegisteredUser* Registered;

	public:
		Booking();
		Booking(const char Bid[], const char Bstart[], const char Bend[], const             char Bdate[], const char Btime[]);
		void setbookingid(const char Bid[]);
		void setStartplace(const char Bstart[]);
		void setEndplace(const char Bend[]);
		void setDate(const char Bdate[]);
		void setTime(const char Btime[]);
		void Addtaxi();
		void addbookingdetails();
		void cancelbookingdetails();
		void displaybookingdetails();
		~Booking();
};
