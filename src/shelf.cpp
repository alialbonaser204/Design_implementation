#include <iostream>
#include"shelf.hpp"

Shelf::Shelf() {pallets={
            Pallet(),
            Pallet(),
            Pallet(),
            Pallet()
    };

}

bool Shelf::swapPallet(int slot, int slot2) {
    if (slot < 0 or slot >= pallets.size() or slot2 < 0 or slot2 >= pallets.size()) {
        return false;
    } else{
        Pallet temp = pallets[slot];
        pallets[slot] = pallets[slot2];
        pallets[slot2] = temp;

    }
    return true;
}
bool Shelf::isEmpty() {
    for (Pallet pallet: pallets) {
        if (!pallet.isEmpty()) {
            return false;
        }
    }
    return true;
}
bool Shelf::isFull() {
    for (Pallet pallet: pallets){
        if(!pallet.isFull()){
            return false;
        }
    }
    return true;
}

