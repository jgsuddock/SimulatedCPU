
#include <stdio.h>
#include <stdint.h>

uint32_t wrongBinToDec (uint32_t bin);

int main(int argc, char const *argv[]) {
	
	uint32_t bob = 0b11010001000011011101000100001101;
	uint32_t me = bob << 6;
	uint32_t you = me >> 27;

	printf("You: %d\n",you);

	// uint32_t bob = 0b00100;
	uint32_t test = 0b01000;
	uint32_t test2 = 8;
	if(test == test2) {
		printf("They are Equal!");
	}
	uint32_t jake = bob & test;
	uint32_t john = bob >> 26;
	uint32_t josh = bob << 1;
	printf("Bob: %d\n",bob);
	printf("John: %d\n",john);
	printf("Josh: %d\n",josh);
	printf("Jake: %d\n",jake);
	uint32_t binary = 12;
	uint32_t second = 8;
	uint32_t result = binary && second;

	printf("Result: %d\n",result);

	// printf( "%d\n", binary);

	// uint32_t decimal = wrongBinToDec(binary);

	// printf( "%d\n", decimal);
	
	return 0;
}

uint32_t pullOpCode (uint32_t funct) {
	uint32_t ans = funct >> 26;
	return ans;
}

uint32_t decToBin (uint32_t dec) {
	uint32_t bin = 0;
	while (dec > 0) {
		dec = dec>>1;
	}

}

uint32_t wrongBinToDec (uint32_t bin) {
	uint32_t dec = 0;
	uint32_t binDig = 0;

	while( bin >= 10 ) {
		binDig = bin % 10;
		dec = dec * 2;
		if( binDig == 1) {
			dec++;
		}
	    bin = bin / 10 ;
	}

	dec = dec * 2;
	if( bin == 1) {
		dec++;
	}

	return dec;
}