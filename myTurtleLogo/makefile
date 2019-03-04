CC= gcc --std=c99  -I includes
EXE = sim

CFLAGS= -std=c99
LDFLAGS = -lm
OPTCFLAGS = -02
DEBUGCLGAGS = -I

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
	

external_libraries: $(objs) 
	$(CC) $^ -o $@ 

external_libraries.o: external_libraries.c
	$(CC) -c $< 

libturtle.o: libturtle.a
	$(CC) -c $< 

.PHONY: clean
clean:
		rm -f *.o 