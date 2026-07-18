FUN_005148a0:
005148A0  55                        PUSH EBP
005148A1  8B EC                     MOV EBP,ESP
005148A3  83 EC 14                  SUB ESP,0x14
005148A6  53                        PUSH EBX
005148A7  56                        PUSH ESI
005148A8  57                        PUSH EDI
005148A9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005148AC  8B D1                     MOV EDX,ECX
005148AE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005148B1  85 FF                     TEST EDI,EDI
005148B3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005148B6  0F 8E 9F 00 00 00         JLE 0x0051495b
005148BC  8B F7                     MOV ESI,EDI
005148BE  C1 E6 04                  SHL ESI,0x4
005148C1  03 F7                     ADD ESI,EDI
005148C3  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_005148c6:
005148C6  8B 82 C7 01 00 00         MOV EAX,dword ptr [EDX + 0x1c7]
005148CC  8B CF                     MOV ECX,EDI
005148CE  C1 E1 04                  SHL ECX,0x4
005148D1  8B D8                     MOV EBX,EAX
005148D3  03 D9                     ADD EBX,ECX
005148D5  8D 0C 1F                  LEA ECX,[EDI + EBX*0x1]
005148D8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005148DB  8B 19                     MOV EBX,dword ptr [ECX]
005148DD  3B 5C 06 04               CMP EBX,dword ptr [ESI + EAX*0x1 + 0x4]
005148E1  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005148E4  74 07                     JZ 0x005148ed
005148E6  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005148E9  85 C0                     TEST EAX,EAX
005148EB  75 4C                     JNZ 0x00514939
LAB_005148ed:
005148ED  8B 92 B3 01 00 00         MOV EDX,dword ptr [EDX + 0x1b3]
005148F3  33 C9                     XOR ECX,ECX
005148F5  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005148F8  85 F6                     TEST ESI,ESI
005148FA  76 2B                     JBE 0x00514927
005148FC  3B CE                     CMP ECX,ESI
005148FE  73 0B                     JNC 0x0051490b
LAB_00514900:
00514900  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00514903  0F AF C1                  IMUL EAX,ECX
00514906  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00514909  EB 02                     JMP 0x0051490d
LAB_0051490b:
0051490B  33 C0                     XOR EAX,EAX
LAB_0051490d:
0051490D  39 18                     CMP dword ptr [EAX],EBX
0051490F  75 11                     JNZ 0x00514922
00514911  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00514914  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
00514917  3B 7B 04                  CMP EDI,dword ptr [EBX + 0x4]
0051491A  74 2E                     JZ 0x0051494a
0051491C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051491F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00514922:
00514922  41                        INC ECX
00514923  3B CE                     CMP ECX,ESI
00514925  72 D9                     JC 0x00514900
LAB_00514927:
00514927  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051492A  57                        PUSH EDI
0051492B  E8 07 D1 EE FF            CALL 0x00401a37
00514930  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00514933  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00514936  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_00514939:
00514939  4F                        DEC EDI
0051493A  85 FF                     TEST EDI,EDI
0051493C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0051493F  7F 85                     JG 0x005148c6
00514941  5F                        POP EDI
00514942  5E                        POP ESI
00514943  5B                        POP EBX
00514944  8B E5                     MOV ESP,EBP
00514946  5D                        POP EBP
00514947  C2 04 00                  RET 0x4
LAB_0051494a:
0051494A  8A 50 12                  MOV DL,byte ptr [EAX + 0x12]
0051494D  84 D2                     TEST DL,DL
0051494F  75 0A                     JNZ 0x0051495b
00514951  51                        PUSH ECX
00514952  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00514955  50                        PUSH EAX
00514956  E8 07 0A EF FF            CALL 0x00405362
LAB_0051495b:
0051495B  5F                        POP EDI
0051495C  5E                        POP ESI
0051495D  5B                        POP EBX
0051495E  8B E5                     MOV ESP,EBP
00514960  5D                        POP EBP
00514961  C2 04 00                  RET 0x4
