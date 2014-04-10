#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include "cruz.h"
#include "estrella.h"


int main() {
    printf("Bienvenidos a mi programa de hilos\n");

    pthread_t hilo_cruz;
    pthread_t hilo_estrella;

    pthread_create(&hilo_cruz,NULL, pinta_cruz,NULL);
    pthread_create(&hilo_estrella,NULL, pinta_estrella,NULL);

    while(1) {
        printf("O");
        usleep(300);
    }

    sleep(5);
}
