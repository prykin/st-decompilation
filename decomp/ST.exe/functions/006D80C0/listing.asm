FUN_006d80c0:
006D80C0  55                        PUSH EBP
006D80C1  8B EC                     MOV EBP,ESP
006D80C3  56                        PUSH ESI
006D80C4  57                        PUSH EDI
006D80C5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D80C8  8A 47 17                  MOV AL,byte ptr [EDI + 0x17]
006D80CB  84 C0                     TEST AL,AL
006D80CD  75 29                     JNZ 0x006d80f8
006D80CF  57                        PUSH EDI
006D80D0  E8 0B EB FE FF            CALL 0x006c6be0
006D80D5  8B F0                     MOV ESI,EAX
006D80D7  83 FE FF                  CMP ESI,-0x1
006D80DA  75 08                     JNZ 0x006d80e4
006D80DC  5F                        POP EDI
006D80DD  0B C0                     OR EAX,EAX
006D80DF  5E                        POP ESI
006D80E0  5D                        POP EBP
006D80E1  C2 04 00                  RET 0x4
LAB_006d80e4:
006D80E4  85 F6                     TEST ESI,ESI
006D80E6  75 18                     JNZ 0x006d8100
006D80E8  57                        PUSH EDI
006D80E9  E8 42 ED FE FF            CALL 0x006c6e30
006D80EE  8B F0                     MOV ESI,EAX
006D80F0  85 F6                     TEST ESI,ESI
006D80F2  75 0C                     JNZ 0x006d8100
006D80F4  C6 47 17 01               MOV byte ptr [EDI + 0x17],0x1
LAB_006d80f8:
006D80F8  5F                        POP EDI
006D80F9  33 C0                     XOR EAX,EAX
006D80FB  5E                        POP ESI
006D80FC  5D                        POP EBP
006D80FD  C2 04 00                  RET 0x4
LAB_006d8100:
006D8100  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D8105  6A 20                     PUSH 0x20
006D8107  68 D0 E2 7E 00            PUSH 0x7ee2d0
006D810C  50                        PUSH EAX
006D810D  56                        PUSH ESI
006D810E  E8 2D DD FC FF            CALL 0x006a5e40
006D8113  8B C6                     MOV EAX,ESI
006D8115  5F                        POP EDI
006D8116  5E                        POP ESI
006D8117  5D                        POP EBP
006D8118  C2 04 00                  RET 0x4
