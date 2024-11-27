#include<iostream>

enum aeroplanSeats {
   side, window, aisele
};

int main() {
   aeroplanSeats xSeat = window;
   std::cout << xSeat << std::endl;
   return 0;
}