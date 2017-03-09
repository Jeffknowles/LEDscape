#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <fcntl.h>
#include <termios.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <inttypes.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <getopt.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <sys/mman.h>
#include "util.h"
#include "ledscape.h"

#include "lib/cesanta/net_skeleton.h"
#include "lib/cesanta/frozen.h"

#include <pthread.h>
#include <stdbool.h>

int main(void){

	ledscape_init(150);
}