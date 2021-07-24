PREFIX?=/usr/local

CFLAGS=-Wall -g -I${PREFIX}/apr/include/apr-1 -I${PREFIX}/apr/include/apr-util-1 -I../
LDFLAGS=-L${PREFIX}/apr/lib -lapr-1 -pthread -laprutil-1

all: devpkg

devpkg: bstrlib.o db.o shell.o commands.o

install:
	all
		install -d $(DESTDIR)/$(PREFIX)/bin/
		install devpkg $(DESTDIR)/$(PREFIX)/bin/


clean:
	find . -maxdepth 2 -type f -name "*[0-9]" -delete
	rm -rf *.dSYM
	rm -rf *.o
