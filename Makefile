CFLAGS=-Wall -g

clean:
	rm -rf *[0-9]
	rm -rf *.dSYM
all:
	ls | grep .c | xargs -I{} basename {} .c | xargs make
