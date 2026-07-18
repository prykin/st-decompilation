FUN_004d78e0:
004D78E0  55                        PUSH EBP
004D78E1  8B EC                     MOV EBP,ESP
004D78E3  83 EC 18                  SUB ESP,0x18
004D78E6  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
004D78EA  81 F9 FF 00 00 00         CMP ECX,0xff
004D78F0  75 08                     JNZ 0x004d78fa
004D78F2  33 C0                     XOR EAX,EAX
004D78F4  8B E5                     MOV ESP,EBP
004D78F6  5D                        POP EBP
004D78F7  C2 04 00                  RET 0x4
LAB_004d78fa:
004D78FA  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004D78FD  53                        PUSH EBX
004D78FE  56                        PUSH ESI
004D78FF  57                        PUSH EDI
004D7900  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
004D7903  33 F6                     XOR ESI,ESI
004D7905  33 FF                     XOR EDI,EDI
004D7907  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004D790A  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
004D790D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004D7910  C1 E0 04                  SHL EAX,0x4
004D7913  03 C1                     ADD EAX,ECX
004D7915  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
004D7918  D1 E0                     SHL EAX,0x1
004D791A  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004D791D  BA 06 00 00 00            MOV EDX,0x6
004D7922  8D 88 FA 55 7F 00         LEA ECX,[EAX + 0x7f55fa]
LAB_004d7928:
004D7928  8B 59 20                  MOV EBX,dword ptr [ECX + 0x20]
004D792B  85 DB                     TEST EBX,EBX
004D792D  74 1B                     JZ 0x004d794a
004D792F  8B 19                     MOV EBX,dword ptr [ECX]
004D7931  03 F3                     ADD ESI,EBX
004D7933  8B 59 34                  MOV EBX,dword ptr [ECX + 0x34]
004D7936  03 FB                     ADD EDI,EBX
004D7938  8B 59 38                  MOV EBX,dword ptr [ECX + 0x38]
004D793B  01 5D 08                  ADD dword ptr [EBP + 0x8],EBX
004D793E  8B 59 3C                  MOV EBX,dword ptr [ECX + 0x3c]
004D7941  01 5D FC                  ADD dword ptr [EBP + -0x4],EBX
004D7944  8B 59 40                  MOV EBX,dword ptr [ECX + 0x40]
004D7947  01 5D F8                  ADD dword ptr [EBP + -0x8],EBX
LAB_004d794a:
004D794A  83 C1 44                  ADD ECX,0x44
004D794D  4A                        DEC EDX
004D794E  75 D8                     JNZ 0x004d7928
004D7950  8B 88 47 4E 7F 00         MOV ECX,dword ptr [EAX + 0x7f4e47]
004D7956  8B 90 BE 57 7F 00         MOV EDX,dword ptr [EAX + 0x7f57be]
004D795C  8B 98 43 4E 7F 00         MOV EBX,dword ptr [EAX + 0x7f4e43]
004D7962  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004D7965  8B B8 3F 4E 7F 00         MOV EDI,dword ptr [EAX + 0x7f4e3f]
004D796B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004D796E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004D7971  8D 88 2E 56 7F 00         LEA ECX,[EAX + 0x7f562e]
004D7977  C7 45 E8 06 00 00 00      MOV dword ptr [EBP + -0x18],0x6
LAB_004d797e:
004D797E  8B 41 EC                  MOV EAX,dword ptr [ECX + -0x14]
004D7981  85 C0                     TEST EAX,EAX
004D7983  0F 84 F6 00 00 00         JZ 0x004d7a7f
004D7989  83 39 00                  CMP dword ptr [ECX],0x0
004D798C  74 0E                     JZ 0x004d799c
004D798E  8B 41 CC                  MOV EAX,dword ptr [ECX + -0x34]
004D7991  0F AF C7                  IMUL EAX,EDI
004D7994  99                        CDQ
004D7995  F7 FE                     IDIV ESI
004D7997  89 41 D0                  MOV dword ptr [ECX + -0x30],EAX
004D799A  EB 07                     JMP 0x004d79a3
LAB_004d799c:
004D799C  C7 41 D0 00 00 00 00      MOV dword ptr [ECX + -0x30],0x0
LAB_004d79a3:
004D79A3  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
004D79A6  85 C0                     TEST EAX,EAX
004D79A8  74 0E                     JZ 0x004d79b8
004D79AA  8B 41 CC                  MOV EAX,dword ptr [ECX + -0x34]
004D79AD  0F AF C3                  IMUL EAX,EBX
004D79B0  99                        CDQ
004D79B1  F7 FE                     IDIV ESI
004D79B3  89 41 D4                  MOV dword ptr [ECX + -0x2c],EAX
004D79B6  EB 07                     JMP 0x004d79bf
LAB_004d79b8:
004D79B8  C7 41 D4 00 00 00 00      MOV dword ptr [ECX + -0x2c],0x0
LAB_004d79bf:
004D79BF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
004D79C2  85 C0                     TEST EAX,EAX
004D79C4  74 0F                     JZ 0x004d79d5
004D79C6  8B 41 CC                  MOV EAX,dword ptr [ECX + -0x34]
004D79C9  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
004D79CD  99                        CDQ
004D79CE  F7 FE                     IDIV ESI
004D79D0  89 41 D8                  MOV dword ptr [ECX + -0x28],EAX
004D79D3  EB 07                     JMP 0x004d79dc
LAB_004d79d5:
004D79D5  C7 41 D8 00 00 00 00      MOV dword ptr [ECX + -0x28],0x0
LAB_004d79dc:
004D79DC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004D79DF  85 C0                     TEST EAX,EAX
004D79E1  74 0F                     JZ 0x004d79f2
004D79E3  8B 41 CC                  MOV EAX,dword ptr [ECX + -0x34]
004D79E6  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
004D79EA  99                        CDQ
004D79EB  F7 FE                     IDIV ESI
004D79ED  89 41 DC                  MOV dword ptr [ECX + -0x24],EAX
004D79F0  EB 07                     JMP 0x004d79f9
LAB_004d79f2:
004D79F2  C7 41 DC 00 00 00 00      MOV dword ptr [ECX + -0x24],0x0
LAB_004d79f9:
004D79F9  8B 01                     MOV EAX,dword ptr [ECX]
004D79FB  8B 51 D0                  MOV EDX,dword ptr [ECX + -0x30]
004D79FE  3B D0                     CMP EDX,EAX
004D7A00  7F 05                     JG 0x004d7a07
004D7A02  39 45 EC                  CMP dword ptr [EBP + -0x14],EAX
004D7A05  75 03                     JNZ 0x004d7a0a
LAB_004d7a07:
004D7A07  89 41 D0                  MOV dword ptr [ECX + -0x30],EAX
LAB_004d7a0a:
004D7A0A  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
004D7A0D  8B 51 D4                  MOV EDX,dword ptr [ECX + -0x2c]
004D7A10  3B D0                     CMP EDX,EAX
004D7A12  7F 05                     JG 0x004d7a19
004D7A14  39 45 08                  CMP dword ptr [EBP + 0x8],EAX
004D7A17  75 03                     JNZ 0x004d7a1c
LAB_004d7a19:
004D7A19  89 41 D4                  MOV dword ptr [ECX + -0x2c],EAX
LAB_004d7a1c:
004D7A1C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
004D7A1F  8B 51 D8                  MOV EDX,dword ptr [ECX + -0x28]
004D7A22  3B D0                     CMP EDX,EAX
004D7A24  7F 05                     JG 0x004d7a2b
004D7A26  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
004D7A29  75 03                     JNZ 0x004d7a2e
LAB_004d7a2b:
004D7A2B  89 41 D8                  MOV dword ptr [ECX + -0x28],EAX
LAB_004d7a2e:
004D7A2E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004D7A31  8B 51 DC                  MOV EDX,dword ptr [ECX + -0x24]
004D7A34  3B D0                     CMP EDX,EAX
004D7A36  7F 05                     JG 0x004d7a3d
004D7A38  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
004D7A3B  75 03                     JNZ 0x004d7a40
LAB_004d7a3d:
004D7A3D  89 41 DC                  MOV dword ptr [ECX + -0x24],EAX
LAB_004d7a40:
004D7A40  39 79 D0                  CMP dword ptr [ECX + -0x30],EDI
004D7A43  7E 03                     JLE 0x004d7a48
004D7A45  89 79 D0                  MOV dword ptr [ECX + -0x30],EDI
LAB_004d7a48:
004D7A48  39 59 D4                  CMP dword ptr [ECX + -0x2c],EBX
004D7A4B  7E 03                     JLE 0x004d7a50
004D7A4D  89 59 D4                  MOV dword ptr [ECX + -0x2c],EBX
LAB_004d7a50:
004D7A50  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004D7A53  8B 41 D8                  MOV EAX,dword ptr [ECX + -0x28]
004D7A56  3B C2                     CMP EAX,EDX
004D7A58  7E 03                     JLE 0x004d7a5d
004D7A5A  89 51 D8                  MOV dword ptr [ECX + -0x28],EDX
LAB_004d7a5d:
004D7A5D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004D7A60  39 41 DC                  CMP dword ptr [ECX + -0x24],EAX
004D7A63  7E 03                     JLE 0x004d7a68
004D7A65  89 41 DC                  MOV dword ptr [ECX + -0x24],EAX
LAB_004d7a68:
004D7A68  2B 51 D8                  SUB EDX,dword ptr [ECX + -0x28]
004D7A6B  2B 71 CC                  SUB ESI,dword ptr [ECX + -0x34]
004D7A6E  2B 79 D0                  SUB EDI,dword ptr [ECX + -0x30]
004D7A71  2B 59 D4                  SUB EBX,dword ptr [ECX + -0x2c]
004D7A74  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004D7A77  8B 51 DC                  MOV EDX,dword ptr [ECX + -0x24]
004D7A7A  2B C2                     SUB EAX,EDX
004D7A7C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004d7a7f:
004D7A7F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004D7A82  83 C1 44                  ADD ECX,0x44
004D7A85  48                        DEC EAX
004D7A86  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004D7A89  0F 85 EF FE FF FF         JNZ 0x004d797e
004D7A8F  5F                        POP EDI
004D7A90  5E                        POP ESI
004D7A91  33 C0                     XOR EAX,EAX
004D7A93  5B                        POP EBX
004D7A94  8B E5                     MOV ESP,EBP
004D7A96  5D                        POP EBP
004D7A97  C2 04 00                  RET 0x4
