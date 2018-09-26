#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer
using namespace std;

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/

  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
    int a;
    int b;
    int c;
    int sum;
    std::cout << "Enter three numbers: \n";
    std::cin >> a >> b >> c;
  
  // Multiply the three integers
    sum = a * b * c; 

  // Output the result of the multiplication
  std::cout << "These numbers multiplied= " << sum;

  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  string t1;
  string t2;
  string t3;

  std::cout << "Enter a season: \n";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline (std::cin, t1);
  std::cout << "Enter an insect: \n"; 
  std::getline (std::cin, t2);
  std::cout << "Enter a type of nut: \n";
  std::getline (std::cin, t3);
  std::cout << "\n";
  std::cout << " " << t1 << " moonlight--\n";
  std::cout << " a " << t2 << " digs silently \n";
  std::cout << " into the " << t3 << ". \n";

 /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  int myint;
  stringstream(myNumber) >> myint;
  
  std::cout << myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}