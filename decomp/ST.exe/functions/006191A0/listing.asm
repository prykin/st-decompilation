FUN_006191a0:
006191A0  55                        PUSH EBP
006191A1  8B EC                     MOV EBP,ESP
006191A3  51                        PUSH ECX
006191A4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006191A7  53                        PUSH EBX
006191A8  8B D9                     MOV EBX,ECX
006191AA  56                        PUSH ESI
006191AB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006191B1  57                        PUSH EDI
006191B2  3B 51 48                  CMP EDX,dword ptr [ECX + 0x48]
006191B5  0F 8C C5 00 00 00         JL 0x00619280
006191BB  3B 51 58                  CMP EDX,dword ptr [ECX + 0x58]
006191BE  0F 8F BC 00 00 00         JG 0x00619280
006191C4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006191C7  8B 71 44                  MOV ESI,dword ptr [ECX + 0x44]
006191CA  3B C6                     CMP EAX,ESI
006191CC  0F 8C AE 00 00 00         JL 0x00619280
006191D2  3B 41 54                  CMP EAX,dword ptr [ECX + 0x54]
006191D5  0F 8F A5 00 00 00         JG 0x00619280
006191DB  6A 00                     PUSH 0x0
006191DD  50                        PUSH EAX
006191DE  52                        PUSH EDX
006191DF  E8 EC 49 0C 00            CALL 0x006ddbd0
006191E4  85 C0                     TEST EAX,EAX
006191E6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006191E9  0F 84 98 00 00 00         JZ 0x00619287
006191EF  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
006191F5  85 F6                     TEST ESI,ESI
006191F7  0F 84 8A 00 00 00         JZ 0x00619287
006191FD  A0 4D 87 80 00            MOV AL,[0x0080874d]
00619202  0F BF BB CD 00 00 00      MOVSX EDI,word ptr [EBX + 0xcd]
00619209  3C FF                     CMP AL,0xff
0061920B  74 7A                     JZ 0x00619287
0061920D  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00619213  85 C0                     TEST EAX,EAX
00619215  74 70                     JZ 0x00619287
00619217  0F BF 93 CB 00 00 00      MOVSX EDX,word ptr [EBX + 0xcb]
0061921E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00619221  8D 4D 0C                  LEA ECX,[EBP + 0xc]
00619224  50                        PUSH EAX
00619225  51                        PUSH ECX
00619226  0F BF 83 C9 00 00 00      MOVSX EAX,word ptr [EBX + 0xc9]
0061922D  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
00619233  52                        PUSH EDX
00619234  50                        PUSH EAX
00619235  51                        PUSH ECX
00619236  8B CE                     MOV ECX,ESI
00619238  E8 16 AD DE FF            CALL 0x00403f53
0061923D  85 FF                     TEST EDI,EDI
0061923F  7C 46                     JL 0x00619287
00619241  83 FF 05                  CMP EDI,0x5
00619244  7D 41                     JGE 0x00619287
00619246  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00619249  85 D2                     TEST EDX,EDX
0061924B  7C 3A                     JL 0x00619287
0061924D  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00619250  3B D1                     CMP EDX,ECX
00619252  7D 33                     JGE 0x00619287
00619254  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0061925B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0061925E  03 C7                     ADD EAX,EDI
00619260  85 C0                     TEST EAX,EAX
00619262  7C 23                     JL 0x00619287
00619264  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00619267  7D 1E                     JGE 0x00619287
00619269  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0061926C  85 F6                     TEST ESI,ESI
0061926E  74 17                     JZ 0x00619287
00619270  0F AF C1                  IMUL EAX,ECX
00619273  03 C6                     ADD EAX,ESI
00619275  33 C9                     XOR ECX,ECX
00619277  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061927A  8B C1                     MOV EAX,ECX
0061927C  85 C0                     TEST EAX,EAX
0061927E  75 07                     JNZ 0x00619287
LAB_00619280:
00619280  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_00619287:
00619287  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0061928A  5F                        POP EDI
0061928B  5E                        POP ESI
0061928C  5B                        POP EBX
0061928D  8B E5                     MOV ESP,EBP
0061928F  5D                        POP EBP
00619290  C2 0C 00                  RET 0xc
