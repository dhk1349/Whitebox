#include <iostream>
#include "whitebox.h"
using namespace std;
int iterate(int* a);
int main() {
	//unsigned char temp[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	//sr(temp);
	//sr(temp);
//	sr(temp);
	//sr(temp);

	int key[16];
	for (int i = 0;i<16;i++) {
		key[i] = tbox[0][i][0];
		//printf("%x ",key[i]);
	}
	cout << endl;
	bool found = false;
	for (int k = 0;k<16;k++) {
		found = false;
		for (int i = 0; i < 16; i++) {
			if (found == true) break;
			for (int j = 0; j < 16; j++) {
				if (sbox[i][j] == key[k]) {
					printf("%x ",i*16+j );
					key[k] = i * 16 + j;
					found = true;
					break;
				}
			}
		}
	}
	cout << endl;
	sr(key);
	sr(key);
	sr(key);

	for (int i = 0; i < 16; i++) {
		printf("%c ",key[i]);
		if (  i==3|i == 7 | i == 11 | i == 15) {
			cout << endl;
		}
	}
	return 0;
}

int iterate(int* a) {
	int temp[4];
	temp[0] = a[0];
	temp[1] = a[1];
	temp[2] = a[2];
	temp[3] = a[3];
	a[0] = temp[3];
	a[1] = temp[0];
	a[2] = temp[1];
	a[3] = temp[2];
	return 1;
}