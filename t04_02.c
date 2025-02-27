// 12S24033 - Doy Denggan P.S.
// 12S24028 - Rotua Immanuela Tampubolon

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char string [21]; 
    scanf("%20[^\n]", string ); 

    int len = strlen(string);

    for (int i = 0; i < len; i++) {
        printf("%03d", string[i]);  
    }

    printf("013"); 
  

  return 0;
}
