#include "Keyboard.h"

#include <cctype>
#include <iostream>
#include <string>

#include "Command.h"

Keyboard::Keyboard()
  : mLatestCommand(nullptr)
{
  for (auto& command : mCommands)
    command.reset(new NullCommand);
}

Keyboard::~Keyboard()
{
  
}

void Keyboard::OnAlphabeticPressed(const char alpha)
{
  if (!std::isalpha(alpha))
    return;

  Execute(static_cast<char>(std::tolower(alpha)));
}

void Keyboard::OnUndoPressed()
{
  if (!mLatestCommand)
    return;

  mLatestCommand->Undo();
}

void Keyboard::SetCommand(const char alpha, Command* command)
{
  if (!std::isalpha(alpha) || !command)
    return;

  mCommands[GetIndex(alpha)].reset(command);
}

void Keyboard::RemoveCommand(const char alpha)
{
  if (!std::isalpha(alpha))
    return;
  
  const int index = GetIndex(alpha);
  if (mCommands[index].get() == mLatestCommand)
    mLatestCommand = nullptr;

  mCommands[index].reset(new NullCommand);
}

void Keyboard::ChangeCommandAlpha(char from, char to)
{
  if (!std::isalpha(from) || !std::isalpha(to))
    return;
  std::swap(mCommands[GetIndex(from)], mCommands[GetIndex(to)]);
}

void Keyboard::Execute(const char alpha)
{
  const int index = GetIndex(alpha);
  mCommands[index]->Execute();
  mLatestCommand = mCommands[index].get();
}

int Keyboard::GetIndex(char alpha)
{
  return std::tolower(alpha) - 'a';
}
