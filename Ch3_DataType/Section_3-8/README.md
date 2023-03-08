# 3.8 Enum 列舉型常量
Enum 可以看成是一個集合，集合中的元素是被命名的整數常量，各元素之間以逗號隔開。

## 1. 使用説明

#### 1.1.1 Enum 宣告
``` c
enum Day {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
};
```
#### 1.1.2 Enum 宣告規則及範例説明
1. Day 可以看成是這個集合的名稱
2. 星期一 ( Monday ) 至 星期天 ( Sunday ) 為 Day 集合的元素
3. 默認情況下，列舉的第一個元素為整數 0 ( 即不賦值的情況，第一個元素數值為 0 )
    ``` c
    // Sample
    enum Day {
        Monday,     // 默認情況下，Monday 數值 = 0
        Tuesday,
        ...
    };
    ```
4. 如果對元素進行賦值，後續元素沒有賦值，則後續元素數值會在前一個元素數值的基礎上加 1
    ```
    // Sample
    enum Day {
        Monday = 1, // Monday 元素被賦值為 1
        Tuesday,    // Tuesday = ( Monday + 1 ) = 2
        ...
    };
    ```
5. 為中間元素賦值的情況，則同時遵循第 3 點及第 4 點原則。
    ``` c
    // Sample
    enum Day {
    Monday,         // 數值為 0
    Tuesday,        // 數值為 1
    Wednesday,      // 數值為 2
    Thursday = 4,   // 數值為 4
    Friday,         // 數值為 5
    Saturday,       // 數值為 6
    Sunday,         // 數值為 7
    };
    ```

#### 1.2.1 Enum 使用流程
使用 Enum 時請遵循：先宣告，後賦值，再使用的原則。
``` c
// 宣告及定義
enum Day { ... };
// 宣告及賦值
enum Day today = Monday;
// 使用
if(today == Day.Monday) {
    printf("今天星期一");
}
```
#### 1.2.2 Enum 使用規則及範例説明
##### 1.2.2.1 Enum 宣告及定義
嚴格意義上來講，賦值也屬於宣告的範疇，enum Day 就好比我們自定義了一個資料形態，以整數形態 int 舉例：enum Day 可以想象成 int；但光有 int 依舊無法使用，因爲沒有一個代名詞來表示 int 是誰的，或理解爲那麽多 int 電腦不清楚誰是誰因此才需要為每個 int 命名來做區分；同理 enum 也需要爲其命名來做區分。
``` c
// 分別有 3 個 int 邢臺，其各自名爲：a，b，c
int a, b, c;

// 假設 Day 已經被宣告，參考：( 1.1.1 Enum 宣告 )
// 分別有 3 個 enum Day 形態，其各自名爲：today，yesterday，tomorrow;
enum Day today, yesterday, tomorrow;
```
##### 1.2.2.1 Enum 宣告及賦值
enum 形態如同其他形態一樣，使用前應給予符合其形態的初始化數值。以整數 int 舉例， int 只能初始化為整數數值；而 enum 只能初始化為 enum 所定義的元素内容。
``` c
// 初始化為整數 0
int a = 0;

// 假設 Day 已經被宣告，參考：( 1.1.1 Enum 宣告 )
// 初始化為 enum Day 的元素 Monday
enum Day today = Day.Monday;

// 額外
// 由於 enum 的元素為整數， 元素 Monday 相當於 int Monday = 1; 因此可以這樣宣告及賦值：
enum Day today = 2; // 相當於 enum Day today = Day.Tuesday;
```
#### 1.2.3 Enum 使用情景 & 練習題
題目：假設今日日期為：2023年3月8日星期三，計算距今 n 日為星期幾 ( n 日後不會超過 2023年 )
``` c
// 保存大小月份
int Month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// 宣告及定義 Day
enum Day {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
};

// 宣告及賦值 today
enum Day today = Day.Wednesday; // 今天為星期三
enum Day targetDay;             // n 日後來星期幾還不確定

int n = 0;
scanf("%d", &n); // 輸入 n 為多少天

// 計算過程 ...

switch(targetDay) {
    case Day.Monday:    printf("Monday\n");     break;
    case Day.Tuesday:   printf("Tuesday\n");    break;
    case Day.Wednesday: printf("Wednesday\n");  break;
    case Day.Thursday:  printf("Thursday\n");   break;
    case Day.Friday:    printf("Friday\n");     break;
    case Day.Saturday:  printf("Saturday\n");   break;
    case Day.Sunday:    printf("Sunday\n");     break;
}

```