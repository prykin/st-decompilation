FUN_005908b0:
005908B0  55                        PUSH EBP
005908B1  8B EC                     MOV EBP,ESP
005908B3  83 EC 48                  SUB ESP,0x48
005908B6  56                        PUSH ESI
005908B7  8B F1                     MOV ESI,ECX
005908B9  57                        PUSH EDI
005908BA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005908BD  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005908C0  E8 EB 48 15 00            CALL 0x006e51b0
005908C5  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
005908C8  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005908CD  8D 55 BC                  LEA EDX,[EBP + -0x44]
005908D0  8D 4D B8                  LEA ECX,[EBP + -0x48]
005908D3  6A 00                     PUSH 0x0
005908D5  52                        PUSH EDX
005908D6  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005908D9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005908DF  E8 0C CF 19 00            CALL 0x0072d7f0
005908E4  8B F0                     MOV ESI,EAX
005908E6  83 C4 08                  ADD ESP,0x8
005908E9  85 F6                     TEST ESI,ESI
005908EB  0F 85 96 00 00 00         JNZ 0x00590987
005908F1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005908F4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005908F7  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005908FA  83 F8 64                  CMP EAX,0x64
005908FD  77 6F                     JA 0x0059096e
005908FF  33 C9                     XOR ECX,ECX
00590901  8A 88 EC 09 59 00         MOV CL,byte ptr [EAX + 0x5909ec]
switchD_00590907::switchD:
00590907  FF 24 8D D4 09 59 00      JMP dword ptr [ECX*0x4 + 0x5909d4]
switchD_00590907::caseD_2:
0059090E  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
00590911  8B CE                     MOV ECX,ESI
00590913  8A 42 14                  MOV AL,byte ptr [EDX + 0x14]
00590916  88 46 5D                  MOV byte ptr [ESI + 0x5d],AL
00590919  E8 07 55 E7 FF            CALL 0x00405e25
0059091E  EB 4E                     JMP 0x0059096e
switchD_00590907::caseD_3:
00590920  8B CE                     MOV ECX,ESI
00590922  E8 99 23 E7 FF            CALL 0x00402cc0
00590927  EB 45                     JMP 0x0059096e
switchD_00590907::caseD_5:
00590929  8B CE                     MOV ECX,ESI
0059092B  E8 82 31 E7 FF            CALL 0x00403ab2
00590930  EB 3C                     JMP 0x0059096e
switchD_00590907::caseD_0:
00590932  8B CE                     MOV ECX,ESI
00590934  E8 9C 4F E7 FF            CALL 0x004058d5
00590939  EB 33                     JMP 0x0059096e
switchD_00590907::caseD_62:
0059093B  8B CE                     MOV ECX,ESI
0059093D  E8 36 2A E7 FF            CALL 0x00403378
00590942  8A 46 5D                  MOV AL,byte ptr [ESI + 0x5d]
00590945  84 C0                     TEST AL,AL
00590947  74 10                     JZ 0x00590959
00590949  C7 46 44 01 00 00 00      MOV dword ptr [ESI + 0x44],0x1
00590950  C7 46 48 02 71 00 00      MOV dword ptr [ESI + 0x48],0x7102
00590957  EB 15                     JMP 0x0059096e
LAB_00590959:
00590959  C7 46 40 00 02 00 00      MOV dword ptr [ESI + 0x40],0x200
00590960  C7 46 44 00 00 00 00      MOV dword ptr [ESI + 0x44],0x0
00590967  C7 46 48 02 61 00 00      MOV dword ptr [ESI + 0x48],0x6102
switchD_00590907::caseD_1:
0059096E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00590971  57                        PUSH EDI
00590972  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00590978  8B CE                     MOV ECX,ESI
0059097A  E8 51 56 15 00            CALL 0x006e5fd0
0059097F  5F                        POP EDI
00590980  5E                        POP ESI
00590981  8B E5                     MOV ESP,EBP
00590983  5D                        POP EBP
00590984  C2 04 00                  RET 0x4
LAB_00590987:
00590987  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059098A  68 A0 BC 7C 00            PUSH 0x7cbca0
0059098F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00590994  56                        PUSH ESI
00590995  6A 00                     PUSH 0x0
00590997  68 87 00 00 00            PUSH 0x87
0059099C  68 24 BC 7C 00            PUSH 0x7cbc24
005909A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005909A7  E8 24 CB 11 00            CALL 0x006ad4d0
005909AC  83 C4 18                  ADD ESP,0x18
005909AF  85 C0                     TEST EAX,EAX
005909B1  74 01                     JZ 0x005909b4
005909B3  CC                        INT3
LAB_005909b4:
005909B4  68 87 00 00 00            PUSH 0x87
005909B9  68 24 BC 7C 00            PUSH 0x7cbc24
005909BE  6A 00                     PUSH 0x0
005909C0  56                        PUSH ESI
005909C1  E8 7A 54 11 00            CALL 0x006a5e40
005909C6  5F                        POP EDI
005909C7  B8 FF FF 00 00            MOV EAX,0xffff
005909CC  5E                        POP ESI
005909CD  8B E5                     MOV ESP,EBP
005909CF  5D                        POP EBP
005909D0  C2 04 00                  RET 0x4
