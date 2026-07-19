STAllPlayersC::ResetActivityFromTmp:
0042D4F0  55                        PUSH EBP
0042D4F1  8B EC                     MOV EBP,ESP
0042D4F3  53                        PUSH EBX
0042D4F4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0042D4F7  8B C3                     MOV EAX,EBX
0042D4F9  56                        PUSH ESI
0042D4FA  83 E8 00                  SUB EAX,0x0
0042D4FD  57                        PUSH EDI
0042D4FE  8B F1                     MOV ESI,ECX
0042D500  74 4E                     JZ 0x0042d550
0042D502  48                        DEC EAX
0042D503  74 30                     JZ 0x0042d535
0042D505  68 18 64 7A 00            PUSH 0x7a6418
0042D50A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042D50F  6A 00                     PUSH 0x0
0042D511  6A 00                     PUSH 0x0
0042D513  68 4D 04 00 00            PUSH 0x44d
0042D518  68 04 60 7A 00            PUSH 0x7a6004
0042D51D  E8 AE FF 27 00            CALL 0x006ad4d0
0042D522  83 C4 18                  ADD ESP,0x18
0042D525  85 C0                     TEST EAX,EAX
0042D527  0F 84 10 01 00 00         JZ 0x0042d63d
0042D52D  CC                        INT3
LAB_0042d535:
0042D535  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042D539  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042D53C  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042D53F  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042D542  C1 E1 04                  SHL ECX,0x4
0042D545  03 C8                     ADD ECX,EAX
0042D547  8D 04 4D D3 4F 7F 00      LEA EAX,[ECX*0x2 + 0x7f4fd3]
0042D54E  EB 19                     JMP 0x0042d569
LAB_0042d550:
0042D550  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042D554  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0042D557  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0042D55A  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0042D55D  C1 E2 04                  SHL EDX,0x4
0042D560  03 D0                     ADD EDX,EAX
0042D562  8D 04 55 83 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f83]
LAB_0042d569:
0042D569  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0042D56C  8B CF                     MOV ECX,EDI
0042D56E  C1 E1 04                  SHL ECX,0x4
0042D571  03 C8                     ADD ECX,EAX
0042D573  8B 01                     MOV EAX,dword ptr [ECX]
0042D575  3D 9A 01 00 00            CMP EAX,0x19a
0042D57A  7F 2C                     JG 0x0042d5a8
0042D57C  74 1B                     JZ 0x0042d599
0042D57E  83 F8 5A                  CMP EAX,0x5a
0042D581  7F 0D                     JG 0x0042d590
0042D583  74 63                     JZ 0x0042d5e8
0042D585  85 C0                     TEST EAX,EAX
0042D587  74 76                     JZ 0x0042d5ff
0042D589  83 F8 3C                  CMP EAX,0x3c
0042D58C  74 0B                     JZ 0x0042d599
0042D58E  EB 2C                     JMP 0x0042d5bc
LAB_0042d590:
0042D590  3D 72 01 00 00            CMP EAX,0x172
0042D595  74 51                     JZ 0x0042d5e8
0042D597  EB 23                     JMP 0x0042d5bc
LAB_0042d599:
0042D599  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042D59C  52                        PUSH EDX
0042D59D  8B 51 0A                  MOV EDX,dword ptr [ECX + 0xa]
0042D5A0  68 FF FF 00 00            PUSH 0xffff
0042D5A5  52                        PUSH EDX
0042D5A6  EB 4B                     JMP 0x0042d5f3
LAB_0042d5a8:
0042D5A8  8B D0                     MOV EDX,EAX
0042D5AA  81 EA A4 01 00 00         SUB EDX,0x1a4
0042D5B0  74 36                     JZ 0x0042d5e8
0042D5B2  83 EA 0A                  SUB EDX,0xa
0042D5B5  74 31                     JZ 0x0042d5e8
0042D5B7  83 EA 0A                  SUB EDX,0xa
0042D5BA  74 2C                     JZ 0x0042d5e8
LAB_0042d5bc:
0042D5BC  68 DC 63 7A 00            PUSH 0x7a63dc
0042D5C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042D5C6  6A 00                     PUSH 0x0
0042D5C8  6A 00                     PUSH 0x0
0042D5CA  68 5F 04 00 00            PUSH 0x45f
0042D5CF  68 04 60 7A 00            PUSH 0x7a6004
0042D5D4  E8 F7 FE 27 00            CALL 0x006ad4d0
0042D5D9  83 C4 18                  ADD ESP,0x18
0042D5DC  85 C0                     TEST EAX,EAX
0042D5DE  74 5D                     JZ 0x0042d63d
0042D5E0  CC                        INT3
LAB_0042d5e8:
0042D5E8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042D5EB  52                        PUSH EDX
0042D5EC  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
0042D5F0  52                        PUSH EDX
0042D5F1  6A 00                     PUSH 0x0
LAB_0042d5f3:
0042D5F3  50                        PUSH EAX
0042D5F4  8A 41 04                  MOV AL,byte ptr [ECX + 0x4]
0042D5F7  50                        PUSH EAX
0042D5F8  8B CE                     MOV ECX,ESI
0042D5FA  E8 C1 51 FD FF            CALL 0x004027c0
LAB_0042d5ff:
0042D5FF  85 FF                     TEST EDI,EDI
0042D601  75 3A                     JNZ 0x0042d63d
0042D603  85 DB                     TEST EBX,EBX
0042D605  75 1B                     JNZ 0x0042d622
0042D607  53                        PUSH EBX
0042D608  6A 01                     PUSH 0x1
0042D60A  8B CE                     MOV ECX,ESI
0042D60C  E8 44 76 FD FF            CALL 0x00404c55
0042D611  53                        PUSH EBX
0042D612  6A 02                     PUSH 0x2
0042D614  8B CE                     MOV ECX,ESI
0042D616  E8 3A 76 FD FF            CALL 0x00404c55
0042D61B  5F                        POP EDI
0042D61C  5E                        POP ESI
0042D61D  5B                        POP EBX
0042D61E  5D                        POP EBP
0042D61F  C2 10 00                  RET 0x10
LAB_0042d622:
0042D622  83 FB 01                  CMP EBX,0x1
0042D625  75 16                     JNZ 0x0042d63d
0042D627  6A 00                     PUSH 0x0
0042D629  6A 05                     PUSH 0x5
0042D62B  8B CE                     MOV ECX,ESI
0042D62D  E8 23 76 FD FF            CALL 0x00404c55
0042D632  6A 00                     PUSH 0x0
0042D634  6A 04                     PUSH 0x4
0042D636  8B CE                     MOV ECX,ESI
0042D638  E8 18 76 FD FF            CALL 0x00404c55
LAB_0042d63d:
0042D63D  5F                        POP EDI
0042D63E  5E                        POP ESI
0042D63F  5B                        POP EBX
0042D640  5D                        POP EBP
0042D641  C2 10 00                  RET 0x10
