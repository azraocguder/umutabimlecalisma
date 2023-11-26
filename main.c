// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int myNumbers[] = {25, 50, 75, 100, 200, 75};
    
    float total = 0;
    int count = 0;
    
    float totalcift = 0;
    int countcift = 0;
    
    float result = 0;
    float resultcift = 0;
    //i0
    //i1
    //i2
    //i3
    //i4
    //i5
    for(int i = 0; i < 6; i = i+1) {
       if (myNumbers[i] % 2 == 1) {
            total = myNumbers[i] + total;
            //total=25
            //total=100
            //total=175
            count = count + 1 ;
            //count=1
            //count=2
            //count=3
        } else {
            totalcift = myNumbers[i] + totalcift;
            //totalcift=50
            //totalcift=150
            //totalcift=350
            countcift = countcift + 1 ;
            //countcift=1
            //countcift=2
            //countcift=3
        }
    }
    
    result = total/ count;
    // result=58.33
    
    printf("%f", result);
    
    printf("*******");
    
    resultcift = totalcift/ countcift;
    //resultcift=116,6
    
    printf("%f", resultcift);
    
    return 0;
}
