# HTTPFlood

Tool for flooding HTTP servers under [Linux](http://www.linux.org/).

## Build

1. Clone:
	
	```bash
	git clone https://github.com/TheFox/httpflood.git
	```

2. In `httpflood` directory, make:
	
	```bash
	mkdir -p build && cd build && cmake -DCMAKE_BUILD_TYPE=Release .. && make && make test
	```

3. Done.
