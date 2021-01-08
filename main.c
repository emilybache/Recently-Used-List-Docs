
#include <stdio.h>
#include <unistd.h>

#include "src/cloudservice.h"

static int readline(int fd, char line[]) {
    int result = read(0, line, 80);
    return result != 0;
}

#include "surgery/patient.c"

int main(int argc, char* argv[]) {
  if(argc != 2)
  {
      printf("Example:\n");
      printf("   cat somefile | basicgrep somestring\n");
      printf("This will print any line of 'somefile' containing 'somestring'\n");
      return 0;
  }

  setReadline(readline);
  setMarketingSlogansService(fetchMarketingSlogans);
  setPrintf(printf);

  grep(argv[1]);
  return 0;
}
