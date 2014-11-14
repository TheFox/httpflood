
#include "../src/httpflood.h"

int main(int argc, const char **argv){
	printf("%s %d.%d.%d (%s %s)\n", HTTPFlood_NAME,
		HTTPFlood_VERSION_MAJOR, HTTPFlood_VERSION_MINOR, HTTPFlood_VERSION_PATCH,
		__DATE__, __TIME__);
	printf("%s\n", HTTPFlood_COPYRIGHT);
	printf("user: %d\n", getuid());
	printf("atoi(): %p\n", atoi);
	printf("htons(1024): %s\n", htons(1024) == 4 ? "ok" : "N/A");
	printf("setsockopt(): %p\n", setsockopt);
	printf("inet_addr(): %p\n", inet_addr);
	printf("connect(): %p\n", connect);
	printf("send(): %p\n", send);
	
#ifdef SEND
	printf("SEND: ok\n");
#endif
	
	return 0;
}
