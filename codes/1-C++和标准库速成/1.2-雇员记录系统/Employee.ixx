export module employee;
import <string>;

namespace Records 
{
	const int DefaultStartingSalary{ 30'000 };				//新雇员的默认底薪
	export const int DefaultRaiseAndDemeritAmount{ 1'000 }; //升降薪默认涨幅

	export class Employee
	{
	public:
		Employee(const std::string& firstName, const std::string& lastName);

		void promote(int raiseAmount = DefaultRaiseAndDemeritAmount);	//涨薪，参数有默认值
		void demote(int demeritAmount = DefaultRaiseAndDemeritAmount);
		void hire();			//(再次)雇佣员工
		void fire();			//炒鱿鱼
		void display() const;	//输出员工信息

		//Getters and Setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int salary);
		int getSalary() const;

		bool isHired() const;

	private:
		std::string m_firstName;
		std::string m_lastName;
		int m_employeeNumber{ -1 };
		int m_salary{ DefaultStartingSalary };
		bool m_hired{ false };
	};
}