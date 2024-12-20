CXX = g++                 
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror  # Options de compilation

# Liste des fichiers source et objets
SRCS = main.cpp Date.cpp Livre.cpp Auteur.cpp Lecteur.cpp Emprunt.cpp Bibliotheque.cpp
OBJS = $(SRCS:.cpp=.o)   


TARGET = bibliotheque


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)
