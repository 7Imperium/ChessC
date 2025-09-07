PROJECT   := ChessC
SRCDIR    := src/source
INCLDIR   := src/lib
SOURCES  := $(shell find $(SRCDIR) -name '*.c')
OBJDIR   := build
OBJECTS  := $(patsubst %.c,$(OBJDIR)/%.o,$(notdir $(SOURCES)))
CC        := gcc
CFLAGS    := -Wall -Wextra -O2 -I$(INCLDIR)
all: $(PROJECT)
$(PROJECT): $(OBJECTS)
	@mkdir -p $(@D)            # создаём каталог, если его нет
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<


$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR) $(PROJECT)

.PHONY: all clean
