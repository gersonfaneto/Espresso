#ifndef ESPRESSO_H
#define ESPRESSO_H

#include <stdio.h>

void init(void);

#ifdef ESPRESSO_IMPLEMENTATION

void init(void)
{
  printf("Getting started...\n");
}

#endif // ifdef ESPRESSO_IMPLEMENTATION

#endif // ifndef ESPRESSO_H

// vim:sw=2:ts=2:et:
