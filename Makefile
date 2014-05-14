# httpflood Makefile
# Created @ 27.12.2010 by TheFox@fox21.at


VERSION = 1.0.1
CC = gcc
CFLAGS = -DVERSION=\"$(VERSION)\"


all: httpflood.c
	$(CC) $(CFLAGS) -o httpflood httpflood.c

clean:
	rm -f httpflood

# EOF
