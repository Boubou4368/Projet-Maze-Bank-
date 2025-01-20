# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Directories
SRC_DIR = ./CPP
INCLUDE_DIR = ./H
BUILD_DIR = ./build

# Source files
SRC_FILES = \
    $(SRC_DIR)/Niveau1/afficheJeux.cpp \
    $(SRC_DIR)/Niveau1/jeux1p.cpp \
    $(SRC_DIR)/Niveau1/gagnee.cpp \
    $(SRC_DIR)/Niveau2/jeux3p.cpp \
    $(SRC_DIR)/Niveau2/afficheJeux3.cpp \
    $(SRC_DIR)/Niveau2/gagnee3.cpp \
    $(SRC_DIR)/Commun/clearScreen.cpp \
    $(SRC_DIR)/Commun/colision.cpp \
    $(SRC_DIR)/Commun/couleur.cpp \
    $(SRC_DIR)/Commun/deplacementAleatoire.cpp \
    $(SRC_DIR)/Commun/main.cpp \
    $(SRC_DIR)/Commun/mouvement.cpp \
    $(SRC_DIR)/Commun/statuTresor.cpp

# Object files
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Executable
TARGET = jeu

# Rules
all: $(TARGET)

# Linking
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $^ -o $@

# Compilation
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean up
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)
