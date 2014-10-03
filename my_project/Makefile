COMPILER = g++

CPPUTEST_LIB = ../cpputest/lib
CPPUTEST_INCLUDE = ../cpputest/include

test: AllTests.cpp add_test.cpp
#	g++ AllTests.cpp add_test.cpp -I../cpputest/include -L../cpputest/lib/ -lCppUTEst
	g++ AllTests.cpp add_test.cpp -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
