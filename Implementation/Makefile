#all: run clean 
#all provides sequence of command

PROJECT_NAME= Calculator.out

BUILD=build

SRC = main.c\
src/add.c\
src/cuberoot.c\
src/divide.c\
src/exponential.c\
src/modular_division.c\
src/multiplication.c\
src/percentage.c\
src/squareroot.c\
src/subtraction.c\


TEST_SRC=main.c\
src/add.c\
src/cuberoot.c\
src/divide.c\
src/exponential.c\
src/modular_division.c\
src/multiplication.c\
src/percentage.c\
src/squareroot.c\
src/subtraction.c\
test/test_functions.c \


TEST_OUTPUT=$(BUILD)/Test_$(PROJECT_NAME).out

#-Iunity

INC =  -Iheader 


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out



$(PROJECT_NAME):all


.PHONY: all run clean test   

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out



run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out




test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
  
  
 $(BUILD):
	mkdir build