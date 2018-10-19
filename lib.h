#ifndef LIB_H
#define LIB_H
void clear(struct song * library[]);
void del(struct song * library[],char *artist, char *name);
struct song * shuffle(struct song * library[]);
void print_lib(struct song * library[]);
void print_artist_song(struct song * library[],char *artist);
void print_char(struct song * library[],char *c);
void find_artist(struct song * library[], char *artist);
struct song * fsong(struct song * library[], char *name, char *artist);
void add(struct song * library[], char *name, char *artist);
#endif
