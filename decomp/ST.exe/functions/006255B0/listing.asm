FUN_006255b0:
006255B0  55                        PUSH EBP
006255B1  8B EC                     MOV EBP,ESP
006255B3  51                        PUSH ECX
006255B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006255B7  53                        PUSH EBX
006255B8  56                        PUSH ESI
006255B9  83 F8 01                  CMP EAX,0x1
006255BC  57                        PUSH EDI
006255BD  8B F1                     MOV ESI,ECX
006255BF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006255C6  0F 84 99 00 00 00         JZ 0x00625665
006255CC  0F 8E FE 00 00 00         JLE 0x006256d0
006255D2  83 F8 03                  CMP EAX,0x3
006255D5  0F 8F F5 00 00 00         JG 0x006256d0
006255DB  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
006255E1  85 C9                     TEST ECX,ECX
006255E3  0F 84 E7 00 00 00         JZ 0x006256d0
006255E9  8D 55 FC                  LEA EDX,[EBP + -0x4]
006255EC  8B 01                     MOV EAX,dword ptr [ECX]
006255EE  52                        PUSH EDX
006255EF  8D 55 22                  LEA EDX,[EBP + 0x22]
006255F2  52                        PUSH EDX
006255F3  8D 55 26                  LEA EDX,[EBP + 0x26]
006255F6  52                        PUSH EDX
006255F7  8D 55 0A                  LEA EDX,[EBP + 0xa]
006255FA  52                        PUSH EDX
006255FB  8B 96 49 02 00 00         MOV EDX,dword ptr [ESI + 0x249]
00625601  52                        PUSH EDX
00625602  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
00625608  85 C0                     TEST EAX,EAX
0062560A  0F 85 C0 00 00 00         JNZ 0x006256d0
00625610  0F BF 4D 26               MOVSX ECX,word ptr [EBP + 0x26]
00625614  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
00625618  0F BF 55 22               MOVSX EDX,word ptr [EBP + 0x22]
0062561C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0062561F  89 8E 55 02 00 00         MOV dword ptr [ESI + 0x255],ECX
00625625  89 8E C6 02 00 00         MOV dword ptr [ESI + 0x2c6],ECX
0062562B  8B CE                     MOV ECX,ESI
0062562D  89 86 51 02 00 00         MOV dword ptr [ESI + 0x251],EAX
00625633  89 96 59 02 00 00         MOV dword ptr [ESI + 0x259],EDX
00625639  89 BE 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EDI
0062563F  89 86 C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EAX
00625645  89 96 CA 02 00 00         MOV dword ptr [ESI + 0x2ca],EDX
0062564B  E8 73 EC DD FF            CALL 0x004042c3
00625650  6A 01                     PUSH 0x1
00625652  8B CE                     MOV ECX,ESI
00625654  E8 6D BC DD FF            CALL 0x004012c6
00625659  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062565C  5F                        POP EDI
0062565D  5E                        POP ESI
0062565E  5B                        POP EBX
0062565F  8B E5                     MOV ESP,EBP
00625661  5D                        POP EBP
00625662  C2 20 00                  RET 0x20
LAB_00625665:
00625665  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00625668  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
0062566B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0062566E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00625671  8D 45 1C                  LEA EAX,[EBP + 0x1c]
00625674  6A 00                     PUSH 0x0
00625676  50                        PUSH EAX
00625677  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062567A  51                        PUSH ECX
0062567B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062567E  57                        PUSH EDI
0062567F  53                        PUSH EBX
00625680  52                        PUSH EDX
00625681  50                        PUSH EAX
00625682  51                        PUSH ECX
00625683  8B CE                     MOV ECX,ESI
00625685  E8 89 00 DE FF            CALL 0x00405713
0062568A  85 C0                     TEST EAX,EAX
0062568C  74 2D                     JZ 0x006256bb
0062568E  8B 96 51 02 00 00         MOV EDX,dword ptr [ESI + 0x251]
00625694  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0062569A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062569D  89 96 C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EDX
006256A3  89 86 C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EAX
006256A9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006256AC  89 8E CA 02 00 00         MOV dword ptr [ESI + 0x2ca],ECX
006256B2  5F                        POP EDI
006256B3  5E                        POP ESI
006256B4  5B                        POP EBX
006256B5  8B E5                     MOV ESP,EBP
006256B7  5D                        POP EBP
006256B8  C2 20 00                  RET 0x20
LAB_006256bb:
006256BB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006256BE  89 9E C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EBX
006256C4  89 BE C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EDI
006256CA  89 96 CA 02 00 00         MOV dword ptr [ESI + 0x2ca],EDX
LAB_006256d0:
006256D0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006256D3  5F                        POP EDI
006256D4  5E                        POP ESI
006256D5  5B                        POP EBX
006256D6  8B E5                     MOV ESP,EBP
006256D8  5D                        POP EBP
006256D9  C2 20 00                  RET 0x20
