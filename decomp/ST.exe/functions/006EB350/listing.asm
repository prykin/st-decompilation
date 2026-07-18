FUN_006eb350:
006EB350  55                        PUSH EBP
006EB351  8B EC                     MOV EBP,ESP
006EB353  83 EC 1C                  SUB ESP,0x1c
006EB356  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EB359  56                        PUSH ESI
006EB35A  8B F1                     MOV ESI,ECX
006EB35C  8D 45 F0                  LEA EAX,[EBP + -0x10]
006EB35F  57                        PUSH EDI
006EB360  8D 4D F8                  LEA ECX,[EBP + -0x8]
006EB363  50                        PUSH EAX
006EB364  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006EB367  51                        PUSH ECX
006EB368  33 FF                     XOR EDI,EDI
006EB36A  52                        PUSH EDX
006EB36B  50                        PUSH EAX
006EB36C  8B CE                     MOV ECX,ESI
006EB36E  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006EB371  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006EB374  E8 77 FC FF FF            CALL 0x006eaff0
006EB379  85 C0                     TEST EAX,EAX
006EB37B  74 0A                     JZ 0x006eb387
006EB37D  5F                        POP EDI
006EB37E  33 C0                     XOR EAX,EAX
006EB380  5E                        POP ESI
006EB381  8B E5                     MOV ESP,EBP
006EB383  5D                        POP EBP
006EB384  C2 10 00                  RET 0x10
LAB_006eb387:
006EB387  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006EB38A  53                        PUSH EBX
006EB38B  3B C7                     CMP EAX,EDI
006EB38D  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006EB390  0F 8E CE 00 00 00         JLE 0x006eb464
006EB396  33 D2                     XOR EDX,EDX
006EB398  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006EB39B  EB 03                     JMP 0x006eb3a0
LAB_006eb39d:
006EB39D  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_006eb3a0:
006EB3A0  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006EB3A3  8B 0C 1A                  MOV ECX,dword ptr [EDX + EBX*0x1]
006EB3A6  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EB3A9  C1 E0 03                  SHL EAX,0x3
006EB3AC  2B C1                     SUB EAX,ECX
006EB3AE  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006EB3B1  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
006EB3B7  8D 3C 88                  LEA EDI,[EAX + ECX*0x4]
006EB3BA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006EB3BD  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
006EB3C3  85 C0                     TEST EAX,EAX
006EB3C5  74 64                     JZ 0x006eb42b
006EB3C7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EB3CA  8B B7 94 00 00 00         MOV ESI,dword ptr [EDI + 0x94]
006EB3D0  3B CE                     CMP ECX,ESI
006EB3D2  7D 57                     JGE 0x006eb42b
006EB3D4  8B 44 C8 04               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x4]
006EB3D8  85 C0                     TEST EAX,EAX
006EB3DA  74 4F                     JZ 0x006eb42b
006EB3DC  8B B7 A4 00 00 00         MOV ESI,dword ptr [EDI + 0xa4]
006EB3E2  0F BF 0C 8E               MOVSX ECX,word ptr [ESI + ECX*0x4]
006EB3E6  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
006EB3E9  8B 4C 1A 08               MOV ECX,dword ptr [EDX + EBX*0x1 + 0x8]
006EB3ED  0F BF 70 0E               MOVSX ESI,word ptr [EAX + 0xe]
006EB3F1  3B CE                     CMP ECX,ESI
006EB3F3  7C 36                     JL 0x006eb42b
006EB3F5  0F BF 58 12               MOVSX EBX,word ptr [EAX + 0x12]
006EB3F9  03 DE                     ADD EBX,ESI
006EB3FB  3B CB                     CMP ECX,EBX
006EB3FD  7D 2C                     JGE 0x006eb42b
006EB3FF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006EB402  8B 54 1A 0C               MOV EDX,dword ptr [EDX + EBX*0x1 + 0xc]
006EB406  0F BF 58 10               MOVSX EBX,word ptr [EAX + 0x10]
006EB40A  3B D3                     CMP EDX,EBX
006EB40C  7C 1D                     JL 0x006eb42b
006EB40E  0F BF 78 14               MOVSX EDI,word ptr [EAX + 0x14]
006EB412  03 FB                     ADD EDI,EBX
006EB414  3B D7                     CMP EDX,EDI
006EB416  7D 10                     JGE 0x006eb428
006EB418  2B D3                     SUB EDX,EBX
006EB41A  2B CE                     SUB ECX,ESI
006EB41C  52                        PUSH EDX
006EB41D  51                        PUSH ECX
006EB41E  50                        PUSH EAX
006EB41F  E8 6C 49 FE FF            CALL 0x006cfd90
006EB424  85 C0                     TEST EAX,EAX
006EB426  75 20                     JNZ 0x006eb448
LAB_006eb428:
006EB428  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006eb42b:
006EB42B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EB42E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006EB431  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EB434  40                        INC EAX
006EB435  83 C2 14                  ADD EDX,0x14
006EB438  3B C1                     CMP EAX,ECX
006EB43A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EB43D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006EB440  0F 8C 57 FF FF FF         JL 0x006eb39d
006EB446  EB 1C                     JMP 0x006eb464
LAB_006eb448:
006EB448  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EB44B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EB44E  3B C1                     CMP EAX,ECX
006EB450  7D 0F                     JGE 0x006eb461
006EB452  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006EB455  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006EB458  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EB45B  8B 74 90 04               MOV ESI,dword ptr [EAX + EDX*0x4 + 0x4]
006EB45F  EB 06                     JMP 0x006eb467
LAB_006eb461:
006EB461  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006eb464:
006EB464  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_006eb467:
006EB467  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EB46A  51                        PUSH ECX
006EB46B  E8 20 AA FB FF            CALL 0x006a5e90
006EB470  85 F6                     TEST ESI,ESI
006EB472  5B                        POP EBX
006EB473  74 26                     JZ 0x006eb49b
006EB475  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EB478  85 C0                     TEST EAX,EAX
006EB47A  74 1F                     JZ 0x006eb49b
006EB47C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EB47F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006EB482  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006EB485  52                        PUSH EDX
006EB486  50                        PUSH EAX
006EB487  E8 74 78 FF FF            CALL 0x006e2d00
006EB48C  3B 47 10                  CMP EAX,dword ptr [EDI + 0x10]
006EB48F  7D 0A                     JGE 0x006eb49b
006EB491  5F                        POP EDI
006EB492  33 C0                     XOR EAX,EAX
006EB494  5E                        POP ESI
006EB495  8B E5                     MOV ESP,EBP
006EB497  5D                        POP EBP
006EB498  C2 10 00                  RET 0x10
LAB_006eb49b:
006EB49B  8B C6                     MOV EAX,ESI
006EB49D  5F                        POP EDI
006EB49E  5E                        POP ESI
006EB49F  8B E5                     MOV ESP,EBP
006EB4A1  5D                        POP EBP
006EB4A2  C2 10 00                  RET 0x10
