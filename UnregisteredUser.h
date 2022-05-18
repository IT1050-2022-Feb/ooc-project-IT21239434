class UnregisteredUser
{
	protected:
		int custId;
		char custName[30];
		char custAddress[50];
		char custEmail[30];
		int custTelphone;
	public:
		UnregisteredUser();
		UnregisteredUser(int cid, const char cname[], const char caddress[], const char cmail[], int ctel);
		void setcustId(int cid);
		void setcustName(const char cname[]);
		void setcustAddress(const char caddress[]);
		void setcustEmail(const char cmail[]);
		void setcustTelphone(int ctel);
		void registration();
		void cancelregistration();
		void displayUnreUser();
		~UnregisteredUser();
};
