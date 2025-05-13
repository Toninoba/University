CC = gcc
CFLAGS = -std=c11 -D_POSIX_C_SOURCE=200809L -Wall -Wextra -Wpedantic \
		 -Wimplicit-fallthrough -Wcast-align=strict -Wformat=2 -Werror \
		 -Wno-error=unused-parameter
TARGET = prog
SRC = prog.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)


	gcc -o prog -std=c11 -D_POSIX_C_SOURCE=200809L -Wall -Wextra -Wpedantic -Wimplicit-fallthrough -Wcast-align=strict -Wformat=2 -Werror -Wno-error=unused-parameter prog.c

	