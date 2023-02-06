#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i = 0;
    int len = 0;
    char ip[4];
    ip[0] = atoi(strtok(argv[1], "."));
    ip[1] = atoi(strtok(NULL, "."));
    ip[2] = atoi(strtok(NULL, "."));
    ip[3] = atoi(strtok(NULL, "."));
    printf("ip%u.mobgslb.tbcache.com\n", *(unsigned int *)ip);
    return 0;
}
