FUN_006c5e00:
006C5E00  55                        PUSH EBP
006C5E01  8B EC                     MOV EBP,ESP
006C5E03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5E06  53                        PUSH EBX
006C5E07  56                        PUSH ESI
006C5E08  57                        PUSH EDI
006C5E09  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C5E10  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C5E16  0F 85 99 00 00 00         JNZ 0x006c5eb5
006C5E1C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C5E1F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C5E22  83 F9 07                  CMP ECX,0x7
006C5E25  75 47                     JNZ 0x006c5e6e
006C5E27  3B D0                     CMP EDX,EAX
006C5E29  0F 8F 56 01 00 00         JG 0x006c5f85
006C5E2F  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C5E32  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C5E35  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C5E38  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5e3b:
006C5E3B  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C5E3E  0F 8F 41 01 00 00         JG 0x006c5f85
006C5E44  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C5E48  66 31 18                  XOR word ptr [EAX],BX
006C5E4B  85 C9                     TEST ECX,ECX
006C5E4D  7C 0B                     JL 0x006c5e5a
006C5E4F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C5E52  03 C3                     ADD EAX,EBX
006C5E54  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C5E57  2B CB                     SUB ECX,EBX
006C5E59  46                        INC ESI
LAB_006c5e5a:
006C5E5A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C5E5D  83 C0 02                  ADD EAX,0x2
006C5E60  03 CF                     ADD ECX,EDI
006C5E62  42                        INC EDX
006C5E63  3B D3                     CMP EDX,EBX
006C5E65  7E D4                     JLE 0x006c5e3b
006C5E67  5F                        POP EDI
006C5E68  5E                        POP ESI
006C5E69  5B                        POP EBX
006C5E6A  5D                        POP EBP
006C5E6B  C2 38 00                  RET 0x38
LAB_006c5e6e:
006C5E6E  3B D0                     CMP EDX,EAX
006C5E70  0F 8F 0F 01 00 00         JG 0x006c5f85
006C5E76  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C5E79  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C5E7C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C5E7F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5e82:
006C5E82  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C5E85  0F 8F FA 00 00 00         JG 0x006c5f85
006C5E8B  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C5E8F  85 C9                     TEST ECX,ECX
006C5E91  66 89 18                  MOV word ptr [EAX],BX
006C5E94  7C 0B                     JL 0x006c5ea1
006C5E96  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C5E99  03 C3                     ADD EAX,EBX
006C5E9B  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C5E9E  2B CB                     SUB ECX,EBX
006C5EA0  46                        INC ESI
LAB_006c5ea1:
006C5EA1  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C5EA4  83 C0 02                  ADD EAX,0x2
006C5EA7  03 CF                     ADD ECX,EDI
006C5EA9  42                        INC EDX
006C5EAA  3B D3                     CMP EDX,EBX
006C5EAC  7E D4                     JLE 0x006c5e82
006C5EAE  5F                        POP EDI
006C5EAF  5E                        POP ESI
006C5EB0  5B                        POP EBX
006C5EB1  5D                        POP EBP
006C5EB2  C2 38 00                  RET 0x38
LAB_006c5eb5:
006C5EB5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C5EB8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C5EBB  83 F9 07                  CMP ECX,0x7
006C5EBE  75 6A                     JNZ 0x006c5f2a
006C5EC0  3B D0                     CMP EDX,EAX
006C5EC2  0F 8F BD 00 00 00         JG 0x006c5f85
006C5EC8  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C5ECB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C5ECE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C5ED1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5ed4:
006C5ED4  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C5ED7  0F 8F A8 00 00 00         JG 0x006c5f85
006C5EDD  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C5EE0  85 5D 30                  TEST dword ptr [EBP + 0x30],EBX
006C5EE3  74 06                     JZ 0x006c5eeb
006C5EE5  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C5EE9  EB 08                     JMP 0x006c5ef3
LAB_006c5eeb:
006C5EEB  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C5EEE  83 FB FF                  CMP EBX,-0x1
006C5EF1  74 03                     JZ 0x006c5ef6
LAB_006c5ef3:
006C5EF3  66 31 18                  XOR word ptr [EAX],BX
LAB_006c5ef6:
006C5EF6  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C5EF9  D1 EB                     SHR EBX,0x1
006C5EFB  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006C5EFE  75 07                     JNZ 0x006c5f07
006C5F00  C7 45 34 00 00 00 80      MOV dword ptr [EBP + 0x34],0x80000000
LAB_006c5f07:
006C5F07  85 C9                     TEST ECX,ECX
006C5F09  7C 0B                     JL 0x006c5f16
006C5F0B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C5F0E  03 C3                     ADD EAX,EBX
006C5F10  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C5F13  2B CB                     SUB ECX,EBX
006C5F15  46                        INC ESI
LAB_006c5f16:
006C5F16  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C5F19  83 C0 02                  ADD EAX,0x2
006C5F1C  03 CF                     ADD ECX,EDI
006C5F1E  42                        INC EDX
006C5F1F  3B D3                     CMP EDX,EBX
006C5F21  7E B1                     JLE 0x006c5ed4
006C5F23  5F                        POP EDI
006C5F24  5E                        POP ESI
006C5F25  5B                        POP EBX
006C5F26  5D                        POP EBP
006C5F27  C2 38 00                  RET 0x38
LAB_006c5f2a:
006C5F2A  3B D0                     CMP EDX,EAX
006C5F2C  7F 57                     JG 0x006c5f85
006C5F2E  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C5F31  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C5F34  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C5F37  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5f3a:
006C5F3A  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C5F3D  7F 46                     JG 0x006c5f85
006C5F3F  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C5F42  85 5D 30                  TEST dword ptr [EBP + 0x30],EBX
006C5F45  74 06                     JZ 0x006c5f4d
006C5F47  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C5F4B  EB 08                     JMP 0x006c5f55
LAB_006c5f4d:
006C5F4D  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C5F50  83 FB FF                  CMP EBX,-0x1
006C5F53  74 03                     JZ 0x006c5f58
LAB_006c5f55:
006C5F55  66 89 18                  MOV word ptr [EAX],BX
LAB_006c5f58:
006C5F58  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C5F5B  D1 EB                     SHR EBX,0x1
006C5F5D  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006C5F60  75 07                     JNZ 0x006c5f69
006C5F62  C7 45 34 00 00 00 80      MOV dword ptr [EBP + 0x34],0x80000000
LAB_006c5f69:
006C5F69  85 C9                     TEST ECX,ECX
006C5F6B  7C 0B                     JL 0x006c5f78
006C5F6D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C5F70  03 C3                     ADD EAX,EBX
006C5F72  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C5F75  2B CB                     SUB ECX,EBX
006C5F77  46                        INC ESI
LAB_006c5f78:
006C5F78  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C5F7B  83 C0 02                  ADD EAX,0x2
006C5F7E  03 CF                     ADD ECX,EDI
006C5F80  42                        INC EDX
006C5F81  3B D3                     CMP EDX,EBX
006C5F83  7E B5                     JLE 0x006c5f3a
LAB_006c5f85:
006C5F85  5F                        POP EDI
006C5F86  5E                        POP ESI
006C5F87  5B                        POP EBX
006C5F88  5D                        POP EBP
006C5F89  C2 38 00                  RET 0x38
