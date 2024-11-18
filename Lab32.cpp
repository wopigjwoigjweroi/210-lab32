// COMSC-210 | Lab-32 | Jeremiah Ortiz
#include <iostream> 
#include <deque> 
#include "Car.h" 
#include <array> 

using namespace std; 

const int INITIAL_DEQUE_SIZE = 2; 

const int PAY_PROBABILITY = 46;

const int CAR_JOIN_PROBABILITy = 39; 

const int CAR_SHIFT_PROBABILITY = 15; 

void printQueue(const deque<Car>& lane, int laneNum); 

void printQueue(const deque<Car>& lane, int laneNum) {

    cout << "Lane: " << laneNum + 1 << " Queue\n"; 
    
    for (const auto& car : lane) {

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
