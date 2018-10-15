struct song{ 
  char name[50];
  char artist[50];
  struct song *next;
};
struct song * add_song(char *name, char *artist,struct song *cur);
void show_songs(struct artist *cur);
void clear_songs();
void remove_song();
struct song * shuffle();
struct song * find_song(char *name,char *artist);
struct song * findf_song(char *artist);
