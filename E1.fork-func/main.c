#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t pid;  // fork() dönüş değişkeni
	
	pid = fork(); // yeni process oluşturma
		
	/*
		Yeni oluşturulan child process'in ID'si 0, parent process ise		0'dan başka bir değer alır
	*/
	if (pid == 0)
		printf("child proc pid:%d\n", pid);
	else 
		printf("parent proc pid:%d\n", pid);
	

	return 0;
}
