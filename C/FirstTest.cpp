extern "C" {
  #include "game.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(TRIVIATEST) {
};

TEST(TRIVIATEST, CanAddOnePlayer) {
  Game *game = game_new();
  LONGS_EQUAL(0, game_how_many_players(game));
  game_add(game, "Hossein");
  LONGS_EQUAL(1, game_how_many_players(game));
  game_add(game, "Hossein");
  LONGS_EQUAL(2, game_how_many_players(game));
}

TEST(TRIVIATEST, isGamePlayable) {
	Game *game = game_new();
	CHECK_FALSE(game_is_playable(game));
	game_add(game, "David");
	CHECK_FALSE(game_is_playable(game));
	game_add(game, "Jayant");
	CHECK(game_is_playable(game));
}
