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

#include "../RandomData/RandomData.h"
#include "../DataSequence/DataSequence.h"
#include "../SimpleSort/SimpleSortLib.h"

//====================================================================
//  大域宣言
//====================================================================


//====================================================================
//  データ列の操作
//====================================================================

//--------------------------------------------------------------------
//  データ列の出力
//--------------------------------------------------------------------

void DataSequence_output(DataSequence seq)
{
    int k;
    for ( k = 0; k < seq.size; k++ ) {
        printf("%d ", seq.arr[k]);
    }
    puts("");
}

//--------------------------------------------------------------------
//  整列済の判定
//--------------------------------------------------------------------

Bool DataSequence_isSorted(DataSequence seq)
{
    int k;
    for ( k = 1; k < seq.size; k++ ) {
        if ( seq.arr[k-1] > seq.arr[k] ) { return FALSE; }
    }
    return TRUE;
}

//--------------------------------------------------------------------
//  指定位置の要素比較
//--------------------------------------------------------------------

Bool DataSequence_order(DataSequence *seq, int p1, int p2)
{
    seq->ct_cmp++;    // 比較回数
    return ( seq->arr[p1] <= seq->arr[p2] );
}

//--------------------------------------------------------------------
//  指定位置の要素交換
//--------------------------------------------------------------------

void DataSequence_swap(DataSequence *seq, int p1, int p2)
{
    Data tmp;
    seq->ct_swp++;    // 交換回数
    tmp = seq->arr[p1]; seq->arr[p1] = seq->arr[p2]; seq->arr[p2] = tmp;
}

//--------------------------------------------------------------------
//  配列の要素の挿入
//--------------------------------------------------------------------

void DataSequence_insert(DataSequence *seq, int p, int m) {
    Data tmp = seq->arr[m];             // データを退避
    int k;
    for ( k = m; k > p; k-- ) {
        seq->arr[k] = seq->arr[k-1];    // データを後方移動
    }
    seq->arr[p] = tmp;                  // データを挿入
}

//--------------------------------------------------------------------
//  逆順数による乱列度
//--------------------------------------------------------------------

int DataSequence_degree(DataSequence seq)
{
    int deg = 0;
    int k1, k2;
    for ( k1 = 0; k1 < seq.size; k1++ ) {
        for ( k2 = k1+1; k2 < seq.size; k2++ ) {
            if ( seq.arr[k1] > seq.arr[k2] ) { deg++; }
        }
    }
    return deg;
}

//--------------------------------------------------------------------
//  データ列の初期化
//--------------------------------------------------------------------

DataSequence DataSequence_init(int num)
{
    DataSequence seq;
    int sw = 4;
    static Bool flag = TRUE;
    String fname;
    int exc;
    double prb;

    //----  データ列の初期化
    seq.size = num;
    seq.ct_cmp = 0;
    seq.ct_swp = 0;

    //----  乱数環境の初期化
   	if ( flag ) { srand((unsigned)time(NULL)); flag = FALSE; }

    //----  データ列の生成
    switch ( sw ) {
    case 0:    //----  整列済のデータ列
       puts("NORMAL");
       CreateSequence_normal(&seq);
       break;

    case 1:    //----  乱数格納のデータ列
       puts("RANDOM");
       CreateSequence_random(&seq);
       break;

    case 2:    //----  端末入力のデータ列
        puts("INPUT:  ");
        CreateSequence_input(&seq);
        break;

    case 3:    //----  ファイル読出のデータ列
        printf("FILE = ?  ");
        scanf("%s", fname);
        CreateSequence_file(&seq, fname);
        break;

    case 4:    //----  回数指定の撹拌のデータ列
        printf("EXC = ?  ");
        scanf("%d", &exc);
        CreateSequence_exchange(&seq, exc);
        break;

    case 5:    //----  確率指定の撹拌のデータ列
        printf("PRB = ?  ");
        scanf("%lf", &prb);
        CreateSequence_shuffle(&seq, prb);
        break;
    }

    //----  データ列の返却
    return seq;
}

//--------------------------------------------------------------------
//  データ列の整列
//--------------------------------------------------------------------

void DataSequence_SimpleSort(DataSequence *seq)
{
    int sw = 2;

    switch ( sw ) {
    case 1:
        SimpleSort_select(seq);
        break;
    case 2:
        SimpleSort_exchange(seq);
        break;
    case 3:
        SimpleSort_insert(seq);
        break;
    case 4:
        SimpleSort_shaker(seq);
        break;
    case 5:
        SimpleSort_gnome(seq);
        break;
    case 6:
        SimpleSort_trans(seq);
        break;
    }
}

