//====================================================================
//  工学部「情報環境実験２」  例題プログラム
//  オブジェクト指向プログラミング  整列算法
//--------------------------------------------------------------------
//  RandomData RandomMain.c
//  Linux  GCC 4.4
//--------------------------------------------------------------------
//  富永研究室  tominaga 富永浩之
//  2017.06.22
//====================================================================


//====================================================================
//  概略仕様
//====================================================================


//====================================================================
//  事前処理
//====================================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../RandomData/RandomData.h"


//====================================================================
//  本体関数
//====================================================================

int main(void) 
{
    int num;

    puts("RandomMain");

    srand((unsigned)time(NULL));

    scanf("%d", &num);

    printf("%d\n", irand(num));

    return 0;
}
