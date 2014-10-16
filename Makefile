# httpflood Makefile
# Created @ 27.12.2010 by TheFox@fox21.at


RM = rm -rf

all: httpflood

httpflood: httpflood.c
	$(CC) $(CFLAGS) -o httpflood httpflood.c

clean:
	$(RM) httpflood
