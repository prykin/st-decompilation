FUN_006d1ad0:
006D1AD0  55                        PUSH EBP
006D1AD1  8B EC                     MOV EBP,ESP
006D1AD3  83 EC 2C                  SUB ESP,0x2c
006D1AD6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1AD9  53                        PUSH EBX
006D1ADA  56                        PUSH ESI
006D1ADB  57                        PUSH EDI
006D1ADC  85 D2                     TEST EDX,EDX
006D1ADE  0F 84 C4 03 00 00         JZ 0x006d1ea8
006D1AE4  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006D1AE7  85 F6                     TEST ESI,ESI
006D1AE9  0F 84 B9 03 00 00         JZ 0x006d1ea8
006D1AEF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D1AF2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D1AF5  8B 0B                     MOV ECX,dword ptr [EBX]
006D1AF7  3B CF                     CMP ECX,EDI
006D1AF9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006D1AFC  0F 8F 0B 02 00 00         JG 0x006d1d0d
006D1B02  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D1B05  8D 7B 08                  LEA EDI,[EBX + 0x8]
006D1B08  0F AF 45 24               IMUL EAX,dword ptr [EBP + 0x24]
006D1B0C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006D1B0F  8B C2                     MOV EAX,EDX
006D1B11  0F AF C6                  IMUL EAX,ESI
006D1B14  85 C9                     TEST ECX,ECX
006D1B16  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006D1B19  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D1B1C  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006D1B23  0F 8E D9 01 00 00         JLE 0x006d1d02
LAB_006d1b29:
006D1B29  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006D1B2C  8B 37                     MOV ESI,dword ptr [EDI]
006D1B2E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D1B31  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006D1B34  03 C6                     ADD EAX,ESI
006D1B36  3B D0                     CMP EDX,EAX
006D1B38  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D1B3B  0F 8F A6 01 00 00         JG 0x006d1ce7
006D1B41  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D1B44  03 C2                     ADD EAX,EDX
006D1B46  3B C6                     CMP EAX,ESI
006D1B48  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006D1B4B  0F 8C 96 01 00 00         JL 0x006d1ce7
006D1B51  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006D1B54  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D1B57  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006D1B5A  03 C2                     ADD EAX,EDX
006D1B5C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D1B5F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006D1B62  3B D0                     CMP EDX,EAX
006D1B64  0F 8F 7D 01 00 00         JG 0x006d1ce7
006D1B6A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D1B6D  03 C2                     ADD EAX,EDX
006D1B6F  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D1B72  3B C2                     CMP EAX,EDX
006D1B74  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D1B77  0F 8C 6A 01 00 00         JL 0x006d1ce7
006D1B7D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006D1B80  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D1B83  3B C2                     CMP EAX,EDX
006D1B85  0F 8D 08 01 00 00         JGE 0x006d1c93
006D1B8B  39 75 E8                  CMP dword ptr [EBP + -0x18],ESI
006D1B8E  0F 8E FF 00 00 00         JLE 0x006d1c93
006D1B94  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D1B97  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D1B9A  3B D0                     CMP EDX,EAX
006D1B9C  0F 8D F1 00 00 00         JGE 0x006d1c93
006D1BA2  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D1BA5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D1BA8  3B C2                     CMP EAX,EDX
006D1BAA  0F 8E E3 00 00 00         JLE 0x006d1c93
006D1BB0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1BB3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006D1BB6  3B F1                     CMP ESI,ECX
006D1BB8  7C 03                     JL 0x006d1bbd
006D1BBA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006d1bbd:
006D1BBD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D1BC0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D1BC3  3B D1                     CMP EDX,ECX
006D1BC5  7C 03                     JL 0x006d1bca
006D1BC7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006d1bca:
006D1BCA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006D1BCD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D1BD0  3B D1                     CMP EDX,ECX
006D1BD2  7E 02                     JLE 0x006d1bd6
006D1BD4  8B CA                     MOV ECX,EDX
LAB_006d1bd6:
006D1BD6  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
006D1BD9  8B F9                     MOV EDI,ECX
006D1BDB  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D1BDE  3B C8                     CMP ECX,EAX
006D1BE0  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006D1BE3  7E 02                     JLE 0x006d1be7
006D1BE5  8B C1                     MOV EAX,ECX
LAB_006d1be7:
006D1BE7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D1BEA  2B C6                     SUB EAX,ESI
006D1BEC  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006D1BEF  8B C8                     MOV ECX,EAX
006D1BF1  0F AF 75 DC               IMUL ESI,dword ptr [EBP + -0x24]
006D1BF5  8B D1                     MOV EDX,ECX
006D1BF7  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006D1BFA  0F AF D7                  IMUL EDX,EDI
006D1BFD  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006D1C00  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
006D1C07  2B C2                     SUB EAX,EDX
006D1C09  99                        CDQ
006D1C0A  83 E2 07                  AND EDX,0x7
006D1C0D  03 C2                     ADD EAX,EDX
006D1C0F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006D1C12  C1 F8 03                  SAR EAX,0x3
006D1C15  03 D6                     ADD EDX,ESI
006D1C17  3B C2                     CMP EAX,EDX
006D1C19  7D 65                     JGE 0x006d1c80
006D1C1B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1C1E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D1C21  8B 00                     MOV EAX,dword ptr [EAX]
006D1C23  3B D0                     CMP EDX,EAX
006D1C25  75 20                     JNZ 0x006d1c47
006D1C27  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D1C2A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006D1C2D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D1C30  3B D0                     CMP EDX,EAX
006D1C32  75 13                     JNZ 0x006d1c47
006D1C34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1C37  3B 78 08                  CMP EDI,dword ptr [EAX + 0x8]
006D1C3A  75 0B                     JNZ 0x006d1c47
006D1C3C  8B D0                     MOV EDX,EAX
006D1C3E  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
006D1C41  0F 84 61 02 00 00         JZ 0x006d1ea8
LAB_006d1c47:
006D1C47  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D1C4A  85 C0                     TEST EAX,EAX
006D1C4C  0F 8F CA 00 00 00         JG 0x006d1d1c
006D1C52  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D1C55  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
006D1C58  75 16                     JNZ 0x006d1c70
006D1C5A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D1C5D  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
006D1C60  75 0E                     JNZ 0x006d1c70
006D1C62  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
006D1C65  75 09                     JNZ 0x006d1c70
006D1C67  3B 4D 1C                  CMP ECX,dword ptr [EBP + 0x1c]
006D1C6A  0F 84 AC 00 00 00         JZ 0x006d1d1c
LAB_006d1c70:
006D1C70  85 C0                     TEST EAX,EAX
006D1C72  0F 8C FC 00 00 00         JL 0x006d1d74
006D1C78  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D1C7B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D1C7E  EB 67                     JMP 0x006d1ce7
LAB_006d1c80:
006D1C80  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D1C83  85 C0                     TEST EAX,EAX
006D1C85  0F 8C E9 00 00 00         JL 0x006d1d74
006D1C8B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D1C8E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D1C91  EB 54                     JMP 0x006d1ce7
LAB_006d1c93:
006D1C93  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D1C96  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D1C99  3B D0                     CMP EDX,EAX
006D1C9B  75 21                     JNZ 0x006d1cbe
006D1C9D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006D1CA0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D1CA3  3B D0                     CMP EDX,EAX
006D1CA5  75 17                     JNZ 0x006d1cbe
006D1CA7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D1CAA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006D1CAD  3B C2                     CMP EAX,EDX
006D1CAF  0F 84 D5 00 00 00         JZ 0x006d1d8a
006D1CB5  39 75 E8                  CMP dword ptr [EBP + -0x18],ESI
006D1CB8  0F 84 C8 00 00 00         JZ 0x006d1d86
LAB_006d1cbe:
006D1CBE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1CC1  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006D1CC4  3B D0                     CMP EDX,EAX
006D1CC6  75 1F                     JNZ 0x006d1ce7
006D1CC8  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
006D1CCB  75 1A                     JNZ 0x006d1ce7
006D1CCD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D1CD0  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006D1CD3  3B D6                     CMP EDX,ESI
006D1CD5  0F 84 0C 01 00 00         JZ 0x006d1de7
006D1CDB  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006D1CDE  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
006D1CE1  0F 84 FC 00 00 00         JZ 0x006d1de3
LAB_006d1ce7:
006D1CE7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D1CEA  83 C7 10                  ADD EDI,0x10
006D1CED  40                        INC EAX
006D1CEE  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D1CF1  3B C1                     CMP EAX,ECX
006D1CF3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D1CF6  0F 8C 2D FE FF FF         JL 0x006d1b29
006D1CFC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1CFF  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006d1d02:
006D1D02  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D1D05  3B CF                     CMP ECX,EDI
006D1D07  0F 8C 50 01 00 00         JL 0x006d1e5d
LAB_006d1d0d:
006D1D0D  47                        INC EDI
006D1D0E  83 C8 FF                  OR EAX,0xffffffff
006D1D11  89 3B                     MOV dword ptr [EBX],EDI
006D1D13  5F                        POP EDI
006D1D14  5E                        POP ESI
006D1D15  5B                        POP EBX
006D1D16  8B E5                     MOV ESP,EBP
006D1D18  5D                        POP EBP
006D1D19  C2 24 00                  RET 0x24
LAB_006d1d1c:
006D1D1C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D1D1F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D1D22  4A                        DEC EDX
006D1D23  3B C2                     CMP EAX,EDX
006D1D25  7D 26                     JGE 0x006d1d4d
006D1D27  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D1D2A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D1D2D  2B C8                     SUB ECX,EAX
006D1D2F  49                        DEC ECX
006D1D30  8D 77 10                  LEA ESI,[EDI + 0x10]
006D1D33  C1 E1 04                  SHL ECX,0x4
006D1D36  8B C1                     MOV EAX,ECX
006D1D38  C1 E9 02                  SHR ECX,0x2
006D1D3B  F3 A5                     MOVSD.REP ES:EDI,ESI
006D1D3D  8B C8                     MOV ECX,EAX
006D1D3F  83 E1 03                  AND ECX,0x3
006D1D42  F3 A4                     MOVSB.REP ES:EDI,ESI
006D1D44  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006D1D47  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D1D4A  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
LAB_006d1d4d:
006D1D4D  8B 13                     MOV EDX,dword ptr [EBX]
006D1D4F  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006D1D52  4A                        DEC EDX
006D1D53  2B C6                     SUB EAX,ESI
006D1D55  89 13                     MOV dword ptr [EBX],EDX
006D1D57  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006D1D5A  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006D1D5D  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D1D60  52                        PUSH EDX
006D1D61  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D1D64  50                        PUSH EAX
006D1D65  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D1D68  52                        PUSH EDX
006D1D69  51                        PUSH ECX
006D1D6A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D1D6D  57                        PUSH EDI
006D1D6E  50                        PUSH EAX
006D1D6F  E9 CB 00 00 00            JMP 0x006d1e3f
LAB_006d1d74:
006D1D74  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D1D77  5F                        POP EDI
006D1D78  40                        INC EAX
006D1D79  5E                        POP ESI
006D1D7A  89 03                     MOV dword ptr [EBX],EAX
006D1D7C  83 C8 FF                  OR EAX,0xffffffff
006D1D7F  5B                        POP EBX
006D1D80  8B E5                     MOV ESP,EBP
006D1D82  5D                        POP EBP
006D1D83  C2 24 00                  RET 0x24
LAB_006d1d86:
006D1D86  3B C2                     CMP EAX,EDX
006D1D88  75 07                     JNZ 0x006d1d91
LAB_006d1d8a:
006D1D8A  8B 17                     MOV EDX,dword ptr [EDI]
006D1D8C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D1D8F  EB 03                     JMP 0x006d1d94
LAB_006d1d91:
006D1D91  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006d1d94:
006D1D94  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006D1D97  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1D9A  03 C2                     ADD EAX,EDX
006D1D9C  8D 51 FF                  LEA EDX,[ECX + -0x1]
006D1D9F  89 13                     MOV dword ptr [EBX],EDX
006D1DA1  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
006D1DA4  0F AF 77 08               IMUL ESI,dword ptr [EDI + 0x8]
006D1DA8  29 73 04                  SUB dword ptr [EBX + 0x4],ESI
006D1DAB  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D1DAE  3B F2                     CMP ESI,EDX
006D1DB0  7D 17                     JGE 0x006d1dc9
006D1DB2  2B CE                     SUB ECX,ESI
006D1DB4  8D 77 10                  LEA ESI,[EDI + 0x10]
006D1DB7  49                        DEC ECX
006D1DB8  C1 E1 04                  SHL ECX,0x4
006D1DBB  8B D1                     MOV EDX,ECX
006D1DBD  C1 E9 02                  SHR ECX,0x2
006D1DC0  F3 A5                     MOVSD.REP ES:EDI,ESI
006D1DC2  8B CA                     MOV ECX,EDX
006D1DC4  83 E1 03                  AND ECX,0x3
006D1DC7  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006d1dc9:
006D1DC9  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D1DCC  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D1DCF  51                        PUSH ECX
006D1DD0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D1DD3  52                        PUSH EDX
006D1DD4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D1DD7  51                        PUSH ECX
006D1DD8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D1DDB  52                        PUSH EDX
006D1DDC  50                        PUSH EAX
006D1DDD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D1DE0  50                        PUSH EAX
006D1DE1  EB 5C                     JMP 0x006d1e3f
LAB_006d1de3:
006D1DE3  3B D6                     CMP EDX,ESI
006D1DE5  75 08                     JNZ 0x006d1def
LAB_006d1de7:
006D1DE7  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006D1DEA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D1DED  EB 03                     JMP 0x006d1df2
LAB_006d1def:
006D1DEF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006d1df2:
006D1DF2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006D1DF5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D1DF8  03 C2                     ADD EAX,EDX
006D1DFA  8D 51 FF                  LEA EDX,[ECX + -0x1]
006D1DFD  89 13                     MOV dword ptr [EBX],EDX
006D1DFF  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
006D1E02  0F AF 77 0C               IMUL ESI,dword ptr [EDI + 0xc]
006D1E06  29 73 04                  SUB dword ptr [EBX + 0x4],ESI
006D1E09  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D1E0C  3B F2                     CMP ESI,EDX
006D1E0E  7D 17                     JGE 0x006d1e27
006D1E10  2B CE                     SUB ECX,ESI
006D1E12  8D 77 10                  LEA ESI,[EDI + 0x10]
006D1E15  49                        DEC ECX
006D1E16  C1 E1 04                  SHL ECX,0x4
006D1E19  8B D1                     MOV EDX,ECX
006D1E1B  C1 E9 02                  SHR ECX,0x2
006D1E1E  F3 A5                     MOVSD.REP ES:EDI,ESI
006D1E20  8B CA                     MOV ECX,EDX
006D1E22  83 E1 03                  AND ECX,0x3
006D1E25  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006d1e27:
006D1E27  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D1E2A  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D1E2D  51                        PUSH ECX
006D1E2E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D1E31  52                        PUSH EDX
006D1E32  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1E35  51                        PUSH ECX
006D1E36  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1E39  50                        PUSH EAX
006D1E3A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D1E3D  52                        PUSH EDX
006D1E3E  50                        PUSH EAX
LAB_006d1e3f:
006D1E3F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1E42  51                        PUSH ECX
006D1E43  52                        PUSH EDX
006D1E44  53                        PUSH EBX
006D1E45  E8 86 FC FF FF            CALL 0x006d1ad0
006D1E4A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D1E4D  3B C1                     CMP EAX,ECX
006D1E4F  7E 59                     JLE 0x006d1eaa
006D1E51  5F                        POP EDI
006D1E52  5E                        POP ESI
006D1E53  8D 41 01                  LEA EAX,[ECX + 0x1]
006D1E56  5B                        POP EBX
006D1E57  8B E5                     MOV ESP,EBP
006D1E59  5D                        POP EBP
006D1E5A  C2 24 00                  RET 0x24
LAB_006d1e5d:
006D1E5D  8D 41 01                  LEA EAX,[ECX + 0x1]
006D1E60  C1 E1 04                  SHL ECX,0x4
006D1E63  89 03                     MOV dword ptr [EBX],EAX
006D1E65  8D 44 19 08               LEA EAX,[ECX + EBX*0x1 + 0x8]
006D1E69  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1E6C  89 08                     MOV dword ptr [EAX],ECX
006D1E6E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D1E71  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006D1E74  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006D1E77  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006D1E7A  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
006D1E7D  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
006D1E80  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006D1E83  03 F2                     ADD ESI,EDX
006D1E85  8B CE                     MOV ECX,ESI
006D1E87  89 73 04                  MOV dword ptr [EBX + 0x4],ESI
006D1E8A  3B C8                     CMP ECX,EAX
006D1E8C  7C 0F                     JL 0x006d1e9d
006D1E8E  47                        INC EDI
006D1E8F  83 C8 FF                  OR EAX,0xffffffff
006D1E92  89 3B                     MOV dword ptr [EBX],EDI
006D1E94  5F                        POP EDI
006D1E95  5E                        POP ESI
006D1E96  5B                        POP EBX
006D1E97  8B E5                     MOV ESP,EBP
006D1E99  5D                        POP EBP
006D1E9A  C2 24 00                  RET 0x24
LAB_006d1e9d:
006D1E9D  8B 03                     MOV EAX,dword ptr [EBX]
006D1E9F  5F                        POP EDI
006D1EA0  5E                        POP ESI
006D1EA1  5B                        POP EBX
006D1EA2  8B E5                     MOV ESP,EBP
006D1EA4  5D                        POP EBP
006D1EA5  C2 24 00                  RET 0x24
LAB_006d1ea8:
006D1EA8  33 C0                     XOR EAX,EAX
LAB_006d1eaa:
006D1EAA  5F                        POP EDI
006D1EAB  5E                        POP ESI
006D1EAC  5B                        POP EBX
006D1EAD  8B E5                     MOV ESP,EBP
006D1EAF  5D                        POP EBP
006D1EB0  C2 24 00                  RET 0x24
