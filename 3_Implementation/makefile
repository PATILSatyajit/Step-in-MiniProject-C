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

INC = -Iinc\
-Iunity

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

.PHONY: all test clean

target : $(SRC) 
	gcc $(SRC) $(INC) -o multifile.exe

run : target
	./multifile.exe

test : $(TEST_SRC)
	gcc $(TEST_SRC) $(INC) -o test_output.exe
	./test_output.exe
	
cppcheck:
	cppcheck --enable=all -Iinc $(SRC)
