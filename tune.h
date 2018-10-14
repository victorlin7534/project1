struct song{ 
  char name[50];
  char artist[50];
  struct song *next;
};
void add_song(char *name, char *artist);//creates artist if not found in lib
void show_songs(char *name, struct artist *library);
void clear_songs();
void remove_song();
struct song * shuffle();
struct song * find_song(char *name,char *artist);
struct song * findf_song(char *artist);