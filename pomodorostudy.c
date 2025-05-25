#include <stdio.h>
#include <stdlib.h>

/* in minutes */
#define LONG_BREAK  15
#define SHORT_BREAK 5
#define FOCUS       25

/* Required for sleep function  *
 * cross platform compatibility */
#ifdef _WIN32
#include <windows.h>
void bell() {
  Beep(750, 300);
}
#endif

#ifdef linux
#include <unistd.h>
void bell() {
  for (unsigned short i=0;i<=5;i++){
    if (system("paplay /usr/share/sounds/freedesktop/stereo/bell.oga 2>/dev/null") != 0) {
      printf("\a");
      fflush(stdout);
    }
  }
}
#endif

#if !defined(linux) && !defined(_WIN32)
#error "unknown system"
#endif

void err(char *message) {
  fprintf(stderr, "%s", message);
  exit(EXIT_FAILURE);
}

void timer(unsigned int minutes) {
  switch (minutes) {
    case LONG_BREAK:
      for (size_t i=0;i<LONG_BREAK;i++) {
	printf("lapsed: %zu minutes\n", i);
	sleep(60);
      }
      printf("lapsed: %d minutes\n\n", LONG_BREAK);
      break;
    case SHORT_BREAK:
      for (size_t i=0;i<SHORT_BREAK;i++) {
	printf("lapsed: %zu minutes\n", i);
	sleep(60);
      }
      printf("lapsed: %d minutes\n\n", SHORT_BREAK);
      break;
    case FOCUS:
      for (size_t i=0;i<FOCUS;i++) {
	printf("lapsed: %zu minutes\n", i);
	sleep(60);
      }
      printf("lapsed: %d minutes\n\n", FOCUS);
      break;
    default:
      err("invalid timer set\n");
      break;
  }
}

int main(void) {
  printf("+------------------------------------+\n"
	 "| Study as if you know nothing.      |\n"
	 "| Work as if you can solve anything. |\n"
	 "|                    - James Clear   |\n"
         "+------------------------------------+\n");

  unsigned int reps = 1; 
  bell();
  printf("\n[CTRL + C to quit]\n\n");
  while (1) {
    if (reps > 1){
      printf("\nYou've completed %d sessions 🎊🎉\n"
	     "Don't give up!\n\n", reps);
    }
    puts("+-----------------+");
    puts("|🔥TIME TO FOCUS🔥|");
    puts("+-----------------+");
    timer(FOCUS);
    bell();

    if ((reps % 4) == 0) {
      puts("+-----------------+");
      puts("|💤 LONG  BREAK 💤|");
      puts("+-----------------+");
      timer(LONG_BREAK);
      bell();
      reps++;
      continue;
    }
    puts("+-----------------+");
    puts("|💤 SHORT BREAK 💤|");
    puts("+-----------------+");
    timer(SHORT_BREAK);
    bell();

    reps++;
  }
  return 0; 
}
