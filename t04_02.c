12S24033 - Doy Denggan P.S.
12S24028 - Rotua Immanuela Tampubolon

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char input[21]; 
    
    scanf("%20[^\n]", input);
    
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        printf("%03d", (int)input[i]);
    }
    
    printf("\n");
  

  return 0;
}
