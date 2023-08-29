#pragma once

#include <array>
#include <memory>

class Command;

constexpr int kNumAlpha = 'z' - 'a' + 1;

class Keyboard
{
public:
  Keyboard();
  ~Keyboard();

  void OnAlphabeticPressed(char alpha);

  void OnUndoPressed();

  void SetCommand(char alpha, Command* command);

  void RemoveCommand(char alpha);

  void ChangeCommandAlpha(char from, char to);

private:
  void Execute(char alpha);

  int GetIndex(char alpha);

private:
  std::array<std::unique_ptr<Command>, kNumAlpha> mCommands;
  Command* mLatestCommand;
};
