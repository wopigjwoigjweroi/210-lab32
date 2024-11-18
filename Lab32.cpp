// COMSC-210 | Lab-32 | Jeremiah Ortiz
#include <iostream> 
#include <deque> 
#include "Car.h" 
#include <array> 

using namespace std; 

const int INITIAL_DEQUE_SIZE = 2;

const int LANE_SIZE = 4; 

const int PAY_PROBABILITY = 46;

const int CAR_JOIN_PROBABILITY = 39; 

const int CAR_SHIFT_PROBABILITY = 15; 

void printLane(const deque<Car>& lane, int laneNum); 
void displayLanes(const array<deque<Car>, LANE_SIZE>& lanes); 

void printLane(const deque<Car>& lane, int laneNum) {

    cout << "Lane: " << laneNum + 1 << " Queue\n"; 
    
    for (const auto& car : lane) {

        car.print(); 
    }
}

void displayLanes(const array<deque<Car>, LANE_SIZE>& lanes) {

    for (int i = 0; i < LANE_SIZE; ++i) {

        printLane(lanes[i], i); 
    }
}

int main() {

    srand(static_cast<unsigned>(time(0))); 

    array<deque<Car>, LANE_SIZE> lanes; 

    for (auto& lane : lanes) {

        int initial = rand() % INITIAL_DEQUE_SIZE + 1; 

            for (int i = 0; i < initial; ++i) {

                lane.push_back(Car()); 
            }
    }
    
    cout << "Initial Queue\n"; 

    // printLane(toll); 

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

         // printQueue(toll); 

    }
    

  return 0; 

}
