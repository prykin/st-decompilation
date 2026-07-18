PrividerTy::InitPrivider:
005B9B10  55                        PUSH EBP
005B9B11  8B EC                     MOV EBP,ESP
005B9B13  81 EC 50 04 00 00         SUB ESP,0x450
005B9B19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B9B1E  53                        PUSH EBX
005B9B1F  56                        PUSH ESI
005B9B20  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005B9B23  57                        PUSH EDI
005B9B24  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005B9B27  8D 4D B0                  LEA ECX,[EBP + -0x50]
005B9B2A  6A 00                     PUSH 0x0
005B9B2C  52                        PUSH EDX
005B9B2D  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005B9B30  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9B36  E8 B5 3C 17 00            CALL 0x0072d7f0
005B9B3B  8B F0                     MOV ESI,EAX
005B9B3D  83 C4 08                  ADD ESP,0x8
005B9B40  85 F6                     TEST ESI,ESI
005B9B42  0F 85 BB 07 00 00         JNZ 0x005ba303
005B9B48  A0 A0 67 80 00            MOV AL,[0x008067a0]
005B9B4D  84 C0                     TEST AL,AL
005B9B4F  74 24                     JZ 0x005b9b75
005B9B51  B9 90 2A 80 00            MOV ECX,0x802a90
005B9B56  FF 15 74 C0 85 00         CALL dword ptr [0x0085c074]
005B9B5C  B9 90 2A 80 00            MOV ECX,0x802a90
005B9B61  FF 15 FC BF 85 00         CALL dword ptr [0x0085bffc]
005B9B67  C6 05 99 2A 80 00 00      MOV byte ptr [0x00802a99],0x0
005B9B6E  C6 05 A0 67 80 00 00      MOV byte ptr [0x008067a0],0x0
LAB_005b9b75:
005B9B75  6A 0A                     PUSH 0xa
005B9B77  6A 01                     PUSH 0x1
005B9B79  6A 00                     PUSH 0x0
005B9B7B  E8 70 B9 0F 00            CALL 0x006b54f0
005B9B80  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005B9B83  68 DD 7D 80 00            PUSH 0x807ddd
005B9B88  50                        PUSH EAX
005B9B89  89 86 92 1C 00 00         MOV dword ptr [ESI + 0x1c92],EAX
005B9B8F  E8 0C BF 0F 00            CALL 0x006b5aa0
005B9B94  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005B9B99  85 C0                     TEST EAX,EAX
005B9B9B  74 2A                     JZ 0x005b9bc7
005B9B9D  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005B9BA3  85 C9                     TEST ECX,ECX
005B9BA5  74 14                     JZ 0x005b9bbb
005B9BA7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005B9BAA  83 F9 FF                  CMP ECX,-0x1
005B9BAD  74 18                     JZ 0x005b9bc7
005B9BAF  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005B9BB2  51                        PUSH ECX
005B9BB3  50                        PUSH EAX
005B9BB4  E8 37 9F 0F 00            CALL 0x006b3af0
005B9BB9  EB 0C                     JMP 0x005b9bc7
LAB_005b9bbb:
005B9BBB  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005B9BC1  51                        PUSH ECX
005B9BC2  E8 49 EF 0F 00            CALL 0x006b8b10
LAB_005b9bc7:
005B9BC7  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005B9BCD  6A 01                     PUSH 0x1
005B9BCF  6A 00                     PUSH 0x0
005B9BD1  68 9C C7 7C 00            PUSH 0x7cc79c
005B9BD6  52                        PUSH EDX
005B9BD7  E8 14 0E 15 00            CALL 0x0070a9f0
005B9BDC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B9BE2  83 C4 10                  ADD ESP,0x10
005B9BE5  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
005B9BE8  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B9BEE  8D 8D B0 FB FF FF         LEA ECX,[EBP + 0xfffffbb0]
005B9BF4  6A 00                     PUSH 0x0
005B9BF6  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005B9BF9  51                        PUSH ECX
005B9BFA  50                        PUSH EAX
005B9BFB  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
005B9BFE  E8 5D 27 10 00            CALL 0x006bc360
005B9C03  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005B9C09  8D 8D B0 FB FF FF         LEA ECX,[EBP + 0xfffffbb0]
005B9C0F  C7 82 40 01 00 00 1F 00 00 00  MOV dword ptr [EDX + 0x140],0x1f
005B9C19  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005B9C1F  05 44 01 00 00            ADD EAX,0x144
005B9C24  50                        PUSH EAX
005B9C25  6A 15                     PUSH 0x15
005B9C27  68 8B 00 00 00            PUSH 0x8b
005B9C2C  68 00 01 00 00            PUSH 0x100
005B9C31  6A 00                     PUSH 0x0
005B9C33  51                        PUSH ECX
005B9C34  E8 47 EB 15 00            CALL 0x00718780
005B9C39  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005B9C3C  83 C4 18                  ADD ESP,0x18
005B9C3F  84 C0                     TEST AL,AL
005B9C41  74 13                     JZ 0x005b9c56
005B9C43  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005B9C49  6A 00                     PUSH 0x0
005B9C4B  6A 01                     PUSH 0x1
005B9C4D  52                        PUSH EDX
005B9C4E  E8 F0 80 E4 FF            CALL 0x00401d43
005B9C53  83 C4 0C                  ADD ESP,0xc
LAB_005b9c56:
005B9C56  C6 86 71 1A 00 00 00      MOV byte ptr [ESI + 0x1a71],0x0
005B9C5D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B9C63  E8 1B AF E4 FF            CALL 0x00404b83
005B9C68  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005B9C6B  80 FB 01                  CMP BL,0x1
005B9C6E  75 15                     JNZ 0x005b9c85
005B9C70  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B9C76  E8 BF BB E4 FF            CALL 0x0040583a
005B9C7B  85 C0                     TEST EAX,EAX
005B9C7D  74 06                     JZ 0x005b9c85
005B9C7F  6A 01                     PUSH 0x1
005B9C81  6A 00                     PUSH 0x0
005B9C83  EB 03                     JMP 0x005b9c88
LAB_005b9c85:
005B9C85  6A 01                     PUSH 0x1
005B9C87  53                        PUSH EBX
LAB_005b9c88:
005B9C88  8B CE                     MOV ECX,ESI
005B9C8A  E8 36 9F E4 FF            CALL 0x00403bc5
005B9C8F  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005B9C95  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B9C9B  88 86 60 1A 00 00         MOV byte ptr [ESI + 0x1a60],AL
005B9CA1  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B9CA7  85 C9                     TEST ECX,ECX
005B9CA9  74 1A                     JZ 0x005b9cc5
005B9CAB  E8 E1 B4 E4 FF            CALL 0x00405191
005B9CB0  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005B9CB6  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005B9CB9  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005B9CBF  89 88 AB 1C 00 00         MOV dword ptr [EAX + 0x1cab],ECX
LAB_005b9cc5:
005B9CC5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B9CCB  6A 00                     PUSH 0x0
005B9CCD  6A 00                     PUSH 0x0
005B9CCF  6A 00                     PUSH 0x0
005B9CD1  8D BE 77 1A 00 00         LEA EDI,[ESI + 0x1a77]
005B9CD7  6A 07                     PUSH 0x7
005B9CD9  6A 31                     PUSH 0x31
005B9CDB  52                        PUSH EDX
005B9CDC  8B CF                     MOV ECX,EDI
005B9CDE  E8 BD BB 15 00            CALL 0x007158a0
005B9CE3  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005B9CE9  8B 07                     MOV EAX,dword ptr [EDI]
005B9CEB  6A FF                     PUSH -0x1
005B9CED  68 4C C0 7C 00            PUSH 0x7cc04c
005B9CF2  6A 00                     PUSH 0x0
005B9CF4  6A 07                     PUSH 0x7
005B9CF6  51                        PUSH ECX
005B9CF7  8B CF                     MOV ECX,EDI
005B9CF9  FF 50 04                  CALL dword ptr [EAX + 0x4]
005B9CFC  BB 89 02 00 00            MOV EBX,0x289
005B9D01  6A 00                     PUSH 0x0
005B9D03  6A 00                     PUSH 0x0
005B9D05  89 9E 93 1A 00 00         MOV dword ptr [ESI + 0x1a93],EBX
005B9D0B  C7 86 97 1A 00 00 6A 00 00 00  MOV dword ptr [ESI + 0x1a97],0x6a
005B9D15  C7 86 7F 1A 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a7f],0x0
005B9D1F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B9D25  6A 00                     PUSH 0x0
005B9D27  8D BE 08 1B 00 00         LEA EDI,[ESI + 0x1b08]
005B9D2D  6A 07                     PUSH 0x7
005B9D2F  6A 31                     PUSH 0x31
005B9D31  52                        PUSH EDX
005B9D32  8B CF                     MOV ECX,EDI
005B9D34  E8 67 BB 15 00            CALL 0x007158a0
005B9D39  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005B9D3F  8B 07                     MOV EAX,dword ptr [EDI]
005B9D41  6A FF                     PUSH -0x1
005B9D43  68 40 C0 7C 00            PUSH 0x7cc040
005B9D48  6A 00                     PUSH 0x0
005B9D4A  6A 07                     PUSH 0x7
005B9D4C  51                        PUSH ECX
005B9D4D  8B CF                     MOV ECX,EDI
005B9D4F  FF 50 04                  CALL dword ptr [EAX + 0x4]
005B9D52  89 9E 24 1B 00 00         MOV dword ptr [ESI + 0x1b24],EBX
005B9D58  33 DB                     XOR EBX,EBX
005B9D5A  53                        PUSH EBX
005B9D5B  53                        PUSH EBX
005B9D5C  C7 86 28 1B 00 00 76 01 00 00  MOV dword ptr [ESI + 0x1b28],0x176
005B9D66  89 9E 10 1B 00 00         MOV dword ptr [ESI + 0x1b10],EBX
005B9D6C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B9D72  53                        PUSH EBX
005B9D73  8D BE 99 1B 00 00         LEA EDI,[ESI + 0x1b99]
005B9D79  6A 07                     PUSH 0x7
005B9D7B  6A 31                     PUSH 0x31
005B9D7D  52                        PUSH EDX
005B9D7E  8B CF                     MOV ECX,EDI
005B9D80  E8 1B BB 15 00            CALL 0x007158a0
005B9D85  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005B9D8B  8B 07                     MOV EAX,dword ptr [EDI]
005B9D8D  6A FF                     PUSH -0x1
005B9D8F  68 34 C0 7C 00            PUSH 0x7cc034
005B9D94  53                        PUSH EBX
005B9D95  6A 07                     PUSH 0x7
005B9D97  51                        PUSH ECX
005B9D98  8B CF                     MOV ECX,EDI
005B9D9A  FF 50 04                  CALL dword ptr [EAX + 0x4]
005B9D9D  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005B9DA0  6A 01                     PUSH 0x1
005B9DA2  C7 86 B5 1B 00 00 8E 02 00 00  MOV dword ptr [ESI + 0x1bb5],0x28e
005B9DAC  C7 86 B9 1B 00 00 8A 00 00 00  MOV dword ptr [ESI + 0x1bb9],0x8a
005B9DB6  8D 50 28                  LEA EDX,[EAX + 0x28]
005B9DB9  89 9E A1 1B 00 00         MOV dword ptr [ESI + 0x1ba1],EBX
005B9DBF  52                        PUSH EDX
005B9DC0  50                        PUSH EAX
005B9DC1  E8 1A B2 0F 00            CALL 0x006b4fe0
005B9DC6  50                        PUSH EAX
005B9DC7  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005B9DCA  33 C9                     XOR ECX,ECX
005B9DCC  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005B9DD0  51                        PUSH ECX
005B9DD1  68 43 01 00 00            PUSH 0x143
005B9DD6  68 08 02 00 00            PUSH 0x208
005B9DDB  E8 E0 B2 0F 00            CALL 0x006b50c0
005B9DE0  89 86 82 1C 00 00         MOV dword ptr [ESI + 0x1c82],EAX
005B9DE6  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005B9DE9  3B CB                     CMP ECX,EBX
005B9DEB  74 04                     JZ 0x005b9df1
005B9DED  8B D9                     MOV EBX,ECX
005B9DEF  EB 1A                     JMP 0x005b9e0b
LAB_005b9df1:
005B9DF1  33 DB                     XOR EBX,EBX
005B9DF3  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005B9DF7  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005B9DFB  83 C3 1F                  ADD EBX,0x1f
005B9DFE  C1 EB 03                  SHR EBX,0x3
005B9E01  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005B9E07  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005b9e0b:
005B9E0B  50                        PUSH EAX
005B9E0C  E8 8F B1 0F 00            CALL 0x006b4fa0
005B9E11  8B CB                     MOV ECX,EBX
005B9E13  8B F8                     MOV EDI,EAX
005B9E15  8B D1                     MOV EDX,ECX
005B9E17  33 C0                     XOR EAX,EAX
005B9E19  C1 E9 02                  SHR ECX,0x2
005B9E1C  F3 AB                     STOSD.REP ES:EDI
005B9E1E  8B CA                     MOV ECX,EDX
005B9E20  8D 9E 2A 1C 00 00         LEA EBX,[ESI + 0x1c2a]
005B9E26  83 E1 03                  AND ECX,0x3
005B9E29  F3 AA                     STOSB.REP ES:EDI
005B9E2B  BF 67 00 00 00            MOV EDI,0x67
LAB_005b9e30:
005B9E30  8B 86 82 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c82]
005B9E36  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B9E3C  56                        PUSH ESI
005B9E3D  6A 13                     PUSH 0x13
005B9E3F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005B9E42  51                        PUSH ECX
005B9E43  68 7F 59 40 00            PUSH 0x40597f
005B9E48  6A 31                     PUSH 0x31
005B9E4A  53                        PUSH EBX
005B9E4B  52                        PUSH EDX
005B9E4C  E8 DF 84 0F 00            CALL 0x006b2330
005B9E51  8B 03                     MOV EAX,dword ptr [EBX]
005B9E53  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005B9E59  57                        PUSH EDI
005B9E5A  6A 7A                     PUSH 0x7a
005B9E5C  6A FF                     PUSH -0x1
005B9E5E  50                        PUSH EAX
005B9E5F  51                        PUSH ECX
005B9E60  E8 DB 97 0F 00            CALL 0x006b3640
005B9E65  83 C7 13                  ADD EDI,0x13
005B9E68  83 C3 04                  ADD EBX,0x4
005B9E6B  81 FF 09 02 00 00         CMP EDI,0x209
005B9E71  7C BD                     JL 0x005b9e30
005B9E73  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005B9E76  6A 01                     PUSH 0x1
005B9E78  8D 50 28                  LEA EDX,[EAX + 0x28]
005B9E7B  52                        PUSH EDX
005B9E7C  50                        PUSH EAX
005B9E7D  E8 5E B1 0F 00            CALL 0x006b4fe0
005B9E82  50                        PUSH EAX
005B9E83  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005B9E86  33 C9                     XOR ECX,ECX
005B9E88  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005B9E8C  51                        PUSH ECX
005B9E8D  6A 2E                     PUSH 0x2e
005B9E8F  68 2E 02 00 00            PUSH 0x22e
005B9E94  E8 27 B2 0F 00            CALL 0x006b50c0
005B9E99  89 86 8E 1C 00 00         MOV dword ptr [ESI + 0x1c8e],EAX
005B9E9F  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005B9EA2  85 DB                     TEST EBX,EBX
005B9EA4  75 18                     JNZ 0x005b9ebe
005B9EA6  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005B9EAA  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005B9EAE  83 C3 1F                  ADD EBX,0x1f
005B9EB1  C1 EB 03                  SHR EBX,0x3
005B9EB4  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005B9EBA  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005b9ebe:
005B9EBE  50                        PUSH EAX
005B9EBF  E8 DC B0 0F 00            CALL 0x006b4fa0
005B9EC4  8B CB                     MOV ECX,EBX
005B9EC6  8B F8                     MOV EDI,EAX
005B9EC8  8B D1                     MOV EDX,ECX
005B9ECA  83 C8 FF                  OR EAX,0xffffffff
005B9ECD  C1 E9 02                  SHR ECX,0x2
005B9ED0  F3 AB                     STOSD.REP ES:EDI
005B9ED2  8B CA                     MOV ECX,EDX
005B9ED4  6A 14                     PUSH 0x14
005B9ED6  83 E1 03                  AND ECX,0x3
005B9ED9  68 2C 02 00 00            PUSH 0x22c
005B9EDE  F3 AA                     STOSB.REP ES:EDI
005B9EE0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B9EE6  8B 86 8E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8e]
005B9EEC  6A 01                     PUSH 0x1
005B9EEE  33 FF                     XOR EDI,EDI
005B9EF0  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005B9EF3  6A 03                     PUSH 0x3
005B9EF5  57                        PUSH EDI
005B9EF6  50                        PUSH EAX
005B9EF7  E8 94 6B 15 00            CALL 0x00710a90
005B9EFC  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B9F02  6A 02                     PUSH 0x2
005B9F04  6A FF                     PUSH -0x1
005B9F06  6A FE                     PUSH -0x2
005B9F08  52                        PUSH EDX
005B9F09  68 B5 26 00 00            PUSH 0x26b5
005B9F0E  E8 2D 62 0F 00            CALL 0x006b0140
005B9F13  50                        PUSH EAX
005B9F14  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B9F19  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005B9F1C  E8 9F 7A 15 00            CALL 0x007119c0
005B9F21  8B 86 8E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8e]
005B9F27  8D 9E 8A 1C 00 00         LEA EBX,[ESI + 0x1c8a]
005B9F2D  50                        PUSH EAX
005B9F2E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005B9F31  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005B9F34  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005B9F39  51                        PUSH ECX
005B9F3A  52                        PUSH EDX
005B9F3B  68 F6 23 40 00            PUSH 0x4023f6
005B9F40  6A 31                     PUSH 0x31
005B9F42  53                        PUSH EBX
005B9F43  50                        PUSH EAX
005B9F44  E8 E7 83 0F 00            CALL 0x006b2330
005B9F49  8B 0B                     MOV ECX,dword ptr [EBX]
005B9F4B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B9F51  68 97 01 00 00            PUSH 0x197
005B9F56  6A 79                     PUSH 0x79
005B9F58  6A FF                     PUSH -0x1
005B9F5A  51                        PUSH ECX
005B9F5B  52                        PUSH EDX
005B9F5C  E8 DF 96 0F 00            CALL 0x006b3640
005B9F61  6A 01                     PUSH 0x1
005B9F63  8B CE                     MOV ECX,ESI
005B9F65  E8 C5 96 E4 FF            CALL 0x0040362f
005B9F6A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005B9F70  56                        PUSH ESI
005B9F71  68 45 01 00 00            PUSH 0x145
005B9F76  68 2E 02 00 00            PUSH 0x22e
005B9F7B  68 74 3C 40 00            PUSH 0x403c74
005B9F80  8D 45 FC                  LEA EAX,[EBP + -0x4]
005B9F83  6A 32                     PUSH 0x32
005B9F85  50                        PUSH EAX
005B9F86  51                        PUSH ECX
005B9F87  E8 A4 83 0F 00            CALL 0x006b2330
005B9F8C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B9F8F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005B9F94  6A 51                     PUSH 0x51
005B9F96  6A 79                     PUSH 0x79
005B9F98  6A FF                     PUSH -0x1
005B9F9A  52                        PUSH EDX
005B9F9B  50                        PUSH EAX
005B9F9C  E8 9F 96 0F 00            CALL 0x006b3640
005B9FA1  6A 33                     PUSH 0x33
005B9FA3  E8 88 45 17 00            CALL 0x0072e530
005B9FA8  83 C4 04                  ADD ESP,0x4
005B9FAB  3B C7                     CMP EAX,EDI
005B9FAD  74 36                     JZ 0x005b9fe5
005B9FAF  83 CA FF                  OR EDX,0xffffffff
005B9FB2  B9 01 00 00 00            MOV ECX,0x1
005B9FB7  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005B9FBB  C6 00 00                  MOV byte ptr [EAX],0x0
005B9FBE  89 50 03                  MOV dword ptr [EAX + 0x3],EDX
005B9FC1  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005B9FC5  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005B9FC8  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005B9FCB  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005B9FCE  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005B9FD1  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005B9FD4  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005B9FD7  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005B9FDA  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005B9FDD  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005B9FE0  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005B9FE3  EB 07                     JMP 0x005b9fec
LAB_005b9fe5:
005B9FE5  33 C0                     XOR EAX,EAX
005B9FE7  B9 01 00 00 00            MOV ECX,0x1
LAB_005b9fec:
005B9FEC  3B C7                     CMP EAX,EDI
005B9FEE  89 86 96 1C 00 00         MOV dword ptr [ESI + 0x1c96],EAX
005B9FF4  0F 84 D4 00 00 00         JZ 0x005ba0ce
005B9FFA  57                        PUSH EDI
005B9FFB  51                        PUSH ECX
005B9FFC  6A 10                     PUSH 0x10
005B9FFE  51                        PUSH ECX
005B9FFF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BA005  68 45 01 00 00            PUSH 0x145
005BA00A  68 2E 02 00 00            PUSH 0x22e
005BA00F  6A 51                     PUSH 0x51
005BA011  6A 79                     PUSH 0x79
005BA013  51                        PUSH ECX
005BA014  E8 D7 59 10 00            CALL 0x006bf9f0
005BA019  8B 8E 96 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c96]
005BA01F  50                        PUSH EAX
005BA020  6A 51                     PUSH 0x51
005BA022  6A 79                     PUSH 0x79
005BA024  6A 02                     PUSH 0x2
005BA026  E8 72 A5 E4 FF            CALL 0x0040459d
005BA02B  85 C0                     TEST EAX,EAX
005BA02D  0F 84 9B 00 00 00         JZ 0x005ba0ce
005BA033  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BA039  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005BA03C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BA040  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005BA043  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BA049  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BA04C  3B C7                     CMP EAX,EDI
005BA04E  7C 0C                     JL 0x005ba05c
005BA050  50                        PUSH EAX
005BA051  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BA056  50                        PUSH EAX
005BA057  E8 94 9A 0F 00            CALL 0x006b3af0
LAB_005ba05c:
005BA05C  8B 86 7B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a7b]
005BA062  83 F8 FF                  CMP EAX,-0x1
005BA065  74 0D                     JZ 0x005ba074
005BA067  8B 8E BF 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abf]
005BA06D  50                        PUSH EAX
005BA06E  51                        PUSH ECX
005BA06F  E8 7C 9A 0F 00            CALL 0x006b3af0
LAB_005ba074:
005BA074  8B 86 0C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b0c]
005BA07A  83 F8 FF                  CMP EAX,-0x1
005BA07D  74 0D                     JZ 0x005ba08c
005BA07F  8B 96 50 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b50]
005BA085  50                        PUSH EAX
005BA086  52                        PUSH EDX
005BA087  E8 64 9A 0F 00            CALL 0x006b3af0
LAB_005ba08c:
005BA08C  8B 86 9D 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b9d]
005BA092  83 F8 FF                  CMP EAX,-0x1
005BA095  74 0D                     JZ 0x005ba0a4
005BA097  50                        PUSH EAX
005BA098  8B 86 E1 1B 00 00         MOV EAX,dword ptr [ESI + 0x1be1]
005BA09E  50                        PUSH EAX
005BA09F  E8 4C 9A 0F 00            CALL 0x006b3af0
LAB_005ba0a4:
005BA0A4  8D BE 2A 1C 00 00         LEA EDI,[ESI + 0x1c2a]
005BA0AA  C7 45 F8 16 00 00 00      MOV dword ptr [EBP + -0x8],0x16
LAB_005ba0b1:
005BA0B1  8B 0F                     MOV ECX,dword ptr [EDI]
005BA0B3  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BA0B9  51                        PUSH ECX
005BA0BA  52                        PUSH EDX
005BA0BB  E8 30 9A 0F 00            CALL 0x006b3af0
005BA0C0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BA0C3  83 C7 04                  ADD EDI,0x4
005BA0C6  48                        DEC EAX
005BA0C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BA0CA  75 E5                     JNZ 0x005ba0b1
005BA0CC  33 FF                     XOR EDI,EDI
LAB_005ba0ce:
005BA0CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BA0D1  83 F8 FF                  CMP EAX,-0x1
005BA0D4  74 13                     JZ 0x005ba0e9
005BA0D6  50                        PUSH EAX
005BA0D7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BA0DC  50                        PUSH EAX
005BA0DD  E8 CE 9A 0F 00            CALL 0x006b3bb0
005BA0E2  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_005ba0e9:
005BA0E9  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005BA0EF  84 C0                     TEST AL,AL
005BA0F1  0F 85 26 01 00 00         JNZ 0x005ba21d
005BA0F7  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005BA0FD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BA102  81 C1 40 01 00 00         ADD ECX,0x140
005BA108  8D 55 FC                  LEA EDX,[EBP + -0x4]
005BA10B  51                        PUSH ECX
005BA10C  6A 2E                     PUSH 0x2e
005BA10E  68 2E 02 00 00            PUSH 0x22e
005BA113  68 13 2F 40 00            PUSH 0x402f13
005BA118  6A 32                     PUSH 0x32
005BA11A  52                        PUSH EDX
005BA11B  50                        PUSH EAX
005BA11C  E8 0F 82 0F 00            CALL 0x006b2330
005BA121  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005BA124  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BA12A  68 97 01 00 00            PUSH 0x197
005BA12F  6A 79                     PUSH 0x79
005BA131  6A FF                     PUSH -0x1
005BA133  51                        PUSH ECX
005BA134  52                        PUSH EDX
005BA135  E8 06 95 0F 00            CALL 0x006b3640
005BA13A  6A 33                     PUSH 0x33
005BA13C  E8 EF 43 17 00            CALL 0x0072e530
005BA141  83 C4 04                  ADD ESP,0x4
005BA144  3B C7                     CMP EAX,EDI
005BA146  74 36                     JZ 0x005ba17e
005BA148  83 CA FF                  OR EDX,0xffffffff
005BA14B  B9 01 00 00 00            MOV ECX,0x1
005BA150  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BA154  C6 00 00                  MOV byte ptr [EAX],0x0
005BA157  89 50 03                  MOV dword ptr [EAX + 0x3],EDX
005BA15A  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005BA15E  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005BA161  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005BA164  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005BA167  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005BA16A  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005BA16D  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005BA170  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005BA173  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005BA176  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005BA179  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005BA17C  EB 07                     JMP 0x005ba185
LAB_005ba17e:
005BA17E  33 C0                     XOR EAX,EAX
005BA180  B9 01 00 00 00            MOV ECX,0x1
LAB_005ba185:
005BA185  3B C7                     CMP EAX,EDI
005BA187  89 86 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EAX
005BA18D  74 70                     JZ 0x005ba1ff
005BA18F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BA194  57                        PUSH EDI
005BA195  51                        PUSH ECX
005BA196  6A 10                     PUSH 0x10
005BA198  51                        PUSH ECX
005BA199  6A 2E                     PUSH 0x2e
005BA19B  68 2E 02 00 00            PUSH 0x22e
005BA1A0  68 97 01 00 00            PUSH 0x197
005BA1A5  6A 79                     PUSH 0x79
005BA1A7  50                        PUSH EAX
005BA1A8  E8 43 58 10 00            CALL 0x006bf9f0
005BA1AD  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BA1B3  50                        PUSH EAX
005BA1B4  68 97 01 00 00            PUSH 0x197
005BA1B9  6A 79                     PUSH 0x79
005BA1BB  6A 01                     PUSH 0x1
005BA1BD  E8 DB A3 E4 FF            CALL 0x0040459d
005BA1C2  85 C0                     TEST EAX,EAX
005BA1C4  74 39                     JZ 0x005ba1ff
005BA1C6  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BA1CC  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005BA1CF  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BA1D3  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005BA1D6  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BA1DC  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BA1DF  3B C7                     CMP EAX,EDI
005BA1E1  7C 0D                     JL 0x005ba1f0
005BA1E3  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BA1E9  50                        PUSH EAX
005BA1EA  52                        PUSH EDX
005BA1EB  E8 00 99 0F 00            CALL 0x006b3af0
LAB_005ba1f0:
005BA1F0  8B 03                     MOV EAX,dword ptr [EBX]
005BA1F2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BA1F8  50                        PUSH EAX
005BA1F9  51                        PUSH ECX
005BA1FA  E8 F1 98 0F 00            CALL 0x006b3af0
LAB_005ba1ff:
005BA1FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BA202  83 F8 FF                  CMP EAX,-0x1
005BA205  74 25                     JZ 0x005ba22c
005BA207  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BA20D  50                        PUSH EAX
005BA20E  52                        PUSH EDX
005BA20F  E8 9C 99 0F 00            CALL 0x006b3bb0
005BA214  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005BA21B  EB 0F                     JMP 0x005ba22c
LAB_005ba21d:
005BA21D  8B 03                     MOV EAX,dword ptr [EBX]
005BA21F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BA225  50                        PUSH EAX
005BA226  51                        PUSH ECX
005BA227  E8 C4 98 0F 00            CALL 0x006b3af0
LAB_005ba22c:
005BA22C  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005BA231  3B C7                     CMP EAX,EDI
005BA233  74 51                     JZ 0x005ba286
005BA235  8B F8                     MOV EDI,EAX
005BA237  8B CF                     MOV ECX,EDI
005BA239  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005BA23F  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005BA245  52                        PUSH EDX
005BA246  50                        PUSH EAX
005BA247  6A 00                     PUSH 0x0
005BA249  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005BA250  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005BA259  E8 20 AE E4 FF            CALL 0x0040507e
005BA25E  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005BA264  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005BA26A  51                        PUSH ECX
005BA26B  52                        PUSH EDX
005BA26C  8B CF                     MOV ECX,EDI
005BA26E  E8 AB 81 E4 FF            CALL 0x0040241e
005BA273  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005BA27A  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005BA284  33 FF                     XOR EDI,EDI
LAB_005ba286:
005BA286  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005BA289  84 C0                     TEST AL,AL
005BA28B  74 1F                     JZ 0x005ba2ac
005BA28D  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005BA290  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BA296  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005BA29C  57                        PUSH EDI
005BA29D  6A 02                     PUSH 0x2
005BA29F  6A 0A                     PUSH 0xa
005BA2A1  50                        PUSH EAX
005BA2A2  51                        PUSH ECX
005BA2A3  52                        PUSH EDX
005BA2A4  E8 E1 A1 E4 FF            CALL 0x0040448a
005BA2A9  83 C4 18                  ADD ESP,0x18
LAB_005ba2ac:
005BA2AC  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BA2B2  3B C7                     CMP EAX,EDI
005BA2B4  74 18                     JZ 0x005ba2ce
005BA2B6  80 38 00                  CMP byte ptr [EAX],0x0
005BA2B9  74 13                     JZ 0x005ba2ce
005BA2BB  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BA2BE  3B C7                     CMP EAX,EDI
005BA2C0  7C 0C                     JL 0x005ba2ce
005BA2C2  50                        PUSH EAX
005BA2C3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BA2C8  50                        PUSH EAX
005BA2C9  E8 62 91 0F 00            CALL 0x006b3430
LAB_005ba2ce:
005BA2CE  8B B6 9A 1C 00 00         MOV ESI,dword ptr [ESI + 0x1c9a]
005BA2D4  3B F7                     CMP ESI,EDI
005BA2D6  74 19                     JZ 0x005ba2f1
005BA2D8  80 3E 00                  CMP byte ptr [ESI],0x0
005BA2DB  74 14                     JZ 0x005ba2f1
005BA2DD  8B 76 03                  MOV ESI,dword ptr [ESI + 0x3]
005BA2E0  3B F7                     CMP ESI,EDI
005BA2E2  7C 0D                     JL 0x005ba2f1
005BA2E4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BA2EA  56                        PUSH ESI
005BA2EB  51                        PUSH ECX
005BA2EC  E8 3F 91 0F 00            CALL 0x006b3430
LAB_005ba2f1:
005BA2F1  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005BA2F4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BA2FA  5F                        POP EDI
005BA2FB  5E                        POP ESI
005BA2FC  5B                        POP EBX
005BA2FD  8B E5                     MOV ESP,EBP
005BA2FF  5D                        POP EBP
005BA300  C2 08 00                  RET 0x8
LAB_005ba303:
005BA303  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005BA306  68 A0 CD 7C 00            PUSH 0x7ccda0
005BA30B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BA310  56                        PUSH ESI
005BA311  6A 00                     PUSH 0x0
005BA313  68 AC 00 00 00            PUSH 0xac
005BA318  68 28 CD 7C 00            PUSH 0x7ccd28
005BA31D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005BA322  E8 A9 31 0F 00            CALL 0x006ad4d0
005BA327  83 C4 18                  ADD ESP,0x18
005BA32A  85 C0                     TEST EAX,EAX
005BA32C  74 01                     JZ 0x005ba32f
005BA32E  CC                        INT3
LAB_005ba32f:
005BA32F  68 AC 00 00 00            PUSH 0xac
005BA334  68 28 CD 7C 00            PUSH 0x7ccd28
005BA339  6A 00                     PUSH 0x0
005BA33B  56                        PUSH ESI
005BA33C  E8 FF BA 0E 00            CALL 0x006a5e40
005BA341  5F                        POP EDI
005BA342  5E                        POP ESI
005BA343  5B                        POP EBX
005BA344  8B E5                     MOV ESP,EBP
005BA346  5D                        POP EBP
005BA347  C2 08 00                  RET 0x8
