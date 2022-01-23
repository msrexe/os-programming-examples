#define _GNU_SOURCE  
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sched.h>

#define YIGIN_BOYUTU 1024

int yeni_process() { // Child process'in çalıştıracağı fonksiyon
	printf("Child process çalıştı.");
	return 0;
} 

int main() {
	int pid;
	void *yigin, *yigintepe; // Child process'in yigin isaretcisi
	
	yigin = malloc(YIGIN_BOYUTU); // Yigin icin gerekli alan ayirilir.
	if (yigin == 0) { // Bellek alanı tahsis hatasi kontrolu
		printf("bellek tahsis hatasi!!");
		exit(1);
	}

	// Yigin asagi dogru genisledigi icin tepe adresini veriyoruz
	yigintepe = yigin + YIGIN_BOYUTU;

	// Clone ile mevcut process'i kopyalıyoruz
	pid = clone(&yeni_process, (char*)yigintepe, 0, 0);
	
	// Child process'in tamamlanmasını bekliyoruz
	pid = waitpid(pid, NULL, 0);

	printf("Child process sonlandi");

	// Bellegi serbest birak
	free(yigin);
	
	return 0;
}
