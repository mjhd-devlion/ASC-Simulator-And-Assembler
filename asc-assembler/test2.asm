; TEST2
; TITLE, ORGなどが命令の後に来るテスト

Init
	DC -100
	B Start

	TITLE TEST2
	ORG   0x10


Start
	HLT

	END