FUN_00750590:
00750590  55                        PUSH EBP
00750591  8B EC                     MOV EBP,ESP
00750593  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00750596  53                        PUSH EBX
00750597  56                        PUSH ESI
00750598  57                        PUSH EDI
00750599  85 C0                     TEST EAX,EAX
0075059B  0F 8E AC 00 00 00         JLE 0x0075064d
007505A1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007505A4  85 C9                     TEST ECX,ECX
007505A6  0F 8E A1 00 00 00         JLE 0x0075064d
007505AC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007505AF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007505B2  2B F0                     SUB ESI,EAX
007505B4  2B D0                     SUB EDX,EAX
007505B6  83 F8 03                  CMP EAX,0x3
007505B9  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
007505BC  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
007505BF  7C 65                     JL 0x00750626
007505C1  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007505C4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007505C7  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
LAB_007505ca:
007505CA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007505CD  F7 C7 01 00 00 00         TEST EDI,0x1
007505D3  74 0C                     JZ 0x007505e1
007505D5  33 C0                     XOR EAX,EAX
007505D7  8A 06                     MOV AL,byte ptr [ESI]
007505D9  46                        INC ESI
007505DA  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
007505DD  88 07                     MOV byte ptr [EDI],AL
007505DF  47                        INC EDI
007505E0  49                        DEC ECX
LAB_007505e1:
007505E1  83 E9 02                  SUB ECX,0x2
LAB_007505e4:
007505E4  33 C0                     XOR EAX,EAX
007505E6  33 D2                     XOR EDX,EDX
007505E8  8A 06                     MOV AL,byte ptr [ESI]
007505EA  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
007505ED  83 C6 02                  ADD ESI,0x2
007505F0  83 C7 02                  ADD EDI,0x2
007505F3  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
007505F6  8A 14 13                  MOV DL,byte ptr [EBX + EDX*0x1]
007505F9  88 47 FE                  MOV byte ptr [EDI + -0x2],AL
007505FC  88 57 FF                  MOV byte ptr [EDI + -0x1],DL
007505FF  83 E9 02                  SUB ECX,0x2
00750602  7D E0                     JGE 0x007505e4
00750604  83 C1 02                  ADD ECX,0x2
00750607  74 0B                     JZ 0x00750614
00750609  33 C0                     XOR EAX,EAX
0075060B  8A 06                     MOV AL,byte ptr [ESI]
0075060D  46                        INC ESI
0075060E  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
00750611  88 07                     MOV byte ptr [EDI],AL
00750613  47                        INC EDI
LAB_00750614:
00750614  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
00750617  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
0075061A  FF 4D 1C                  DEC dword ptr [EBP + 0x1c]
0075061D  7F AB                     JG 0x007505ca
0075061F  5F                        POP EDI
00750620  5E                        POP ESI
00750621  5B                        POP EBX
00750622  5D                        POP EBP
00750623  C2 1C 00                  RET 0x1c
LAB_00750626:
00750626  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00750629  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075062C  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0075062F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_00750632:
00750632  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_00750635:
00750635  33 C0                     XOR EAX,EAX
00750637  8A 06                     MOV AL,byte ptr [ESI]
00750639  47                        INC EDI
0075063A  46                        INC ESI
0075063B  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
0075063E  49                        DEC ECX
0075063F  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
00750642  7F F1                     JG 0x00750635
00750644  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
00750647  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
0075064A  4A                        DEC EDX
0075064B  7F E5                     JG 0x00750632
LAB_0075064d:
0075064D  5F                        POP EDI
0075064E  5E                        POP ESI
0075064F  5B                        POP EBX
00750650  5D                        POP EBP
00750651  C2 1C 00                  RET 0x1c
