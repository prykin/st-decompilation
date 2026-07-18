FUN_004dd850:
004DD850  8B D1                     MOV EDX,ECX
004DD852  57                        PUSH EDI
004DD853  B9 37 00 00 00            MOV ECX,0x37
004DD858  83 C8 FF                  OR EAX,0xffffffff
004DD85B  8D BA D0 04 00 00         LEA EDI,[EDX + 0x4d0]
004DD861  F3 AB                     STOSD.REP ES:EDI
004DD863  8B CA                     MOV ECX,EDX
004DD865  E8 42 59 F2 FF            CALL 0x004031ac
004DD86A  33 C0                     XOR EAX,EAX
004DD86C  5F                        POP EDI
004DD86D  C3                        RET
