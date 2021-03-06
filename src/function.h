#ifndef KILO_FUNCTION_H
#define KILO_FUNCTION_H

#include "kilo.h"

/* =============================== Find mode ================================ */

#define KILO_QUERY_LEN 256

void editorFind(int fd);

void quitWithPrompt();
void quitForce();
void saveIgnoreError();
void saveAndQuit();
void saveAll();

#endif
