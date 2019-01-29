#include <gb/gb.h>
#include <gb/font.h>
#include <stdio.h>
#include "sprites/BackgroundTiles.c"
#include "sprites/Background.c"
#include "sprites/Window.c"

void main() {
    UINT8 velocity = 1;
    font_t min_font;

    font_init();
    min_font = font_load(font_min);
    font_set(min_font);


    set_bkg_data(37, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, background);

    set_win_tiles(0, 0, 7, 1, window);
    move_win(7,130);

    SHOW_BKG;
    SHOW_WIN;
    DISPLAY_ON;

    while(1) {
        switch(joypad()) {
            case J_UP:
                velocity += 1;
            break;

            case J_DOWN:
                velocity -= 1;
            break;
        }

        if(velocity < 0) {
            velocity = 0;
        }

        scroll_bkg(velocity, 0);
        delay(100);
    }
}