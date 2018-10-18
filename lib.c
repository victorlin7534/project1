#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <ctype.h>

//CAPITAL LETTERS AND ALPHA

void clear(struct song * library[]){
  int i;
  for(i=0;library[i];i++)
    clear_songs(library[i]);
}

void delete(){

}

struct song * shuffle(struct song * library[]){
  int i = rand() % 27;
  return shuffle_songs(library[i]);
}

void print_lib(struct song * library[]){
  int i;
  for(i=0;library[i];i++){
    if(i==26)
      printf("%s\n","special chars");
    else 
      printf("%c\n",i);
    show_songs(library[i]);
  }
}

void print_artist_song(struct song * library[],char *artist){
  if(!isalpha(artist[0]))
    
}

void print_char(struct song * library[],char *c){
  if(!isalpha(c))
    
}

void find_artist(struct song * library[]){

}

struct song * fsong(struct song * library[]){
  
}

void add(struct song * library[]){

}
