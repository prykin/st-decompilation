FUN_00719410:
00719410  55                        PUSH EBP
00719411  8B EC                     MOV EBP,ESP
00719413  83 EC 14                  SUB ESP,0x14
00719416  33 C0                     XOR EAX,EAX
00719418  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071941B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071941E  33 C9                     XOR ECX,ECX
00719420  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00719423  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00719426  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00719429  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071942C  8B C2                     MOV EAX,EDX
0071942E  25 FF 00 00 00            AND EAX,0xff
00719433  83 F8 03                  CMP EAX,0x3
00719436  77 2F                     JA 0x00719467
switchD_00719438::switchD:
00719438  FF 24 85 B4 94 71 00      JMP dword ptr [EAX*0x4 + 0x7194b4]
switchD_00719438::caseD_1:
0071943F  C7 45 F4 E8 07 7F 00      MOV dword ptr [EBP + -0xc],0x7f07e8
00719446  EB 1F                     JMP 0x00719467
switchD_00719438::caseD_0:
00719448  C7 45 F4 DC 07 7F 00      MOV dword ptr [EBP + -0xc],0x7f07dc
0071944F  EB 16                     JMP 0x00719467
switchD_00719438::caseD_2:
00719451  C7 45 F4 D0 07 7F 00      MOV dword ptr [EBP + -0xc],0x7f07d0
00719458  EB 0D                     JMP 0x00719467
switchD_00719438::caseD_3:
0071945A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0071945D  C7 45 F4 C8 07 7F 00      MOV dword ptr [EBP + -0xc],0x7f07c8
00719464  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
switchD_00719438::default:
00719467  80 FA 02                  CMP DL,0x2
0071946A  76 0C                     JBE 0x00719478
0071946C  80 FA 03                  CMP DL,0x3
0071946F  75 12                     JNZ 0x00719483
00719471  B9 00 23 00 00            MOV ECX,0x2300
00719476  EB 0B                     JMP 0x00719483
LAB_00719478:
00719478  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071947B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0071947E  B9 02 22 00 00            MOV ECX,0x2202
LAB_00719483:
00719483  8D 55 EC                  LEA EDX,[EBP + -0x14]
00719486  52                        PUSH EDX
00719487  51                        PUSH ECX
00719488  68 03 08 00 00            PUSH 0x803
0071948D  6A 00                     PUSH 0x0
0071948F  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719495  85 C0                     TEST EAX,EAX
00719497  74 13                     JZ 0x007194ac
00719499  8D 4D F0                  LEA ECX,[EBP + -0x10]
0071949C  51                        PUSH ECX
0071949D  50                        PUSH EAX
0071949E  E8 ED 07 00 00            CALL 0x00719c90
007194A3  83 C4 08                  ADD ESP,0x8
007194A6  33 C0                     XOR EAX,EAX
007194A8  8B E5                     MOV ESP,EBP
007194AA  5D                        POP EBP
007194AB  C3                        RET
LAB_007194ac:
007194AC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007194AF  8B E5                     MOV ESP,EBP
007194B1  5D                        POP EBP
007194B2  C3                        RET
