//====================================================================
//  工学部「情報環境実験１」  例題プログラム
//  指定範囲の乱数と乱列の生成
//--------------------------------------------------------------------
//  ObjSort DataSequence.c
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
#include "../DataSequence/DataSequence.h"



//====================================================================
//  大域宣言
//====================================================================


//====================================================================
//  本体関数
//====================================================================

int main(void)
{
    DataSequence seq;
    int num;
    int deg;

    //---  冒頭メッセージ
    puts("DataSequenceMain");

    //----  データ数の指定
    printf("NUM = ?  ");
    scanf("%d", &num);

    //----  データ列の生成
    seq = DataSequence_init(num);

    //----  データ列の出力
    DataSequence_output(seq);

    //----  データ列の特性
    deg = DataSequence_degree(seq);
    printf("%d\n", deg);

    //----  データ列の整列
    DataSequence_SimpleSort(&seq);
    DataSequence_output(seq);

    //----  整列の処理回数
    printf("比較: %3d;  交換: %3d\n", seq.ct_cmp, seq.ct_swp);

    //----  終了
    return 0;
}
