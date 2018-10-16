#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <string.h>

struct song *  add_song(char *name, char *artist,struct song *cur){
  struct song * new = (struct song*)malloc(sizeof(struct song));
  strncpy(new->artist,artist,sizeof(artist));
  strncpy(new->name,name,sizeof(name));
  int i=0;
  while(cur){
    if(strcmp(artist,cur->artist)>0 && strcmp(name,cur->name)>0)
      break;
    cur++;i++;
  }
  new->next=cur;
  if(i)
    return new;
  (cur-1)->next = new;
  return cur-i;
}

void show_songs(struct artist *cur){
  int i;
  for(i=0;cur;cur=cur->next)
    printf("%d) %s by %s\n",i,cur->name,cur->artist);
}

struct song *  clear_songs(struct artist *cur){
  struct node * temp;
  while(cur){
    temp = cur->next;
    free(cur);
    cur = temp;
  }
  return cur;
}

struct song * remove_song(struct artist *cur, char *name){
  
}

struct song * shuffle(){

}

struct song * find_song(char *name,char *artist){

}

struct song * findf_song(char *artist){

}
