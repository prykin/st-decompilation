FUN_00603090:
00603090  55                        PUSH EBP
00603091  8B EC                     MOV EBP,ESP
00603093  8B 81 6E 03 00 00         MOV EAX,dword ptr [ECX + 0x36e]
00603099  85 C0                     TEST EAX,EAX
0060309B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060309E  75 26                     JNZ 0x006030c6
006030A0  85 C0                     TEST EAX,EAX
006030A2  74 22                     JZ 0x006030c6
006030A4  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
006030AA  0F BF 52 23               MOVSX EDX,word ptr [EDX + 0x23]
006030AE  4A                        DEC EDX
006030AF  C6 81 9F 03 00 00 FF      MOV byte ptr [ECX + 0x39f],0xff
006030B6  89 91 97 03 00 00         MOV dword ptr [ECX + 0x397],EDX
006030BC  C7 81 6E 03 00 00 02 00 00 00  MOV dword ptr [ECX + 0x36e],0x2
LAB_006030c6:
006030C6  57                        PUSH EDI
006030C7  8B B9 6E 03 00 00         MOV EDI,dword ptr [ECX + 0x36e]
006030CD  BA 01 00 00 00            MOV EDX,0x1
006030D2  3B FA                     CMP EDI,EDX
006030D4  5F                        POP EDI
006030D5  75 1A                     JNZ 0x006030f1
006030D7  85 C0                     TEST EAX,EAX
006030D9  75 16                     JNZ 0x006030f1
006030DB  89 81 97 03 00 00         MOV dword ptr [ECX + 0x397],EAX
006030E1  88 91 9F 03 00 00         MOV byte ptr [ECX + 0x39f],DL
006030E7  C7 81 6E 03 00 00 02 00 00 00  MOV dword ptr [ECX + 0x36e],0x2
LAB_006030f1:
006030F1  5D                        POP EBP
006030F2  C2 04 00                  RET 0x4
