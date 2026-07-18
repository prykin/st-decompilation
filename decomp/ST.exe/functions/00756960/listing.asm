FUN_00756960:
00756960  55                        PUSH EBP
00756961  8B EC                     MOV EBP,ESP
00756963  56                        PUSH ESI
00756964  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756967  57                        PUSH EDI
00756968  81 7E 0C CE 00 00 00      CMP dword ptr [ESI + 0xc],0xce
0075696F  74 17                     JZ 0x00756988
00756971  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00756976  68 C1 00 00 00            PUSH 0xc1
0075697B  68 50 2D 7F 00            PUSH 0x7f2d50
00756980  50                        PUSH EAX
00756981  6A 12                     PUSH 0x12
00756983  E8 B8 F4 F4 FF            CALL 0x006a5e40
LAB_00756988:
00756988  8B 8E 84 00 00 00         MOV ECX,dword ptr [ESI + 0x84]
0075698E  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00756991  3B C8                     CMP ECX,EAX
00756993  72 08                     JC 0x0075699d
00756995  5F                        POP EDI
00756996  33 C0                     XOR EAX,EAX
00756998  5E                        POP ESI
00756999  5D                        POP EBP
0075699A  C2 0C 00                  RET 0xc
LAB_0075699d:
0075699D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007569A0  85 C0                     TEST EAX,EAX
007569A2  74 12                     JZ 0x007569b6
007569A4  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
007569A7  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
007569AA  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
007569AD  56                        PUSH ESI
007569AE  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
007569B1  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007569B4  FF 10                     CALL dword ptr [EAX]
LAB_007569b6:
007569B6  8B BE 2A 01 00 00         MOV EDI,dword ptr [ESI + 0x12a]
007569BC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007569BF  0F AF BE 26 01 00 00      IMUL EDI,dword ptr [ESI + 0x126]
007569C6  3B C7                     CMP EAX,EDI
007569C8  73 18                     JNC 0x007569e2
007569CA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007569D0  68 D1 00 00 00            PUSH 0xd1
007569D5  68 50 2D 7F 00            PUSH 0x7f2d50
007569DA  51                        PUSH ECX
007569DB  6A 15                     PUSH 0x15
007569DD  E8 5E F4 F4 FF            CALL 0x006a5e40
LAB_007569e2:
007569E2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007569E5  8B 96 9A 01 00 00         MOV EDX,dword ptr [ESI + 0x19a]
007569EB  50                        PUSH EAX
007569EC  56                        PUSH ESI
007569ED  FF 52 0C                  CALL dword ptr [EDX + 0xc]
007569F0  85 C0                     TEST EAX,EAX
007569F2  75 06                     JNZ 0x007569fa
007569F4  5F                        POP EDI
007569F5  5E                        POP ESI
007569F6  5D                        POP EBP
007569F7  C2 0C 00                  RET 0xc
LAB_007569fa:
007569FA  8B 86 84 00 00 00         MOV EAX,dword ptr [ESI + 0x84]
00756A00  03 C7                     ADD EAX,EDI
00756A02  89 86 84 00 00 00         MOV dword ptr [ESI + 0x84],EAX
00756A08  8B C7                     MOV EAX,EDI
00756A0A  5F                        POP EDI
00756A0B  5E                        POP ESI
00756A0C  5D                        POP EBP
00756A0D  C2 0C 00                  RET 0xc
