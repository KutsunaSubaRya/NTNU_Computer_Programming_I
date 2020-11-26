學生：蘇子權
學號：40947023s
makefile 使用：
$ make clean
$ make
一次就全部編譯完，接下來就是開啟。

題目敘述：

<hw0201>
$ ./hw0201
請輸入三個數字，分別以逗號分開，輸入少於或多餘三個數字，會輸出"Please input correct format!"並且結束程式。

<hw0202>
$ ./hw0202
題目並沒有要求輸入格式錯誤就結束程式，因此請輸入正確的format。
另外，如果沒有交點，會輸出"No intersection!"並結束此程式。
還有題目並沒也寫重疊的情形該如何輸出，要輸出交點的話會是無窮多，因此如果遇到會重疊測資，會輸出"Overlapping!"

<hw0203>
$ ./hw0203
對於 Gross salary < 0 我會輸出"Input Error!"並結束此程式
對於 Married 除了0/1之外的數字，我會輸出"Input Error!"並結束此程式
對於 How many people are there in your family: 如果輸入小於等於0 ， 我會輸出"Input Error!"並結束此程式
對於兩個Special Deduction 如果輸入小於0， 我會輸出"Input Error!"並結束此程式
對於preschool children沒也嚴謹的規定說是領養，還是親生，因此我只判斷children數量大於等於family的量或小於0，我會輸出"Input Error!"並結束此程式
對於disable people，有可能全家都有，因此我判斷依據為大於family的量或小於0， 我會輸出"Input Error!"並結束此程式

<hw0204>
$ ./hw0204
規定最起始日期為西元0001/01/01。
輸入不符合日期規範（2020/13/01 或 0000/01/01 或 2011/02/29...等）都會直接輸出"Invalid Date!"並結束此程式。
可輸入未來的年月日。
如果起始時間在結束時間的未來，會直接輸出"Invalid Date!"並結束此程式。

<hw0205>
$ ./hw0205
如果輸入的卡號不符合規範，會輸出"Invalid cards!"並結束此程式。

<hw0206>
$ ./hw0206
黃色讚。
