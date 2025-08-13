// #include <stdio.h>
// #include <stdlib.h>

// int main (void){
//     int* pList = NULL, i = 0;

//     pList = (int*)malloc(sizeof(int) * 3);

//     pList[0] = 10;
//     pList[1] = 20;
//     pList[2] = 30;

//     for (i = 0; i < 3; ++i)
//         printf("%d\n", pList[i]);

//     free(pList);
//     return 0;

// }

// // 메모리 동적할당 예제
// int main (void) {

//     // 배열이므로 stack영역에 저장됨
//     char szBuffer[] = {"hello"};
//     // 리터럴 값의 주소를 가르키는 포인터변수를 선언함으로 정적영역에 리터럴값이 저장되고 stack영역에 포인터변수의 메모리가 할당된다.
//     // 즉, 밑의 코드를 선언함으로 두번의 메모리할당이 진행됨.
//     // 포인터 변수의 경우 8byte를 할당받음.
//     char* pszBuffer = "hello";
//     char* pszData = NULL;

//     pszData = (char*)malloc(sizeof(char) * 6);
//     pszData[0] = 'h';
//     pszData[1] = 'e';
//     pszData[2] = 'l';
//     pszData[3] = 'l';
//     pszData[4] = 'o';
//     pszData[5] = '\0';

//     puts(szBuffer);
//     puts(pszBuffer);
//     puts(pszData);

//     free(pszData);
//     return 0;

// }

// typedef struct USERDATA
// {
//     int nAge;
//     char szName[32];
//     char szPhon [32];

// } USERDATA;

// int main(void)
// {
//     USERDATA * pUser = NULL;

//     pUser = (USERDATA*)malloc(sizeof(USERDATA));

//     pUser -> nAge = 10;
//     strcpy_s(pUser -> szName, sizeof(pUser -> szName),"Hoon");
//     strcpy_s(pUser -> szPhon, sizeof(pUser -> szPhon), "9876");

//     printf("%d살\t%s\t%s\n", pUser -> nAge, pUser -> szName, pUser -> szPhon);

//     free(pUser);

//     return 0;
// }

// // 값복사
// int main (void) {
//     char szData[12] = {"HelloWorld"};
//     char* pszData = NULL;

//     pszData = (char*)malloc(sizeof(char) * 12);
//     for (int i = 0; i < 12; i++)
//     {
//         pszData[i] = szData[i];
//     }
//     puts(pszData);
//     free(pszData);
// }

// 예제
#include <stdio.h>
#include <stdlib.h>

int maon(void)
{
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;
    pszData = (char *)malloc(sizeof(char) * 12);

    // pszData = szBuffer;
    for (int i = 0; i < 12; ++i)
    {
        pszData[i] = szBuffer[i];
    }
    puts(pszData);
    return 0;
}