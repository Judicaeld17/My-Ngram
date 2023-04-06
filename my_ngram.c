#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char** argv){
if(argc <2 ){
    printf("you must add something");
}

int ngram[256]={0};
for(int i=1;i<argc;i++){
 char* string =argv[i];
 int len=strlen(string);
 for(int j=0;j<len;j++){
 int character=(int)string[j];
 ngram[character]++;
 }
 
}

for(int j=0;j<256;j++){
    if(ngram[j]>0){
        printf("%c:%d\n",j,ngram[j]);
    } 
}
}