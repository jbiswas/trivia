CPPFLAGS = -fprofile-arcs \
           -ftest-coverage \
           -Wall \
           -Wextra \
           -Werror
LDLIBS  += -lgcov
LDLIBS  += `pkg-config --libs cpputest`

game: time.c game.c game_runner.c

AllTests: AllTests.o FirstTest.o game.c

check: AllTests game
	valgrind ./$<
	./game | diff oracle.txt -
	gcov game.c

clean:
	-rm AllTests game *.gcda *.gcov *.gcno *.o >/dev/null 2>&1
