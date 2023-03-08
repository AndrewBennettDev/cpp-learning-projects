#include <iostream>
#include <ctime>

int main() {
  time_t now = time(0);
   
  tm *ltm = localtime(&now);
  
  int hour = ltm->tm_hour;
  if (hour > 12) {
} else if (hour == 12
  std::cout << "Current time: "<< ltm->tm_hour << ":";
  std::cout << ltm->tm_min << ":";
  std::cout << ltm->tm_sec << std::endl;
}
