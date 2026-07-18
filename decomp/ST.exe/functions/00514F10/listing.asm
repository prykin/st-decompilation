FUN_00514f10:
00514F10  55                        PUSH EBP
00514F11  8B EC                     MOV EBP,ESP
00514F13  83 EC 48                  SUB ESP,0x48
00514F16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00514F1B  56                        PUSH ESI
00514F1C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00514F1F  57                        PUSH EDI
00514F20  8D 55 BC                  LEA EDX,[EBP + -0x44]
00514F23  8D 4D B8                  LEA ECX,[EBP + -0x48]
00514F26  6A 00                     PUSH 0x0
00514F28  52                        PUSH EDX
00514F29  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00514F2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00514F32  E8 B9 88 21 00            CALL 0x0072d7f0
00514F37  8B F0                     MOV ESI,EAX
00514F39  83 C4 08                  ADD ESP,0x8
00514F3C  85 F6                     TEST ESI,ESI
00514F3E  0F 85 6A 01 00 00         JNZ 0x005150ae
00514F44  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00514F47  8B 86 D3 01 00 00         MOV EAX,dword ptr [ESI + 0x1d3]
00514F4D  85 C0                     TEST EAX,EAX
00514F4F  74 06                     JZ 0x00514f57
00514F51  50                        PUSH EAX
00514F52  E8 19 06 1A 00            CALL 0x006b5570
LAB_00514f57:
00514F57  6A 0A                     PUSH 0xa
00514F59  6A 0A                     PUSH 0xa
00514F5B  6A 00                     PUSH 0x0
00514F5D  E8 8E 05 1A 00            CALL 0x006b54f0
00514F62  89 86 D3 01 00 00         MOV dword ptr [ESI + 0x1d3],EAX
00514F68  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
00514F6E  33 FF                     XOR EDI,EDI
00514F70  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00514F73  85 C0                     TEST EAX,EAX
00514F75  7E 31                     JLE 0x00514fa8
00514F77  3B F8                     CMP EDI,EAX
00514F79  7D 08                     JGE 0x00514f83
LAB_00514f7b:
00514F7B  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
00514F7E  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
00514F81  EB 02                     JMP 0x00514f85
LAB_00514f83:
00514F83  33 C0                     XOR EAX,EAX
LAB_00514f85:
00514F85  8B 8E D3 01 00 00         MOV ECX,dword ptr [ESI + 0x1d3]
00514F8B  68 60 3B 7C 00            PUSH 0x7c3b60
00514F90  50                        PUSH EAX
00514F91  51                        PUSH ECX
00514F92  E8 09 C6 EE FF            CALL 0x004015a0
00514F97  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
00514F9D  83 C4 0C                  ADD ESP,0xc
00514FA0  47                        INC EDI
00514FA1  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00514FA4  3B F8                     CMP EDI,EAX
00514FA6  7C D3                     JL 0x00514f7b
LAB_00514fa8:
00514FA8  8B 96 D3 01 00 00         MOV EDX,dword ptr [ESI + 0x1d3]
00514FAE  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
00514FB4  6A 01                     PUSH 0x1
00514FB6  6A 00                     PUSH 0x0
00514FB8  6A FF                     PUSH -0x1
00514FBA  6A 00                     PUSH 0x0
00514FBC  68 9C 01 00 00            PUSH 0x19c
00514FC1  68 EC 21 7C 00            PUSH 0x7c21ec
00514FC6  68 D8 21 7C 00            PUSH 0x7c21d8
00514FCB  52                        PUSH EDX
00514FCC  E8 0F D7 1F 00            CALL 0x007126e0
00514FD1  8B F8                     MOV EDI,EAX
00514FD3  8B 86 D3 01 00 00         MOV EAX,dword ptr [ESI + 0x1d3]
00514FD9  85 C0                     TEST EAX,EAX
00514FDB  74 06                     JZ 0x00514fe3
00514FDD  50                        PUSH EAX
00514FDE  E8 8D 05 1A 00            CALL 0x006b5570
LAB_00514fe3:
00514FE3  85 FF                     TEST EDI,EDI
00514FE5  89 BE D3 01 00 00         MOV dword ptr [ESI + 0x1d3],EDI
00514FEB  75 1B                     JNZ 0x00515008
00514FED  6A 0A                     PUSH 0xa
00514FEF  6A 0A                     PUSH 0xa
00514FF1  57                        PUSH EDI
00514FF2  E8 F9 04 1A 00            CALL 0x006b54f0
00514FF7  68 5C 3B 7C 00            PUSH 0x7c3b5c
00514FFC  50                        PUSH EAX
00514FFD  89 86 D3 01 00 00         MOV dword ptr [ESI + 0x1d3],EAX
00515003  E8 98 0A 1A 00            CALL 0x006b5aa0
LAB_00515008:
00515008  8B 86 D3 01 00 00         MOV EAX,dword ptr [ESI + 0x1d3]
0051500E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00515011  85 C9                     TEST ECX,ECX
00515013  74 0D                     JZ 0x00515022
00515015  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
0051501B  50                        PUSH EAX
0051501C  50                        PUSH EAX
0051501D  E8 AE D9 1F 00            CALL 0x007129d0
LAB_00515022:
00515022  80 BE A1 01 00 00 07      CMP byte ptr [ESI + 0x1a1],0x7
00515029  75 74                     JNZ 0x0051509f
0051502B  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
00515031  85 C0                     TEST EAX,EAX
00515033  74 6A                     JZ 0x0051509f
00515035  8B 8E D3 01 00 00         MOV ECX,dword ptr [ESI + 0x1d3]
0051503B  8D 7E 18                  LEA EDI,[ESI + 0x18]
0051503E  C7 46 28 28 00 00 00      MOV dword ptr [ESI + 0x28],0x28
00515045  66 C7 46 2C 01 00         MOV word ptr [ESI + 0x2c],0x1
0051504B  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
0051504F  57                        PUSH EDI
00515050  50                        PUSH EAX
00515051  6A 02                     PUSH 0x2
00515053  8B CE                     MOV ECX,ESI
00515055  66 89 56 2E               MOV word ptr [ESI + 0x2e],DX
00515059  E8 22 10 1D 00            CALL 0x006e6080
0051505E  33 C0                     XOR EAX,EAX
00515060  57                        PUSH EDI
00515061  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
00515065  66 89 46 2C               MOV word ptr [ESI + 0x2c],AX
00515069  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
0051506F  8B CE                     MOV ECX,ESI
00515071  50                        PUSH EAX
00515072  6A 02                     PUSH 0x2
00515074  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
0051507B  E8 00 10 1D 00            CALL 0x006e6080
00515080  8B 8E 9C 01 00 00         MOV ECX,dword ptr [ESI + 0x19c]
00515086  57                        PUSH EDI
00515087  51                        PUSH ECX
00515088  6A 02                     PUSH 0x2
0051508A  8B CE                     MOV ECX,ESI
0051508C  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00515093  C7 46 2C 01 00 00 00      MOV dword ptr [ESI + 0x2c],0x1
0051509A  E8 E1 0F 1D 00            CALL 0x006e6080
LAB_0051509f:
0051509F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005150A2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005150A8  5F                        POP EDI
005150A9  5E                        POP ESI
005150AA  8B E5                     MOV ESP,EBP
005150AC  5D                        POP EBP
005150AD  C3                        RET
LAB_005150ae:
005150AE  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005150B1  68 3C 3B 7C 00            PUSH 0x7c3b3c
005150B6  68 CC 4C 7A 00            PUSH 0x7a4ccc
005150BB  56                        PUSH ESI
005150BC  6A 00                     PUSH 0x0
005150BE  68 9B 03 00 00            PUSH 0x39b
005150C3  68 3C 38 7C 00            PUSH 0x7c383c
005150C8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005150CD  E8 FE 83 19 00            CALL 0x006ad4d0
005150D2  83 C4 18                  ADD ESP,0x18
005150D5  85 C0                     TEST EAX,EAX
005150D7  74 01                     JZ 0x005150da
005150D9  CC                        INT3
LAB_005150da:
005150DA  68 9B 03 00 00            PUSH 0x39b
005150DF  68 3C 38 7C 00            PUSH 0x7c383c
005150E4  6A 00                     PUSH 0x0
005150E6  56                        PUSH ESI
005150E7  E8 54 0D 19 00            CALL 0x006a5e40
005150EC  5F                        POP EDI
005150ED  5E                        POP ESI
005150EE  8B E5                     MOV ESP,EBP
005150F0  5D                        POP EBP
005150F1  C3                        RET
