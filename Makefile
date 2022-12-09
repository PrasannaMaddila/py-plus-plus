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
	$(CC) $(SYN).cpp $(FLAGS) -o $(SYN).o 
	./$(SYN).o $(FNAME).cpp
	cat temp_*

file: 
	@echo "sed: removing trailing whitespaces"
	# sed 's/ //g' $(FILE).cpp

	@echo "Running syntaxer on $(FILE).cpp ... "
	./$(SYN).o $(FILE).cpp
	
	@echo "Now compiling $(FILE).cpp ..."
	$(CC) temp_$(FILE).cpp $(FLAGS) -o $(FILE).o
   	
	@echo "cleaning up"
	rm temp*	
