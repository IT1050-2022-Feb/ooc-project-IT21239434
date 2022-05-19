class Payment
{
	private:     // Define Attributes
		int Payid;
		char Paytype[30];
		double Amount;
	public:        // Define Methods
		Payment();
		Payment(int Pid, const char CPaytype[], double Pamount);
		void setpayid(int Pid);
		void setPaytype(const char CPaytype[]);
		void setAmount(double Pamount);
		void checkpayment();
		void confirmpayment();
		void displaypayment();
		~Payment();
};
