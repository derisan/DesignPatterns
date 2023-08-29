#pragma once

#include <iostream>

class Movie
{
public:
  void Play()
  {
    std::cout << "Play Iron man..." << std::endl;
  }

  void TurnOff()
  {
    std::cout << "Turn off Iron man..." << std::endl;
  }
};
