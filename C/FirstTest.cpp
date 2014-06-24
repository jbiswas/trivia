extern "C" {
  #include "game.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(TRIVIATEST) {
	Game *game;
	void setup() {
		game = game_new();
	}
	void teardown() {
	}
};

TEST(TRIVIATEST, CanAddOnePlayer) {
  LONGS_EQUAL(0, game_how_many_players(game));
  game_add(game, "Hossein");
  LONGS_EQUAL(1, game_how_many_players(game));
  game_add(game, "Hossein");
  LONGS_EQUAL(2, game_how_many_players(game));
}

TEST(TRIVIATEST, isGamePlayable) {
	CHECK_FALSE(game_is_playable(game));
	game_add(game, "David");
	CHECK_FALSE(game_is_playable(game));
	game_add(game, "Jayant");
	CHECK(game_is_playable(game));
}
