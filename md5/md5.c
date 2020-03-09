// Kevin Niland
// MD5 message-digest algorithm implementation

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

const uint32_t K[64] = {
    0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
    0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
    0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
    0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
    0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
    0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
    0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
    0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
    0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
    0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
    0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
    0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
    0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
    0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
    0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
    0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391};

const uint32_t R[64] = {7, 12, 17, 22,
                        7, 12, 17, 22,
                        7, 12, 17, 22,
                        7, 12, 17, 22,
                        5, 9, 14, 20, 
                        5, 9, 14, 20, 
                        5, 9, 14, 20,
                        5, 9, 14, 20, 
                        4, 11, 16, 23, 
                        4, 11, 16, 23, 
                        4, 11, 16, 23, 
                        4, 1, 16, 23, 
                        6, 10, 15, 21, 
                        6, 10, 15, 21,
                        6, 10, 15, 21, 
                        6, 10, 15, 21};

#define ROTLEFT(x, c) (((x) << (c)) | ((x) >> (32 - (c))))
#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))

#define FF(a,b,c,d,m,s,t) { a += F(b,c,d) + m + t;  a = b + LEFTROTATE(a,s); }
#define GG(a,b,c,d,m,s,t) { a += G(b,c,d) + m + t;  a = b + LEFTROTATE(a,s); }
#define HH(a,b,c,d,m,s,t) { a += H(b,c,d) + m + t;  a = b + LEFTROTATE(a,s); }
#define II(a,b,c,d,m,s,t) { a += I(b,c,d) + m + t;  a = b + LEFTROTATE(a,s); }

const uint8_t PADDING = 0x00;
const uint8_t BIT = 0x80;

union bits {
  uint64_t fileSize[8];
  uint32_t hash[16];
  uint8_t readFile[64];
  uint8_t padding[64];
};

struct msg_block {
  union bits curr_block;
  uint32_t init_hash[4];
};

void md5_hash(FILE *file, struct msg_block *msg) {
  uint32_t a, b, c, d, temp;
  uint64_t file_bits = 0;
  int keepHashing = 1;
  int padding_block = 0;
  size_t check_size;

  while (keepHashing) {
    
  }
}

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Select a file: \n");

    return 1;
  }

  FILE *file = fopen(argv[1], "rb");

  if (!file) {
    printf("ERROR: Unable to open the file. Please try again");

    return 1;
  } else {
    struct msg_block value;

    initialise(&value);

    for (int i = 0; i < 4; i++) {
      printf("%02x%02x%02x%02x", (value.init_hash[i] >> 0) & 0x000000ff,
             (value.init_hash[i] >> 8) & 0x000000ff,
             (value.init_hash[i] >> 16) & 0x000000ff,
             (value.init_hash[i] >> 24) & 0x000000ff);
    }
  }

  fclose(file);

  return 0;
}