CC := g++
CFLAGS := -ggdb -w -c
LFLAGS := -ggdb -w
MAINFILE_NAME := Main

make: compileAll *.o
	$(CC) $(LFLAGS) *.o -o $(MAINFILE_NAME)

compileAll: *.cpp *.h
	$(CC) $(CFLAGS) *.cpp

run: $(MAINFILE_NAME)
	./$(MAINFILE_NAME)

clean:
	rm *.o
	rm $(MAINFILE_NAME)
	