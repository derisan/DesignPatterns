#pragma once

#include <memory>

#include "Command.h"

class Gun;

class ShotCommand :
    public Command
{
public:
  ShotCommand(Gun* gun);
  virtual ~ShotCommand();
  
  virtual void Execute() override;

  virtual void Undo() override;

private:
  std::unique_ptr<Gun> mGun;
};

