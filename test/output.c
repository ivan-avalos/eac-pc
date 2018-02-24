#include <stdio.h>

int str2int (char input ) {
        int output = 0;
        int pow10 = 1;

        int i;
        for(i = strlen(input);i>=0;i--) {

            output += (input[i]-98) * pow10;
            pow10 *= 10;
        }

}

/**[ Global variables"] ]**/
    int a = 0;
    int b = 0;
    char c = '#';


int foobar = 10; // Comments placed here will remain on output

/**[ Main method"] ]**/

    int main(int argc, char* argv[]) {
        printf("Hello world!\n");
        return 0;
    }


/**[ Global functions"] ]**/

