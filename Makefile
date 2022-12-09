CC=g++
FLAGS=--std=c++20 -Wall -fsanitize=address
FNAME=main

all: run 

compile: $(FNAME).cpp
	$(CC) $(FNAME).cpp -o $(FNAME)

run : $(FNAME)
	@echo "Running $(FNAME)"
	./$(FNAME)

clean: 
	@echo "Cleaning $(FNAME)"
	rm $(FNAME)

