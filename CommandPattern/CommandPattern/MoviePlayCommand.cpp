#include "MoviePlayCommand.h"
#include "Movie.h"

MoviePlayCommand::MoviePlayCommand(Movie* movie) 
  : mMovie(movie)
{

}

MoviePlayCommand::~MoviePlayCommand()
{

}

void MoviePlayCommand::Execute()
{
  mMovie->Play();
}

void MoviePlayCommand::Undo()
{
  mMovie->TurnOff();
}
