#include "Movie.h"
#include "MoviePlayCommand.h"
#include "RemoteControl.h"
#include "Keyboard.h"
#include "Gun.h"
#include "ShotCommand.h"

#define TEST_KEYBOARD

int main()
{
#ifdef TEST_REMOTECONTROL
  RemoteControl remocon;

  MoviePlayCommand* command = new MoviePlayCommand(new Movie);
  remocon.SetCommand(command);

  remocon.OnPlayPressed();
  remocon.OnStopPressed();
#endif // TEST_REMOTECONTROL

#ifdef TEST_KEYBOARD
  Keyboard keyboard;

  ShotCommand* shotCommand = new ShotCommand(new Gun);
  keyboard.SetCommand('s', shotCommand);

  keyboard.OnAlphabeticPressed('s');
  keyboard.OnAlphabeticPressed('s');
  keyboard.OnUndoPressed();
  keyboard.ChangeCommandAlpha('s', 'r');
  keyboard.OnAlphabeticPressed('r');
  keyboard.OnAlphabeticPressed('r');
  keyboard.OnAlphabeticPressed('r');
#endif // TEST_KEYBOARD
}
