WARNFLAGS = -W -Wall -Wextra
OPTFLAGS = -std=c++17
DEBUGFLAGS = -ggdb3 -fsanitize=address
CXXFLAGS += $(WARNFLAGS) $(OPTFLAGS)

all: ueb1
	@echo "compiling complete!"
ueb1: cdate.cpp
clean:
	@echo "deleting!"
	$(RM) ueb1 *.o
	$(RM) -r *.dSYM
	@echo "deletion complete!"