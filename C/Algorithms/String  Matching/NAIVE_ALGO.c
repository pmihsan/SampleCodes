#include<stdio.h>
#include<string.h>

void NaiveSearch(char text[], char pattern[]){
    int m = strlen(pattern);
    int n = strlen(text);

    for(int i = 0;i<= n-m;i++){
        int j;
        for(j= 0;j<m;j++){
            if(text[i+j] != pattern[j]){
                break;
            }
        }
        if(j == m){
            printf("Pattern found at index %d\n",i);
        }
    }
}

void main(){
    // char text[] = "ABABDABACDABABCABAB";
    // char pattern[] = "ABABCABAB";
    // char text[] =  "AABAACAADAABAABA";
    // char pattern[] =  "AABA";
    char text[] = "AABAACAADAABAAABAA";
    char pattern[] = "AABA";
    NaiveSearch(text,pattern);
}