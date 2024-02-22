#include <iostream> 
class Vehicle {
public: 
    virtual void drive() const {
        std::cout << "Generic Vehicle is being driven." << std::endl;
    }
}; 
class Car : public Vehicle {
public: 
    void drive() const override {
        std::cout << "Car is moving on the road." << std::endl;
    }
}; 
class Truck : public Vehicle {
public: 
    void drive() const override {
        std::cout << "Truck is transporting goods on the highway." << std::endl;
    }
};
int main() { 
    Vehicle* myVehicle; 
    myVehicle = new Car();
    myVehicle->drive(); 
    myVehicle = new Truck();
    myVehicle->drive(); 
    delete myVehicle;
    return 0;
}

