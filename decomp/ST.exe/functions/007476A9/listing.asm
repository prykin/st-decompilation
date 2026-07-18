FUN_007476a9:
007476A9  57                        PUSH EDI
007476AA  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
007476AE  85 FF                     TEST EDI,EDI
007476B0  75 07                     JNZ 0x007476b9
007476B2  B8 03 40 00 80            MOV EAX,0x80004003
007476B7  EB 47                     JMP 0x00747700
LAB_007476b9:
007476B9  56                        PUSH ESI
007476BA  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
007476BE  53                        PUSH EBX
007476BF  8B CE                     MOV ECX,ESI
007476C1  33 DB                     XOR EBX,EBX
007476C3  E8 86 07 00 00            CALL 0x00747e4e
007476C8  83 F8 01                  CMP EAX,0x1
007476CB  75 09                     JNZ 0x007476d6
007476CD  21 1F                     AND dword ptr [EDI],EBX
007476CF  BB 03 02 04 80            MOV EBX,0x80040203
007476D4  EB 26                     JMP 0x007476fc
LAB_007476d6:
007476D6  6A 30                     PUSH 0x30
007476D8  E8 53 6E FE FF            CALL 0x0072e530
007476DD  85 C0                     TEST EAX,EAX
007476DF  59                        POP ECX
007476E0  74 0D                     JZ 0x007476ef
007476E2  56                        PUSH ESI
007476E3  8B C8                     MOV ECX,EAX
007476E5  FF 76 0C                  PUSH dword ptr [ESI + 0xc]
007476E8  E8 7E FE FF FF            CALL 0x0074756b
007476ED  EB 02                     JMP 0x007476f1
LAB_007476ef:
007476EF  33 C0                     XOR EAX,EAX
LAB_007476f1:
007476F1  85 C0                     TEST EAX,EAX
007476F3  89 07                     MOV dword ptr [EDI],EAX
007476F5  75 05                     JNZ 0x007476fc
007476F7  BB 0E 00 07 80            MOV EBX,0x8007000e
LAB_007476fc:
007476FC  8B C3                     MOV EAX,EBX
007476FE  5B                        POP EBX
007476FF  5E                        POP ESI
LAB_00747700:
00747700  5F                        POP EDI
00747701  C2 08 00                  RET 0x8
