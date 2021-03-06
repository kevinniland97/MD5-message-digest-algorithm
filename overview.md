# MD5 Message Digest Algorithm
 _4th year Theory of Algorithms project. An application written in C that takes in a user input/file and calculates the MD5 hash digest of the user input/file._
 
 ### Project Statement
 _You must write a program in the C programming language that calculates the MD5 hash digest of an input. The algorithm is specified in the Request For Comments 1321 document supplied by the Internet Engineering Task Force. The only pre-requisite is that your program performs the algorithm — you are free to decide what input the algorithm should be performed on. I suggest you allow the user to input some free text or a filename via the command line._
 
 ### Developer
* Kevin Niland

---

 ## Introduction
 This section provides an introduction to the repository and code.
 
 ### Repository
 This repository contains the following directories and files:
 * [images](https://github.com/kevinniland97/MD5-message-digest-algorithm/tree/master/images) - Contains images used to help aid in the explanation of certain parts of the MD5 algorithm and the accompanying code.
 * [md5](https://github.com/kevinniland97/MD5-message-digest-algorithm/tree/master/md5) - The main directory of the repository. Contains: 
   * [files](https://github.com/kevinniland97/MD5-message-digest-algorithm/tree/master/md5/files) directory, which contains files with varying different letters and strings (most taken from the RFC 1321 document's test suites).
   * [md5.c](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/md5/md5.c), the C file containing all the code used to implement the MD5 message digest algorithm.
   * [md5.exe](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/md5/md5.exe), a pre-compiled version of md5.c (can only be run on a Windows system - the md5.c file must be compiled using '[make].(https://www.tutorialspoint.com/unix_commands/make.htm)', which is typically used to build executable programs and libraries from source code (mainly on Unix systems).
   * [user_input.txt](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/md5/user_input.txt), which is used to store a user's input.
   
A short screencast of the application being demoed is available [here](https://www.youtube.com/watch?v=ghIuf0bnVhw&t=124s).

---

## Running the program
This section details how to download, compile, and run the code contained in this repository for both Windows and Unix based systems.

### Windows
#### Compiler
To compile a C program on a Windows platform, please follow the below installation instructions. If you already have GCC installed on Windows, skip to the next section 'How to run'.

##### GCC installation instructions
This section provides a quick overview of setting up a compiler for C programs on Windows. For a more robust walkthrough, please visit [How to Install the Latest GCC on Windows](https://preshing.com/20141108/how-to-install-the-latest-gcc-on-windows/).

* **Install Cygwin** Download the [Cygwin installer](https://cygwin.com/install.html). Run either the 32 bit or 64 bit version depending on your version of Windows. Cygwin’s setup wizard will walk you through a series of steps. When you reach the “Select Packages” step, don’t bother selecting any packages yet. Just go ahead and click Next. We’ll add additional packages from the command line later. Move the Cygwin installer to a folder of your choice (it'll be needed later to install packages).
* **Install Required Cygwin Packages** Next, you’ll need to add several packages to Cygwin. Open a command prompt, navigate to the folder where the Cygwin installer is located, and run the following command:
   
   `C:\path\to\folder-with-installer>setup-x86_64.exe -q -P wget -P gcc-g++ -P make -P diffutils -P libmpfr-devel -P libgmp-devel -P libmpc-devel`
   
   A window will pop up and download all the required packages along with their dependencies.
   
* **Download, Build and Install the Latest GCC** Open a Cygwin terminal, either from the Start menu or by running Cygwin.bat from the Cygwin installation folder. To download and extract the latest GCC source code, enter the following commands in the Cygwin terminal:

   `wget http://ftpmirror.gnu.org/gcc/gcc-4.9.2/gcc-4.9.2.tar.gz`
   `tar xf gcc-4.9.2.tar.gz`

   You should now be able to compile C programs using GCC. If you have any issues, please refer to the above guide for installing GCC on Windows.

##### How to run
* Download the project or clone the repository using `git clone https://github.com/kevinniland97/Calculation-of-the-MD5-hash-digest-of-an-input`.
* Navigate to the project directory and set your working directory to the `md5` directory: `../Calculation-of-the-MD5-hash-digest-of-an-input/md5 $`.
* A compiled version of the program is already provided. If you want to compile the program yourself, use the command `gcc -o md5 .\md5.c`.
* Once compiled, simply enter the name of the compiled program on the command line to run it: `.\md5`. You can also gain extra information on the program by including the following command line arguments when running the compiled program. Each command can be ran by entering in the shorthand of the command, shown below:
   * `.\md5 --help \ --h` - This will display information on how to run the program, and display all command line arguments the user can specify. 
   * `.\md5 --test \ --t` - This will allow you to test the hash of a file to see if it's correct.
   * `.\md5 --test-suites \ --t-s` - This will display all messages and their accompanying hash value to the screen.
   * `.\md5 --version \ --v` - This will display the current version of program.
   * `.\md5 --file \ --f` - This will allow you to hash a file from the command line.
   * `.\md5 --string --s` - This will allow you to hash a string from the command line.
   * `.\md5 --print-file \ --p-f` - This will display the contents of file.
* Once ran, the user will be presented with a menu. They have the option of specifying a file to hash (starter files are located in the `files` directory), specifying a string to hash, or to exit the program.
   1. To hash a file, choose option 1 and then enter the path to the file (to use one of the files provided, enter `files/name-of-file.txt` when prompted (for example, to hash the file containing the letters of the alphabet, enter `files/alphabet.txt` when prompted).
   2. To hash a string, choose option 2 and enter a string (currently only supports entering one word, not a sentence). This string will 
   then be written to file, at which point it will be automatically hashed and the result will be printed out.
   3. To exit the program, choose option 3.
* Once a file or string is chosen to hash, the output of the hash will be printed to screen. As the starter files contain test suites defined on page 21 of the [MD5 Message-Digest Algorithm memo](https://tools.ietf.org/html/rfc1321), the output can be quickly verified. Alternatively, if the user wishes to specify their own string/message, the output can be verified using the [Online MD5 Hash Generator & SHA1 Hash Generator](http://onlinemd5.com/).

### Linux-based Operating System (Redhat, SUSE Linux, Ubuntu, etc.)
#### Compiler (GCC and make)
Most Linux-based Operating Systems include a compiler as a default application. Commonly, it's GCC. If GCC isn't installed, please follow the instructions in the next section, otherwise skip ahead. You can also compile the program using `make`.

#### Using GCC
This section provides a quick overview of setting up a compiler for C programs on a Linux-based Operating System. These instructions should work for most Linux-based Operating Systems. For a more robust walkthrough, please visit [How to Install GCC Compiler](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/):

* **Prerequisites**
To able to add new repositories and install packages on your system, you must be logged in as root or user with sudo privileges.

* **Installing GCC** Start by updating the packages list using `sudo apt update`. Then, install the build-essential package by typing `sudo apt install build-essential`. You may also want to install the manual pages about using GNU/Linux for development with `sudo apt-get install manpages-dev`. GCC should now be installed on you system

#### Using make
The purpose of the make utility is to determine automatically which pieces of a large program need to be recompiled, and issue the commands to recompile them. We will first need to create a makefile. The makefile is read by the make command, which determines the target file or files that are to be made and then compares the dates and times of the source files to decide which rules need to be invoked to construct the target. For this program, using GCC is enough. However, if you wish to play around with it yourself, and make different header files for different components of the program, then using `make` will be the better option. 

When you download/clone this project to your local machine, navigate to the `md5` directory and create a file called `MakeFile`. Inside this file, copy the following code:

```
all: # Target
   gcc -o md5 .\md5.c
```

Now you're all set up to use either GCC or `make` to compile and run the program.

##### How to run
* Download the project or clone the repository using `git clone https://github.com/kevinniland97/Calculation-of-the-MD5-hash-digest-of-an-input`.
* Navigate to the project directory and set your working directory to the `md5` directory: `../Calculation-of-the-MD5-hash-digest-of-an-input/md5 $`.
* To compile using GCC, run the command `gcc -o md5 .\md5.c` inside this directory. 
* To compile using `make`, run the command `make`.
* Once compiled, simply enter the name of the compiled program on the command line to run it: `.\md5`. You can also gain extra information on the program by including the following command line arguments when running the compiled program. Each command can be ran by entering in the shorthand of the command, shown below:
   * `.\md5 --help \ --h` - This will display information on how to run the program, and display all command line arguments the user can specify. 
   * `.\md5 --test \ --t` - This will allow you to test the hash of a file to see if it's correct.
   * `.\md5 --test-suites \ --t-s` - This will display all messages and their accompanying hash value to the screen.
   * `.\md5 --version \ --v` - This will display the current version of program.
   * `.\md5 --file \ --f` - This will allow you to hash a file from the command line.
   * `.\md5 --string --s` - This will allow you to hash a string from the command line.
   * `.\md5 --print-file \ --p-f` - This will display the contents of file.
* Once ran, the user will be presented with a menu. They have the option of specifying a file to hash (starter files are located in the `files` directory), specifying a string to hash, or to exit the program.
   1. To hash a file, choose option 1 and then enter the path to the file (to use one of the files provided, enter `files/name-of-file.txt` when prompted (for example, to hash the file containing the letters of the alphabet, enter `files/alphabet.txt` when prompted).
   2. To hash a string, choose option 2 and enter a string (currently only supports entering one word, not a sentence). This string will 
   then be written to file, at which point it will be automatically hashed and the result will be printed out.
   3. To exit the program, choose option 3.
* Once a file or string is chosen to hash, the output of the hash will be printed to screen. As the starter files contain test suites defined on page 21 of the [MD5 Message-Digest Algorithm memo](https://tools.ietf.org/html/rfc1321), the output can be quickly verified. Alternatively, if the user wishes to specify their own string/message, the output can be verified using the [Online MD5 Hash Generator & SHA1 Hash Generator](http://onlinemd5.com/).

---

## Testing
This implementation of the MD5 algorithm supports the ability to test the hash of a file or a string. The hash is checked against an array that contains hashes for several different messages. Testing is performed by using the command `--test`. The user can then choose to check the hash of a file or a string by following the test command with either `--file` or `--string`.

### Testing a file or a string
The easiest way I found to test the hash of a file or a string was to first read in the file or string and perform the MD5 algorithm on it. The value of this hash would then be written to file. The contents of the file would then be checked to see if it is contained in the array of hashes shown below. As can be seen, this array is quite limited at the moment and mainly contains the hash values of the messages found in the RFC 1321 document. This array will be expanded on in the future but feel free to add the relevant hash value for any message you see fit.

### Checking the hash of a file or a string
![checkhash](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/checkhash.PNG)

The above piece of code checks if the hash value in the file is contained in the array of hashes. 

### Array of hashes
Below are the hashes for all messages currently supported:

|   Message   |  Hash Value  |    Passes?     |
|:-----------:|:------------:|:------------:|
| a     |  d41d8cd98f00b204e9800998ecf8427e |      NO (Incorrect hash returned)        |
| abc |  0cc175b9c0f1b6a831c399e269772661 |    YES (Correct hash returned)          |
| md5 |  900150983cd24fb0d6963f7d28e17f72 |    YES (Correct hash returned)          |
| hash |  0800fc577294c34e0b28ad2839435945 |     YES (Correct hash returned)         |
| hello |  5d41402abc4b2a76b9719d911017c592 |     YES (Correct hash returned)         |
| message |  78e731027d8fd50ed642340b7c9a63b3 |    YES (Correct hash returned)          |
| digest |  c10f77963a2b21079156a0e5c5a4bb3c |     YES (Correct hash returned)         |
| message digest |  f96b697d7cb7938d525a2f31aaf161d0 |    YES (Correct hash returned)          |
| abcdefghijklmnopqrstuvwxyz |  c3fcd3d76192e4007dfb496cca67e13b |     YES (Correct hash returned)         |
| 123 |  202cb962ac59075b964b07152d234b70 |     YES (Correct hash returned)         |
| ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 |  8D93AD635E2C8C822D796BD8726EEF6B | NO (Incorrect hash returned) |
| 12345678901234567890123456789 |  04CC4AB7C18F13B2FD594B52DFDEDFFF |NO (Incorrect hash returned) |

_From this, it can be seen that messages containing numbers won't always be hashed correctly all the time with this implementation_

---

## Algorithm
This section gives an overview and explaination of MD5 and how this particular verion of it was implemented.

### MD5 overview
From the MD5 wikipedia [[1]](https://en.wikipedia.org/wiki/MD5), _"MD5 processes a variable-length message into a fixed-length output of 128 bits. The input message is broken up into chunks of 512-bit blocks (sixteen 32-bit words); the message is padded so that its length is divisible by 512. The padding works as follows: first a single bit, 1, is appended to the end of the message. This is followed by as many zeros as are required to bring the length of the message up to 64 bits fewer than a multiple of 512. The remaining bits are filled up with 64 bits representing the length of the original message, modulo 2^64."_

### MD5 Steps
There are five steps involved in computing the message digest of the message, which this section will discuss.

#### Step 1 - Append Padding Bits (Section 3.1 of RFC 1321 document) [[2]](https://tools.ietf.org/html/rfc1321)
The message is "padded" (extended) so that its length (in bits) is congruent to 448, modulo 512. Padding is always performed, even if the length of the message is already congruent to 448, modulo 512. Padding is performed as follows: a single "1" bit is appended to the message, and then "0" bits are appended so that the length in bits of the padded message becomes congruent to 448, modulo 512. In all, at least one bit and at most 512 bits are appended.

#### Step 2 - Append Length (Section 3.2 of RFC 1321 document) [[2]](https://tools.ietf.org/html/rfc1321)
A 64-bit representation of b (the length of the message before the padding bits were added) is appended to the result of the previous 
step. In the unlikely event that b is greater than 2^64, then only the low-order 64 bits of b are used. At this point the resulting 
message (after padding with bits and with b) has a length that is an exact multiple of 512 bits. Equivalently, this message has a length 
that is an exact multiple of 16 (32-bit) words. Let M[0 ... N-1] denote the words of the resulting message, where N is a multiple of 16.

#### Step 3 - Initialize MD Buffer (Section 3.3 of RFC 1321 document) [[2]](https://tools.ietf.org/html/rfc1321)
A four-word buffer (A, B, C, D) is used to compute the message digest. Here each of A, B, C, D is a 32-bit register. These registers are
initialized to the following values in hexadecimal, low-order bytes first):

|  Word   |  Hex Values  | 
|:-------:|:------------:|
| word A: |  01 23 45 67 | 
| word B: |  89 ab cd ef | 
| word C: |  fe dc ba 98 | 
| word D: |  76 54 32 10 |

#### Step 4 - Process Message in 16-Word Blocks (Section 3.4 of RFC 1321 document) [[2]](https://tools.ietf.org/html/rfc1321)
Define four auxiliary functions that each take as input three 32-bit words and produce as output one 32-bit word:

![functions](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/functions_wiki.PNG)

#### Step 5 - Output (Section 3.5 of RFC 1321 document) [[2]](https://tools.ietf.org/html/rfc1321)
The message digest produced as output is A, B, C, D. That is, we begin with the low-order byte of A, and end with the high-order byte of
D.

![output](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/output.PNG)

#### Diagram of MD5 Operation
<img src="https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/security-md5_hashing.jpg" width="40%">   <img src="https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/md5_op.png" width="40%">

The above diagrams showcase what happens to an input when run against the MD5 message-digest algorithm. Even though the above messages are quite similar, even a slight difference can drastically change the hash value.

The diagram on the right shows how the auxiliary function F is applied to the four buffers (A, B, C and D), using message word Mi and constant Ki. The item "<<<s" denotes a binary left shift by s bits.

### Implementation
This section will give a quick explanation of the most significant and important parts of the program:
<br/>
![constants](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/constants.PNG)
<br/>
The array K contains the pre-defined hash values used for transform rounds 1 (FF), 2 (GG), 3 (HH), and 4 (II)...

![rotleft](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/rotleft.PNG)
<br/>
ROTLEFT pushes bits off to the left 'c' places, however they are pushed in on the right again (loop around)...

![functions](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/functions.PNG)
<br/>
Four auxiliary functions that each take as input three 32-bit words and produce as output one 32-bit word. In each bit position F acts as a conditional: if X then Y else Z. The functions G, H, and I are similar to the function F, in that they act in "bitwise parallel" to produce their output from the bits of X, Y, and Z, in such a manner that if the corresponding bits of X, Y, and Z are independent and unbiased, then each bit of G(X,Y,Z), H(X,Y,Z), and I(X,Y,Z) will be independent and unbiased. 

![functions2](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/functions2.PNG)
<br/>
FF, GG, HH, and II transformations for rounds 1, 2, 3, and 4. Rotation is separate from addition to prevent recomputation.

![md5_init](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/md5_init.PNG)
<br/>
md5_init starts the MD5 operation. It loads magic initialization constants to set state values. 

![md5_hash1](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/md5_hash1.PNG)
<br/>
Start of md5_hash. Variables for storing previous hash values, keeping track of the number of bits in file, and for assigning initial values to temp variables in memory.

![md5_hash3](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/md5_hash3.PNG)
![md5_hash4](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/md5_hash4.PNG)
<br/>
The manual padding operations performed are done as follows:
* If size is equal to 64, continue - no padding needed
* If size is greater than 56 and less than 64, not enough space for 64 bits at end of file
* If size is less than 56 and greater than 0, pad file at the end
* If size is equal to 0 and pad is equal to 0, end of file - file was a size of multiple 64
* If size is equal to 0 and pad is equal to 1, end of file - padding started in previous block, pad file with all zeros
     
![states_update](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/states_update.PNG)
<br/>
After the four transform rounds, we update the states after and then perform a final update on the value.

---

## Complexity
This section will give an analysis of the MD5 algorithm, including the complexity of the algorithms that attempt to reverse it (algorithms that attempt to find an input for which the MD5 algorithm produces a given output).

### Algorithm
In cryptography, MD5 (Message-Digest algorithm) is a widely used cryptographic hash function with a 128-bit hash value. As an Internet standard (RFC 1321), MD5 has been employed in a wide variety of security applications, and is also commonly used to check the integrity of files. An MD5 hash is typically expressed as a 32 digit hexadecimal number. MD5 is a strengthened version of MD4. Like MD4, the MD5 hash was invented by Professor Ronald Rivest of MIT.

### Padding
Padding is any of a number of distinct practices which all include adding data to the beginning, middle, or end of a message prior to encryption [[19]](https://en.wikipedia.org/wiki/Padding_(cryptography)). Bit padding can be applied to messages of any size. [[13]](https://stackoverflow.com/questions/54606597/is-md5s-padding-the-same-that-sh256). In MD5, the message is "padded" (extended) so that its length (in bits) is congruent to 448, modulo 512. That is, the message is extended so that it is just 64 bits shy of being a multiple of 512 bits long. Padding is always performed, even if the length of the message is already congruent to 448, modulo 512. Padding is performed as follows: a single "1" bit is appended to the message, and then "0" bits are appended so that the length in bits of the padded message becomes congruent to 448, modulo 512. In all, at least one bit and at most 512 bits are appended. 

A 64-bit representation of b (the length of the message before the padding bits were added) is appended to the result of the previous step. In the unlikely event that b is greater than 2^64, then only the low-order 64 bits of b are used. At this point the resulting message (after padding with bits and with b) has a length that is an exact multiple of 512 bits. Equivalently, this message has a length that is an exact multiple of 16 (32-bit) words. Let M[0 ... N-1] denote the words of the resulting message, where N is a multiple of 16. [[2]](https://tools.ietf.org/html/rfc1321)

### Security/Algorithms that attempt to reverse it
#### Overview
The security of the MD5 hash function is severely compromised. A collision attack, which is an attack on a cryptographic hash that tries to find two inputs producing the same hash value [[17]](https://en.wikipedia.org/wiki/Collision_attack), exists that can find collisions within seconds on a computer with a 2.6 GHz Pentium 4 processor (complexity of 224.1). Further, there is also a chosen-prefix collision attack that can produce a collision for two inputs with specified prefixes within seconds, using off-the-shelf computing hardware (complexity 239) [[18]](https://en.wikipedia.org/wiki/Collision_attack#Chosen-prefix_collision_attack). These hash and collision attacks have been demonstrated in the public in various situations, including colliding document files and digital certificates. [[1]](https://en.wikipedia.org/wiki/MD5#Security)

In 1996, a flaw was found in the design of MD5 and was not deemed a major weakness at the time. In 2004, it was shown that MD5 is not collision-resistant which doesn't make it suitable for applications like SSL certificates or digital signatures, which rely collision-resitant algorithms for security.

#### MD5 for passwords
Using salted MD5 for passwords is not recommended. Not because of MD5's cryptographic weaknesses, but because it is fast. This means that an attacker can try billions of passwords per second on a single GPU. [[16]](https://security.stackexchange.com/questions/19906/is-md5-considered-insecure)

#### MD5 for file integrity
Using MD5 for file integrity may or may not be a practical problem, depending on the exact usage scenario.

As discussed, the attacks against MD5 are collision attacks, not pre-image attacks. This means an attacker can produce two files with the same hash, if they have control over both of them but they can't match the hash of an existing file they didn't influence. [[16]](https://security.stackexchange.com/questions/19906/is-md5-considered-insecure)

The main take from analysing the security of the MD5 algorithm is that is shouldn't be used. You should not use elementary cryptographic algorithms, but ___protocols___ which assemble several algorithms so that they collectively provide some security features (e.g. transfer of data with confidentiality and integrity). For storing passwords (more accurately, password verification tokens), don't make a custom mix of a hash function and salts; use a construction which has been studied specifically for such a use. If a hash function is desired, SHA-256 is much more preferable. [[16]](https://security.stackexchange.com/questions/19906/is-md5-considered-insecure)

### Time Complexity
MD5 processes data in blocks of 512 bits, doing 4 rounds of some internal operation (sometimes it may add one more block to the data - "the message is padded so that its length is divisible by 512"). So, if n is bytes, it does roundup(8*n/512) operations which is O(n) in Uniform Cost model (real memory hierarchy has nonuniform access cost for different layers/sizes) [[14]](https://stackoverflow.com/questions/43625569/time-complexity-of-md5).

### Applications of MD5 
MD5 digests have been widely used in the software world to provide some assurance that a transferred file has arrived intact. For example, file servers often provide a pre-computed MD5 (known as md5sum) checksum for the files, so that a user can compare the checksum of the downloaded file to it. As discussed, it is easy to generate MD5 collisons so it's possible create a second file with the same checksum as the first, meaning this technique cannot protect against some forms of malicious tampering. 

### Can the MD5 hash be reversed?
In general, hash functions are not reversible [[20]](https://www.johndcook.com/blog/2019/01/24/reversing-an-md5-hash/). MD5 is a 128-bit hash, and so it maps any string, no matter how long, into 128 bits. Given some context, however, it may be possible to reverse a hash. For example, if the context is a short, weak password, it is possible to determine the what text was hashed. If you hash the message "password", the hash of this will be 5f4dcc3b5aa765d61d8327deb882cf99. A web search for this will return approximately 21,000 results. One of the first results will return the original message, "password". While this is not a "true" reversal of the algorithm, this shows how cryptographically insecure the MD5 message-digest algorithm is and why it is not used as much anymore.

---

## Research, Project Overview, and Developer Diary
* **Week 1:** When we first received the project spec, I proceeded to research the MD5 message-digest algorithm through various different sources, such as the Request For Comments 1321 document [[2]](https://tools.ietf.org/html/rfc1321) and from watching videos based on it [[4]](https://www.youtube.com/watch?v=53O9J2J5i14), [[5]](https://www.youtube.com/watch?v=-uRpRMpvdm0). My initial commits to this repository comprised of code taken from the intital videos put up by our lecturer, Ian McLoughlin, and some simple functionality written in C that would be implemented at a later date, such as reading from a file and taking in a user's input. I also started to set up my own Virtual Machine instance on Google Cloud and refamiliarized myself with VI through it.
* **Week 2:** In this week a video on the SHA Standard was made available to us, which gave us an overview of the SHA specification. In this video, our lecturer went through the Secure Hash Standard document [[8]](https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.180-4.pdf) published by the National Institute of Standards and Technology. Further reading included researching and discerning the differences between the SHA and MD5 hash algorithms, from various resources [[9]](https://stackoverflow.com/questions/2948156/algorithm-complexity-security-md5-or-sha1), [[10]](https://www.geeksforgeeks.org/difference-between-md5-and-sha1/), [[11]](https://security.stackexchange.com/questions/19705/is-sha1-better-than-md5-only-because-it-generates-a-hash-of-160-bits). Some differences include MD5 is faster than SHA, SHA is more secure than MD5, MD5 can have a bit length of 128 while SHA can have a bit length of 160. They also disccused how MD5 is considered broken in the sense that you can generate a collision and thus should not be used for any security applications. SHA is not known to be broken and is believed to be secure. I also researched how each generated a hash of a message.
* **Week 3:** In this week a video on C bit operations was made available to us and I coded up the file from this. I proceeded to research bitwise operators in C to get a better understanding of how each worked [[12]](https://stackoverflow.com/questions/3701550/what-is-the-purpose-of-padding-an-md5-message-if-it-is-already-the-right-length). I then re-read the suggested documents on MD5 and SHA [[2]](https://tools.ietf.org/html/rfc1321), [[8]](https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.180-4.pdf) due to the fact that my understanding of each would be improved.

![bitwise](https://github.com/kevinniland97/MD5-message-digest-algorithm/blob/master/images/bitwise.PNG)<br/>
[[6]](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/), [[7]](https://en.wikipedia.org/wiki/Bitwise_operations_in_C)

* **Week 4:** In this week a video on the functions and constants in SHA was made available to us and I coded up the file from this.
* **Week 5:** In this week a video on padding a message in C was made available to us and I coded up the file from this. For further research and reading, I then looked up the differences between the padding in MD5 and SHA, both from the relative documents on each and from other sources. One major difference would be the fact that when you add the message length (after padding), MD5 uses little-endian but SHA256 uses big-endian. This week is where the main project was properly started. I began with the padding as I coded up that aspect of it in a similar fashion to that of padding shown to us in the padding video.
* **Week 6:** In this week videos on unions in C and merging the padding with hashing was made available to us and I coded up the files from these. I then proceeded to implement a union into my main MD5 file, similar to that shown in the unions in C video.
* **Week 7:** In this week videos on the hash function and finalising the padding with hashing was made available to us and I coded up the files from these.
* **Week 8:** In this week a video on testing and refactoring the entire code done so far was made available to us. From viewing this, it was evident that coding up the SHA specification in this way was beneficial to us as it allowed us to get a firm grasp on each part before moving onto the next part.
* **Week 9 - 11:** Week 9 - 11 was mainly comprised of finsihing off the project and writing up documentation.

---

## References
* [1] [MD5](https://en.wikipedia.org/wiki/MD5) - Used to discuss various aspects of the MD5 algorithm, such as an overview of it and it's security.
* [2] [Request For Comments 1321 document](https://tools.ietf.org/html/rfc1321) - Used to help implement this version of the MD5 algorithm.
* [3] [Sourav Punoriyar's MD5 implementation in C](https://github.com/Souravpunoriyar/md5-in-c) - Used as a reference to help implement certain aspects of this implementation, such as padding and printing the hash value.
* [4] [Network Security - MD5 Algorithm (Sundeep Saradhi Kanthety)](https://www.youtube.com/watch?v=53O9J2J5i14) - Video watched during research portion to help gain a better understanding of the MD5 hash algorihtm. 
* [5] [Message Digest Algorithm: MD5 (DrVikasThada)](https://www.youtube.com/watch?v=-uRpRMpvdm0) - Video also watched during research portion to help gain a better understanding of the MD5 hash algorihtm. This video contains diagrams to help visualize the operation of the algorithm. 
* [6] [Bitwise Operators in C/C++](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/) - Used during research portion to help gain a better understanding of the bitwise operators in C, which were used heavily in the implemenation of the algorithm.
* [7] [Bitwise operations in C](https://en.wikipedia.org/wiki/Bitwise_operations_in_C) - Wikipedia page on the bitwise operations in C, which was also helpful in understanding the operators further.
* [8] [Secure Hash Standard PDF](https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.180-4.pdf) - Document used during video lectures in the implemenation of SHA-256.
* [9] [Algorithm Complexity & Security: MD5 or SHA1](https://stackoverflow.com/questions/2948156/algorithm-complexity-security-md5-or-sha1) - Used as a reference on the differences between MD5 and SHA1. Helpful in seeing the exact properties of MD5.
* [10] [Difference between MD5 and SHA1](https://www.geeksforgeeks.org/difference-between-md5-and-sha1/) - Also used to determine the differences between MD5 and SHA.
* [11] [Is SHA1 better than MD5 only because it generates a hash of 160 bits?](https://security.stackexchange.com/questions/19705/is-sha1-better-than-md5-only-because-it-generates-a-hash-of-160-bits) - Used as a reference on the issue of collision with MD5.
* [12] [What is the purpose of padding an md5 message if it is already the right length?](https://stackoverflow.com/questions/3701550/what-is-the-purpose-of-padding-an-md5-message-if-it-is-already-the-right-length)
* [13] [Is md5's padding the same that sh256?](https://stackoverflow.com/questions/54606597/is-md5s-padding-the-same-that-sh256) - A discussion on the padding in MD5 and SHA-256.
* [14] [Time Complexity of MD5](https://stackoverflow.com/questions/43625569/time-complexity-of-md5) - A discussion on the time complexity of MD5.
* [15] [Is it possible to decrypt MD5 hashes?](https://stackoverflow.com/questions/1240852/is-it-possible-to-decrypt-md5-hashes) - Used as a reference on whether it's possible to decrypt MD5 hashes.
* [16] [Is MD5 considered insecure?](https://security.stackexchange.com/questions/19906/is-md5-considered-insecure) - Used as a reference on a discussion on the insecurity of MD5.
* [17] [Collision Attack](https://en.wikipedia.org/wiki/Collision_attack) - Used to briefly discuss a collision attack.
* [18] [Chosen-prefix Collision Attack](https://en.wikipedia.org/wiki/Collision_attack#Chosen-prefix_collision_attack) - Used to briefly discuss a chosen-prefix collision attack.
* [19] [Padding](https://en.wikipedia.org/wiki/Padding_(cryptography))
* [20] [Reversing an MD5 Hash](https://www.johndcook.com/blog/2019/01/24/reversing-an-md5-hash/)
* Several videos done by [Ian McLoughlin](https://github.com/ianmcloughlin). [Repository for videos](https://github.com/ianmcloughlin/sha256)
