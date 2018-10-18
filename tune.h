#ifndef TUNE_H
#define TUNE_H
struct song{ 
  char name[50];
  char artist[50];
  struct song *next;
};
struct song * add_song(char *name, char *artist,struct song *cur);
void show_songs(struct song *cur);
struct song * clear_songs(struct song *cur);
struct song * remove_song(struct song *cur, char *name);
struct song * shuffle(struct song *cur);
struct song * find_song(struct song *cur,char *name,char *artist);
struct song * findf_song(struct song *cur, char *artist);
#endif
