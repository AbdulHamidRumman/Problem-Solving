#include <bits/stdc++.h>
using namespace std;
char str[3],str1[3],str2[3],str3[3],str4[3],str5[3];
int main(){
    scanf("%s",str);
    scanf("%s %s %s %s %s",str1,str2,str3,str4,str5);
    if((str[0]==str1[0])||(str[1]==str1[1])||(str[0]==str2[0])||(str[1]==str2[1])||(str[0]==str3[0])||(str[1]==str3[1])||(str[0]==str4[0])||(str[1]==str4[1])||(str[0]==str5[0])||(str[1]==str5[1]))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
