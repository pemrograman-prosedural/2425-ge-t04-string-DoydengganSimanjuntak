12S24033 - Doy Denggan P.S.
12S24028 - Rotua Immanuela Tampubolon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char icarus_message[61];
    char output[21] = {0};  
    fgets(icarus_message, 61, stdin);

    icarus_message[strcspn(icarus_message,"\r\n")] = 0;

    int length = strlen(icarus_message);
    if (length % 3 != 0 || length > 60) {
        printf("\n");
        return 1;
    }

    for (int i = 0, j = 0; i < length; i += 3, j++) {
        char segment[4] = {icarus_message[i], icarus_message[i+1], icarus_message[i+2],'\0'};
        int ascii_value = atoi(segment);
        if (ascii_value < 0 || ascii_value > 127) {
            printf("\n");
            return 1;
        }
        output[j] = (char) ascii_value;
    }

    printf("%s\n",output);

  return 0;
}
