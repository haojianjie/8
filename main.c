#include <stdio.h>
char arr[1024];
int index = 0;
int isMigan(char x){
    int count = 0;
    for(int i=0; i<index;i++){
        if(x == arr[i]){
            count++;
        }
    }
    if(count == 0);{
        return 0;
    }
   
}

int main()
{
    char arr[100];
    int index = 0;
    printf("minganzifuguanlixitong\n");

    while (1)
    {

        int code;

        printf("1---tianjiaminganci\n");
        printf("2---shanchuzuihoong\n");
        printf("3---xianshiquanbuminganci\n");
        printf("4---tihuanshuruneiringzhongdeminganci\n");
        printf("5---tuichuxituyigeminganci\n");
        
        printf("qingshuruxiangyinggongnengbiaohao\n");

        scanf("%d", &code);

    
    if(code == 1)
    {
        char a;
        char x;
        printf("qingshuruyaotianhjiademinganzifu：\n");
        scanf("%c", &a);
        scanf("%c", &a);
        arr[index] = a;
        index++;
        printf("tianjiachenggong,dianjihuichengjixu\n");
        scanf("%c", &x);
        scanf("%c", &x);
        
    }
    if(code == 2)
    {
        char x;
        printf("shanchuzuihouyigeminganci\n");
        index--;
        printf("shanchuchenggong,dianjihuichejixu\n");
        scanf("%c", &x);
        scanf("%c", &x);
    }
    if(code == 3)
    {
        char x;
        int i = 0;
        printf("shuchusuoyouminganci:\n");
        for (; i < index; i++)
        {
            printf("%c\n", arr[i]);
        }

        printf("dianjihuichejixu\n");
        scanf("%c", &x);
        scanf("%c", &x);
    }
    if(code == 4)
    {
        char x;
        int i = 0;
        char str[200];

        printf("qingshuruyiduanweizi（yingwen）:\n");
        scanf("%s", str);

        for (; str[i] != '\0'; i++)
        {

        char a = str[i];
        int j = 0;
        int flag = 0;
        for (; j < index; j++)
        {

            if (a == arr[j])
            {
                flag = 1;
            }
        }

        if (flag != 0)
            {
            str[i] = '*';
            }
        }

        printf("%s\n", str);

        printf("dianjihuuichejixu\n");
        scanf("%c", &x);
        scanf("%c", &x);

    }
     if(code == 5)
     {
            printf("dianjihuichetuichuchengxu\n");
            break;
     }
    }
    return 0;

}


