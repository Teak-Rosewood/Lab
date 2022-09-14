#include <iostream>

class flight 
{
	public:
		flight()
		{
			fuel = 13.2;
		}
		
		void input_fuel(float a);
		void information_entry();
		void display_info();		
	private:
		void calculate_fuel();
		int flight_number;
		char destination[100];
		float distance, fuel;
};

void flight::input_fuel(float a)
{
	fuel = a;
}

void flight::information_entry()
{
	std::cout << "Enter flight Number: ";
	std::cin >> flight_number;
	std::cout << "Enter Destination: ";
	std::cin >> destination;
	std::cout << "Enter Distance: ";
	std::cin >> distance;
	
	calculate_fuel();
	display_info();
}

void flight::calculate_fuel()
{
	if (distance <= 1000)
		fuel = 500;
	else if (distance > 1000 && distance <= 2000)
		fuel = 1100;
	else 
		fuel = 2200;
}

void flight::display_info()
{
	std::cout << std::endl;
	std::cout << "FLIGHT DETAILS" << std::endl;
	std::cout << "Flight Number: " << flight_number << std::endl;
	std::cout << "Flight Destination: " << destination << std::endl;
	std::cout << "Distance travelled: " << distance << std::endl;
	std::cout << "Fuel: " << fuel << " Liters" << std::endl;
 }
 
 int main ()
 {
 	int flightNum;
 	std::cout << "Enter the number of flights: ";
 	std::cin >> flightNum;
 	flight a;
 	for (int i = 0; i < flightNum; i++)
 	{
 		a.information_entry();
	}
	return 0;
 }
