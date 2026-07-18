FUN_004353b0:
004353B0  55                        PUSH EBP
004353B1  8B EC                     MOV EBP,ESP
004353B3  53                        PUSH EBX
004353B4  56                        PUSH ESI
004353B5  8B F1                     MOV ESI,ECX
004353B7  33 C9                     XOR ECX,ECX
004353B9  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004353BF  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004353C2  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
004353C5  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
004353C8  C1 E0 04                  SHL EAX,0x4
004353CB  03 C1                     ADD EAX,ECX
004353CD  D1 E0                     SHL EAX,0x1
004353CF  83 B8 23 50 7F 00 01      CMP dword ptr [EAX + 0x7f5023],0x1
004353D6  0F 85 B8 00 00 00         JNZ 0x00435494
004353DC  81 B8 D3 4F 7F 00 9A 01 00 00  CMP dword ptr [EAX + 0x7f4fd3],0x19a
004353E6  0F 85 A8 00 00 00         JNZ 0x00435494
004353EC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004353EF  8B 90 D7 4F 7F 00         MOV EDX,dword ptr [EAX + 0x7f4fd7]
004353F5  0F BE CB                  MOVSX ECX,BL
004353F8  3B D1                     CMP EDX,ECX
004353FA  0F 85 94 00 00 00         JNZ 0x00435494
00435400  8B 88 DD 4F 7F 00         MOV ECX,dword ptr [EAX + 0x7f4fdd]
00435406  8D 55 0A                  LEA EDX,[EBP + 0xa]
00435409  52                        PUSH EDX
0043540A  33 D2                     XOR EDX,EDX
0043540C  E8 5F 78 27 00            CALL 0x006acc70
00435411  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00435414  66 39 45 0A               CMP word ptr [EBP + 0xa],AX
00435418  75 7A                     JNZ 0x00435494
0043541A  57                        PUSH EDI
0043541B  6A 01                     PUSH 0x1
0043541D  50                        PUSH EAX
0043541E  53                        PUSH EBX
0043541F  8B CE                     MOV ECX,ESI
00435421  E8 94 D4 FC FF            CALL 0x004028ba
00435426  8B 10                     MOV EDX,dword ptr [EAX]
00435428  6A 00                     PUSH 0x0
0043542A  8B C8                     MOV ECX,EAX
0043542C  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
00435432  8D 45 10                  LEA EAX,[EBP + 0x10]
00435435  50                        PUSH EAX
00435436  33 C0                     XOR EAX,EAX
00435438  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043543D  6A 00                     PUSH 0x0
0043543F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00435442  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00435445  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00435448  C1 E1 04                  SHL ECX,0x4
0043544B  03 C8                     ADD ECX,EAX
0043544D  8B 14 4D DD 4F 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f4fdd]
00435454  52                        PUSH EDX
00435455  E8 E6 8C 27 00            CALL 0x006ae140
0043545A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0043545D  6A 01                     PUSH 0x1
0043545F  50                        PUSH EAX
00435460  53                        PUSH EBX
00435461  8B CE                     MOV ECX,ESI
00435463  E8 52 D4 FC FF            CALL 0x004028ba
00435468  8B F8                     MOV EDI,EAX
0043546A  8B CF                     MOV ECX,EDI
0043546C  E8 57 EE FC FF            CALL 0x004042c8
00435471  8B 17                     MOV EDX,dword ptr [EDI]
00435473  6A 01                     PUSH 0x1
00435475  8B CF                     MOV ECX,EDI
00435477  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0043547D  6A 00                     PUSH 0x0
0043547F  6A 04                     PUSH 0x4
00435481  8B CE                     MOV ECX,ESI
00435483  E8 CD F7 FC FF            CALL 0x00404c55
00435488  6A 00                     PUSH 0x0
0043548A  6A 05                     PUSH 0x5
0043548C  8B CE                     MOV ECX,ESI
0043548E  E8 C2 F7 FC FF            CALL 0x00404c55
00435493  5F                        POP EDI
LAB_00435494:
00435494  5E                        POP ESI
00435495  5B                        POP EBX
00435496  5D                        POP EBP
00435497  C2 0C 00                  RET 0xc
