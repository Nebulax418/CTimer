#include<stdio.h>
#include<stdlib.h>
// #include<math.h>
// #include<string.h>
// #include<time.h>
#include<windows.h>

int main() {
    
    //let's create a timer

    int h = 0,  m = 0, s = 0;

    int delay = 1000; //milliseconds

    if(h > 12 ||(m < 0 || m > 60) || (s < 0 || s > 60)) {
        printf("Error: Invalid time");
        exit(0);
    } else {
        while(1) {
            
            s++;

            if(s > 59) {
                m++;
                s = 0;
            }

            if(m > 59) {
                h++;
                m = 0;
            }

            if(h > 12) {
                h = 1;
            }

            printf("%02d : %02d : %02d", h, m, s);
            
            Sleep(delay);

            system("cls"); //clears the screen each time
        }

    }
    
    return 0;
}
