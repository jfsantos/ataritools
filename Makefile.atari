SRCDIR  =  src

SOURCES  := $(wildcard $(SRCDIR)/*.c)

EXECS = $(SOURCES:%.c=%)
CFLAGS = 

.PHONY: all
all: $(EXECS)

.PHONY: clean
clean:
	-@ $(RM) *.o 
	-@ $(RM) $(EXECS)
