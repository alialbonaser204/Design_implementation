#include "employee.hpp"

Employee::Employee(std::string name, bool hasCert) {
    this->name = name;
    this->forkliftCertificate = hasCert;
    this->busy = false;
}

std::string Employee::getNaam() {
    return name;
}

void Employee::setBusy(bool b) {
    busy = b;
}

bool Employee::getBusy() const {
    return busy;
}

void Employee::setForkliftCertificate(bool cert) {
    forkliftCertificate = cert;
}
bool Employee::getForkliftCertificate() const {
    return forkliftCertificate;
}
