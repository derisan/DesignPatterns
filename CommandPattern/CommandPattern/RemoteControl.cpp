#include "RemoteControl.h"
#include "Command.h"

RemoteControl::RemoteControl()
  : mCommand(std::make_unique<NullCommand>())
{

}

RemoteControl::~RemoteControl()
{

}

void RemoteControl::SetCommand(Command* command)
{
  mCommand.reset(command);
}

void RemoteControl::OnPlayPressed()
{
  Execute();
}

void RemoteControl::OnStopPressed()
{
  Undo();
}

void RemoteControl::Execute()
{
  mCommand->Execute();
}

void RemoteControl::Undo()
{
  mCommand->Undo();
}
