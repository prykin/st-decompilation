FUN_00696790:
00696790  56                        PUSH ESI
00696791  8B F1                     MOV ESI,ECX
00696793  57                        PUSH EDI
00696794  33 FF                     XOR EDI,EDI
00696796  8B 86 2F 58 00 00         MOV EAX,dword ptr [ESI + 0x582f]
0069679C  85 C0                     TEST EAX,EAX
0069679E  7E 21                     JLE 0x006967c1
LAB_006967a0:
006967A0  E8 1B 7F 09 00            CALL 0x0072e6c0
006967A5  99                        CDQ
006967A6  F7 BE 3B 58 00 00         IDIV dword ptr [ESI + 0x583b]
006967AC  8B 86 4B 58 00 00         MOV EAX,dword ptr [ESI + 0x584b]
006967B2  47                        INC EDI
006967B3  88 54 07 FF               MOV byte ptr [EDI + EAX*0x1 + -0x1],DL
006967B7  8B 86 2F 58 00 00         MOV EAX,dword ptr [ESI + 0x582f]
006967BD  3B F8                     CMP EDI,EAX
006967BF  7C DF                     JL 0x006967a0
LAB_006967c1:
006967C1  8B 8E 2F 58 00 00         MOV ECX,dword ptr [ESI + 0x582f]
006967C7  8B BE 4F 58 00 00         MOV EDI,dword ptr [ESI + 0x584f]
006967CD  D1 E1                     SHL ECX,0x1
006967CF  8B D1                     MOV EDX,ECX
006967D1  83 C8 FF                  OR EAX,0xffffffff
006967D4  C1 E9 02                  SHR ECX,0x2
006967D7  F3 AB                     STOSD.REP ES:EDI
006967D9  8B CA                     MOV ECX,EDX
006967DB  83 E1 03                  AND ECX,0x3
006967DE  F3 AA                     STOSB.REP ES:EDI
006967E0  5F                        POP EDI
006967E1  5E                        POP ESI
006967E2  C3                        RET
