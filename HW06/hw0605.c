#include<stdio.h>
#include<stdint.h>
#include "PA.h"
#include "test.h"
#define CN printf("\n")
#define int int32_t
signed main() {
    
    printf( "Before:\n" );
    print_card(player1);
    print_card(player2);
    print_card(player3);
    print_card(player4);
    printf( "Type 01:\n" );
    sort_card( player1, 1);
    sort_card( player2, 1);
    sort_card( player3, 1);
    sort_card( player4, 1);
    print_card(player1);
    print_card(player2);
    print_card(player3);
    print_card(player4);
    uint8_t cplayer1[13];
    uint8_t cplayer2[13];
    uint8_t cplayer3[13];
    uint8_t cplayer4[13];
    for(int i=0;i<13;i++) cplayer1[i]=player1[i];
    for(int i=0;i<13;i++) cplayer2[i]=player2[i];
    for(int i=0;i<13;i++) cplayer3[i]=player3[i];
    for(int i=0;i<13;i++) cplayer4[i]=player4[i];
    printf( "Type 02:\n" );
    sort_card( player1, 2);
    sort_card( player2, 2);
    sort_card( player3, 2);
    sort_card( player4, 2);
    print_card(player1);
    print_card(player2);
    print_card(player3);
    print_card(player4);
    printf( "Type 03:\n" );
    sort_card( cplayer1, 3);
    sort_card( cplayer2, 3);
    sort_card( cplayer3, 3);
    sort_card( cplayer4, 3);
    print_card(cplayer1);
    print_card(cplayer2);
    print_card(cplayer3);
    print_card(cplayer4);
    return 0;
}
