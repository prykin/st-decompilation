FUN_00637180:
00637180  55                        PUSH EBP
00637181  8B EC                     MOV EBP,ESP
00637183  83 EC 08                  SUB ESP,0x8
00637186  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
00637189  57                        PUSH EDI
0063718A  85 C0                     TEST EAX,EAX
0063718C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063718F  0F 84 F3 00 00 00         JZ 0x00637288
00637195  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00637198  33 FF                     XOR EDI,EDI
0063719A  85 C0                     TEST EAX,EAX
0063719C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0063719F  0F 8E E3 00 00 00         JLE 0x00637288
006371A5  56                        PUSH ESI
006371A6  EB 03                     JMP 0x006371ab
LAB_006371a8:
006371A8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006371ab:
006371AB  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
006371AE  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
006371B1  0F 83 C4 00 00 00         JNC 0x0063727b
006371B7  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006371BA  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006371BD  0F AF F7                  IMUL ESI,EDI
006371C0  03 F1                     ADD ESI,ECX
006371C2  85 F6                     TEST ESI,ESI
006371C4  0F 84 B1 00 00 00         JZ 0x0063727b
006371CA  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006371CD  85 C0                     TEST EAX,EAX
006371CF  0F 8C A6 00 00 00         JL 0x0063727b
006371D5  83 7E 08 01               CMP dword ptr [ESI + 0x8],0x1
006371D9  0F 85 85 00 00 00         JNZ 0x00637264
006371DF  8B 4E 1E                  MOV ECX,dword ptr [ESI + 0x1e]
006371E2  51                        PUSH ECX
006371E3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006371E9  6A 00                     PUSH 0x0
006371EB  50                        PUSH EAX
006371EC  E8 7F 30 0B 00            CALL 0x006ea270
006371F1  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
006371F4  84 C0                     TEST AL,AL
006371F6  74 4E                     JZ 0x00637246
006371F8  DB 46 16                  FILD dword ptr [ESI + 0x16]
006371FB  51                        PUSH ECX
006371FC  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006371FF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637205  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063720B  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00637211  D9 1C 24                  FSTP float ptr [ESP]
00637214  DB 46 12                  FILD dword ptr [ESI + 0x12]
00637217  51                        PUSH ECX
00637218  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063721E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637224  D9 1C 24                  FSTP float ptr [ESP]
00637227  DB 46 0E                  FILD dword ptr [ESI + 0xe]
0063722A  51                        PUSH ECX
0063722B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637231  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637237  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063723D  D9 1C 24                  FSTP float ptr [ESP]
00637240  52                        PUSH EDX
00637241  E8 1A 37 0B 00            CALL 0x006ea960
LAB_00637246:
00637246  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
00637249  84 C0                     TEST AL,AL
0063724B  75 2E                     JNZ 0x0063727b
0063724D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00637250  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637256  6A 00                     PUSH 0x0
00637258  50                        PUSH EAX
00637259  E8 42 38 0B 00            CALL 0x006eaaa0
0063725E  C6 46 0D 01               MOV byte ptr [ESI + 0xd],0x1
00637262  EB 17                     JMP 0x0063727b
LAB_00637264:
00637264  8A 4E 0D                  MOV CL,byte ptr [ESI + 0xd]
00637267  84 C9                     TEST CL,CL
00637269  74 10                     JZ 0x0063727b
0063726B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637271  50                        PUSH EAX
00637272  E8 E9 38 0B 00            CALL 0x006eab60
00637277  C6 46 0D 00               MOV byte ptr [ESI + 0xd],0x0
LAB_0063727b:
0063727B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063727E  47                        INC EDI
0063727F  3B F8                     CMP EDI,EAX
00637281  0F 8C 21 FF FF FF         JL 0x006371a8
00637287  5E                        POP ESI
LAB_00637288:
00637288  5F                        POP EDI
00637289  8B E5                     MOV ESP,EBP
0063728B  5D                        POP EBP
0063728C  C3                        RET
