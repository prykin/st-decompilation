FUN_006988c0:
006988C0  55                        PUSH EBP
006988C1  8B EC                     MOV EBP,ESP
006988C3  83 EC 38                  SUB ESP,0x38
006988C6  57                        PUSH EDI
006988C7  8B F9                     MOV EDI,ECX
006988C9  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
006988CF  85 C0                     TEST EAX,EAX
006988D1  0F 84 EB 02 00 00         JZ 0x00698bc2
006988D7  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006988DA  33 C9                     XOR ECX,ECX
006988DC  85 D2                     TEST EDX,EDX
006988DE  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006988E1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006988E4  0F 8E D8 02 00 00         JLE 0x00698bc2
006988EA  53                        PUSH EBX
006988EB  56                        PUSH ESI
LAB_006988ec:
006988EC  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
006988F2  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
006988F5  73 10                     JNC 0x00698907
006988F7  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
006988FA  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
006988FD  0F AF D9                  IMUL EBX,ECX
00698900  03 DE                     ADD EBX,ESI
00698902  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00698905  EB 0A                     JMP 0x00698911
LAB_00698907:
00698907  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0069890E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00698911:
00698911  83 3B 00                  CMP dword ptr [EBX],0x0
00698914  0F 8E 9A 02 00 00         JLE 0x00698bb4
0069891A  83 7B 09 04               CMP dword ptr [EBX + 0x9],0x4
0069891E  0F 85 90 02 00 00         JNZ 0x00698bb4
00698924  83 7B 0D 02               CMP dword ptr [EBX + 0xd],0x2
00698928  0F 85 86 02 00 00         JNZ 0x00698bb4
0069892E  8D 45 F4                  LEA EAX,[EBP + -0xc]
00698931  8D 4D E8                  LEA ECX,[EBP + -0x18]
00698934  50                        PUSH EAX
00698935  8D 55 EC                  LEA EDX,[EBP + -0x14]
00698938  51                        PUSH ECX
00698939  8D 45 F0                  LEA EAX,[EBP + -0x10]
0069893C  52                        PUSH EDX
0069893D  50                        PUSH EAX
0069893E  53                        PUSH EBX
0069893F  8B CF                     MOV ECX,EDI
00698941  E8 DB B5 D6 FF            CALL 0x00403f21
00698946  85 C0                     TEST EAX,EAX
00698948  0F 84 F4 00 00 00         JZ 0x00698a42
0069894E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00698951  33 C9                     XOR ECX,ECX
00698953  8A 4B 04                  MOV CL,byte ptr [EBX + 0x4]
00698956  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0069895D  8B F1                     MOV ESI,ECX
0069895F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00698962  8D 42 FF                  LEA EAX,[EDX + -0x1]
00698965  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00698968  4E                        DEC ESI
00698969  49                        DEC ECX
0069896A  42                        INC EDX
0069896B  51                        PUSH ECX
0069896C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0069896F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00698972  42                        INC EDX
00698973  50                        PUSH EAX
00698974  56                        PUSH ESI
00698975  8B CF                     MOV ECX,EDI
00698977  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0069897A  E8 06 D4 D6 FF            CALL 0x00405d85
0069897F  85 C0                     TEST EAX,EAX
00698981  74 07                     JZ 0x0069898a
00698983  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_0069898a:
0069898A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0069898D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00698990  50                        PUSH EAX
00698991  51                        PUSH ECX
00698992  56                        PUSH ESI
00698993  8B CF                     MOV ECX,EDI
00698995  E8 EB D3 D6 FF            CALL 0x00405d85
0069899A  85 C0                     TEST EAX,EAX
0069899C  74 03                     JZ 0x006989a1
0069899E  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_006989a1:
006989A1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006989A4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006989A7  41                        INC ECX
006989A8  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006989AF  8D 42 FF                  LEA EAX,[EDX + -0x1]
006989B2  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006989B5  42                        INC EDX
006989B6  51                        PUSH ECX
006989B7  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006989BA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006989BD  4A                        DEC EDX
006989BE  50                        PUSH EAX
006989BF  56                        PUSH ESI
006989C0  8B CF                     MOV ECX,EDI
006989C2  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006989C5  E8 BB D3 D6 FF            CALL 0x00405d85
006989CA  85 C0                     TEST EAX,EAX
006989CC  74 07                     JZ 0x006989d5
006989CE  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
LAB_006989d5:
006989D5  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006989D8  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006989DB  50                        PUSH EAX
006989DC  51                        PUSH ECX
006989DD  56                        PUSH ESI
006989DE  8B CF                     MOV ECX,EDI
006989E0  E8 A0 D3 D6 FF            CALL 0x00405d85
006989E5  85 C0                     TEST EAX,EAX
006989E7  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006989EA  74 01                     JZ 0x006989ed
006989EC  40                        INC EAX
LAB_006989ed:
006989ED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006989F0  3B C8                     CMP ECX,EAX
006989F2  7E 22                     JLE 0x00698a16
006989F4  85 C9                     TEST ECX,ECX
006989F6  7E 4A                     JLE 0x00698a42
006989F8  8B 13                     MOV EDX,dword ptr [EBX]
006989FA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006989FD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00698A00  6A FF                     PUSH -0x1
00698A02  52                        PUSH EDX
00698A03  50                        PUSH EAX
00698A04  51                        PUSH ECX
00698A05  8B CF                     MOV ECX,EDI
00698A07  E8 25 CD D6 FF            CALL 0x00405731
00698A0C  8B 13                     MOV EDX,dword ptr [EBX]
00698A0E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00698A11  6A FF                     PUSH -0x1
00698A13  52                        PUSH EDX
00698A14  EB 20                     JMP 0x00698a36
LAB_00698a16:
00698A16  85 C0                     TEST EAX,EAX
00698A18  7E 28                     JLE 0x00698a42
00698A1A  8B 13                     MOV EDX,dword ptr [EBX]
00698A1C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00698A1F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00698A22  6A FF                     PUSH -0x1
00698A24  52                        PUSH EDX
00698A25  50                        PUSH EAX
00698A26  51                        PUSH ECX
00698A27  8B CF                     MOV ECX,EDI
00698A29  E8 03 CD D6 FF            CALL 0x00405731
00698A2E  8B 13                     MOV EDX,dword ptr [EBX]
00698A30  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00698A33  6A FF                     PUSH -0x1
00698A35  52                        PUSH EDX
LAB_00698a36:
00698A36  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00698A39  50                        PUSH EAX
00698A3A  51                        PUSH ECX
00698A3B  8B CF                     MOV ECX,EDI
00698A3D  E8 EF CC D6 FF            CALL 0x00405731
LAB_00698a42:
00698A42  8B 97 47 58 00 00         MOV EDX,dword ptr [EDI + 0x5847]
00698A48  8B 03                     MOV EAX,dword ptr [EBX]
00698A4A  4A                        DEC EDX
00698A4B  3B C2                     CMP EAX,EDX
00698A4D  0F 8F 5B 01 00 00         JG 0x00698bae
00698A53  8B 53 15                  MOV EDX,dword ptr [EBX + 0x15]
00698A56  33 C9                     XOR ECX,ECX
00698A58  3B D1                     CMP EDX,ECX
00698A5A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00698A5D  74 2B                     JZ 0x00698a8a
00698A5F  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00698A62  85 F6                     TEST ESI,ESI
00698A64  7E 24                     JLE 0x00698a8a
00698A66  3B CE                     CMP ECX,ESI
LAB_00698a68:
00698A68  73 0B                     JNC 0x00698a75
00698A6A  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00698A6D  0F AF C1                  IMUL EAX,ECX
00698A70  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00698A73  EB 02                     JMP 0x00698a77
LAB_00698a75:
00698A75  33 C0                     XOR EAX,EAX
LAB_00698a77:
00698A77  80 78 01 00               CMP byte ptr [EAX + 0x1],0x0
00698A7B  75 08                     JNZ 0x00698a85
00698A7D  F6 00 02                  TEST byte ptr [EAX],0x2
00698A80  74 03                     JZ 0x00698a85
00698A82  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_00698a85:
00698A85  41                        INC ECX
00698A86  3B CE                     CMP ECX,ESI
00698A88  7C DE                     JL 0x00698a68
LAB_00698a8a:
00698A8A  E8 31 5C 09 00            CALL 0x0072e6c0
00698A8F  25 01 00 00 80            AND EAX,0x80000001
00698A94  79 05                     JNS 0x00698a9b
00698A96  48                        DEC EAX
00698A97  83 C8 FE                  OR EAX,0xfffffffe
00698A9A  40                        INC EAX
LAB_00698a9b:
00698A9B  8B 0B                     MOV ECX,dword ptr [EBX]
00698A9D  8B 97 47 58 00 00         MOV EDX,dword ptr [EDI + 0x5847]
00698AA3  40                        INC EAX
00698AA4  03 C8                     ADD ECX,EAX
00698AA6  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00698AA9  3B CA                     CMP ECX,EDX
00698AAB  7E 04                     JLE 0x00698ab1
00698AAD  48                        DEC EAX
00698AAE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_00698ab1:
00698AB1  85 C0                     TEST EAX,EAX
00698AB3  0F 84 F5 00 00 00         JZ 0x00698bae
00698AB9  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00698ABD  0F 8C EB 00 00 00         JL 0x00698bae
00698AC3  8B 43 15                  MOV EAX,dword ptr [EBX + 0x15]
00698AC6  33 D2                     XOR EDX,EDX
00698AC8  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00698ACB  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00698ACE  85 C9                     TEST ECX,ECX
00698AD0  0F 8E D8 00 00 00         JLE 0x00698bae
00698AD6  3B D1                     CMP EDX,ECX
LAB_00698ad8:
00698AD8  73 0B                     JNC 0x00698ae5
00698ADA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00698ADD  0F AF CA                  IMUL ECX,EDX
00698AE0  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
00698AE3  EB 02                     JMP 0x00698ae7
LAB_00698ae5:
00698AE5  33 C9                     XOR ECX,ECX
LAB_00698ae7:
00698AE7  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
00698AEA  84 C0                     TEST AL,AL
00698AEC  0F 85 A7 00 00 00         JNZ 0x00698b99
00698AF2  8B 71 02                  MOV ESI,dword ptr [ECX + 0x2]
00698AF5  8B 9F 33 58 00 00         MOV EBX,dword ptr [EDI + 0x5833]
00698AFB  8B C6                     MOV EAX,ESI
00698AFD  99                        CDQ
00698AFE  F7 FB                     IDIV EBX
00698B00  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00698B03  8B C6                     MOV EAX,ESI
00698B05  99                        CDQ
00698B06  F7 FB                     IDIV EBX
00698B08  F6 01 02                  TEST byte ptr [ECX],0x2
00698B0B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00698B0E  0F 84 82 00 00 00         JZ 0x00698b96
00698B14  E8 A7 5B 09 00            CALL 0x0072e6c0
00698B19  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00698B1C  8D 4A 01                  LEA ECX,[EDX + 0x1]
00698B1F  99                        CDQ
00698B20  F7 F9                     IDIV ECX
00698B22  83 FA 01                  CMP EDX,0x1
00698B25  75 6F                     JNZ 0x00698b96
00698B27  E8 94 5B 09 00            CALL 0x0072e6c0
00698B2C  8B F0                     MOV ESI,EAX
00698B2E  81 E6 01 00 00 80         AND ESI,0x80000001
00698B34  79 05                     JNS 0x00698b3b
00698B36  4E                        DEC ESI
00698B37  83 CE FE                  OR ESI,0xfffffffe
00698B3A  46                        INC ESI
LAB_00698b3b:
00698B3B  46                        INC ESI
00698B3C  E8 7F 5B 09 00            CALL 0x0072e6c0
00698B41  99                        CDQ
00698B42  B9 06 00 00 00            MOV ECX,0x6
00698B47  F7 F9                     IDIV ECX
00698B49  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00698B4C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00698B4F  8B DA                     MOV EBX,EDX
00698B51  8D 55 C8                  LEA EDX,[EBP + -0x38]
00698B54  52                        PUSH EDX
00698B55  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00698B58  50                        PUSH EAX
00698B59  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00698B5C  51                        PUSH ECX
00698B5D  52                        PUSH EDX
00698B5E  50                        PUSH EAX
00698B5F  43                        INC EBX
00698B60  E8 E7 B5 D6 FF            CALL 0x0040414c
00698B65  8B 8F 47 58 00 00         MOV ECX,dword ptr [EDI + 0x5847]
00698B6B  83 C4 14                  ADD ESP,0x14
00698B6E  0F BF C0                  MOVSX EAX,AX
00698B71  03 C6                     ADD EAX,ESI
00698B73  3B C1                     CMP EAX,ECX
00698B75  7D 1F                     JGE 0x00698b96
00698B77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00698B7A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00698B7D  53                        PUSH EBX
00698B7E  6A 00                     PUSH 0x0
00698B80  8B 11                     MOV EDX,dword ptr [ECX]
00698B82  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00698B85  68 FF 00 00 00            PUSH 0xff
00698B8A  42                        INC EDX
00698B8B  56                        PUSH ESI
00698B8C  52                        PUSH EDX
00698B8D  50                        PUSH EAX
00698B8E  51                        PUSH ECX
00698B8F  8B CF                     MOV ECX,EDI
00698B91  E8 B9 94 D6 FF            CALL 0x0040204f
LAB_00698b96:
00698B96  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00698b99:
00698B99  8B 43 15                  MOV EAX,dword ptr [EBX + 0x15]
00698B9C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00698B9F  42                        INC EDX
00698BA0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00698BA3  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00698BA6  3B D1                     CMP EDX,ECX
00698BA8  0F 8C 2A FF FF FF         JL 0x00698ad8
LAB_00698bae:
00698BAE  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00698BB1  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
LAB_00698bb4:
00698BB4  41                        INC ECX
00698BB5  3B CA                     CMP ECX,EDX
00698BB7  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00698BBA  0F 8C 2C FD FF FF         JL 0x006988ec
00698BC0  5E                        POP ESI
00698BC1  5B                        POP EBX
LAB_00698bc2:
00698BC2  5F                        POP EDI
00698BC3  8B E5                     MOV ESP,EBP
00698BC5  5D                        POP EBP
00698BC6  C3                        RET
