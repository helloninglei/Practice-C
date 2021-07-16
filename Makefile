CFLAGS=-Wall -g

clean:
	find . -maxdepth 2 -type f -name "*[0-9]" -delete
	rm -rf *.dSYM
all:
	ls | grep .c | xargs -I{} basename {} .c | xargs make
