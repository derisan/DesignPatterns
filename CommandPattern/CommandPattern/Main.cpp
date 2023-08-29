#include "Movie.h"
#include "MoviePlayCommand.h"
#include "RemoteControl.h"

int main()
{
  RemoteControl remocon;

  MoviePlayCommand* command = new MoviePlayCommand(new Movie);
  remocon.SetCommand(command);

  remocon.OnPlayPressed();
  remocon.OnStopPressed();
}
