`ED1` `Day1 Exercise 01`
# Function 副程式(函式/方法)

## 題目

請利用副程式寫一個求次方(Power)的函數，并返回結果 & 并且參考 >>
- 變數命名
- 輸入輸出格式

### 變數命名參考
|Variables       |說明 
|:--------------:|----
|base            |基底
|power           |次方
|Pow(int, int)   |求次方函數宣告
|result          |運算結果

### 輸入輸出格式
```c
// Start Info 程式執行時輸出
printf("================================\n");
printf("|> ED1 Power Function\n");
printf("================================\n");
printf("Please Enter base and power.\n");
printf("* * * * * * * * * * * * * * * *\n");

// Input 使用者輸入
scanf("%d %d", &base, &power);

// Output 輸出結果
printf(">> Pow( %d, %d ) = %d\n", base, power, result);         // Sample 1 & 2
printf(">> Pow( %d, %d ) = e^0 = 1\n", base, power);            // Sample 3
printf(">> Pow( %d, %d ) = Does not exist!!!\n", base, power);  // Sample 4

// Stop 程式停止時輸出
printf("* * * * * * * * * * * * * * * *\n");
printf("|> Program: End Of Run...\n\n");
```

## 基礎: `v1.0`

假設所有輸入數值都爲正整數 >>

```
Sample 1
>> Input  : 2 4
<< Output : 16

Sample 2
>> Input  : 25 0
<< Output : 1

Sample 3
>> Input  : 0 0
<< Output : e^0 = 1

Sample 4
>> Input  : 0 0
<< Output : "Does not exist!!!"
```

End