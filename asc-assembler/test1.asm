; TEST1
; ラベルResultの値を30になるまで加算し、停止

		TITLE TEST1
		ORG 0x10

		B Init

Zero	DC 0

One		DC 1
Thirty	DC 30
Result	DS 1

Init
		LD Zero ; Rを初期化

Loop
		LD One ; Rに1を読み込む
		ADD Result ; ResultとRを加算する
		ST Result ; 計算結果を格納する
		LD Thirty
		SUB Result
		BN Continue
		B End

Continue
		B Loop

; for (R = 0; R < 30; R++);

End
		HLT
		END