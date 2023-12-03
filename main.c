//
//  main.c
//  study
//
//  Created by Azra Öçgüder on 2.12.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // kapalı kaptaki bir gazın basıncını hesaplama
    //p=t*n*r/v
    while (1) {
        int v,n,t;
        float p;
        const float r = 2.223;
        
        printf("hacimi giriniz:\n");
        scanf("%d",&v);
        printf("sicakligi giriniz:\n");
        scanf("%d",&t);
        printf("mol sayisini giriniz:\n");
        scanf("%d",&n);
        p = n*r*t/v;
        
        printf("gazın basinci: %f",&p);
    }
    
    
    
    
    
    
    return 0;
}


