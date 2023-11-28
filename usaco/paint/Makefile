CPPFLAGS=-O2 -std=c++17 -Wl,-ld_classic

%: %.cpp
	g++-13 $(CPPFLAGS) $@.cpp -o $@

clean:
	gfind . -maxdepth 1 -type f -executable -delete

