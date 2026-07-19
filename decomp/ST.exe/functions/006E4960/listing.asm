AppClassTy::AddChildSystem:
006E4960  55                        PUSH EBP
006E4961  8B EC                     MOV EBP,ESP
006E4963  83 EC 74                  SUB ESP,0x74
006E4966  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E496B  53                        PUSH EBX
006E496C  56                        PUSH ESI
006E496D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E4970  57                        PUSH EDI
006E4971  8D 55 90                  LEA EDX,[EBP + -0x70]
006E4974  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006E4977  6A 00                     PUSH 0x0
006E4979  52                        PUSH EDX
006E497A  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006E497D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4983  E8 68 8E 04 00            CALL 0x0072d7f0
006E4988  8B F0                     MOV ESI,EAX
006E498A  83 C4 08                  ADD ESP,0x8
006E498D  85 F6                     TEST ESI,ESI
006E498F  0F 85 A0 01 00 00         JNZ 0x006e4b35
006E4995  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E4998  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E499B  85 C0                     TEST EAX,EAX
006E499D  74 34                     JZ 0x006e49d3
006E499F  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006E49A2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E49A5  50                        PUSH EAX
006E49A6  E8 35 FB FF FF            CALL 0x006e44e0
006E49AB  85 C0                     TEST EAX,EAX
006E49AD  74 24                     JZ 0x006e49d3
006E49AF  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006E49B2  51                        PUSH ECX
006E49B3  68 90 E9 7E 00            PUSH 0x7ee990
006E49B8  6A 00                     PUSH 0x0
006E49BA  6A 00                     PUSH 0x0
006E49BC  68 22 02 00 00            PUSH 0x222
006E49C1  68 8C E7 7E 00            PUSH 0x7ee78c
006E49C6  E8 05 8B FC FF            CALL 0x006ad4d0
006E49CB  83 C4 18                  ADD ESP,0x18
006E49CE  85 C0                     TEST EAX,EAX
006E49D0  74 01                     JZ 0x006e49d3
006E49D2  CC                        INT3
LAB_006e49d3:
006E49D3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E49D6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E49D9  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
006E49DC  52                        PUSH EDX
006E49DD  E8 BE FB FF FF            CALL 0x006e45a0
006E49E2  8B F8                     MOV EDI,EAX
006E49E4  85 FF                     TEST EDI,EDI
006E49E6  0F 84 12 01 00 00         JZ 0x006e4afe
006E49EC  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006E49EF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E49F2  50                        PUSH EAX
006E49F3  E8 A8 FB FF FF            CALL 0x006e45a0
006E49F8  85 C0                     TEST EAX,EAX
006E49FA  0F 84 9F 00 00 00         JZ 0x006e4a9f
006E4A00  83 38 01                  CMP dword ptr [EAX],0x1
006E4A03  0F 84 19 01 00 00         JZ 0x006e4b22
006E4A09  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006E4A0C  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
LAB_006e4a13:
006E4A13  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006E4A16  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006E4A19  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E4A1C  3B D0                     CMP EDX,EAX
006E4A1E  73 11                     JNC 0x006e4a31
006E4A20  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006E4A23  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
006E4A26  0F AF C2                  IMUL EAX,EDX
006E4A29  03 C3                     ADD EAX,EBX
006E4A2B  42                        INC EDX
006E4A2C  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006E4A2F  EB 02                     JMP 0x006e4a33
LAB_006e4a31:
006E4A31  33 C0                     XOR EAX,EAX
LAB_006e4a33:
006E4A33  85 C0                     TEST EAX,EAX
006E4A35  74 1D                     JZ 0x006e4a54
006E4A37  39 70 04                  CMP dword ptr [EAX + 0x4],ESI
006E4A3A  75 D7                     JNZ 0x006e4a13
006E4A3C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E4A3F  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006E4A45  85 C9                     TEST ECX,ECX
006E4A47  74 CA                     JZ 0x006e4a13
006E4A49  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E4A4C  50                        PUSH EAX
006E4A4D  E8 6E FB FF FF            CALL 0x006e45c0
006E4A52  EB BF                     JMP 0x006e4a13
LAB_006e4a54:
006E4A54  8B 16                     MOV EDX,dword ptr [ESI]
006E4A56  8D 45 D0                  LEA EAX,[EBP + -0x30]
006E4A59  50                        PUSH EAX
006E4A5A  8B CE                     MOV ECX,ESI
006E4A5C  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
006E4A63  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
006E4A6A  FF 52 18                  CALL dword ptr [EDX + 0x18]
006E4A6D  85 C0                     TEST EAX,EAX
006E4A6F  0F 84 AD 00 00 00         JZ 0x006e4b22
006E4A75  68 31 02 00 00            PUSH 0x231
LAB_006e4a7a:
006E4A7A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E4A80  68 8C E7 7E 00            PUSH 0x7ee78c
006E4A85  51                        PUSH ECX
006E4A86  50                        PUSH EAX
006E4A87  E8 B4 13 FC FF            CALL 0x006a5e40
006E4A8C  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006E4A8F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E4A94  33 C0                     XOR EAX,EAX
006E4A96  5F                        POP EDI
006E4A97  5E                        POP ESI
006E4A98  5B                        POP EBX
006E4A99  8B E5                     MOV ESP,EBP
006E4A9B  5D                        POP EBP
006E4A9C  C2 0C 00                  RET 0xc
LAB_006e4a9f:
006E4A9F  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E4AA2  85 C0                     TEST EAX,EAX
006E4AA4  75 10                     JNZ 0x006e4ab6
006E4AA6  6A 05                     PUSH 0x5
006E4AA8  6A 0C                     PUSH 0xc
006E4AAA  6A 05                     PUSH 0x5
006E4AAC  6A 00                     PUSH 0x0
006E4AAE  E8 DD 97 FC FF            CALL 0x006ae290
006E4AB3  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
LAB_006e4ab6:
006E4AB6  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006E4ABD  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006E4AC0  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
006E4AC3  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006E4ACA  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E4ACD  8D 55 F0                  LEA EDX,[EBP + -0x10]
006E4AD0  52                        PUSH EDX
006E4AD1  50                        PUSH EAX
006E4AD2  E8 E9 96 FC FF            CALL 0x006ae1c0
006E4AD7  8B 16                     MOV EDX,dword ptr [ESI]
006E4AD9  8D 45 D0                  LEA EAX,[EBP + -0x30]
006E4ADC  50                        PUSH EAX
006E4ADD  8B CE                     MOV ECX,ESI
006E4ADF  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
006E4AE6  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
006E4AED  FF 52 18                  CALL dword ptr [EDX + 0x18]
006E4AF0  85 C0                     TEST EAX,EAX
006E4AF2  74 2E                     JZ 0x006e4b22
006E4AF4  68 3D 02 00 00            PUSH 0x23d
006E4AF9  E9 7C FF FF FF            JMP 0x006e4a7a
LAB_006e4afe:
006E4AFE  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
006E4B01  52                        PUSH EDX
006E4B02  68 EC E9 7E 00            PUSH 0x7ee9ec
006E4B07  6A 00                     PUSH 0x0
006E4B09  6A 00                     PUSH 0x0
006E4B0B  68 41 02 00 00            PUSH 0x241
006E4B10  68 8C E7 7E 00            PUSH 0x7ee78c
006E4B15  E8 B6 89 FC FF            CALL 0x006ad4d0
006E4B1A  83 C4 18                  ADD ESP,0x18
006E4B1D  85 C0                     TEST EAX,EAX
006E4B1F  74 01                     JZ 0x006e4b22
006E4B21  CC                        INT3
LAB_006e4b22:
006E4B22  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006E4B25  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E4B2A  33 C0                     XOR EAX,EAX
006E4B2C  5F                        POP EDI
006E4B2D  5E                        POP ESI
006E4B2E  5B                        POP EBX
006E4B2F  8B E5                     MOV ESP,EBP
006E4B31  5D                        POP EBP
006E4B32  C2 0C 00                  RET 0xc
LAB_006e4b35:
006E4B35  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006E4B38  68 C8 E9 7E 00            PUSH 0x7ee9c8
006E4B3D  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E4B42  56                        PUSH ESI
006E4B43  6A 00                     PUSH 0x0
006E4B45  68 44 02 00 00            PUSH 0x244
006E4B4A  68 8C E7 7E 00            PUSH 0x7ee78c
006E4B4F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4B55  E8 76 89 FC FF            CALL 0x006ad4d0
006E4B5A  83 C4 18                  ADD ESP,0x18
006E4B5D  85 C0                     TEST EAX,EAX
006E4B5F  74 01                     JZ 0x006e4b62
006E4B61  CC                        INT3
LAB_006e4b62:
006E4B62  68 45 02 00 00            PUSH 0x245
006E4B67  68 8C E7 7E 00            PUSH 0x7ee78c
006E4B6C  6A 00                     PUSH 0x0
006E4B6E  56                        PUSH ESI
006E4B6F  E8 CC 12 FC FF            CALL 0x006a5e40
006E4B74  8B C6                     MOV EAX,ESI
006E4B76  5F                        POP EDI
006E4B77  5E                        POP ESI
006E4B78  5B                        POP EBX
006E4B79  8B E5                     MOV ESP,EBP
006E4B7B  5D                        POP EBP
006E4B7C  C2 0C 00                  RET 0xc
