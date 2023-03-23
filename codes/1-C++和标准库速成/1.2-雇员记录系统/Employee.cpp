module employee;
import <iostream>;
import <format>;

using namespace std;

namespace Records
{
	Employee::Employee(const string& firstName, const string& lastName)
		: m_firstName{ firstName }, m_lastName{ lastName }
	{
	}

	void Employee::promote(int raiseAmount)
	{
		setSalary(getSalary() + raiseAmount);
	}

	void Employee::demote(int demeritAmount)
	{
		setSalary(getSalary() - demeritAmount);
	}

	void Employee::hire() { m_hired = true; }
	void Employee::fire() { m_hired = false; }

	void Employee::display() const
	{
		cout << format("Employee: {}, {}\n", getLastName(), getFirstName())
			<< "-------------------------------\n"
			<< (isHired() ? "Current Employee\n" : "Former Employee\n")
			<< format("Employee Number: {}\n", getEmployeeNumber())
			<< format("Salary: {}\n\n", getSalary());
	}

	//Getters and Setters
	void Employee::setFirstName(const string& firstName) { m_firstName = firstName; }
	const string& Employee::getFirstName() const { return m_firstName; }
	
	void Employee::setLastName(const string& lastName) { m_lastName = lastName; }
	const string& Employee::getLastName() const { return m_lastName; }

	void Employee::setEmployeeNumber(int employeeNumber) { m_employeeNumber = employeeNumber; }
	int Employee::getEmployeeNumber() const { return m_employeeNumber; }

	void Employee::setSalary(int salary) { m_salary = salary; }
	int Employee::getSalary() const { return m_salary; }

	bool Employee::isHired() const { return m_hired; }
}