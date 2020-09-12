WARNFLAGS = -W -Wall -Wextra
OPTFLAGS = -std=c++17
DEBUGFLAGS = -ggdb3 -fsanitize=address
CXXFLAGS += $(WARNFLAGS) $(OPTFLAGS)

all: ueb2
	@echo "compiling complete!"
ueb2: ctime.cpp 
clean:
	@echo "deleting!"
	$(RM) ueb2 *.o
	$(RM) -r *.dSYM
	@echo "deletion complete!"