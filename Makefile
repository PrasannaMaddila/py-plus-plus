CC=g++
FLAGS=--std=c++20 -Wall -fsanitize=address
FNAME=main
SYN=syntaxer

all: run 

compile: $(FNAME).cpp
	$(CC) $(FNAME).cpp -o $(FNAME)

run : $(FNAME)
	@echo "Running $(FNAME)"
	./$(FNAME)

clean: 
	@echo "Cleaning $(FNAME)"
	rm $(FNAME)

syn: 
	@echo "Generating a new syntaxer."
	$(CC) $(SYN).cpp $(FLAGS) -o $(SYN).o 
	./$(SYN).o $(FNAME).cpp

file: 
	@echo "Running syntaxer on $(FILE).cpp ... "
	./$(SYN).o $(FILE).cpp
	
	@echo "Now compiling $(FILE).cpp ..."
	$(CC) temp_$(FILE).cpp $(FLAGS) -o $(FILE).o
   	
	@echo "cleaning up"
	rm temp_*	
