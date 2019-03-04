CC=gcc
EXE = sim

CFLAGS = -Wall
LDFLAGS = -lm
OPTCFLAGS = -02
DEBUGCLGAGS = -g

objs = main.c simulation.c

all : $(EXE)

opt: CFLAGS+=$(OPTCFLAGS)
opt: $(EXE)

debug: CFLAG+= $(DEBUGCFLAGS)
debug: $(EXE)

$(EXE): $(objs)
		$(CC) $(LDFLAGS) -o $@ $^ 

%.o:%.c
		$(CC) $(CFLAGS) -c $< -lm
	

main: $(objs) 
	$(CC) $^ -o $@ -lm

main.o: main.c
	$(CC) -c $< 

simulation.o: simulation.c
	$(CC) -c $< 

.PHONY: clean
clean:
		rm -f *.o 
