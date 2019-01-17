#include <stdio.h>

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
        
    }
    if(code == 4)
    {

    }
     if(code == 5)
     {
            printf("dianjihuichetuichuchengxu\n");
            break;
    }
    return 0;

}
}