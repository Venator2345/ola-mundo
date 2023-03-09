void write(const char* str) {
	int size = 0;
	// pegar tamanho da string
	while(str[size++]);
	
	// exibir a string
	asm(
		"SYSCALL;"
		:
		:"a"(1),"D"(1),"S"(str),"d"(size - 1)
	);
}

int main() {
	write("ola mundo!");
	return 0;
}
