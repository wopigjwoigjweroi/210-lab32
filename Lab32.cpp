// COMSC-210 | Lab-32 | Jeremiah Ortiz
#include <iostream> 
#include <deque> 
#include "Car.h" 

using namespace std; 

const int INITIAL_DEQUE_SIZE = 2; 

const int PAY = 55; 

void printQueue(const deque<Car>& toll); 

void printQueue(const deque<Car>& toll) {

    for (const auto& car : toll) {

        car.print(); 
    }

}

int main() {

    srand(static_cast<unsigned>(time(0))); 

    deque<Car> toll; 

    for (int i = 0; i < INITIAL_DEQUE_SIZE; ++i) {

        toll.push_back(Car()); 

    } 
    
    cout << "Initial Queue\n"; 

    printQueue(toll); 

    int t = 0;

    while (!toll.empty()) {

        ++t; 

        int operate = rand() % 100 + 1;

        if (operate <= PAY && !toll.empty()) {

            cout << "\nTime: " << t << " Operation: Car paid: \n";

            toll.front().print(); 

            toll.pop_front(); 
        } else {

            Car car; 

            cout << "\nTime: " << t << " Operation: Joined lane: \n"; 

            car.print(); 

            toll.push_back(car); 

        }

         cout << "Queue:\n"; 

         printQueue(toll); 

    }
    

  return 0; 

}
