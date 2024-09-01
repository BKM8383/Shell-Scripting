#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
int main() {
	char buf[100];
	int a=mkdir("fol1",0777);
	int b=open("fol1/bkm.txt",O_CREAT | O_WRONLY);
	int x=open("fol1/bkm.txt",O_WRONLY);
	write(x,"hello world",100);
	close(x);
	int aa=open("fol1/bkm.txt",O_RDONLY);
	read(aa,buf,100);
	close(aa);
	int c=mkdir("fol2",0777);
	int bb=open("fol2/bkm.txt",O_CREAT | O_WRONLY);
	write(bb,buf,100);
	close(bb);
}

