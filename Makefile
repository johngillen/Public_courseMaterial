BINARIES = math modulus printFormatting random variables conversions HelloWorld logic conditionals
SRC = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRC))

.PHONY: clean
clean:
	@rm -f $(BINARIES)

.PHONY: all
all: $(PROGS)

%: %.c
	gcc $< -o $@