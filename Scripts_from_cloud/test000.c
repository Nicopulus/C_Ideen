#include <stdio.h>
#include <dirent.h>

int main(){
	
	DIR *folder;
	
	folder = opendir(".");
	if (folder == NULL){
		puts("Unable to read directory");
		return(1);
	}
	else {
		puts("Directory is opened!");
		puts("But in short will be closed!");
	}
	closedir(folder);
	
	return(0);
}