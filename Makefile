PROJECTNAME=main
flags=-Wall -Wextra

.PHONY: all clean test build run

all: run


$(PROJECTNAME): $(PROJECTNAME).o
	@gcc $(flags) $^ -o $@

$(PROJECTNAME).o: $(PROJECTNAME).c $(PROJECTNAME).h
	@gcc $(flags) -c $<

run: $(PROJECTNAME)
	@./$(PROJECTNAME)

clean:
	@rm -f *.o $(PROJECTNAME)

