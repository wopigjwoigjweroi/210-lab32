#include <iostream> 
#include <deque> 
#include "Car.h" 

using namespace std; 

const int INITIAL_DEQUE_SIZE = 2; 

void printQueue(const deque<Car>& toll); 

void printQueue(const deque<Car>& toll) {

    for (const auto& car : toll) {

        car.print(); 

        cout << "\t"; 
    }

}

int main() {

    srand(static_cast<unsigned>(time(0))); 

    deque<Car> toll; 

    for (int i = 0; i < INITIAL_DEQUE_SIZE; ++i) {

        toll.push_back(Car()); 

    }


  return 0; 

}
