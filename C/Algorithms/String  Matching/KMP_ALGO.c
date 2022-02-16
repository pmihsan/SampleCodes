#include<stdio.h>
#include<string.h>

void computeLps(char pat[], int m, int lps[]){
    int len = 0;
    int i = 1;
    lps[0] = 0;

    while(i < m){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len - 1];
            }
            else{
                lps[i] = len;
                i++;
            }
        }
    }
}

void KmpStringMatching(char text[], char pat[]){
    int m = strlen(pat);
    int n = strlen(text);

    int lps[m];
    int j = 0;

    computeLps(pat, m, lps);

    int i = 0;
    while(i < n){
        if(pat[j] == text[i]){
            i++;
            j++;
        }
        if(j == m){
            printf("Found at index %d\n",i-j);
            j = lps[j - 1];
        }
        else if(i < n && pat[j] != text[i]){
            if(j != 0){
                j = lps[j- 1];
            }
            else{
                i += 1;
            }
        }
    }
}

void main(){
    // char text[] = "ABABDABACDABABCABAB";
    // char pattern[] = "ABABCABAB";
    char text[] =  "AABAACAADAABAABA";
    char pattern[] =  "AABA";
    KmpStringMatching(text,pattern);
}