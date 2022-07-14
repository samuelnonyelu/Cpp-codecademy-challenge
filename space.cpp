#include <iostream>

int main() {

  double weightEarth;
  int planetNo;

  std::cout << "Enter your weight on earth(kg): ";
  std::cin >> weightEarth;
  std::cout << "List of planets : \n 1. Mercury \n 2. Venus \n 3. Mars \n 4. Jupiter \n 5. Saturn \n 6. Uranus \n 7. Neptune \n" ;
  std::cout << "Enter the planet no. you wish to fight on: ";
  std::cin >> planetNo;



  switch (planetNo){
    case 1 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 0.38 << "Kg\n";
      break;
    case 2 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 0.91 << "Kg\n";
      break;
    case 3 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 0.38 << "Kg\n";
      break;
    case 4 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 2.34 << "Kg\n";
      break;
    case 5 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 1.06 << "Kg\n";
      break;
    case 6 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 0.92 << "Kg\n";
      break;
    case 7 :
      std::cout << "Your weight on planet " << planetNo << " is: " << weightEarth * 1.19 << "Kg\n";
      break;
    default :
      std::cout << "Input valid Planet, Please try again" << "\n";
      break;
  }










}
