//====================================================================
//  工学部「情報環境実験１」  例題プログラム
//  指定範囲の乱数と乱列の生成
//--------------------------------------------------------------------
//  ObjSort DataSequence.h
//  Linux  GCC 4.4
//--------------------------------------------------------------------
//  富永研究室  tominaga 富永浩之
//  2017.06.22
//====================================================================


//====================================================================
//  事前処理
//====================================================================

#define  LEN  1024
#define  SZ   1024
#define  BUF   256


//====================================================================
//  大域宣言
//====================================================================

//--------------------------------------------------------------------
//  データ型
//--------------------------------------------------------------------

typedef  int                 Data;
typedef  enum {FALSE, TRUE}  Bool;
typedef  char                String[BUF];

typedef  struct _DataSequence  DataSequence;

struct _DataSequence {
    int size;        // データ数
    int deg;         // ランダム度
    int ct_cmp;      // 比較回数
    int ct_swp;      // 交換回数
    Data arr[SZ];    // データ列
};


//====================================================================
//  データ列の操作
//====================================================================

void DataSequence_output(DataSequence seq);
Bool DataSequence_isSorted(DataSequence seq);
int DataSequence_degree(DataSequence seq);

DataSequence DataSequence_init(int num);
Bool DataSequence_order(DataSequence *seq, int p1, int p2);
void DataSequence_swap(DataSequence *seq, int p1, int p2);
void DataSequence_SimpleSort(DataSequence *seq);


//====================================================================
//  データ列の生成
//====================================================================

void CreateSequence_normal(DataSequence *seq);
void CreateSequence_random(DataSequence *seq);

void CreateSequence_input(DataSequence *seq);
void CreateSequence_file(DataSequence *seq, String fname);

void CreateSequence_exchange(DataSequence *seq, int ct);
void CreateSequence_shuffle(DataSequence *seq, double prb);

