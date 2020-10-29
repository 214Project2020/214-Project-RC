ofiles= Main.o European.o Logistics.o Track.o nonEuropean.o
gpp_o= g++ -c -std=c++11 -static

Main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o Main

Main.o: Main.cpp European.h Logistics.h Track.h nonEuropean.h
	$(gpp_o) Main.cpp

European: European.cpp European.h
	$(gpp_o) European.cpp

Logistics: Logistics.cpp Logistics.h
	$(gpp_o) Logistics.cpp

Track: Track.cpp Track.h
	$(gpp_o) Track.cpp

nonEuropean: nonEuropean.cpp nonEuropean.h
	$(gpp_o) nonEuropean.cpp

run: Main
	./Main

clean:
	rm *.o Main