#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str[17];
char cmd[100];
char* args[] = {NULL, "-v",
NULL};
args[0] = cmd;

while (true) {
for (int i = 0; i < 16; i++) 
{
int index = rand() % sizeof(charset);
str[i] = charset[index];
    }
str[16] = '\0';
sprintf(cmd, "/usr/bin/fastboot oem unlock%s ", str);
execv(args[0], args);
  }
return 0;
}
