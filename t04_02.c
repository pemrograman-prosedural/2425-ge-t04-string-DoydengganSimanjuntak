12S24033 - Doy Denggan P.S.
12S24028 - Rotua Immanuela Tampubolon

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char str[21]; 
    scanf("%20[^\n]", str); 

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%03d", str[i]);  
    }

    printf("013"); 
  

  return 0;
}
