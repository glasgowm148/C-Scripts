CC=gcc
EXE = sim

CFLAGS = -Wall
LDFLAGS = -lm
OPTCFLAGS = -02
DEBUGCLGAGS = -g

objs= external_libraries.c libturtle.a

all : $(EXE)

opt: CFLAGS+=$(OPTCFLAGS)
opt: $(EXE)

debug: CFLAG+= $(DEBUGCFLAGS)
debug: $(EXE)

$(EXE): $(objs)
		$(CC) $(LDFLAGS) -o $@ $^

%.o:%.c
		$(CC) $(CFLAGS) -c $<
	

simulation: $(objs) 
	$(CC) $^ -o $@ 

simulation.o: simulation.c
	$(CC) -c $< 

.PHONY: clean
clean:
		rm -f *.o 