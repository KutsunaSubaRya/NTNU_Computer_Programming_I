#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define int int32_t
void print_card(const uint8_t *player) {
    for(int i = 0; i < 13; i++) printf("%u ", player[i]);
    printf("\n");
}
void sort_card( uint8_t player[13], int32_t cmp) {
    if(cmp == 1) {
        for(int i = 0; i < 13; i++) {
            for(int j = i + 1; j < 13; j++) {
                if(player[j] % 13 == 1) {
                    if(player[i] % 13 != 1) {
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                    else if(player[i] % 13 == 1) continue;
                }
                else if(player[j] % 13 == 0) {
                    if(player[i] % 13 == 1) continue;
                    if(player[i] % 13 == 0) continue;
                    else if (player[i] % 13 != 0 && player[i] % 13 != 1) {
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                }
                else {
                    if(player[j] % 13 > player[i] % 13) {
                        if(player[i] % 13 == 1) continue;
                        if(player[i] % 13 == 0) continue;
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                }
            }
        }
    }
    else if(cmp == 2) {
        for(int i = 0; i < 13; i++) {
            for(int j = i + 1; j < 13; j++) {
                if(player[j] % 13 == 2) {

                    if(player[i] % 13 != 2) {
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                    else if(player[i] % 13 == 2) continue;
                }
                else if(player[j] % 13 == 1) {
                    if(player[i] % 13 != 1) {
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                    else if(player[i] % 13 == 1) continue;
                    else if(player[i] % 13 == 2) continue;
                }
                else if(player[j] % 13 == 0) {
                    if(player[i] % 13 == 2) continue;
                    if(player[i] % 13 == 1) continue;
                    if(player[i] % 13 == 0) continue;
                    else if (player[i] % 13 != 0 && player[i] % 13 != 1) {
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                }
                else {
                    if(player[j] % 13 > player[i] % 13) {
                        if(player[i] % 13 == 2) continue;
                        if(player[i] % 13 == 1) continue;
                        if(player[i] % 13 == 0) continue;
                        uint8_t tmp = player[i];
                        player[i] = player[j];
                        player[j] = tmp;
                    }
                }
            }
        }
    }
    else {
        for(int i = 0; i < 13; i++) {
            for(int j = 1; j < 13; j++) {
                if(player[j - 1] % 13 == 0) {
                    if(player[j] / 13 < player[j - 1] / 13 - 1) {
                        uint8_t tmp = player[j - 1];
                        player[j - 1] = player[j];
                        player[j] = tmp;
                    }
                }
                else if(player[j] % 13 == 0) {
                    if(player[j] / 13 - 1 < player[j - 1] / 13) {
                        uint8_t tmp = player[j - 1];
                        player[j - 1] = player[j];
                        player[j] = tmp;
                    }
                }
                else if(player[j] / 13 < player[j - 1] / 13) {

                    uint8_t tmp = player[j - 1];
                    player[j - 1] = player[j];
                    player[j] = tmp;
                }

            }
        }
    }
}
