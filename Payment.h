class Payment
{
	private:     // Define Attributes
		int Payid;
		char Paytype[30];
		double Amount;
	public:        // Define Methods
		Payment();
		Payment(int Pid, const char CPaytype[], double Pamount);
		void setpayid();
		void setPaytype();
		void setAmount();
		void checkpayment();
		void confirmpayment();
		void displaypayment();
		~Payment();
};
