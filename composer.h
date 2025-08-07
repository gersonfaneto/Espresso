#ifndef COMPOSER_H
#define COMPOSER_H

#include <stdio.h>

void init(void);

#ifdef COMPOSER_IMPLEMENTATION

void init(void)
{
  printf("Getting started...\n");
}

#endif // ifdef COMPOSER_IMPLEMENTATION

#endif // ifndef COMPOSER_H

// vim:sw=2:ts=2:et:
