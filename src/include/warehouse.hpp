#include <vector>
#include "Employee.hpp"
#include "Shelf.hpp"

class Warehouse{
public:


    std::vector<Employee> Employees;
    std::vector<Shelf> shelves;

    Warehouse();
    void addEmployee(const Employee& employee);
    void addShelf(const Shelf& shelf);
    bool rearrangeShelf(Shelf& shelf);
    bool pickItems(const std::string& itemName, int itemCount);
};