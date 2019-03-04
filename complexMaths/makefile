CC=gcc
EXE = sim

CFLAGS = -Wall
LDFLAGS = -lm
OPTCFLAGS = -02
DEBUGCLGAGS = -g

objs= main.c complexmath.c validate.c

all : $(EXE)

opt: CFLAGS+=$(OPTCFLAGS)
opt: $(EXE)

debug: CFLAG+= $(DEBUGCFLAGS)
debug: $(EXE)

$(EXE): $(objs)
		$(CC) $(LDFLAGS) -o $@ $^ -lm

%.o:%.c
		$(CC) $(CFLAGS) -c $< -lm
	

main: $(objs) 
	$(CC) $^ -o $@ -lm

main.o: main.c
	$(CC) -c $< 

complexmath.o: complexmath.c
	$(CC) -c $< 

validate.o: validate.c
	$(CC) -c $< 


.PHONY: clean
clean:
		rm -f *.o 