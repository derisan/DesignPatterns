#pragma once

#include <memory>

class Command;

class RemoteControl
{
public:
  RemoteControl();

  ~RemoteControl();

  void SetCommand(Command* command);

  void OnPlayPressed();

  void OnStopPressed();

private:
  void Execute();

  void Undo();

private:
  std::unique_ptr<Command> mCommand;
};
