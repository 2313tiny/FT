SOURCES := test.cpp complex.cpp fourier.cpp  main.cpp
OBJECTS := $(patsubst %.cpp,%.o,$(SOURCES))


all:comp run
comp:$(OBJECTS)
	@clear 
	@g++ $(OBJECTS) -o smd -std=c++11

complex.o:
	@g++ -c complex.cpp -o complex.o -std=c++11

test.o:
	@g++ -c test.cpp -o test.o -std=c++11

fourier.o:
	@g++ -c fourier.cpp -o fourier.o -std=c++11

main.o:
	@g++ -c main.cpp -o main.o -std=c++11

test.dep:
	@g++ -c -MM test.cpp \ 
	 	 -MT "test.dep test.o" \
		 -o test.dep -std=c++11	

complex.dep:
	@g++ -c -MM complex.cpp -MT "complex.dep complex.o" \
		 -o complex.dep  -std=c++11

fourier.dep:
	@g++ -c -MM fourier.cpp -MT "fourier.dep fourier.o" \
		 -o complex.dep -std=c++11

main.dep:
	@g++ -c -MM main.cpp -MT "main.dep main.o" -o main.dep -std=c++11

-include test.dep complex.dep main.dep fourier.dep 
 
run:
	@./smd
	@ctags -R .
clean:
	rm smd *.o *.dep tags
