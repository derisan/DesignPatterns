#pragma once

#include <memory>

#include "Command.h"

class Movie;

class MoviePlayCommand
  : public Command
{
public:
  MoviePlayCommand(Movie* movie);

  virtual ~MoviePlayCommand();

  virtual void Execute() override;

  virtual void Undo() override;

private:
  std::unique_ptr<Movie> mMovie;
};