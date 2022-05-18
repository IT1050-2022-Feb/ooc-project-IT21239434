/*#include"RegisteredUser.h"
#include"Taxi.h"
#include"Offer.h"*/

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
		void setbookingid();
		void setStartplace();
		void setEndplace();
		void setDate();
		void setTime();
		void Addtaxi();
		void addbookingdetails();
		void cancelbookingdetails();
		void displaybookingdetails();
		~Booking();
};
