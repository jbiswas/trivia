#!/bin/sh

game="./game"

if [ -f "$game" ]
then
  $game
  gcov game.c game_runner.c
fi
