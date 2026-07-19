FUN_00414a70:
00414A70  55                        PUSH EBP
00414A71  8B EC                     MOV EBP,ESP
00414A73  83 EC 18                  SUB ESP,0x18
00414A76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00414A79  56                        PUSH ESI
00414A7A  33 F6                     XOR ESI,ESI
00414A7C  3B C6                     CMP EAX,ESI
00414A7E  75 0D                     JNZ 0x00414a8d
00414A80  A1 50 4D 7F 00            MOV EAX,[0x007f4d50]
00414A85  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00414A88  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00414A8B  EB 10                     JMP 0x00414a9d
LAB_00414a8d:
00414A8D  8B 0D 54 4D 7F 00         MOV ECX,dword ptr [0x007f4d54]
00414A93  C7 45 F4 14 00 00 00      MOV dword ptr [EBP + -0xc],0x14
00414A9A  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_00414a9d:
00414A9D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00414AA0  53                        PUSH EBX
00414AA1  57                        PUSH EDI
00414AA2  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00414AA5  C1 E2 03                  SHL EDX,0x3
00414AA8  52                        PUSH EDX
00414AA9  E8 C2 61 29 00            CALL 0x006aac70
00414AAE  A3 18 4D 7F 00            MOV [0x007f4d18],EAX
00414AB3  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
00414AB8  99                        CDQ
00414AB9  2B C2                     SUB EAX,EDX
00414ABB  BF 01 00 00 00            MOV EDI,0x1
00414AC0  D1 F8                     SAR EAX,0x1
00414AC2  3B C7                     CMP EAX,EDI
00414AC4  89 35 44 4D 7F 00         MOV dword ptr [0x007f4d44],ESI
00414ACA  0F 8C BA 03 00 00         JL 0x00414e8a
LAB_00414ad0:
00414AD0  8B 0D 34 4D 7F 00         MOV ECX,dword ptr [0x007f4d34]
00414AD6  BE 01 00 00 00            MOV ESI,0x1
00414ADB  8D 41 FF                  LEA EAX,[ECX + -0x1]
00414ADE  3B F8                     CMP EDI,EAX
00414AE0  7F 04                     JG 0x00414ae6
00414AE2  2B F7                     SUB ESI,EDI
00414AE4  EB 02                     JMP 0x00414ae8
LAB_00414ae6:
00414AE6  2B F1                     SUB ESI,ECX
LAB_00414ae8:
00414AE8  3B F8                     CMP EDI,EAX
00414AEA  7F 03                     JG 0x00414aef
00414AEC  8D 47 FF                  LEA EAX,[EDI + -0x1]
LAB_00414aef:
00414AEF  3B F0                     CMP ESI,EAX
00414AF1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00414AF4  0F 8F 1E 02 00 00         JG 0x00414d18
00414AFA  8B C7                     MOV EAX,EDI
00414AFC  F7 D8                     NEG EAX
00414AFE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00414b01:
00414B01  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414B04  8D 5F FF                  LEA EBX,[EDI + -0x1]
00414B07  3B D8                     CMP EBX,EAX
00414B09  7C 5F                     JL 0x00414b6a
LAB_00414b0b:
00414B0B  6A 00                     PUSH 0x0
00414B0D  6A 00                     PUSH 0x0
00414B0F  6A 00                     PUSH 0x0
00414B11  56                        PUSH ESI
00414B12  53                        PUSH EBX
00414B13  57                        PUSH EDI
00414B14  E8 B7 62 29 00            CALL 0x006aadd0
00414B19  8D 0C 85 00 00 00 00      LEA ECX,[EAX*0x4 + 0x0]
00414B20  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00414B23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00414B26  85 C9                     TEST ECX,ECX
00414B28  74 0A                     JZ 0x00414b34
00414B2A  8D 4F FF                  LEA ECX,[EDI + -0x1]
00414B2D  3B D9                     CMP EBX,ECX
00414B2F  75 03                     JNZ 0x00414b34
00414B31  FF 4D FC                  DEC dword ptr [EBP + -0x4]
LAB_00414b34:
00414B34  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00414B37  50                        PUSH EAX
00414B38  56                        PUSH ESI
00414B39  53                        PUSH EBX
00414B3A  57                        PUSH EDI
00414B3B  6A 00                     PUSH 0x0
00414B3D  52                        PUSH EDX
00414B3E  6A EC                     PUSH -0x14
00414B40  E8 1B 63 29 00            CALL 0x006aae60
00414B45  50                        PUSH EAX
00414B46  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00414B49  50                        PUSH EAX
00414B4A  56                        PUSH ESI
00414B4B  53                        PUSH EBX
00414B4C  57                        PUSH EDI
00414B4D  E8 FE 04 00 00            CALL 0x00415050
00414B52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00414B55  A1 44 4D 7F 00            MOV EAX,[0x007f4d44]
00414B5A  3B C1                     CMP EAX,ECX
00414B5C  0F 8D 28 03 00 00         JGE 0x00414e8a
00414B62  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414B65  4B                        DEC EBX
00414B66  3B D8                     CMP EBX,EAX
00414B68  7D A1                     JGE 0x00414b0b
LAB_00414b6a:
00414B6A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414B6D  8D 5F FF                  LEA EBX,[EDI + -0x1]
00414B70  3B D8                     CMP EBX,EAX
00414B72  0F 8C 91 00 00 00         JL 0x00414c09
LAB_00414b78:
00414B78  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00414B7B  6A 00                     PUSH 0x0
00414B7D  6A 00                     PUSH 0x0
00414B7F  6A 00                     PUSH 0x0
00414B81  56                        PUSH ESI
00414B82  52                        PUSH EDX
00414B83  53                        PUSH EBX
00414B84  E8 47 62 29 00            CALL 0x006aadd0
00414B89  8D 0C 85 00 00 00 00      LEA ECX,[EAX*0x4 + 0x0]
00414B90  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00414B93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00414B96  85 C9                     TEST ECX,ECX
00414B98  75 13                     JNZ 0x00414bad
00414B9A  85 DB                     TEST EBX,EBX
00414B9C  75 08                     JNZ 0x00414ba6
00414B9E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414BA1  83 E9 02                  SUB ECX,0x2
00414BA4  EB 1F                     JMP 0x00414bc5
LAB_00414ba6:
00414BA6  83 FB FF                  CMP EBX,-0x1
00414BA9  75 1D                     JNZ 0x00414bc8
00414BAB  EB 14                     JMP 0x00414bc1
LAB_00414bad:
00414BAD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00414BB0  3B D9                     CMP EBX,ECX
00414BB2  75 08                     JNZ 0x00414bbc
00414BB4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414BB7  83 E9 02                  SUB ECX,0x2
00414BBA  EB 09                     JMP 0x00414bc5
LAB_00414bbc:
00414BBC  41                        INC ECX
00414BBD  3B D9                     CMP EBX,ECX
00414BBF  75 07                     JNZ 0x00414bc8
LAB_00414bc1:
00414BC1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414BC4  49                        DEC ECX
LAB_00414bc5:
00414BC5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00414bc8:
00414BC8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00414BCB  50                        PUSH EAX
00414BCC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00414BCF  56                        PUSH ESI
00414BD0  52                        PUSH EDX
00414BD1  53                        PUSH EBX
00414BD2  6A 00                     PUSH 0x0
00414BD4  50                        PUSH EAX
00414BD5  6A EC                     PUSH -0x14
00414BD7  E8 84 62 29 00            CALL 0x006aae60
00414BDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414BDF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00414BE2  50                        PUSH EAX
00414BE3  51                        PUSH ECX
00414BE4  56                        PUSH ESI
00414BE5  52                        PUSH EDX
00414BE6  53                        PUSH EBX
00414BE7  E8 64 04 00 00            CALL 0x00415050
00414BEC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00414BEF  8B 0D 44 4D 7F 00         MOV ECX,dword ptr [0x007f4d44]
00414BF5  3B C8                     CMP ECX,EAX
00414BF7  0F 8D 8D 02 00 00         JGE 0x00414e8a
00414BFD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414C00  4B                        DEC EBX
00414C01  3B D8                     CMP EBX,EAX
00414C03  0F 8D 6F FF FF FF         JGE 0x00414b78
LAB_00414c09:
00414C09  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00414C0C  8D 59 01                  LEA EBX,[ECX + 0x1]
00414C0F  3B DF                     CMP EBX,EDI
00414C11  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00414C14  7F 6A                     JG 0x00414c80
LAB_00414c16:
00414C16  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414C19  6A 00                     PUSH 0x0
00414C1B  6A 00                     PUSH 0x0
00414C1D  6A 00                     PUSH 0x0
00414C1F  56                        PUSH ESI
00414C20  53                        PUSH EBX
00414C21  50                        PUSH EAX
00414C22  E8 A9 61 29 00            CALL 0x006aadd0
00414C27  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00414C2A  8D 14 85 00 00 00 00      LEA EDX,[EAX*0x4 + 0x0]
00414C31  85 C9                     TEST ECX,ECX
00414C33  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00414C36  75 07                     JNZ 0x00414c3f
00414C38  83 FF 01                  CMP EDI,0x1
00414C3B  75 0A                     JNZ 0x00414c47
00414C3D  EB 05                     JMP 0x00414c44
LAB_00414c3f:
00414C3F  3B 5D F0                  CMP EBX,dword ptr [EBP + -0x10]
00414C42  75 03                     JNZ 0x00414c47
LAB_00414c44:
00414C44  FF 4D FC                  DEC dword ptr [EBP + -0x4]
LAB_00414c47:
00414C47  50                        PUSH EAX
00414C48  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414C4B  56                        PUSH ESI
00414C4C  53                        PUSH EBX
00414C4D  50                        PUSH EAX
00414C4E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00414C51  6A 00                     PUSH 0x0
00414C53  50                        PUSH EAX
00414C54  6A EC                     PUSH -0x14
00414C56  E8 05 62 29 00            CALL 0x006aae60
00414C5B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414C5E  50                        PUSH EAX
00414C5F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414C62  51                        PUSH ECX
00414C63  56                        PUSH ESI
00414C64  53                        PUSH EBX
00414C65  50                        PUSH EAX
00414C66  E8 E5 03 00 00            CALL 0x00415050
00414C6B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00414C6E  A1 44 4D 7F 00            MOV EAX,[0x007f4d44]
00414C73  3B C2                     CMP EAX,EDX
00414C75  0F 8D 0F 02 00 00         JGE 0x00414e8a
00414C7B  43                        INC EBX
00414C7C  3B DF                     CMP EBX,EDI
00414C7E  7E 96                     JLE 0x00414c16
LAB_00414c80:
00414C80  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00414C83  3B DF                     CMP EBX,EDI
00414C85  7F 7F                     JG 0x00414d06
LAB_00414c87:
00414C87  6A 00                     PUSH 0x0
00414C89  6A 00                     PUSH 0x0
00414C8B  6A 00                     PUSH 0x0
00414C8D  56                        PUSH ESI
00414C8E  57                        PUSH EDI
00414C8F  53                        PUSH EBX
00414C90  E8 3B 61 29 00            CALL 0x006aadd0
00414C95  8D 0C 85 00 00 00 00      LEA ECX,[EAX*0x4 + 0x0]
00414C9C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00414C9F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00414CA2  85 C9                     TEST ECX,ECX
00414CA4  75 13                     JNZ 0x00414cb9
00414CA6  85 DB                     TEST EBX,EBX
00414CA8  75 08                     JNZ 0x00414cb2
00414CAA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414CAD  83 E9 02                  SUB ECX,0x2
00414CB0  EB 1E                     JMP 0x00414cd0
LAB_00414cb2:
00414CB2  83 FB FF                  CMP EBX,-0x1
00414CB5  75 1C                     JNZ 0x00414cd3
00414CB7  EB 13                     JMP 0x00414ccc
LAB_00414cb9:
00414CB9  3B DF                     CMP EBX,EDI
00414CBB  75 08                     JNZ 0x00414cc5
00414CBD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414CC0  83 E9 02                  SUB ECX,0x2
00414CC3  EB 0B                     JMP 0x00414cd0
LAB_00414cc5:
00414CC5  8D 4F FF                  LEA ECX,[EDI + -0x1]
00414CC8  3B D9                     CMP EBX,ECX
00414CCA  75 07                     JNZ 0x00414cd3
LAB_00414ccc:
00414CCC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00414CCF  49                        DEC ECX
LAB_00414cd0:
00414CD0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00414cd3:
00414CD3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00414CD6  50                        PUSH EAX
00414CD7  56                        PUSH ESI
00414CD8  57                        PUSH EDI
00414CD9  53                        PUSH EBX
00414CDA  6A 00                     PUSH 0x0
00414CDC  52                        PUSH EDX
00414CDD  6A EC                     PUSH -0x14
00414CDF  E8 7C 61 29 00            CALL 0x006aae60
00414CE4  50                        PUSH EAX
00414CE5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00414CE8  50                        PUSH EAX
00414CE9  56                        PUSH ESI
00414CEA  57                        PUSH EDI
00414CEB  53                        PUSH EBX
00414CEC  E8 5F 03 00 00            CALL 0x00415050
00414CF1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00414CF4  A1 44 4D 7F 00            MOV EAX,[0x007f4d44]
00414CF9  3B C1                     CMP EAX,ECX
00414CFB  0F 8D 89 01 00 00         JGE 0x00414e8a
00414D01  43                        INC EBX
00414D02  3B DF                     CMP EBX,EDI
00414D04  7E 81                     JLE 0x00414c87
LAB_00414d06:
00414D06  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00414D09  46                        INC ESI
00414D0A  3B F0                     CMP ESI,EAX
00414D0C  0F 8E EF FD FF FF         JLE 0x00414b01
00414D12  8B 0D 34 4D 7F 00         MOV ECX,dword ptr [0x007f4d34]
LAB_00414d18:
00414D18  49                        DEC ECX
00414D19  3B F9                     CMP EDI,ECX
00414D1B  0F 8F 56 01 00 00         JG 0x00414e77
00414D21  8B F7                     MOV ESI,EDI
00414D23  F7 DE                     NEG ESI
00414D25  8B DE                     MOV EBX,ESI
00414D27  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00414D2A  3B DF                     CMP EBX,EDI
00414D2C  0F 8F 9B 00 00 00         JG 0x00414dcd
LAB_00414d32:
00414D32  3B F7                     CMP ESI,EDI
00414D34  0F 8F 87 00 00 00         JG 0x00414dc1
LAB_00414d3a:
00414D3A  6A 00                     PUSH 0x0
00414D3C  6A 00                     PUSH 0x0
00414D3E  6A 00                     PUSH 0x0
00414D40  57                        PUSH EDI
00414D41  53                        PUSH EBX
00414D42  56                        PUSH ESI
00414D43  E8 88 60 29 00            CALL 0x006aadd0
00414D48  8B C8                     MOV ECX,EAX
00414D4A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00414D4D  85 C0                     TEST EAX,EAX
00414D4F  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
00414D56  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00414D59  75 16                     JNZ 0x00414d71
00414D5B  85 F6                     TEST ESI,ESI
00414D5D  75 07                     JNZ 0x00414d66
00414D5F  8B C2                     MOV EAX,EDX
00414D61  83 E8 02                  SUB EAX,0x2
00414D64  EB 20                     JMP 0x00414d86
LAB_00414d66:
00414D66  83 FE FF                  CMP ESI,-0x1
00414D69  75 1E                     JNZ 0x00414d89
00414D6B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00414D6E  48                        DEC EAX
00414D6F  EB 15                     JMP 0x00414d86
LAB_00414d71:
00414D71  8B C3                     MOV EAX,EBX
00414D73  2B C6                     SUB EAX,ESI
00414D75  99                        CDQ
00414D76  33 C2                     XOR EAX,EDX
00414D78  2B C2                     SUB EAX,EDX
00414D7A  83 F8 01                  CMP EAX,0x1
00414D7D  7F 0A                     JG 0x00414d89
00414D7F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00414D82  8D 44 02 FE               LEA EAX,[EDX + EAX*0x1 + -0x2]
LAB_00414d86:
00414D86  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00414d89:
00414D89  51                        PUSH ECX
00414D8A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00414D8D  57                        PUSH EDI
00414D8E  53                        PUSH EBX
00414D8F  56                        PUSH ESI
00414D90  6A 00                     PUSH 0x0
00414D92  51                        PUSH ECX
00414D93  6A EC                     PUSH -0x14
00414D95  E8 C6 60 29 00            CALL 0x006aae60
00414D9A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00414D9D  50                        PUSH EAX
00414D9E  52                        PUSH EDX
00414D9F  57                        PUSH EDI
00414DA0  53                        PUSH EBX
00414DA1  56                        PUSH ESI
00414DA2  E8 A9 02 00 00            CALL 0x00415050
00414DA7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00414DAA  8B 0D 44 4D 7F 00         MOV ECX,dword ptr [0x007f4d44]
00414DB0  3B C8                     CMP ECX,EAX
00414DB2  0F 8D D2 00 00 00         JGE 0x00414e8a
00414DB8  46                        INC ESI
00414DB9  3B F7                     CMP ESI,EDI
00414DBB  0F 8E 79 FF FF FF         JLE 0x00414d3a
LAB_00414dc1:
00414DC1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00414DC4  43                        INC EBX
00414DC5  3B DF                     CMP EBX,EDI
00414DC7  0F 8E 65 FF FF FF         JLE 0x00414d32
LAB_00414dcd:
00414DCD  8B DE                     MOV EBX,ESI
00414DCF  3B DF                     CMP EBX,EDI
00414DD1  0F 8F A0 00 00 00         JG 0x00414e77
LAB_00414dd7:
00414DD7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00414DDA  3B F7                     CMP ESI,EDI
00414DDC  0F 8F 8C 00 00 00         JG 0x00414e6e
LAB_00414de2:
00414DE2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414DE5  6A 00                     PUSH 0x0
00414DE7  6A 00                     PUSH 0x0
00414DE9  6A 00                     PUSH 0x0
00414DEB  50                        PUSH EAX
00414DEC  53                        PUSH EBX
00414DED  56                        PUSH ESI
00414DEE  E8 DD 5F 29 00            CALL 0x006aadd0
00414DF3  8B C8                     MOV ECX,EAX
00414DF5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00414DF8  85 C0                     TEST EAX,EAX
00414DFA  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
00414E01  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00414E04  75 16                     JNZ 0x00414e1c
00414E06  85 F6                     TEST ESI,ESI
00414E08  75 07                     JNZ 0x00414e11
00414E0A  8B C2                     MOV EAX,EDX
00414E0C  83 E8 02                  SUB EAX,0x2
00414E0F  EB 20                     JMP 0x00414e31
LAB_00414e11:
00414E11  83 FE FF                  CMP ESI,-0x1
00414E14  75 1E                     JNZ 0x00414e34
00414E16  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00414E19  48                        DEC EAX
00414E1A  EB 15                     JMP 0x00414e31
LAB_00414e1c:
00414E1C  8B C3                     MOV EAX,EBX
00414E1E  2B C6                     SUB EAX,ESI
00414E20  99                        CDQ
00414E21  33 C2                     XOR EAX,EDX
00414E23  2B C2                     SUB EAX,EDX
00414E25  83 F8 01                  CMP EAX,0x1
00414E28  7F 0A                     JG 0x00414e34
00414E2A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00414E2D  8D 44 02 FE               LEA EAX,[EDX + EAX*0x1 + -0x2]
LAB_00414e31:
00414E31  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00414e34:
00414E34  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414E37  51                        PUSH ECX
00414E38  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00414E3B  50                        PUSH EAX
00414E3C  53                        PUSH EBX
00414E3D  56                        PUSH ESI
00414E3E  6A 00                     PUSH 0x0
00414E40  51                        PUSH ECX
00414E41  6A EC                     PUSH -0x14
00414E43  E8 18 60 29 00            CALL 0x006aae60
00414E48  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00414E4B  50                        PUSH EAX
00414E4C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00414E4F  52                        PUSH EDX
00414E50  50                        PUSH EAX
00414E51  53                        PUSH EBX
00414E52  56                        PUSH ESI
00414E53  E8 F8 01 00 00            CALL 0x00415050
00414E58  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00414E5B  8B 0D 44 4D 7F 00         MOV ECX,dword ptr [0x007f4d44]
00414E61  3B C8                     CMP ECX,EAX
00414E63  7D 25                     JGE 0x00414e8a
00414E65  46                        INC ESI
00414E66  3B F7                     CMP ESI,EDI
00414E68  0F 8E 74 FF FF FF         JLE 0x00414de2
LAB_00414e6e:
00414E6E  43                        INC EBX
00414E6F  3B DF                     CMP EBX,EDI
00414E71  0F 8E 60 FF FF FF         JLE 0x00414dd7
LAB_00414e77:
00414E77  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
00414E7C  47                        INC EDI
00414E7D  99                        CDQ
00414E7E  2B C2                     SUB EAX,EDX
00414E80  D1 F8                     SAR EAX,0x1
00414E82  3B F8                     CMP EDI,EAX
00414E84  0F 8E 46 FC FF FF         JLE 0x00414ad0
FUN_00414a70::cf_break_loop_00414E8A:
00414E8A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00414E8D  33 F6                     XOR ESI,ESI
00414E8F  5F                        POP EDI
00414E90  5B                        POP EBX
00414E91  C6 00 00                  MOV byte ptr [EAX],0x0
00414E94  C6 40 01 00               MOV byte ptr [EAX + 0x1],0x0
00414E98  C6 40 02 00               MOV byte ptr [EAX + 0x2],0x0
00414E9C  C6 40 03 00               MOV byte ptr [EAX + 0x3],0x0
00414EA0  8B 0D 44 4D 7F 00         MOV ECX,dword ptr [0x007f4d44]
00414EA6  85 C9                     TEST ECX,ECX
00414EA8  7E 45                     JLE 0x00414eef
00414EAA  33 C9                     XOR ECX,ECX
LAB_00414eac:
00414EAC  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
00414EB2  83 C0 04                  ADD EAX,0x4
00414EB5  46                        INC ESI
00414EB6  8A 14 11                  MOV DL,byte ptr [ECX + EDX*0x1]
00414EB9  83 C1 18                  ADD ECX,0x18
00414EBC  88 10                     MOV byte ptr [EAX],DL
00414EBE  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
00414EC4  8A 54 11 EC               MOV DL,byte ptr [ECX + EDX*0x1 + -0x14]
00414EC8  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00414ECB  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
00414ED1  8A 54 11 F0               MOV DL,byte ptr [ECX + EDX*0x1 + -0x10]
00414ED5  88 50 02                  MOV byte ptr [EAX + 0x2],DL
00414ED8  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
00414EDE  8A 54 11 F8               MOV DL,byte ptr [ECX + EDX*0x1 + -0x8]
00414EE2  88 50 03                  MOV byte ptr [EAX + 0x3],DL
00414EE5  8B 15 44 4D 7F 00         MOV EDX,dword ptr [0x007f4d44]
00414EEB  3B F2                     CMP ESI,EDX
00414EED  7C BD                     JL 0x00414eac
LAB_00414eef:
00414EEF  83 C0 04                  ADD EAX,0x4
00414EF2  B1 7F                     MOV CL,0x7f
00414EF4  68 18 4D 7F 00            PUSH 0x7f4d18
00414EF9  88 08                     MOV byte ptr [EAX],CL
00414EFB  88 48 01                  MOV byte ptr [EAX + 0x1],CL
00414EFE  88 48 02                  MOV byte ptr [EAX + 0x2],CL
00414F01  C6 40 03 FF               MOV byte ptr [EAX + 0x3],0xff
00414F05  E8 56 61 29 00            CALL 0x006ab060
00414F0A  5E                        POP ESI
00414F0B  8B E5                     MOV ESP,EBP
00414F0D  5D                        POP EBP
00414F0E  C2 08 00                  RET 0x8
