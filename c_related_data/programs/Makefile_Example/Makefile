CC = gcc
CFLAGS = -Wall
MKDIR_P = mkdir -p
OBJ_DIR = obj
SRC_DIR = src
APP_DIR = app
INC_DIR = include

# Getting All Source *.c file in SRC variable
SRC = $(wildcard src/*.c)

# Replacing src/*.c to obj/*.o in OBJ variable
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

# $@ = Matches the Target, anyfile.o
# $< = Matches the Dependency, anyfile.c
# $^ = All Files present at Dependency with Space Seperated Format

all: $(OBJ) $(APP_DIR)/application

# Target : Dependency
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR_P) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -I $(INC_DIR) -o $@

$(APP_DIR)/application: $(OBJ)
	$(MKDIR_P) $(APP_DIR)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(APP_DIR)
	rm -rf $(OBJ_DIR)
