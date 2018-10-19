#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <time.h>

int main(){
  printf("\n\nLINKED_LIST\n\n");
  struct song * first = NULL;
  first = add_song("please","dumplings",first);
  first = add_song("cat","you",first);
  first = add_song("black","steve",first);
  first = add_song("king","john",first);
  first = add_song("yak","me",first);
  first = add_song("wonderful dumplings","michael jackson",first);
  first = add_song("blehhh","elton",first);

  printf("\nshowing songs\n");show_songs(first);
  printf("\nshowing dumplings' songs\n"); showa_songs(first,"dumplings");

  struct song * x;
  printf("\nShuffling\n");
  x = shuffle_songs(first); 
  printf("%s by %s\n",x->name,x->artist);

  printf("\nFinding cat by you\n"); 
  x = find_song(first,"cat","you");
  printf("%s by %s\n",x->name,x->artist);

  printf("\nFinding first song by me\n"); 
  x = findf_song(first,"me");
  printf("%s by %s\n",x->name,x->artist);

  printf("\nremoving black by steve\n");remove_song(first,"black","steve");
  printf("\nremoving king by john\n");remove_song(first,"king","john");
  printf("\nshowing songs\n");show_songs(first);

  printf("\nclearing\n");first = clear_songs(first);
  printf("\nshowing songs\n");show_songs(first);


  printf("\n\nLIBRARY\n\n");
  srand(time(NULL));
  struct song * temp;
  struct song * library[27];
  int i;
  for(i=0;i<27;i++)
  	library[i] = NULL;

  printf("\nADDING SONGS\n");
  add(library,"please","dumplings");
  add(library,"cat","you");
  add(library,"black","steve");
  add(library,"king","john");
  add(library,"yak","me");
  add(library,"wonderful dumplings","michael jackson");
  add(library,"blehhh","elton");
  add(library,"sick","seal");
  add(library,"under the sea","jesus");
  add(library,"apple","your neighbor");
  add(library,"flaking","o");
  add(library,"god","pops");
  add(library,"hello","emily");
  add(library,"idiots","wood");
  add(library,"jump","gun");
  add(library,"love","chain");
  add(library,"mom","umpire");
  add(library,"none","dumplings");
  add(library,"operator","zap");
  add(library,"@#@@()!","dumplings");
  add(library,"dermis","23");
  add(library,"please","!!!!!");
  printf("\nsonglist: \n"); print_lib(library);

  printf("\nShowing artist with names beginning with d\n");print_char(library,"d");
  printf("Showing artist with names beginning with n\n");print_char(library,"n");
  printf("Showing artist with names beginning with z\n");print_char(library,"z");
  printf("Showing artist with names beginning with a\n");print_char(library,"a");

  printf("\nShowing songs by dumplings\n"); print_artist_song(library,"dumplings");
  printf("Showing songs by zap\n"); print_artist_song(library,"zap");
  printf("Showing songs by gun\n"); print_artist_song(library,"fun");
  printf("Showing songs by steve\n"); print_artist_song(library,"steve");

  printf("\nFinding artists\n");
  printf("finding artist: steve -> "); find_artist(library,"steve");
  printf("finding artist: john -> "); find_artist(library,"john");
  printf("finding artist: george -> "); find_artist(library,"george");
  printf("finding artist: man -> "); find_artist(library,"man");

  printf("\nFinding Songs\n");
  printf("finding love by chain\n");temp = fsong(library,"love","chain"); printf("%s by %s\n",temp->name,temp->artist);
  printf("finding king by john\n");temp = fsong(library,"king","john"); printf("%s by %s\n",temp->name,temp->artist);
  printf("finding blehhh by elton\n");temp = fsong(library,"blehhh","elton"); printf("%s by %s\n",temp->name,temp->artist);
  printf("finding sick by seal\n");temp = fsong(library,"sick","seal"); printf("%s by %s\n",temp->name,temp->artist);

  printf("\nShuffling: \n");
  temp = shuffle(library); printf("GOT %s by %s\n",temp->name,temp->artist);
  temp = shuffle(library); printf("GOT %s by %s\n",temp->name,temp->artist);
  temp = shuffle(library); printf("GOT %s by %s\n",temp->name,temp->artist);
  temp = shuffle(library); printf("GOT %s by %s\n",temp->name,temp->artist);

  printf("\nDeleting Songs\n");
  printf("deleting song flaking by o\n"); del(library,"o","flaking"); 
  printf("deleting song none by dumplings\n"); del(library,"dumplings","none"); 
  printf("deleting song idiots by wood\n"); del(library,"wood","idiots"); 
  printf("deleting song mom by umpire\n"); del(library,"umpire","mom"); 
  printf("\nsonglist: \n"); print_lib(library);

  printf("\nClearing list\n"); clear(library);
  printf("\nsonglist: \n"); print_lib(library);

  return 0;
}
