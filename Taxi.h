#pragma once
// taxi class initialization
class Taxi
{
	private://private methods
	
		int taxiNo;
		char taxiType[10];
		
	public://public methods
	
		Taxi();
		Taxi(int Tno, const char Ttype[]);
		void setTaxino(int Tno);
		void setTaxitype(const char Ttype[]);
		void addtaxiInformation();
		void deletetaxiInformation();
		void displaytaxi();
		~Taxi();
};

