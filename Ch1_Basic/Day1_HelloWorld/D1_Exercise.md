`WYDE1` `Day1 Exercise 01`
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

## 進階: `v1.0`

// TODO:

## 索引

|題目編號   |版本  |檔案目錄  |題目來源                          |困難度  |狀態
|:---------|------|:--------|:--------------------------------|:-----:|:--------
|WYDE01    |基礎  |[]()      |Waylon Yuen Daily Exercise 01    |★     |Task
|WYDE01-1  |進階  |[]()      |Waylon adapt from ID WYDE01      |★     |Task
|WYDE01-2  |高階  |[]()      |Waylon adapt from ID WYDE01-1    |★★★  |Task

## 合作

👏 若有更多有趣的想法或合作, 歡迎透過下方資訊欄參與分享 👏
`想法-副標題: Idea<標題\題目ID\項目>`
`合作-副標題: Cooperate<項目>`

❗❗❗ 如内容有誤、侵犯版權, 請透過下方資訊欄告知, 并會在核實後第一時間修正 ❗❗❗
`版權-副標題: Copyright<標題\題目ID\項目>`
`錯誤-副標題: Mistake<標題\題目ID\項目>`

### 資訊欄
* 📧 ：1664940243LWY@gmail.com `( 請在副標題表明來意(參考合作欄副標題格式), 以免被忽略 )`
* Pull Request：請附上來意及說明, 並遵循此 [PR格式](), thanks! 🙏
