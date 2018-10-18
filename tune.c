#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <string.h>

struct song *  add_song(char *name, char *artist,struct song *cur){
  struct song * new = (struct song*)malloc(sizeof(struct song));
  struct song * follow, *head = cur;
  strncpy(new->artist,artist,sizeof(artist));
  strncpy(new->name,name,sizeof(name));
  while(cur){
    if(strcmp(artist,cur->artist)>0 && strcmp(name,cur->name)>0)
      break;
    follow = cur;
    cur=cur->next;
  }
  new->next=cur;
  if(strcmp(follow->artist,cur->artist)==0 && strcmp(follow->name,cur->name)==0)
    return new;
  follow->next = new;
  return head;
}

void show_songs(struct song *cur){
  int i;
  for(i=0;cur;cur=cur->next)
    printf("%d) %s by %s\n",i,cur->name,cur->artist);
}

struct song *  clear_songs(struct song *cur){
  struct song * temp;
  while(cur){
    temp = cur->next;
    free(cur);
    cur = temp;
  }
  return cur;
}

struct song * remove_song(struct song *cur, char *name){
  struct song * follow, *head = cur;
  while(cur){
    if(strcmp(cur->name,name)==0)
      break;
    follow = cur;
    cur = cur->next;
  }
  if(strcmp(follow->artist,cur->artist)==0 && strcmp(follow->name,cur->name)==0)
    follow->next=cur->next;
  free(cur);
  return head;
}

struct song * shuffle(struct song *cur){
  
}

struct song * find_song(struct song *cur,char *name,char *artist){
  while(cur){
    if(strcmp(name,cur->name)==0 && strcmp(artist,cur->artist)==0)
      break;
    cur=cur->next;
  }
  return cur;
}

struct song * findf_song(struct song *cur, char *artist){
    while(cur){
    if(strcmp(artist,cur->artist)==0)
      break;
    cur=cur->next;
  }
  return cur;
}
