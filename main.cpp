#include <iostream>
#include "pallet.hpp"
#include "shelf.hpp"
#include "employee.hpp"
#include "warehouse.hpp"

int main() {
    // medewerker aanmaken
    Employee e("Ali", true);
    std::cout << "Naam: " << e.getNaam() << std::endl;
    e.setBusy(true);
    std::cout << "Is bezig: " << e.getBusy() << std::endl;
    e.setForkliftCertificate(false);
    std::cout << "Certificaat: " << e.getForkliftCertificate() << std::endl;

    // pallet maken en testen
    Pallet p("appels", 10, 3);
    std::cout << "Item op pallet: " << p.getItemName() << std::endl;
    std::cout << "Aantal: " << p.getItemCount() << std::endl;
    std::cout << "Ruimte over: " << p.getRemainingSpace() << std::endl;
    std::cout << "Is leeg: " << p.isEmpty() << std::endl;
    std::cout << "Is vol: " << p.isFull() << std::endl;

    std::cout << "1 erbij: " << p.putOne() << std::endl;
    std::cout << "1 eraf: " << p.takeOne() << std::endl;

    // lege pallet opnieuw instellen
    Pallet leeg;
    std::cout << "Opnieuw gebruiken lege pallet: " << leeg.reallocateEmptyPallet("bananen", 5) << std::endl;

    // shelf testen
    Shelf s;
    s.pallets[0] = Pallet("melk", 8, 2);
    s.pallets[1] = Pallet("sinaas", 6, 4);
    s.pallets[2] = Pallet("cola", 12, 3);
    s.pallets[3] = Pallet("water", 10, 10);

    std::cout << "Is shelf leeg: " << s.isEmpty() << std::endl;
    std::cout << "Is shelf vol: " << s.isFull() << std::endl;
    std::cout << "Pallets wisselen: " << s.swapPallet(0, 2) << std::endl;

    // warehouse testen
    Warehouse w;
    w.addEmployee(Employee("Sara", true));
    w.addShelf(s);

    std::cout << "Shelf sorteren: " << w.rearrangeShelf(w.shelves[0]) << std::endl;
    std::cout << "Items pakken: " << w.pickItems("cola", 2) << std::endl;

    return 0;
}
