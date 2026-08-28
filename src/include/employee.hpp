#pragma once

#include <string>

class Employee
{
private:
    std::string name;
    bool busy;
    bool forkliftCertificate;

public:
    Employee(std::string name, bool forkliftCertificate);
    std::string getNaam();
    bool getBusy() const;
    void setBusy(bool busy);
    bool getForkliftCertificate() const;
    void setForkliftCertificate(bool forkliftcertificate);

};