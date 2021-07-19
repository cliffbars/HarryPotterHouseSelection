#include <iostream> 

int main() {

  // magic starts here 

  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, answer1, answer2, answer3, answer4, max = 0; 

  std::cout << "Sorting Hat Quiz!";

  std::cout << "Q1_ When i'm dead, I want people to remember me as: \n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";

  std::cout << "Enter here: ";
  std::cin >> answer1;

  // Question 1. 
  if (answer1 == 1)
  {
    hufflepuff = hufflepuff + 1;
  }
  else if (answer1 == 2)
  {
    slytherin = slytherin + 1;
  }
  else if (answer1 == 3)
  {
    ravenclaw = ravenclaw + 1;

  }
  else if (answer1 == 4)
  {
    gryffindor = gryffindor + 1;
  }
  else
  {
    std::cout << "Invalid input";
  }

// Question 2. 
std::cout << "Dawn or Dusk?\n";
std::cout << "1) Dawn";
std::cout << "2) Dusk";
std::cout << "Enter here: ";
std::cin >> answer2;
  if (answer2 == 1)
  {
    gryffindor = gryffindor + 1;
    ravenclaw = ravenclaw + 1;

  }
  else if (answer2 == 2)
  {
    slytherin = slytherin + 1;
    hufflepuff = hufflepuff + 1;
  }
  else
  {
    std::cout << "Invalid input";
  }

  // 
  if (answer2 == 1)
  {
    gryffindor = gryffindor + 1;
    ravenclaw = ravenclaw + 1;
  }
  // Question 3. 

  std::cout << "What kind of instrument most pleases your ear?";
  std::cout << "1) The violin";
  std::cout << "2) The trumpet";
  std::cout << "3) The piano";
  std::cout << "4) The drum";
  std::cin >> answer3;
  if (answer3 == 1)
  {
      slytherin = slytherin + 1;

  }
  else if (answer3 == 2)
  {
    hufflepuff = hufflepuff + 1;
  }
  else if (answer3 == 3)
  {
    ravenclaw = ravenclaw + 1; 
  }
  else if (answer3 == 4)
  {
    gryffindor = gryffindor + 1;
  }
  else
  {
    std::cout << "Invalid input";
  }

  std::cout << "Q4) Which road tempts you most?:";
  std::cout << "1) The wide, sunny grassy lane";
  std::cout << "2) The narrow, dark, lantern-lit alley";
  std::cout << "3) The twisting, leaf-strewn path through woods";
  std::cout << "4) The cobbled street lines(ancient buildings)";
  std::cout << "Enter here: ";
  std::cin >> answer4; 
  if (answer4 == 1)
  {
      hufflepuff = hufflepuff + 1;
  }
  else if(answer4 == 2)
  {
      slytherin = slytherin + 1;
  }
  else if(answer4 == 3)
  {
    gryffindor = gryffindor + 1;
  }
  else if(answer4 == 4)
  {
    ravenclaw = ravenclaw + 1; 
  }
  else
  {
    std::cout << "Invalid input";
  }

  std::string house;

  if (gryffindor > max) {

    max == gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
  }

  std::cout << house << "!\n";

}


