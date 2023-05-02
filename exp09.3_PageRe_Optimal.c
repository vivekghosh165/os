//exp09.3_PageRe_Optimal
#include <stdio.h>
int main() {
    int i, j, n, a[50], frame[10], no, k, avail, count = 0, fault = 0, hit = 0, max, pos;  
    printf("\n ENTER THE NUMBER OF PAGES: ");
    scanf("%d", &n);
    printf("\n ENTER THE PAGE NUMBER: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }    
    printf("\n ENTER THE NUMBER OF FRAMES: ");
    scanf("%d", &no);    
    for(i = 0; i < no; i++) {
        frame[i] = -1;
    }   
    printf("\n PAGE NUMBER\t PAGE FRAMES\n");  
    for(i = 0; i < n; i++) {
        printf("%d\t\t", a[i]);    
        avail = 0;   
        for(j = 0; j < no; j++) {
            if(frame[j] == a[i]) {
                avail = 1;
                hit++;
                break;
            }
        }       
        if(avail == 0) {
            if(count < no) {
                frame[count] = a[i];
                count++;
            }
            else {
                max = -1;             
                for(j = 0; j < no; j++) {
                    pos = 0;
                    for(k = i + 1; k < n; k++) {
                        if(frame[j] == a[k]) {
                            pos = k;
                            break;
                        }
                    }
                    if(pos == 0) {
                        fault = j;
                        break;
                    }
                    else if(pos > max) {
                        max = pos;
                        fault = j;
                    }
                }           
                frame[fault] = a[i];
            }
            fault++;
            for(j = 0; j < no; j++) {
                printf("%d\t", frame[j]);
            }
        }
        printf("\n");
    }
    printf("\n PAGE HITS: %d", hit);
   // printf("\n PAGE FAULTS: %d", fault);
    return 0;
}
