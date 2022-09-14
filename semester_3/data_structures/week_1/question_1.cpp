#include <iostream>

class EMPLOYEE {
	public: 
	float Employee_Number, Basic, DA, IT, Net_Sal, Gross_salary;
	char Employee_Name[40];
	void read_data();
	void calculate_salary();
	void gross_salary();	
};

void EMPLOYEE::read_data()
{
	std::cout << "Enter Employee Number: ";
	std::cin >> Employee_Number;
	std::cout << "Enter Employee Name: ";
	std::cin >> Employee_Name;
	std::cout << "Enter Basic: ";
	std::cin >> Basic;
	DA = 12.0 / 100 * Basic;
	calculate_salary();
	
}
void EMPLOYEE::calculate_salary()
{
	Gross_salary = Basic + DA;
	IT = 18.0 / 100 * Gross_salary;
	Net_Sal = Gross_salary - IT;
	std::cout << "The salary of " << Employee_Name << "(" << Employee_Number << ") is:" << std::endl;
	std::cout << "Gross Salary: " << Gross_salary << std::endl;
	std::cout << "Net Salary: " << Net_Sal << std::endl;
}

int main ()
{
	std::cout << "Enter the number of Employees" << std::endl;
	int employee_number, reg_no;
	std::cin >> employee_number;
	EMPLOYEE A;
	for (int i = 0; i < employee_number; i++)
	{
		A.read_data();
	}
	return 0;
}
