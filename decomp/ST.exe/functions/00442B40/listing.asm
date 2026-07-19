STAllPlayersC::_SubMDObject:
00442B40  55                        PUSH EBP
00442B41  8B EC                     MOV EBP,ESP
00442B43  83 EC 4C                  SUB ESP,0x4c
00442B46  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00442B49  53                        PUSH EBX
00442B4A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00442B4D  56                        PUSH ESI
00442B4E  57                        PUSH EDI
00442B4F  6A 01                     PUSH 0x1
00442B51  50                        PUSH EAX
00442B52  53                        PUSH EBX
00442B53  C7 45 D8 38 00 00 00      MOV dword ptr [EBP + -0x28],0x38
00442B5A  C7 45 DC 39 00 00 00      MOV dword ptr [EBP + -0x24],0x39
00442B61  C7 45 E0 4F 00 00 00      MOV dword ptr [EBP + -0x20],0x4f
00442B68  C7 45 E4 5E 00 00 00      MOV dword ptr [EBP + -0x1c],0x5e
00442B6F  E8 46 FD FB FF            CALL 0x004028ba
00442B74  8B F0                     MOV ESI,EAX
00442B76  8B CE                     MOV ECX,ESI
00442B78  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00442B7B  8B 16                     MOV EDX,dword ptr [ESI]
00442B7D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00442B80  8B F8                     MOV EDI,EAX
00442B82  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00442B89  85 F6                     TEST ESI,ESI
00442B8B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00442B8E  75 3D                     JNZ 0x00442bcd
00442B90  68 DC 80 7A 00            PUSH 0x7a80dc
00442B95  68 CC 4C 7A 00            PUSH 0x7a4ccc
00442B9A  56                        PUSH ESI
00442B9B  56                        PUSH ESI
00442B9C  68 6D 24 00 00            PUSH 0x246d
00442BA1  68 04 60 7A 00            PUSH 0x7a6004
00442BA6  E8 25 A9 26 00            CALL 0x006ad4d0
00442BAB  83 C4 18                  ADD ESP,0x18
00442BAE  85 C0                     TEST EAX,EAX
00442BB0  74 01                     JZ 0x00442bb3
00442BB2  CC                        INT3
LAB_00442bb3:
00442BB3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00442BB8  68 6E 24 00 00            PUSH 0x246e
00442BBD  68 04 60 7A 00            PUSH 0x7a6004
00442BC2  50                        PUSH EAX
00442BC3  68 04 00 FE AF            PUSH 0xaffe0004
00442BC8  E8 73 32 26 00            CALL 0x006a5e40
LAB_00442bcd:
00442BCD  83 FF 3B                  CMP EDI,0x3b
00442BD0  0F 84 EF 00 00 00         JZ 0x00442cc5
00442BD6  83 FF 60                  CMP EDI,0x60
00442BD9  0F 84 E6 00 00 00         JZ 0x00442cc5
00442BDF  33 C9                     XOR ECX,ECX
00442BE1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00442BE4  EB 06                     JMP 0x00442bec
LAB_00442be6:
00442BE6  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00442BE9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00442bec:
00442BEC  3B 7C 0D D8               CMP EDI,dword ptr [EBP + ECX*0x1 + -0x28]
00442BF0  0F 85 B4 00 00 00         JNZ 0x00442caa
00442BF6  0F BE C3                  MOVSX EAX,BL
00442BF9  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00442BFC  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00442BFF  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00442C02  C1 E2 04                  SHL EDX,0x4
00442C05  03 D0                     ADD EDX,EAX
00442C07  8B BC 51 2F 4E 7F 00      MOV EDI,dword ptr [ECX + EDX*0x2 + 0x7f4e2f]
00442C0E  66 8B 5F 0C               MOV BX,word ptr [EDI + 0xc]
00442C12  66 85 DB                  TEST BX,BX
00442C15  0F 86 8F 00 00 00         JBE 0x00442caa
00442C1B  8D 45 FC                  LEA EAX,[EBP + -0x4]
00442C1E  8D 4D FE                  LEA ECX,[EBP + -0x2]
00442C21  50                        PUSH EAX
00442C22  8D 55 0E                  LEA EDX,[EBP + 0xe]
00442C25  51                        PUSH ECX
00442C26  52                        PUSH EDX
00442C27  8B CE                     MOV ECX,ESI
00442C29  E8 97 EC FB FF            CALL 0x004018c5
00442C2E  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00442C32  33 F6                     XOR ESI,ESI
00442C34  81 E3 FF FF 00 00         AND EBX,0xffff
00442C3A  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
00442C3E  7E 64                     JLE 0x00442ca4
LAB_00442c40:
00442C40  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00442C43  8B D6                     MOV EDX,ESI
00442C45  51                        PUSH ECX
00442C46  8B CF                     MOV ECX,EDI
00442C48  E8 23 A0 26 00            CALL 0x006acc70
00442C4D  66 8B 45 BA               MOV AX,word ptr [EBP + -0x46]
00442C51  B9 FF FF 00 00            MOV ECX,0xffff
00442C56  66 3B C1                  CMP AX,CX
00442C59  74 44                     JZ 0x00442c9f
00442C5B  66 39 4D C2               CMP word ptr [EBP + -0x3e],CX
00442C5F  74 3E                     JZ 0x00442c9f
00442C61  66 8B 55 B4               MOV DX,word ptr [EBP + -0x4c]
00442C65  66 3B 55 0E               CMP DX,word ptr [EBP + 0xe]
00442C69  75 34                     JNZ 0x00442c9f
00442C6B  66 8B 55 B6               MOV DX,word ptr [EBP + -0x4a]
00442C6F  66 3B 55 FE               CMP DX,word ptr [EBP + -0x2]
00442C73  75 2A                     JNZ 0x00442c9f
00442C75  66 8B 55 B8               MOV DX,word ptr [EBP + -0x48]
00442C79  66 3B 55 FC               CMP DX,word ptr [EBP + -0x4]
00442C7D  75 20                     JNZ 0x00442c9f
00442C7F  66 3B 45 E8               CMP AX,word ptr [EBP + -0x18]
00442C83  75 1A                     JNZ 0x00442c9f
00442C85  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00442C88  66 89 4D C2               MOV word ptr [EBP + -0x3e],CX
00442C8C  50                        PUSH EAX
00442C8D  56                        PUSH ESI
00442C8E  57                        PUSH EDI
00442C8F  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00442C93  E8 A8 B4 26 00            CALL 0x006ae140
00442C98  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00442c9f:
00442C9F  46                        INC ESI
00442CA0  3B F3                     CMP ESI,EBX
00442CA2  7C 9C                     JL 0x00442c40
LAB_00442ca4:
00442CA4  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00442CA7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00442caa:
00442CAA  83 C1 04                  ADD ECX,0x4
00442CAD  83 F9 10                  CMP ECX,0x10
00442CB0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00442CB3  0F 8C 2D FF FF FF         JL 0x00442be6
00442CB9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00442CBC  5F                        POP EDI
00442CBD  5E                        POP ESI
00442CBE  5B                        POP EBX
00442CBF  8B E5                     MOV ESP,EBP
00442CC1  5D                        POP EBP
00442CC2  C2 08 00                  RET 0x8
LAB_00442cc5:
00442CC5  8D 4D FC                  LEA ECX,[EBP + -0x4]
00442CC8  8D 55 FE                  LEA EDX,[EBP + -0x2]
00442CCB  51                        PUSH ECX
00442CCC  8D 45 0E                  LEA EAX,[EBP + 0xe]
00442CCF  52                        PUSH EDX
00442CD0  50                        PUSH EAX
00442CD1  8B CE                     MOV ECX,ESI
00442CD3  E8 ED EB FB FF            CALL 0x004018c5
00442CD8  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00442CDC  C7 45 F0 04 00 00 00      MOV dword ptr [EBP + -0x10],0x4
00442CE3  0F BE C3                  MOVSX EAX,BL
00442CE6  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
00442CEA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00442CED  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00442CF0  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00442CF3  C1 E2 04                  SHL EDX,0x4
00442CF6  03 D0                     ADD EDX,EAX
00442CF8  8D 04 55 2F 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4e2f]
00442CFF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00442d02:
00442D02  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00442D05  8B 39                     MOV EDI,dword ptr [ECX]
00442D07  85 FF                     TEST EDI,EDI
00442D09  74 79                     JZ 0x00442d84
00442D0B  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
00442D0F  66 85 C0                  TEST AX,AX
00442D12  76 70                     JBE 0x00442d84
00442D14  BB FF FF 00 00            MOV EBX,0xffff
00442D19  33 F6                     XOR ESI,ESI
00442D1B  23 C3                     AND EAX,EBX
00442D1D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00442D20  7E 62                     JLE 0x00442d84
LAB_00442d22:
00442D22  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00442D25  8B CF                     MOV ECX,EDI
00442D27  52                        PUSH EDX
00442D28  8B D6                     MOV EDX,ESI
00442D2A  E8 41 9F 26 00            CALL 0x006acc70
00442D2F  66 39 5D BA               CMP word ptr [EBP + -0x46],BX
00442D33  74 47                     JZ 0x00442d7c
00442D35  66 8B 45 C2               MOV AX,word ptr [EBP + -0x3e]
00442D39  66 3B C3                  CMP AX,BX
00442D3C  74 3E                     JZ 0x00442d7c
00442D3E  66 8B 4D BC               MOV CX,word ptr [EBP + -0x44]
00442D42  66 3B 4D 0E               CMP CX,word ptr [EBP + 0xe]
00442D46  75 34                     JNZ 0x00442d7c
00442D48  66 8B 55 BE               MOV DX,word ptr [EBP + -0x42]
00442D4C  66 3B 55 FE               CMP DX,word ptr [EBP + -0x2]
00442D50  75 2A                     JNZ 0x00442d7c
00442D52  66 8B 4D C0               MOV CX,word ptr [EBP + -0x40]
00442D56  66 3B 4D FC               CMP CX,word ptr [EBP + -0x4]
00442D5A  75 20                     JNZ 0x00442d7c
00442D5C  66 3B 45 E8               CMP AX,word ptr [EBP + -0x18]
00442D60  75 1A                     JNZ 0x00442d7c
00442D62  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00442D65  66 89 5D C2               MOV word ptr [EBP + -0x3e],BX
00442D69  52                        PUSH EDX
00442D6A  56                        PUSH ESI
00442D6B  57                        PUSH EDI
00442D6C  66 89 5D BA               MOV word ptr [EBP + -0x46],BX
00442D70  E8 CB B3 26 00            CALL 0x006ae140
00442D75  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00442d7c:
00442D7C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00442D7F  46                        INC ESI
00442D80  3B F0                     CMP ESI,EAX
00442D82  7C 9E                     JL 0x00442d22
LAB_00442d84:
00442D84  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00442D87  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00442D8A  83 C1 04                  ADD ECX,0x4
00442D8D  48                        DEC EAX
00442D8E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00442D91  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00442D94  0F 85 68 FF FF FF         JNZ 0x00442d02
00442D9A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00442D9D  5F                        POP EDI
00442D9E  5E                        POP ESI
00442D9F  5B                        POP EBX
00442DA0  8B E5                     MOV ESP,EBP
00442DA2  5D                        POP EBP
00442DA3  C2 08 00                  RET 0x8
