#include "ShotCommand.h"

#include <iostream>

#include "Gun.h"

ShotCommand::ShotCommand(Gun* gun)
  : mGun(gun)
{

}

ShotCommand::~ShotCommand()
{

}

void ShotCommand::Execute()
{
  mGun->DecreamentBullet();

  std::cout << "You've shot! There are " << mGun->GetBullets() 
    << " bullets left." << std::endl;
}

void ShotCommand::Undo()
{
  mGun->IncreamentBullet();

  std::cout << "It was fake. You've never shot. " << mGun->GetBullets() 
    << " bullets left." << std::endl;
}
