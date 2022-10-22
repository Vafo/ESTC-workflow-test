SRCS = test_vector.c $(wildcard vector/*.c)
OBJS := $(SRCS:.c=.o)
BUILDDIR ?= build
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))

program: $(OBJS)
	gcc -o $@ $^

$(BUILDDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -c $^ -o $@

.depend: $(SRCS)
	gcc -MM $^ -o $@

clean:
	rm -rf $(BUILDDIR) program

include .depend
.PHONY: clean
