PROJECT_NAME = Stepin

SRC = main.c\
src\Delete_book.c\
src\Add_book.c\
src\Update_book.c\
src\Search_book.c\
src\View_all_books.c

TEST_SRC = test\test.c\
unity\unity.c\
src\Delete_book.c\
src\Add_book.c\
src\Update_book.c\
src\Search_book.c\
src\View_all_books.c

INC = -Iinc\
-Iunity

CFLAGS = -I$(INC)
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

TEST_OUTPUT = Test_$(PROJECT_NAME).$(EXEC)

target : $(SRC) 
	gcc $(SRC) $(INC) -o multifile.$(EXEC)

run : target
	./multifile.$(EXEC)

test : target
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT)

clean:
	gcc -fprofile-arcs -ftest-coverage -I $(INC) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.gcov
