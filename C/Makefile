CPPFLAGS = -fprofile-arcs \
           -ftest-coverage
LDLIBS  += -lgcov
LDLIBS  += `pkg-config --libs cpputest`

game: game.c game_runner.c

AllTests: AllTests.o FirstTest.o game.c

check: AllTests
	./$<
	gcov game.c

clean:
	-rm AllTests game *.gcda *.gcov *.gcno *.o >/dev/null 2>&1
