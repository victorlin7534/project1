#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <string.h>

struct song *  add_song(char *name, char *artist,struct song *cur){
  struct song * new = (struct song*)malloc(sizeof(struct song));
  new->artist = artist;
  new->name = name;
  int i=0;
  while(cur){
    if(strcmp(artist,cur->artist)>0 && strcmp(name,cur->name)>0)
      break;
    cur++;i++;
  }
  if(i){
    new->next=cur;
  }
  (cur-1)->next = new;
  new->next=cur;
  return
}

void show_songs(struct artist *cur){
  int i;
  for(i=0;cur;cur++)
    printf("%d) %s by %s\n",i,cur->name,cur->artist);
}

void clear_songs(){
  
}

void remove_song(){

}

struct song * shuffle(){

}

struct song * find_song(char *name,char *artist){

}

struct song * findf_song(char *artist){

}
