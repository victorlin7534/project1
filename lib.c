#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"

void clear(struct song * library[]){
	int i;
	for(i=0;library[i];i++)
		clear_songs(library[i]);
}

void delete(){

}

struct song * shuffle(){

}

void print_lib(struct song * library[]){
	int i;
	for(i=0;library[i];i++){
		if(i==26)
			printf("%s\n","special chars");
		else 
			printf("%c\n",i);
		show_songs(library[i]);
	}
}

void print_artist_song(){

}

void print_letter(){

}

void find_artist(){

}

struct song * fsong(){

}

void add(){

}