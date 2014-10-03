COMPILER = g++

CPPUTEST_HOME = ../cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

TEST_SRC = AllTests.cpp	\
	add_test.cpp

OUTPUT = test

$(OUTPUT): $(TEST_SRC)
	$(COMPILER) -o $(OUTPUT) $(TEST_SRC) -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
