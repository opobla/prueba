#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include "cruz.h"
#include "estrella.h"


int main() {
    printf("Bienvenidos a mi programa de hilos\n");
    pinta_cruz();
    pinta_estrella();
}
