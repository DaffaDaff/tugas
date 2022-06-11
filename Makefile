CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wextra -I.
SOURCES=src/main.cpp src/person.cpp src/mahasiswa.cpp src/dosen.cpp src/tendik.cpp src/matakuliah.cpp src/database.cpp src/input.cpp src/utils.cpp lib/conio.cpp

ifeq ($(OS),Windows_NT)
	DELETE=del
	
	
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Linux)
		DELETE=rm
		
	endif
endif

src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

sim: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	cd src && $(DELETE) *.o
	cd lib && $(DELETE) *.o

cleanall: clean
	$(DELETE) sim.exe
