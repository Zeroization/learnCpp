export module prac_employee;

// 将结构体Employee包裹在HR名称空间中
namespace HR {
export enum class Title { Manager, SeniorEngineer, Engineer };

export struct Employee {
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary;
  Title title;
};
}  // namespace HR
