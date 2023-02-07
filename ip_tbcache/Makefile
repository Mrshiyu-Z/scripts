OBJS   = ip_tbcache.o
CFLAGS = -Wall -g 
CC     = gcc

all: $(OBJS)
	$(CC) $(CFLAGS) -o ip_tbcache $(OBJS)

ip_tbcache.o: ip_tbcache.c
	$(CC) $(CFLAGS) -c ip_tbcache.c

clean:
	rm -f *.o ip_tbcache