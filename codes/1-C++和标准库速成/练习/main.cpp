import <iostream>;
import <format>;
import <array>;
import <vector>;
import prac_employee;
import prac_airline_ticket;

using namespace std;

void p_1_1and2() {
  // 逐个赋值“初始化”
  // HR::Employee anEmp;
  // anEmp.firstInitial = 'J';
  // anEmp.lastInitial = 'D';
  // anEmp.employeeNumber = 42;
  // anEmp.salary = 80000;

  // 统一初始化语法
  // HR::Employee anEmp { 'J', 'D', 42, 80000 };

  // 使用C++20指派初始化器
  HR::Employee anEmp{.firstInitial = 'J',
                     .lastInitial = 'D',
                     .employeeNumber = 42,
                     .salary = 80000,
                     .title = HR::Title::SeniorEngineer};

  cout << format("Employee: {}{}", anEmp.firstInitial, anEmp.lastInitial)
       << endl;
  cout << format("Number: {}", anEmp.employeeNumber) << endl;
  cout << format("Salary: {}", anEmp.salary) << endl;

  switch (anEmp.title) {
    using enum HR::Title;

    case Engineer:
      cout << "Engineer" << endl;
      break;

    case SeniorEngineer:
      cout << "SeniorEngineer" << endl;
      break;

    case Manager:
      cout << "Manager" << endl;
      break;
  }
}

void p_1_3() {
  HR::Employee emp1{'J', 'D', 4, 80000, HR::Title::SeniorEngineer};
  HR::Employee emp2{'W', 'B', 3, 20000, HR::Title::Engineer};
  HR::Employee emp3{'A', 'C', 1, 50000, HR::Title::Manager};
  array<HR::Employee, 3> empArr{emp1, emp2, emp3};

  for (const auto& anEmp : empArr) {
    cout << format("Employee: {}{}", anEmp.firstInitial, anEmp.lastInitial)
         << endl;
    cout << format("Number: {}", anEmp.employeeNumber) << endl;
    cout << format("Salary: {}", anEmp.salary) << endl;

    switch (anEmp.title) {
      using enum HR::Title;

      case Engineer:
        cout << "Engineer" << endl;
        break;

      case SeniorEngineer:
        cout << "SeniorEngineer" << endl;
        break;

      case Manager:
        cout << "Manager" << endl;
        break;
    }
  }
}

void p_1_4() {
  HR::Employee emp1{'J', 'D', 4, 80000, HR::Title::SeniorEngineer};
  HR::Employee emp2{'W', 'B', 3, 20000, HR::Title::Engineer};
  HR::Employee emp3{'A', 'C', 1, 50000, HR::Title::Manager};

  vector<HR::Employee> vec{emp1, emp2, emp3};
  for (const auto& anEmp : vec) {
    cout << format("Employee: {}{}", anEmp.firstInitial, anEmp.lastInitial)
         << endl;
    cout << format("Number: {}", anEmp.employeeNumber) << endl;
    cout << format("Salary: {}", anEmp.salary) << endl;

    switch (anEmp.title) {
      using enum HR::Title;

      case Engineer:
        cout << "Engineer" << endl;
        break;

      case SeniorEngineer:
        cout << "SeniorEngineer" << endl;
        break;

      case Manager:
        cout << "Manager" << endl;
        break;
    }
  }
}

void p_1_5() {
  AirlineTicket myTicket;
  myTicket.setPassengerName("Test Name");
  myTicket.setNumberOfMiles(700);
  cout << format("{} costs ${}", myTicket.getPassengerName(),
                 myTicket.calculatePriceInDollars())
       << endl;
  myTicket.setHasEliteSuperRewardsStatus(true);
  cout << format("After upgrading, costs ${}",
                 myTicket.calculatePriceInDollars())
       << endl;
}

int main() {
  // p_1_1and2();
  // p_1_3();
  // p_1_4();
  p_1_5();
}