VisibleClassTy::SetZoneMin2:
0055A620  55                        PUSH EBP
0055A621  8B EC                     MOV EBP,ESP
0055A623  83 EC 5C                  SUB ESP,0x5c
0055A626  53                        PUSH EBX
0055A627  56                        PUSH ESI
0055A628  57                        PUSH EDI
0055A629  8B F9                     MOV EDI,ECX
0055A62B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0055A62E  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
0055A634  85 C0                     TEST EAX,EAX
0055A636  0F 84 9D 01 00 00         JZ 0x0055a7d9
0055A63C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A63F  85 F6                     TEST ESI,ESI
0055A641  0F 8C 92 01 00 00         JL 0x0055a7d9
0055A647  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055A64A  83 F8 08                  CMP EAX,0x8
0055A64D  0F 83 86 01 00 00         JNC 0x0055a7d9
0055A653  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0055A659  85 C9                     TEST ECX,ECX
0055A65B  74 11                     JZ 0x0055a66e
0055A65D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0055A660  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
0055A668  0F 83 6B 01 00 00         JNC 0x0055a7d9
LAB_0055a66e:
0055A66E  8B 8C 87 D4 00 00 00      MOV ECX,dword ptr [EDI + EAX*0x4 + 0xd4]
0055A675  85 C9                     TEST ECX,ECX
0055A677  75 4F                     JNZ 0x0055a6c8
0055A679  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055A67E  8D 55 A8                  LEA EDX,[EBP + -0x58]
0055A681  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0055A684  6A 00                     PUSH 0x0
0055A686  52                        PUSH EDX
0055A687  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0055A68A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055A690  E8 5B 31 1D 00            CALL 0x0072d7f0
0055A695  83 C4 08                  ADD ESP,0x8
0055A698  85 C0                     TEST EAX,EAX
0055A69A  0F 85 BC 00 00 00         JNZ 0x0055a75c
0055A6A0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0055A6A3  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0055A6A6  0F AF 47 20               IMUL EAX,dword ptr [EDI + 0x20]
0055A6AA  50                        PUSH EAX
0055A6AB  E8 60 05 15 00            CALL 0x006aac10
0055A6B0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A6B3  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0055A6B6  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A6B9  89 84 8F D4 00 00 00      MOV dword ptr [EDI + ECX*0x4 + 0xd4],EAX
0055A6C0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055A6C6  8B C1                     MOV EAX,ECX
LAB_0055a6c8:
0055A6C8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0055A6CB  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055A6CE  F6 C5 10                  TEST CH,0x10
0055A6D1  74 18                     JZ 0x0055a6eb
0055A6D3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0055A6D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055A6D9  52                        PUSH EDX
0055A6DA  56                        PUSH ESI
0055A6DB  50                        PUSH EAX
0055A6DC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A6DF  50                        PUSH EAX
0055A6E0  53                        PUSH EBX
0055A6E1  51                        PUSH ECX
0055A6E2  6A 06                     PUSH 0x6
0055A6E4  8B CF                     MOV ECX,EDI
0055A6E6  E8 17 94 EA FF            CALL 0x00403b02
LAB_0055a6eb:
0055A6EB  F6 45 20 40               TEST byte ptr [EBP + 0x20],0x40
0055A6EF  0F 84 E4 00 00 00         JZ 0x0055a7d9
0055A6F5  85 F6                     TEST ESI,ESI
0055A6F7  7D 05                     JGE 0x0055a6fe
0055A6F9  33 F6                     XOR ESI,ESI
0055A6FB  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_0055a6fe:
0055A6FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055A701  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
0055A705  2B C6                     SUB EAX,ESI
0055A707  56                        PUSH ESI
0055A708  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0055A70B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0055A70E  2B DE                     SUB EBX,ESI
0055A710  E8 AA 81 EA FF            CALL 0x004028bf
0055A715  8B C8                     MOV ECX,EAX
0055A717  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055A71A  83 C4 04                  ADD ESP,0x4
0055A71D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0055A720  85 C0                     TEST EAX,EAX
0055A722  0F 8E B1 00 00 00         JLE 0x0055a7d9
0055A728  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055A72B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0055a72e:
0055A72E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0055A731  33 C0                     XOR EAX,EAX
LAB_0055a733:
0055A733  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0055A736  85 C9                     TEST ECX,ECX
0055A738  74 09                     JZ 0x0055a743
0055A73A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055A73D  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
0055A741  74 73                     JZ 0x0055a7b6
LAB_0055a743:
0055A743  85 F6                     TEST ESI,ESI
0055A745  7C 4B                     JL 0x0055a792
0055A747  3B 77 20                  CMP ESI,dword ptr [EDI + 0x20]
0055A74A  7D 46                     JGE 0x0055a792
0055A74C  85 DB                     TEST EBX,EBX
0055A74E  7C 42                     JL 0x0055a792
0055A750  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
0055A753  7D 3D                     JGE 0x0055a792
0055A755  B9 01 00 00 00            MOV ECX,0x1
0055A75A  EB 38                     JMP 0x0055a794
LAB_0055a75c:
0055A75C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0055A75F  68 40 94 7C 00            PUSH 0x7c9440
0055A764  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055A769  50                        PUSH EAX
0055A76A  6A 00                     PUSH 0x0
0055A76C  68 A3 03 00 00            PUSH 0x3a3
0055A771  68 CC 92 7C 00            PUSH 0x7c92cc
0055A776  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055A77C  E8 4F 2D 15 00            CALL 0x006ad4d0
0055A781  83 C4 18                  ADD ESP,0x18
0055A784  85 C0                     TEST EAX,EAX
0055A786  74 51                     JZ 0x0055a7d9
0055A788  CC                        INT3
LAB_0055a792:
0055A792  33 C9                     XOR ECX,ECX
LAB_0055a794:
0055A794  85 C9                     TEST ECX,ECX
0055A796  74 1E                     JZ 0x0055a7b6
0055A798  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0055A79B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A79E  0F AF D3                  IMUL EDX,EBX
0055A7A1  03 94 8F D4 00 00 00      ADD EDX,dword ptr [EDI + ECX*0x4 + 0xd4]
0055A7A8  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
0055A7AB  03 D6                     ADD EDX,ESI
0055A7AD  80 F9 FF                  CMP CL,0xff
0055A7B0  73 04                     JNC 0x0055a7b6
0055A7B2  FE C1                     INC CL
0055A7B4  88 0A                     MOV byte ptr [EDX],CL
LAB_0055a7b6:
0055A7B6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0055A7B9  40                        INC EAX
0055A7BA  46                        INC ESI
0055A7BB  3B C1                     CMP EAX,ECX
0055A7BD  0F 8C 70 FF FF FF         JL 0x0055a733
0055A7C3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055A7C6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055A7C9  03 D1                     ADD EDX,ECX
0055A7CB  43                        INC EBX
0055A7CC  48                        DEC EAX
0055A7CD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055A7D0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055A7D3  0F 85 55 FF FF FF         JNZ 0x0055a72e
LAB_0055a7d9:
0055A7D9  5F                        POP EDI
0055A7DA  5E                        POP ESI
0055A7DB  5B                        POP EBX
0055A7DC  8B E5                     MOV ESP,EBP
0055A7DE  5D                        POP EBP
0055A7DF  C2 1C 00                  RET 0x1c
