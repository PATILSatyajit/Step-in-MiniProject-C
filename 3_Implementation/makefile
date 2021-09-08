PROJECT_NAME = Stepin
BUILD = build

SRC = main.c\
src\Delete_book.c\
src\Add_book.c\
src\Update_book.c\
src\Search_book.c\
src\View_all_books.c

TEST_SRC = test/test.c\
unity\unity.c\
src\Delete_book.c\
src\Add_book.c\
src\Update_book.c\
src\Search_book.c\
src\View_all_books.c

INC_HEADER = inc
INC_TEST = unity

INC = -Iinc\
-Iunity

.PHONY: all test clean

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

all : $(SRC) 
	gcc $(SRC) $(INC) -o multifile.$(EXEC)

run : all
	./multifile.$(EXEC)

# test : 
test : all
	gcc $(TEST_SRC) $(INC) -o  test_output.$(EXEC) 
	./test_output.$(EXEC)

# test : $(TEST_SRC)
# 	gcc $(TEST_SRC) $(INC) -o test_output.exe
# 	./test_output.exe


cppcheck:
	cppcheck --enable=all -I $(INC_HEADER) $(SRC)

# coverageCheck:$(BUILD)
# 	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
# 	./$(TEST_OUTPUT)

# valgrind:
# 	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
# 	valgrind ./$(TEST_OUTPUT)


clean:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.gcov

$(BUILD):
	mkdir build
