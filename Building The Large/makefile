CC=gcc
EXE = sim

CFLAGS = -Wall
LDFLAGS = -lm
OPTCFLAGS = -02
DEBUGCLGAGS = -g

OBJ= building_the_large.o printpgm.o 

all : $(EXE)

opt: CFLAGS+=$(OPTCFLAGS)
opt: $(EXE)

debug: CFLAG+= $(DEBUGCFLAGS)
debug: $(EXE)

$(EXE): $(OBJ)
		$(CC) $(LDFLAGS) -o $@ $^

%.o:%.c
		$(CC) $(CFLAGS) -c $<
	

simulation: $(OBJ) 
	$(CC) $^ -o $@ 

simulation.o: simulation.c
	$(CC) -c $< 

.PHONY: clean
clean:
		rm -rf $(OBJ) $(EXEC)