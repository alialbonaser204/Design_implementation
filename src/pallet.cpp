#include "pallet.hpp"
#include "iostream"


Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount) :
        itemName(itemName), itemCapacity(itemCapacity), itemCount(itemCount){
    if(itemCount> itemCapacity){
        std::cout<< "Items are more than capacity" << std::endl;
    }
}

Pallet::Pallet(){ itemName = (""), itemCount = (0); itemCapacity =(0);
}

std::string Pallet::getItemName()const{
    return itemName;
}

int Pallet::getItemCount()const{
    return itemCount;
}

int Pallet::getRemainingSpace() const {
    return std::max(0, itemCapacity - itemCount);

}

bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity){
    if(isEmpty()){
        this->itemName=itemName;
        this->itemCapacity=itemCapacity;
        this->itemCount=0;
        return true;
    }
    return false;
}

bool Pallet::takeOne(){
    if(!isEmpty()){
        itemCount--;
        return true;
    }
    return false;
}

bool Pallet::putOne() {
    if(!isFull()){
        itemCount++;
        return true;
    }
    return false;
}

bool Pallet::isEmpty(){
    return itemCount==0;
}
bool Pallet::isFull(){
    return itemCount==itemCapacity and itemCount!=0;
}