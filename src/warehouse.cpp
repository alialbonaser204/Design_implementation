#include "warehouse.hpp"


void Warehouse::addEmployee(const Employee& employee){
    this->Employees.push_back(employee);
}
void Warehouse::addShelf(const Shelf& shelf) {
    this->shelves.push_back(shelf);
}

bool Warehouse::rearrangeShelf(Shelf &shelf) {
    for (auto &employee: Employees) {
        if (!employee.getBusy() and employee.getForkliftCertificate()) {
            employee.setBusy(true);

            for (int i = 0; i < shelf.pallets.size() - 1; i++) {
                for (int j = 0; j < shelf.pallets.size() - 1 - i; j++) {
                    if (shelf.pallets[j].getItemCount() > shelf.pallets[j + 1].getItemCount()) {
                        shelf.swapPallet(j, j + 1);
                    }
                }
            }
            employee.setBusy(false);
            return true;
        }
    }
    return false;
}

bool Warehouse::pickItems(const std::string& itemName, int itemCount) {

    int picked = 0;
    for(auto& shelf :shelves){
        for(Pallet& pallet : shelf.pallets){
            if(pallet.getItemName()==itemName){
                picked+=pallet.getItemCount();
            }

        }
    }
    if(picked < itemCount){
        return false;
    }
    for(auto& shelf : shelves){
        for(auto & pallet : shelf.pallets){
            while (itemCount>0 && pallet.getItemName() == itemName && pallet.getItemCount() > 0){
                if (pallet.takeOne()){
                    itemCount--;
                }
            }
        }
    }
    return itemCount ==0;
}

Warehouse::Warehouse() {}