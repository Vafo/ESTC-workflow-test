SRCS = test_vector.c $(wildcard vector/*.c)
OBJS := $(SRCS:.c=.o)
DEPS := $(SRCS:.c=.d)
BUILDDIR ?= build
DEPDIR ?= dep
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))
DEPS := $(addprefix $(DEPDIR)/, $(DEPS))

program: $(OBJS)
	gcc -o $@ $^

$(BUILDDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -c $< -o $@

$(DEPDIR)/%.d: %.c
	@mkdir -p $(dir $@)
	gcc -MM $^ -MT '$(BUILDDIR)/'$(^:.c=.o) -o $@

clean:
	rm -rf $(BUILDDIR) $(DEPDIR) program

include $(DEPS)
.PHONY: clean
