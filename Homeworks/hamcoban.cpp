/*Ví dụ hàm strstr() trong C
#include<stdio.h>
#include <string.h>
 
int main() {
  char str[100] = "Day la mot vi du ve ham strstr() trong c, vi du...";
  char *sub;
  sub = strstr(str, "vi");
  printf("\nChuoi con la: %s", sub);
  return 0;
}
Hàm strstr() trong C trả về con trỏ trỏ đến lần xuất hiện đầu tiên của chuỗi được khớp trong chuỗi đã cho. Nó được sử dụng để trả lại chuỗi con từ vị trí khớp đầu tiên cho đến lần khớp cuối cùng.









Ví dụ hàm strcat() trong C
#include<stdio.h>
#include <string.h>
 
int main() {    
    char  ch [10] = { 'H' ,  'e' ,  'l' ,  'l' ,  'o' ,  '\0' };
    char  ch2 [10] = { 'C' ,  '\0' };
    strcat (ch, ch2);
    printf ( "Gia tri cua chuoi dau tien la: %s", ch);
    return 0;
}
Hàm strcat() trong C được sử dụng để nối 2 chuỗi trong C.








Ví dụ hàm strcpy() trong C
#include<stdio.h>
#include <string.h>
 
int main() {
    char source[20] = {'v', 'i', 'e', 't', 't', 'u', 't', 's', '\0'};
    char target[20];
    strcpy(target, source);
    printf("Chuoi target: %s", target);
    return 0;
}
Hàm strcpy(target, source) trong C được sử dụng để sao chép chuỗi ký tự từ source tới target.
}







Ví dụ hàm strlen() trong C
#include<stdio.h>
#include <string.h>
 
int main() { 
    char ch[20] = {'v', 'i', 'e', 't', 't', 'u', 't', 's', '\0'};
    printf("Do dai chuoi: %d",strlen(ch));
    return 0;
}
Hàm strlen() trong C trả về độ dài của chuỗi đã cho, nó không tính ký tự NULL - '\0'.

*/

