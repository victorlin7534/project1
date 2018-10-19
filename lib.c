#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <ctype.h>

void clear(struct song * library[]){
  int i;
  for(i=0;i<27;i++)
    library[i] = clear_songs(library[i]);
}

void del(struct song * library[],char *artist, char *name){
  if(artist[0] < 'a' || artist[0] > 'z')
    library[26] = remove_song(library[26],name,artist);
  else
    library[artist[0]-97] = remove_song(library[artist[0]-97],name,artist);
}

struct song * shuffle(struct song * library[]){
  int i;
  struct song * get;
  while(1==1){
    if(!(get = shuffle_songs(library[i])))
      i = rand() % 27;
    else
      break;
  }
  return get;
}

void print_lib(struct song * library[]){
  int i;
  for(i=0;i<27;i++){
    if(i==26)
      printf("special chars\n");
    else 
     printf("%c\n",i + 97);
    show_songs(library[i]);
  }
}

void print_artist_song(struct song * library[],char *artist){
  if(artist[0] < 'a' || artist[0] > 'z')
    showa_songs(library[26],artist);
  else
    showa_songs(library[artist[0]-97],artist);
}

void print_char(struct song * library[],char *c){
  if(!isalpha(c[0]))
    show_songs(library[26]);
  else
    show_songs(library[c[0]-97]);
}

void find_artist(struct song * library[], char *artist){
  if(artist[0] < 'a' || artist[0] > 'z')
    if(!findf_song(library[26],artist)) printf("artist not found\n");
    else printf("artist found\n"); 
  else
    if(!findf_song(library[artist[0]-97],artist)) printf("artist not found\n"); 
    else printf("artist found\n"); 
}

struct song * fsong(struct song * library[], char *name, char *artist){
  if(artist[0] < 'a' || artist[0] > 'z')
    return find_song(library[26],name,artist);
  else
    return find_song(library[artist[0]-97],name,artist);
}

void add(struct song * library[], char *name, char *artist){
  if(artist[0] < 'a' || artist[0] > 'z') //WEIRD
   library[artist[26]] = add_song(name,artist,library[26]);
  else
   library[artist[0]-97] = add_song(name,artist,library[artist[0]-97]);
}