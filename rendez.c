#include <stdio.h>

void tomb_kiir(int tomb[], int meret){
    for(int i=0; i<meret; i++){
        printf("%d ",tomb[i]);
    }
    puts("");
}

void rendez(int tomb[], int meret){
    for(int i = 0; i<meret; i++){
        for(int j = i+1; j<meret; j++){
            if(tomb[j] < tomb[i]){
                int tmp = tomb[j];
                tomb[j] = tomb[i];
                tomb[i] = tmp;
            }
        }
    }
}

int main(){
    int tomb[5]={10, 4, 5, 8, 2};
    tomb_kiir(tomb, 5);
    rendez(tomb, 5);
    tomb_kiir(tomb, 5);
return 0;

}