#define CATCH_CONFIG_MAIN
#include "include/catch.hpp"

#include "employee.hpp"
#include "pallet.hpp"
#include "shelf.hpp"
#include "warehouse.hpp"

TEST_CASE("Werknemer werkt goed") {
    Employee w("Karel", true);
    REQUIRE(w.getNaam() == "Karel");
    REQUIRE(w.getForkliftCertificate() == true);
    REQUIRE(w.getBusy() == false);

    w.setBusy(true);
    REQUIRE(w.getBusy());
}

TEST_CASE("Pallet werkt") {
    Pallet p("Boeken", 50, 10);

    REQUIRE(p.getItemName() == "Boeken");
    REQUIRE(p.getItemCount() == 10);
    REQUIRE(p.getRemainingSpace() == 40);

    REQUIRE(p.putOne());
    REQUIRE(p.takeOne());

    REQUIRE(!p.isFull());
    REQUIRE(!p.isEmpty());
}

TEST_CASE("Pallet leeg opnieuw instellen") {
    Pallet p;
    bool gelukt = p.reallocateEmptyPallet("Speelgoed", 30);
    REQUIRE(gelukt);
    REQUIRE(p.getItemName() == "Speelgoed");
    REQUIRE(p.getItemCount() == 0);
}

TEST_CASE("Shelf is leeg en niet vol") {
    Shelf s;
    REQUIRE(s.isEmpty());
    REQUIRE(!s.isFull());
}

TEST_CASE("Shelf wisselt pallets") {
    Shelf s;
    s.pallets[0] = Pallet("A", 10, 5);
    s.pallets[1] = Pallet("B", 20, 10);

    REQUIRE(s.swapPallet(0, 1));
    REQUIRE(s.pallets[0].getItemName() == "B");
    REQUIRE(s.pallets[1].getItemName() == "A");
}

TEST_CASE("Shelf checken op vol en leeg") {
    Shelf s;
    s.pallets[0] = Pallet("Boek", 5, 5);
    s.pallets[1] = Pallet("Boek", 5, 5);
    s.pallets[2] = Pallet("Boek", 5, 5);
    s.pallets[3] = Pallet("Boek", 5, 5);

    REQUIRE(s.isFull());
    REQUIRE(!s.isEmpty());
}
