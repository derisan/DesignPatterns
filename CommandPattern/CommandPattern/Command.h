#pragma once

class Command
{
public:
  virtual ~Command() = default;

  virtual void Execute() = 0;
  virtual void Undo() = 0;
};

class NullCommand
  : public Command
{
public:
  virtual void Execute() override { }
  virtual void Undo() override { }
};
