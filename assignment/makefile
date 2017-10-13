CC			= gcc
CCLINK		= g++
LIBS		=
CCOPTIONS	= -O -Wall -pedantic -std=c99 -g
LDOPTIONS	=
HDRS		=

PROGRAM = pyramid_of_numbers
OBJS = pyramid_of_numbers.o

DOXY		= /Applications/Doxygen/Doxygen.app/Contents/Resources/doxygen

$(PROGRAM): $(OBJS)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(LIBS)

clean:
	rm -f $(PROGRAM) $(OBJS)

cleanall:
	rm -f $(PROGRAM) $(OBJS) index.html
	rm -R html

doxy:
	$(DOXY)
	ln -s html/index.html index.html

%.o: %.c $(HDRS)
	$(CC) $(CCOPTIONS) -c $<
