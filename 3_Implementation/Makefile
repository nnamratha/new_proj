PROJECT_NAME = CALCULATOR
TEST_PROJECT_NAME = Test_$(PROJECT_NAME)

BUILD = Build
# ALL source code files
SRC = src/calculator_operations.c
# All test source files
TEST_SRC = test/test_calculator_operations.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
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

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean

all:$(BUILD)
	gcc main.c $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

run: $(BUILD)
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))
	
coverage:$(BUILD)
	gcc $(TEST_SRC) $(SRC) $(INC) -fprofile-arcs -ftest-coverage -lm -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
   
clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	$(RM) *.gcda *.gcov *gcno 

cppcheck:
	cppcheck --enable=all --check-config --suppress=missingIncludeSystem main.c $(SRC) -Iinc 
	
valgrind:

	gcc $(TEST_SRC) $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
	valgrind $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))

test:$(BUILD)
# gcc $(TEST_SRC) $(SRC) $(INC) -fprofile-arcs -ftest-coverage -lm -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
	gcc $(TEST_SRC) $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
		$(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))

$(BUILD):
	mkdir $(BUILD)