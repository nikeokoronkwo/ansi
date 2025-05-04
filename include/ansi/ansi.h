#ifndef ANSI_H
#define ANSI_H

#include "base.h"
#include "colours.h"
#include "custom.h"

#ifdef __cplusplus


const Ansi red = Ansi(RED);
const Ansi blue = Ansi(BLUE);
const Ansi green = Ansi(GREEN);
const Ansi yellow = Ansi(YELLOW);
const Ansi magenta = Ansi(MAGENTA);
const Ansi cyan = Ansi(CYAN);
const Ansi white = Ansi(WHITE);

namespace ansi {
Ansi rgb(int r, int g, int b);
}
#else
char* red(char* word);
char* blue(char* word);
char* green(char* word);
char* yellow(char* word);
char* magenta(char* word);
char* cyan(char* word);
char* white(char* word);

char* ansi_rgb(RGB rgb, char* src);
#endif

#endif