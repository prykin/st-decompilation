FUN_007486dd:
007486DD  53                        PUSH EBX
007486DE  56                        PUSH ESI
007486DF  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
007486E3  57                        PUSH EDI
007486E4  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
007486E7  57                        PUSH EDI
007486E8  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007486EE  56                        PUSH ESI
007486EF  E8 B1 F9 FF FF            CALL 0x007480a5
007486F4  8B D8                     MOV EBX,EAX
007486F6  85 DB                     TEST EBX,EBX
007486F8  75 18                     JNZ 0x00748712
007486FA  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
00748700  81 C6 90 00 00 00         ADD ESI,0x90
00748706  85 C0                     TEST EAX,EAX
00748708  74 08                     JZ 0x00748712
0074870A  8B 08                     MOV ECX,dword ptr [EAX]
0074870C  50                        PUSH EAX
0074870D  FF 51 08                  CALL dword ptr [ECX + 0x8]
00748710  21 1E                     AND dword ptr [ESI],EBX
LAB_00748712:
00748712  57                        PUSH EDI
00748713  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00748719  5F                        POP EDI
0074871A  8B C3                     MOV EAX,EBX
0074871C  5E                        POP ESI
0074871D  5B                        POP EBX
0074871E  C2 04 00                  RET 0x4
