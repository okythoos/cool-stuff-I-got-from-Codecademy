  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:

while (guess != 8 && tries < 50) {
  // != 8 means not 8 -------- 50 tries
 
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
 
  tries++;
 
}

  
  
  
  
  
  
  if (guess == 8) {
    //if statement
    
    std::cout << "You got it!\n";
  
  }  
  
}
