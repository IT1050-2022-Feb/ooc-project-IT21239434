#include"UnregisteredUser.h"
class RegisteredUser : public UnregisteredUser
{
	protected:
		char username[10];
		char password[10];
	public:
		RegisteredUser();
		RegisteredUser(const char Uname[], const char Upw[], int cid, const char cname[], const char caddress[], const char cmail[], int ctel);
		void setUsername(const char Uname[]);
		void setpassword(const char Upw[]);
		void login();
		void checkPassword();
		void passwordvalidation();
		void displayRegUser();
		void logout();
		~RegisteredUser();
};