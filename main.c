//
//  main.c
//  asd
//
//  Created by Azra Öçgüder on 26.11.2023.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // bir arrayin elemanlarının 33ğe bölümünden kalan2 olan sayıların indexlerinin çarpımının 4 e bölümünden kalanının karekökü arrayde mevut mu diye kontrol etsin
    int myNumbers[] = {25, 50, 75, 100, 200, 75};
    int indekscarpimi = 0;
    int indekscarpimibolumundenkalan = 0;
    int indekscarpimibolumundenkalaninkarekoku = 0;
    bool result = false;
    
    for(int i = 0 ; i< 6; i++) {
        if ( myNumbers[i] % 33 != 2) {
           indekscarpimi = indekscarpimi * i;
        }
    }
    indekscarpimibolumundenkalan = indekscarpimi % 4;
    
    indekscarpimibolumundenkalaninkarekoku =  indekscarpimibolumundenkalan ^ 1/2;
    
    
    
    for(int i = 0 ; i< 6; i++) {
        if ( myNumbers[i] == indekscarpimibolumundenkalaninkarekoku ) {
            result = true;
        }
    }
    
    
    
    if (result == true ) {
        printf("mevcut");
    } else {
        printf("mevcut değil");
    }
    
    
    return 0;
}
