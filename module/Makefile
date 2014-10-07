COMPILER = g++

#CPPUTEST_HOME should be exported!
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

TEST_DIR = test/AllTests.cpp	\
	test/module_test.cpp

CODE_DIR = src/module.c

CODE_INCLUDE = src

OUTPUT = unittest

$(OUTPUT): $(TEST_DIR) $(CODE_DIR)
	$(info Compiling...)
	@$(COMPILER) -o $(OUTPUT) $(TEST_DIR) $(CODE_DIR) -I$(CODE_INCLUDE) -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest

clean: 
	$(info Cleaning...)
	@rm -f $(OUTPUT)


