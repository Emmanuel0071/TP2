# Pour compiler et lancer le programme :
# mingw32-make.exe | ./bin/app


# Makefile with automatic dependencies management
# Compile all .cpp files from the current directory
# and link them to the executable into the bin directory
# All object files are generated into the build directory
#
# (c) 2024 by Dom Ginhac (dginhac@u-bourgogne.fr)
#
#
# The Makefile must be in the root directory of the project where the source files are located.
#
# Usage (in a terminal in the root directory of the project):
# make			# Compile and link all .cpp files
# make clean	# Clean up the build directory
#
# -----------------------------------------------------------
# Modify the following lines to fit your project
# SRC_FILES is the list of source files to compile, files are separated by a space.
# Do not put .h files into the source files!
SRC_FILES  = main.cpp Date.cpp Room.cpp Reservation.cpp Client.cpp
#
# APP is the name of the executable, the executable will be generated into the bin directory
APP        = app
#
# Choose your compiler - Use g++ on Linux, Windows and clang++ on Mac OS X
CXX        = g++
# Compiler options - Wall for all warnings, std=c++17 for C++17
CXXFLAGS   = -Wall  -std=c++17
#
# -----------------------------------------------------------
# Do not modify the following lines, unless you know what you are doing
# -----------------------------------------------------------
# Dependency flags - Include .d files generated by the compiler
DEPFLAGS   = -MMD
# Linker flags - No flags
LDFLAGS    =
# Build directory
BUILDIR    = build
# Object files - All .o files generated from the source files
OBJ_FILES  = $(patsubst %.cpp, $(BUILDIR)/%.o, $(SRC_FILES))
# Executable - The name of the executable into the bin directory
BINDIR	   = bin
# Target - The path to the executable
TARGET     = $(BINDIR)/$(APP)
# Dependencies - All .d files generated by the compiler
DEPS	   = $(OBJ_FILES:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@if not exist $(BINDIR) mkdir $(BINDIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJ_FILES)

$(BUILDIR)/%.o: %.cpp
	@if not exist $(BUILDIR) mkdir $(BUILDIR)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

# Clean up the build directory
clean:
	rm -rf $(BUILDIR)
	rm -rf $(BINDIR)

# Include the dependencies generated by the compiler
-include $(DEPS)

# Phony targets
.PHONY: all clean