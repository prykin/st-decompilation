FUN_00605b60:
00605B60  55                        PUSH EBP
00605B61  8B EC                     MOV EBP,ESP
00605B63  81 EC E8 00 00 00         SUB ESP,0xe8
00605B69  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00605B6C  53                        PUSH EBX
00605B6D  56                        PUSH ESI
00605B6E  8B F1                     MOV ESI,ECX
00605B70  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00605B76  57                        PUSH EDI
00605B77  50                        PUSH EAX
00605B78  E8 3A EE DF FF            CALL 0x004049b7
00605B7D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00605B80  25 FF 00 00 00            AND EAX,0xff
00605B85  8B D1                     MOV EDX,ECX
00605B87  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00605B8A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00605B8D  81 E2 FF FF 00 00         AND EDX,0xffff
00605B93  C1 E9 10                  SHR ECX,0x10
00605B96  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00605B99  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00605B9C  8B D8                     MOV EBX,EAX
00605B9E  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00605BA1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00605BA4  81 E3 FF FF 00 00         AND EBX,0xffff
00605BAA  8B FA                     MOV EDI,EDX
00605BAC  51                        PUSH ECX
00605BAD  81 E2 FF FF 00 00         AND EDX,0xffff
00605BB3  53                        PUSH EBX
00605BB4  52                        PUSH EDX
00605BB5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00605BB8  C1 E8 10                  SHR EAX,0x10
00605BBB  C1 EF 10                  SHR EDI,0x10
00605BBE  52                        PUSH EDX
00605BBF  50                        PUSH EAX
00605BC0  57                        PUSH EDI
00605BC1  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00605BC4  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00605BC7  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00605BCA  E8 3E 73 0A 00            CALL 0x006acf0d
00605BCF  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00605BD2  83 C4 18                  ADD ESP,0x18
00605BD5  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00605BD8  8D 45 F0                  LEA EAX,[EBP + -0x10]
00605BDB  8D 4D E8                  LEA ECX,[EBP + -0x18]
00605BDE  50                        PUSH EAX
00605BDF  8D 55 88                  LEA EDX,[EBP + -0x78]
00605BE2  51                        PUSH ECX
00605BE3  8D 45 D4                  LEA EAX,[EBP + -0x2c]
00605BE6  52                        PUSH EDX
00605BE7  50                        PUSH EAX
00605BE8  57                        PUSH EDI
00605BE9  8B CE                     MOV ECX,ESI
00605BEB  E8 1B EF DF FF            CALL 0x00404b0b
00605BF0  83 FF 15                  CMP EDI,0x15
00605BF3  75 08                     JNZ 0x00605bfd
00605BF5  33 C0                     XOR EAX,EAX
00605BF7  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00605BFA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00605bfd:
00605BFD  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00605C00  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00605C03  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00605C09  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00605C0F  8D 4A FF                  LEA ECX,[EDX + -0x1]
00605C12  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605C15  33 D2                     XOR EDX,EDX
00605C17  C1 E8 10                  SHR EAX,0x10
00605C1A  F7 F1                     DIV ECX
00605C1C  8B CE                     MOV ECX,ESI
00605C1E  8B DA                     MOV EBX,EDX
00605C20  83 C3 02                  ADD EBX,0x2
00605C23  53                        PUSH EBX
00605C24  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00605C27  E8 60 E1 DF FF            CALL 0x00403d8c
00605C2C  3B C3                     CMP EAX,EBX
00605C2E  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00605C34  74 0C                     JZ 0x00605c42
00605C36  5F                        POP EDI
00605C37  5E                        POP ESI
00605C38  83 C8 FF                  OR EAX,0xffffffff
00605C3B  5B                        POP EBX
00605C3C  8B E5                     MOV ESP,EBP
00605C3E  5D                        POP EBP
00605C3F  C2 24 00                  RET 0x24
LAB_00605c42:
00605C42  85 DB                     TEST EBX,EBX
00605C44  7E 39                     JLE 0x00605c7f
00605C46  8D 8D 18 FF FF FF         LEA ECX,[EBP + 0xffffff18]
00605C4C  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
LAB_00605c4f:
00605C4F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00605C52  BF 06 00 00 00            MOV EDI,0x6
00605C57  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00605C5D  83 C1 04                  ADD ECX,0x4
00605C60  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00605C66  33 D2                     XOR EDX,EDX
00605C68  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605C6B  C1 E8 10                  SHR EAX,0x10
00605C6E  F7 F7                     DIV EDI
00605C70  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00605C73  83 C2 0A                  ADD EDX,0xa
00605C76  48                        DEC EAX
00605C77  89 51 FC                  MOV dword ptr [ECX + -0x4],EDX
00605C7A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00605C7D  75 D0                     JNZ 0x00605c4f
LAB_00605c7f:
00605C7F  B9 08 00 00 00            MOV ECX,0x8
00605C84  33 C0                     XOR EAX,EAX
00605C86  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
00605C8C  33 D2                     XOR EDX,EDX
00605C8E  F3 AB                     STOSD.REP ES:EDI
00605C90  85 DB                     TEST EBX,EBX
00605C92  C7 85 78 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x2
00605C9C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00605C9F  0F 8E 74 02 00 00         JLE 0x00605f19
00605CA5  8D 85 18 FF FF FF         LEA EAX,[EBP + 0xffffff18]
00605CAB  8D 8E 19 02 00 00         LEA ECX,[ESI + 0x219]
00605CB1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00605CB4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00605cb7:
00605CB7  B9 11 00 00 00            MOV ECX,0x11
00605CBC  33 C0                     XOR EAX,EAX
00605CBE  8D 7D 8C                  LEA EDI,[EBP + -0x74]
00605CC1  33 DB                     XOR EBX,EBX
00605CC3  F3 AB                     STOSD.REP ES:EDI
00605CC5  8A 4D 28                  MOV CL,byte ptr [EBP + 0x28]
00605CC8  66 AB                     STOSW ES:EDI
00605CCA  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00605CCD  89 55 CE                  MOV dword ptr [EBP + -0x32],EDX
00605CD0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00605CD3  88 4D CC                  MOV byte ptr [EBP + -0x34],CL
00605CD6  C7 45 8C 64 00 00 00      MOV dword ptr [EBP + -0x74],0x64
00605CDD  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
00605CE0  8B 0A                     MOV ECX,dword ptr [EDX]
00605CE2  89 5D 94                  MOV dword ptr [EBP + -0x6c],EBX
00605CE5  83 F9 0A                  CMP ECX,0xa
00605CE8  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
00605CEB  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00605CEE  76 05                     JBE 0x00605cf5
00605CF0  88 5D CD                  MOV byte ptr [EBP + -0x33],BL
00605CF3  EB 25                     JMP 0x00605d1a
LAB_00605cf5:
00605CF5  80 7D A0 04               CMP byte ptr [EBP + -0x60],0x4
00605CF9  76 1B                     JBE 0x00605d16
00605CFB  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00605CFE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00605D04  05 39 30 00 00            ADD EAX,0x3039
00605D09  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605D0C  C1 E8 10                  SHR EAX,0x10
00605D0F  24 01                     AND AL,0x1
00605D11  88 45 CD                  MOV byte ptr [EBP + -0x33],AL
00605D14  EB 04                     JMP 0x00605d1a
LAB_00605d16:
00605D16  C6 45 CD 01               MOV byte ptr [EBP + -0x33],0x1
LAB_00605d1a:
00605D1A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00605D1D  3B C3                     CMP EAX,EBX
00605D1F  75 08                     JNZ 0x00605d29
00605D21  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00605D24  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00605D27  EB 03                     JMP 0x00605d2c
LAB_00605d29:
00605D29  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
LAB_00605d2c:
00605D2C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00605D2F  83 F8 09                  CMP EAX,0x9
00605D32  75 09                     JNZ 0x00605d3d
00605D34  C7 45 A8 04 00 00 00      MOV dword ptr [EBP + -0x58],0x4
00605D3B  EB 0C                     JMP 0x00605d49
LAB_00605d3d:
00605D3D  83 F8 15                  CMP EAX,0x15
00605D40  75 07                     JNZ 0x00605d49
00605D42  C7 45 A8 02 00 00 00      MOV dword ptr [EBP + -0x58],0x2
LAB_00605d49:
00605D49  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
00605D4C  3B FB                     CMP EDI,EBX
00605D4E  74 65                     JZ 0x00605db5
00605D50  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00605D53  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00605D56  2B C2                     SUB EAX,EDX
00605D58  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
00605D5E  99                        CDQ
00605D5F  F7 FF                     IDIV EDI
00605D61  50                        PUSH EAX
00605D62  E8 3C 25 0C 00            CALL 0x006c82a3
00605D67  50                        PUSH EAX
00605D68  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00605D6B  E8 EB A1 0A 00            CALL 0x006aff5b
00605D70  8B C8                     MOV ECX,EAX
00605D72  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00605D77  0F AF CF                  IMUL ECX,EDI
00605D7A  F7 E9                     IMUL ECX
00605D7C  C1 FA 0C                  SAR EDX,0xc
00605D7F  8B C2                     MOV EAX,EDX
00605D81  83 C4 08                  ADD ESP,0x8
00605D84  C1 E8 1F                  SHR EAX,0x1f
00605D87  03 D0                     ADD EDX,EAX
00605D89  8B CA                     MOV ECX,EDX
00605D8B  74 21                     JZ 0x00605dae
00605D8D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00605D90  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00605D93  2B C7                     SUB EAX,EDI
00605D95  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
00605D9B  99                        CDQ
00605D9C  F7 F9                     IDIV ECX
00605D9E  50                        PUSH EAX
00605D9F  E8 EC 24 0C 00            CALL 0x006c8290
00605DA4  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00605DA7  83 C4 04                  ADD ESP,0x4
00605DAA  8B F8                     MOV EDI,EAX
00605DAC  EB 0A                     JMP 0x00605db8
LAB_00605dae:
00605DAE  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00605DB1  33 FF                     XOR EDI,EDI
00605DB3  EB 03                     JMP 0x00605db8
LAB_00605db5:
00605DB5  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
LAB_00605db8:
00605DB8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00605DBB  BB 29 00 00 00            MOV EBX,0x29
00605DC0  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00605DC6  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00605DCC  33 D2                     XOR EDX,EDX
00605DCE  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605DD1  C1 E8 10                  SHR EAX,0x10
00605DD4  F7 F3                     DIV EBX
00605DD6  B8 BA FF FF FF            MOV EAX,0xffffffba
00605DDB  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
00605DDE  2B C2                     SUB EAX,EDX
00605DE0  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00605DE3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00605DE9  03 D8                     ADD EBX,EAX
00605DEB  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00605DF1  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
00605DF4  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605DF7  33 D2                     XOR EDX,EDX
00605DF9  C1 E8 10                  SHR EAX,0x10
00605DFC  BB 29 00 00 00            MOV EBX,0x29
00605E01  F7 F3                     DIV EBX
00605E03  B8 14 00 00 00            MOV EAX,0x14
00605E08  2B C2                     SUB EAX,EDX
00605E0A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00605E0D  03 F8                     ADD EDI,EAX
00605E0F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00605E12  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00605E15  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00605E18  83 F9 0F                  CMP ECX,0xf
00605E1B  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
00605E1E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00605E21  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00605E24  0F 87 B4 00 00 00         JA 0x00605ede
00605E2A  33 C0                     XOR EAX,EAX
00605E2C  8A 81 34 5F 60 00         MOV AL,byte ptr [ECX + 0x605f34]
switchD_00605e32::switchD:
00605E32  FF 24 85 24 5F 60 00      JMP dword ptr [EAX*0x4 + 0x605f24]
switchD_00605e32::caseD_0:
00605E39  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00605E3C  33 D2                     XOR EDX,EDX
00605E3E  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00605E44  C7 45 C4 E8 03 00 00      MOV dword ptr [EBP + -0x3c],0x3e8
00605E4B  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00605E51  B9 03 00 00 00            MOV ECX,0x3
00605E56  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605E59  C1 E8 10                  SHR EAX,0x10
00605E5C  F7 F1                     DIV ECX
00605E5E  83 C2 06                  ADD EDX,0x6
00605E61  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00605E64  EB 78                     JMP 0x00605ede
switchD_00605e32::caseD_3:
00605E66  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00605E69  C7 45 C4 FA 00 00 00      MOV dword ptr [EBP + -0x3c],0xfa
00605E70  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00605E76  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00605E7C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605E7F  C1 E8 10                  SHR EAX,0x10
00605E82  83 E0 03                  AND EAX,0x3
00605E85  83 C0 06                  ADD EAX,0x6
00605E88  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00605E8B  EB 51                     JMP 0x00605ede
switchD_00605e32::caseD_6:
00605E8D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00605E90  33 D2                     XOR EDX,EDX
00605E92  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00605E98  05 39 30 00 00            ADD EAX,0x3039
00605E9D  B9 05 00 00 00            MOV ECX,0x5
00605EA2  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605EA5  C7 45 C4 5E 01 00 00      MOV dword ptr [EBP + -0x3c],0x15e
00605EAC  C1 E8 10                  SHR EAX,0x10
00605EAF  F7 F1                     DIV ECX
00605EB1  83 C2 06                  ADD EDX,0x6
00605EB4  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00605EB7  EB 25                     JMP 0x00605ede
switchD_00605e32::caseD_a:
00605EB9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00605EBC  C7 45 C4 C2 01 00 00      MOV dword ptr [EBP + -0x3c],0x1c2
00605EC3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00605EC9  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00605ECF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00605ED2  C1 E8 10                  SHR EAX,0x10
00605ED5  83 E0 03                  AND EAX,0x3
00605ED8  83 C0 09                  ADD EAX,0x9
00605EDB  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
switchD_00605e32::default:
00605EDE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00605EE1  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
00605EE7  8D 45 8C                  LEA EAX,[EBP + -0x74]
00605EEA  51                        PUSH ECX
00605EEB  8B 0F                     MOV ECX,dword ptr [EDI]
00605EED  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00605EF3  E8 A2 FD DF FF            CALL 0x00405c9a
00605EF8  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00605EFB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00605EFE  83 C3 04                  ADD EBX,0x4
00605F01  42                        INC EDX
00605F02  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00605F05  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00605F08  83 C7 04                  ADD EDI,0x4
00605F0B  3B D3                     CMP EDX,EBX
00605F0D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00605F10  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00605F13  0F 8C 9E FD FF FF         JL 0x00605cb7
LAB_00605f19:
00605F19  5F                        POP EDI
00605F1A  8B C3                     MOV EAX,EBX
00605F1C  5E                        POP ESI
00605F1D  5B                        POP EBX
00605F1E  8B E5                     MOV ESP,EBP
00605F20  5D                        POP EBP
00605F21  C2 24 00                  RET 0x24
