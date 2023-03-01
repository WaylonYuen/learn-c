`Waylon Yuen Daily Exercise 02`
# 題目：等級換算

請為輸入的數值進行分級并輸出結果

|數值區間  | 等級
|:-------:|:----:
| 100     | A
| 90 ~ 99 | B
| 80 ~ 89 | C
| 70 ~ 79 | D
| 60 ~ 69 | E
| 0 ~ 59  | F

## 基礎: v1.1.0
`類別：if - else`

請利用 **if - else** 語句進行分級

* 輸入：整數
* 輸出：等級

```
Sample 1
>> Input: 100
<< Output: A

Sample 2
>> Input: 89
<< Output: C

Sample 3
>> Input: 0
<< Output: F
```

`Tips 提示:`
注意 if 判斷時每個數值區間的邊界是否被包含在内。

## 基礎: v1.2.0
`類別：switch - case`

請利用 **switch - case** 語句進行分級

* 輸入：整數
* 輸出：等級

```
Sample 1
>> Input: 100
<< Output: A

Sample 2
>> Input: 89
<< Output: C

Sample 3
>> Input: 0
<< Output: F
```

`Tips 提示:`
以題目的等級範圍所示，輸入數值的個位數不是重點，十位數卻可以判斷數值的等級，因此可以先除以 10 後再區分等級，令判斷範圍由二維坍縮成綫性。使得 case 只需要處理 0 ~ 10 即可。

## 進階: v2.0
`類別：Loop 迴圈`
承上題 ( 基礎題延申 )，可以不斷的輸入數值進行分級，直到輸入值為 -1 時結束程式。

* 輸入：整數
* 輸出：等級

```
Sample
>> Input: 100
<< Output: A
>> Input: 59
<< Output: F
>> Input: 92
<< Output: B
>> Input: -1
>> Output: End of run...
```

`Tips 提示:`
While(條件) 迴圈，當條件不成立時才會跳出循環。

## 高階: v3.0
`類別：File IO 文件讀寫`
讀取一個名爲 Achievement.dat 的文件，將文件中所有的分數進行分級，并輸出等級分佈。( 文件中所有數值均爲 int 整數型 )

| Achievement.dat 文件格式
|----
| 100 32 56 18 65 90 30 66 14 79 ...

* 輸入：Achievement.dat 文件
* 輸出：等級分佈

```
Sample
>> FileRead: Achievement.dat
<< Output:
A - 35
B - 16
C - 36
D - 25
E - 11
F - 6
```

`Tips 提示:`
``` c
1. FILE* data = fopen(filename, "r");
2. fclose(data);
3. while(fscanf(fptr, "%d", buff) != EOF);
```
## 目錄