# Day1 Hello World

``` c
#include <stdio.h> // 標準輸入輸出函式庫

/*
    主程式 ( 程式起點 )
*/
int main(/*參數*/) {
    // stdio.h 函式庫包含了函式 printf() 的定義
    printf("Hello world\n"); // 輸出字符串
    return 0; // 程式結束
}
```

### 0. 程式碼中的注解符號 Common
作用：用於標記、提醒、簡述程式碼邏輯，幫助自己或他人快速理解。(請務必經常注解)
行注解為：**// 注解内容**，在斜綫後的所有字符敘述均會被忽略(單行)。
範圍注解：**/* 注解内容 */**，在斜綫及星號範圍内的字符敘述均會被忽略(多行)。

### 1 函式庫 Library
函式庫是爲了避免重複編寫相同的邏輯程式碼而誕生出來的一個倉庫，倉庫中存放著各種常用的函式定義，使用者只需要呼叫函式，無需理解當中的運算邏輯便可得到對應的結果，以提升開發者的生產效率。所有程式語言都必然擁有自己的函式庫，開發者也能夠自定義自己的函式庫供大家使用。

C語言官方定義了許多標準函式庫，一般以尖括號 **#include <函式庫文件名稱>** 表示引用該函式庫。 
```c
#include <stdio.h>
```
另一種情況是，函式庫放在其他的文件路徑下，又或是自定義了自己的函式庫，此時會以雙引號 **#include "路徑\函式庫文件名稱"** 表示引用該函式庫。 
```c
#include "D:\Data\MyFunctions.h"
```
通常情況下，安裝了**C語言**即可直接呼叫使用 ( 只限設定於環境變數中的函式庫路徑可直接被調用 )。


### 2 函式 Function
函式是一套邏輯算法，重複出現的邏輯可利用函數進行封裝，避免重複編輯同一套邏輯程式碼。函數封裝除了可以重複利用函數以外，最重要的作用是解耦合，致使程式流程彈性變大，可以更加輕易的組合出新的一套流程。甚至是被更好的算法直接取代，而無需大動干戈修改整個專案，只需要修改函數定義本身即可。
最簡單的函數結構為：
``` c
/*
[返回值] [函數名稱] (參數) { 
    算法流程;
    返回結果;
}
*/

/* 函數範例 */

// 宣告 >>
int Add(int, int);

// 定義 >> 整數型-加法函數
int Add(int a, int b) {
    return a + b; // 返回 a + b 的結果
}

// 調用 >> 呼叫使用函數
int answer = Add(1, 2); // answer = 3
```

#### 2.1 特別的函數——主程式
主程式即，程式啓動時的進入點，程式會從進入點中開始逐行執行指令，直到在主程式中遇到 return(交還操作權於作業系統) ，程式才會停止運行。

主程式也是一種[[Function|函式]]，只是相對於其他[[Function|函式]]來說比較特別的是，[[OS|作業系統]]只能夠呼叫主程式，因此啓動程式時，程式只會由 main() 開始執行，也會結束於主程式。

#### 2.2 一般函數
在單一程式碼文件，以主程式為中心的情況下：
宣告或定義必須在調用者之前。由於程式碼是一行一行執行，函數宣告如果在調用者之後，電腦會找不到，也不可能繞到下文看定義再回頭。因此，宣告或定義必須在調用者之前。

```c
// 範例 1 : 錯誤寫法
//主程式找不到 Add() 函數，因爲該函數定義在調用者(主程式)之後。
int main() {
    int answer = Add(1, 2); // 調用
}

int Add(int a, int b) { // 定義
    return a + b;
}
```

```c
// 範例 2 : 正確寫法
// 定義在調用者(主程式)之前
// (若定義已經在調用者之前，就無需再宣告)
int Add(int a, int b) { // 定義
    return a + b;
}

int main() {
    int answer = Add(1, 2); // 調用
}
```

```c
// 範例 3 : 正確寫法
// 宣告在調用者(主程式)之前
// (由於定義在調用者之後，因此在調用者調用前需要宣告，告知電腦我有這個函數可以用)
int Add(int, int); // 宣告

int main() {
    int answer = Add(1, 2); // 調用
}

int Add(int a, int b) { // 定義
    return a + b;
}
```
宣告及定義分開操作是**C語言**的一個特點，至於爲什麽要這樣做，後續函數進階篇再詳解，當前只需要知道以上的寫法才不會報錯。

#### 2.3 void 類型
void 意為無，也就是沒有的意思。
``` c
// 此處的 void 意為沒有返回值，不會返回任何結果。
void Function() {
    /* do something */
}

// 此處的 void 意為沒有參數，無需提供任何參數。
int Function(void) {
    /* do something */
}
```
注意：參數可以無需特意告知沒有參數，即空白也不會報錯；但返回值不能夠空著不寫！