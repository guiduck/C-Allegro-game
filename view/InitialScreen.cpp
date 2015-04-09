#include "InitialScreen.h"

using namespace std;

const int DISPLAY_HEIGTH = 800;
const int DISPLAY_WIDTH = 600;
const char* PLAYER_IMAGE = "player.jpg";

InitialScreen::InitialScreen() {

 
    InitialScreen::startAllegro(); 
 
    InitialScreen::startScreen(DISPLAY_HEIGTH,DISPLAY_WIDTH); 	

    InitialScreen::colorScreen(255,255,255); //background color

    InitialScreen::startScreenLoop();
   
}

void InitialScreen::startAllegro() {
    if (!al_init()) {
        fprintf(stderr, "Falha ao inicializar a Allegro 5\n");
    }

     if (!al_init_image_addon()) {
        fprintf(stderr, "Falha ao inicializar add-on allegro_image.\n");
    }

} 

void InitialScreen::startScreen(int heigth, int width) {
    this->display = al_create_display(heigth, width);
    
    if (!this->display) {
        fprintf(stderr, "Falha ao criar a janela\n");
    }
}

void InitialScreen::startScreenLoop() {

    ALLEGRO_BITMAP *playerImage;
        playerImage = al_load_bitmap("/home/caio/PhysicalEngine/view/player.jpg");

        if (!playerImage) {
            fprintf(stderr, "Falha ao carregar o arquivo de imagem.\n");
            al_destroy_display(this->display);
         }
     
     ALLEGRO_EVENT_QUEUE *filaEventos;
        filaEventos = al_create_event_queue();
        if (!filaEventos) {
            fprintf(stderr, "Falha ao criar fila de eventos.\n");
            al_destroy_display(this->display);
        }

    al_register_event_source(filaEventos, al_get_display_event_source(this->display));
        
     while (1) {

        ALLEGRO_EVENT evento;
        ALLEGRO_TIMEOUT timeout;
        al_init_timeout(&timeout, 0.05);
 
        int tem_eventos = al_wait_for_event_until(filaEventos, &evento, &timeout);
 
        if (tem_eventos && evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }
        
        al_draw_bitmap(playerImage, 0, 0, 0);
        InitialScreen::refreshScreen();
    }
    InitialScreen::destroyScreen();
    al_destroy_event_queue(filaEventos);
}

void InitialScreen::restScreen() {
    al_rest(5.0);
    InitialScreen::destroyScreen();
}

void InitialScreen::colorScreen(unsigned int r, unsigned int g, unsigned int b) {
    al_clear_to_color(al_map_rgb(r, g, b));
    InitialScreen::refreshScreen();
}

void InitialScreen::refreshScreen() {
    al_flip_display();
}

void InitialScreen::destroyScreen() {
     al_destroy_display(this->display);
}





