#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <ctype.h>

void clear(struct song * library[]){
  int i;
  for(i=0;library[i];i++)
    clear_songs(library[i]);
}

void del(struct song * library[],char *artist, char *name){
  if(!isalpha(artist[0]))
    remove_song(library[26],name,artist);
  else
    remove_song(library[artist[0]-97],name,artist);
}

struct song * shuffle(struct song * library[]){
  int i = rand() % 27;
  return shuffle_songs(library[i]);
}

void print_lib(struct song * library[]){
  int i;
  for(i=0;i<27;i++){
    if(i==26)
      printf("special chars\n");
    else 
     printf("%c\n",i + 97 + '0');
    show_songs(library[i]);
  }
}

void print_artist_song(struct song * library[],char *artist){
  if(!isalpha(artist[0]))
    showa_songs(library[26],artist);
  else
    showa_songs(library[artist[0]-97],artist);
}

void print_char(struct song * library[],char *c){
  if(!isalpha(c[0]))
    show_songs(library[26]);
  else
    show_songs(library[c[0]]);
}

void find_artist(struct song * library[], char *artist){
  if(!isalpha(artist[0]))
    if(!findf_song(library[26],artist)) printf("artist not found\n");
    else printf("artist found\n"); 
  else
    if(!findf_song(library[artist[0]-97],artist)) printf("artist not found\n"); 
    else printf("artist found\n"); 
}

struct song * fsong(struct song * library[], char *name, char *artist){
  if(!isalpha(artist[0]))
    return find_song(library[26],name,artist);
  else
    return find_song(library[artist[0]-97],name,artist);
}

void add(struct song * library[], char *name, char *artist){
  if(!isalpha(artist[0])) 
   library[artist[26]] = add_song(name,artist,library[26]);
  else
   library[artist[0]-97] = add_song(name,artist,library[artist[0]-97]);
}
