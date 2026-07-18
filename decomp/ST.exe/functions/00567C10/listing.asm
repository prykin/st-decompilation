FUN_00567c10:
00567C10  55                        PUSH EBP
00567C11  8B EC                     MOV EBP,ESP
00567C13  83 EC 68                  SUB ESP,0x68
00567C16  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
00567C1C  53                        PUSH EBX
00567C1D  56                        PUSH ESI
00567C1E  57                        PUSH EDI
00567C1F  85 C0                     TEST EAX,EAX
00567C21  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00567C24  0F 84 01 03 00 00         JZ 0x00567f2b
00567C2A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00567C2F  8D 55 9C                  LEA EDX,[EBP + -0x64]
00567C32  8D 4D 98                  LEA ECX,[EBP + -0x68]
00567C35  6A 00                     PUSH 0x0
00567C37  52                        PUSH EDX
00567C38  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00567C3B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00567C41  E8 AA 5B 1C 00            CALL 0x0072d7f0
00567C46  83 C4 08                  ADD ESP,0x8
00567C49  85 C0                     TEST EAX,EAX
00567C4B  0F 85 D2 02 00 00         JNZ 0x00567f23
00567C51  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00567C54  BB 02 00 00 00            MOV EBX,0x2
00567C59  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00567C5C  8D B7 23 0E 00 00         LEA ESI,[EDI + 0xe23]
00567C62  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_00567c65:
00567C65  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00567C68  6A 00                     PUSH 0x0
00567C6A  50                        PUSH EAX
00567C6B  53                        PUSH EBX
00567C6C  E8 8F A2 15 00            CALL 0x006c1f00
00567C71  83 7D E4 01               CMP dword ptr [EBP + -0x1c],0x1
00567C75  0F 85 83 02 00 00         JNZ 0x00567efe
00567C7B  83 FB 04                  CMP EBX,0x4
00567C7E  7C 05                     JL 0x00567c85
00567C80  83 FB 0A                  CMP EBX,0xa
00567C83  7E 1C                     JLE 0x00567ca1
LAB_00567c85:
00567C85  83 FB 12                  CMP EBX,0x12
00567C88  7C 05                     JL 0x00567c8f
00567C8A  83 FB 14                  CMP EBX,0x14
00567C8D  7E 12                     JLE 0x00567ca1
LAB_00567c8f:
00567C8F  83 FB 0B                  CMP EBX,0xb
00567C92  0F 8C 66 02 00 00         JL 0x00567efe
00567C98  83 FB 11                  CMP EBX,0x11
00567C9B  0F 8F 5D 02 00 00         JG 0x00567efe
LAB_00567ca1:
00567CA1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00567CA4  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00567CA7  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
00567CAA  0F 85 4E 02 00 00         JNZ 0x00567efe
00567CB0  8B 10                     MOV EDX,dword ptr [EAX]
00567CB2  89 16                     MOV dword ptr [ESI],EDX
00567CB4  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
00567CB7  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
00567CBA  A0 63 73 80 00            MOV AL,[0x00807363]
00567CBF  84 C0                     TEST AL,AL
00567CC1  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00567CC4  74 27                     JZ 0x00567ced
00567CC6  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00567CC9  68 00 00 80 BF            PUSH 0xbf800000
00567CCE  68 00 00 80 BF            PUSH 0xbf800000
00567CD3  6A 00                     PUSH 0x0
00567CD5  51                        PUSH ECX
00567CD6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00567CD9  D9 1C 24                  FSTP float ptr [ESP]
00567CDC  DB 06                     FILD dword ptr [ESI]
00567CDE  51                        PUSH ECX
00567CDF  D9 1C 24                  FSTP float ptr [ESP]
00567CE2  50                        PUSH EAX
00567CE3  E8 38 A5 15 00            CALL 0x006c2220
00567CE8  E9 0E 02 00 00            JMP 0x00567efb
LAB_00567ced:
00567CED  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
00567CF3  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
00567CF9  C1 E1 04                  SHL ECX,0x4
00567CFC  8D 82 A0 0F 00 00         LEA EAX,[EDX + 0xfa0]
00567D02  8B 36                     MOV ESI,dword ptr [ESI]
00567D04  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
00567D0A  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00567D0D  0F AF D0                  IMUL EDX,EAX
00567D10  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00567D15  F7 EA                     IMUL EDX
00567D17  C1 FA 05                  SAR EDX,0x5
00567D1A  8B C2                     MOV EAX,EDX
00567D1C  C1 E8 1F                  SHR EAX,0x1f
00567D1F  8D 94 02 60 F0 FF FF      LEA EDX,[EDX + EAX*0x1 + 0xfffff060]
00567D26  8B 87 D9 10 00 00         MOV EAX,dword ptr [EDI + 0x10d9]
00567D2C  2B C6                     SUB EAX,ESI
00567D2E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00567D31  99                        CDQ
00567D32  8B F0                     MOV ESI,EAX
00567D34  8B 87 DD 10 00 00         MOV EAX,dword ptr [EDI + 0x10dd]
00567D3A  33 F2                     XOR ESI,EDX
00567D3C  2B C3                     SUB EAX,EBX
00567D3E  2B F2                     SUB ESI,EDX
00567D40  99                        CDQ
00567D41  33 C2                     XOR EAX,EDX
00567D43  2B C2                     SUB EAX,EDX
00567D45  8D 56 01                  LEA EDX,[ESI + 0x1]
00567D48  3B F0                     CMP ESI,EAX
00567D4A  7F 03                     JG 0x00567d4f
00567D4C  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_00567d4f:
00567D4F  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00567D55  8B 99 88 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9788]
00567D5B  3B D3                     CMP EDX,EBX
00567D5D  7E 02                     JLE 0x00567d61
00567D5F  8B D3                     MOV EDX,EBX
LAB_00567d61:
00567D61  3B 91 90 97 7C 00         CMP EDX,dword ptr [ECX + 0x7c9790]
00567D67  7F 08                     JG 0x00567d71
00567D69  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00567D6C  E9 B5 00 00 00            JMP 0x00567e26
LAB_00567d71:
00567D71  3B F0                     CMP ESI,EAX
00567D73  8D 56 01                  LEA EDX,[ESI + 0x1]
00567D76  7F 03                     JG 0x00567d7b
00567D78  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_00567d7b:
00567D7B  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00567D81  8B 99 88 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9788]
00567D87  3B D3                     CMP EDX,EBX
00567D89  7E 02                     JLE 0x00567d8d
00567D8B  8B D3                     MOV EDX,EBX
LAB_00567d8d:
00567D8D  3B 91 8C 97 7C 00         CMP EDX,dword ptr [ECX + 0x7c978c]
00567D93  7F 79                     JG 0x00567e0e
00567D95  3B F0                     CMP ESI,EAX
00567D97  7E 05                     JLE 0x00567d9e
00567D99  8D 46 01                  LEA EAX,[ESI + 0x1]
00567D9C  EB 01                     JMP 0x00567d9f
LAB_00567d9e:
00567D9E  40                        INC EAX
LAB_00567d9f:
00567D9F  89 87 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EAX
00567DA5  8B 91 88 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9788]
00567DAB  3B C2                     CMP EAX,EDX
00567DAD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00567DB0  7F 03                     JG 0x00567db5
00567DB2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00567db5:
00567DB5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00567DB8  BA A0 0F 00 00            MOV EDX,0xfa0
00567DBD  2B D3                     SUB EDX,EBX
00567DBF  B8 56 55 55 55            MOV EAX,0x55555556
00567DC4  D1 E2                     SHL EDX,0x1
00567DC6  F7 EA                     IMUL EDX
00567DC8  8B C2                     MOV EAX,EDX
00567DCA  8B B1 8C 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c978c]
00567DD0  C1 E8 1F                  SHR EAX,0x1f
00567DD3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00567DD6  8B C2                     MOV EAX,EDX
00567DD8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00567DDB  03 C2                     ADD EAX,EDX
00567DDD  8B D6                     MOV EDX,ESI
00567DDF  03 C3                     ADD EAX,EBX
00567DE1  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00567DE4  2B D3                     SUB EDX,EBX
00567DE6  0F AF C2                  IMUL EAX,EDX
00567DE9  2B B1 90 97 7C 00         SUB ESI,dword ptr [ECX + 0x7c9790]
00567DEF  99                        CDQ
00567DF0  F7 FE                     IDIV ESI
00567DF2  8B F0                     MOV ESI,EAX
00567DF4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00567DF7  8D 8C 00 C0 E0 FF FF      LEA ECX,[EAX + EAX*0x1 + 0xffffe0c0]
00567DFE  B8 56 55 55 55            MOV EAX,0x55555556
00567E03  F7 E9                     IMUL ECX
00567E05  8B C2                     MOV EAX,EDX
00567E07  C1 E8 1F                  SHR EAX,0x1f
00567E0A  03 D6                     ADD EDX,ESI
00567E0C  EB 16                     JMP 0x00567e24
LAB_00567e0e:
00567E0E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00567E11  B8 56 55 55 55            MOV EAX,0x55555556
00567E16  8D 8C 09 C0 E0 FF FF      LEA ECX,[ECX + ECX*0x1 + 0xffffe0c0]
00567E1D  F7 E9                     IMUL ECX
00567E1F  8B C2                     MOV EAX,EDX
00567E21  C1 EA 1F                  SHR EDX,0x1f
LAB_00567e24:
00567E24  03 C2                     ADD EAX,EDX
LAB_00567e26:
00567E26  50                        PUSH EAX
00567E27  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00567E2A  50                        PUSH EAX
00567E2B  E8 B0 9E 15 00            CALL 0x006c1ce0
00567E30  8B 8F E9 10 00 00         MOV ECX,dword ptr [EDI + 0x10e9]
00567E36  8B 97 ED 10 00 00         MOV EDX,dword ptr [EDI + 0x10ed]
00567E3C  0F AF 4D DC               IMUL ECX,dword ptr [EBP + -0x24]
00567E40  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00567E43  8D 34 11                  LEA ESI,[ECX + EDX*0x1]
00567E46  8B C6                     MOV EAX,ESI
00567E48  2B C3                     SUB EAX,EBX
00567E4A  99                        CDQ
00567E4B  33 C2                     XOR EAX,EDX
00567E4D  2B C2                     SUB EAX,EDX
00567E4F  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00567E56  2B C8                     SUB ECX,EAX
00567E58  B8 67 66 66 66            MOV EAX,0x66666667
00567E5D  F7 E9                     IMUL ECX
00567E5F  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
00567E65  C1 FA 02                  SAR EDX,0x2
00567E68  8B C2                     MOV EAX,EDX
00567E6A  C1 E8 1F                  SHR EAX,0x1f
00567E6D  03 D0                     ADD EDX,EAX
00567E6F  C1 E1 04                  SHL ECX,0x4
00567E72  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00567E78  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
00567E7E  3B D0                     CMP EDX,EAX
00567E80  7F 02                     JG 0x00567e84
00567E82  8B C2                     MOV EAX,EDX
LAB_00567e84:
00567E84  3B 81 90 97 7C 00         CMP EAX,dword ptr [ECX + 0x7c9790]
00567E8A  7D 28                     JGE 0x00567eb4
00567E8C  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00567E92  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
00567E98  3B D0                     CMP EDX,EAX
00567E9A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00567E9D  7F 03                     JG 0x00567ea2
00567E9F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00567ea2:
00567EA2  B8 E8 03 00 00            MOV EAX,0x3e8
00567EA7  99                        CDQ
00567EA8  F7 B9 90 97 7C 00         IDIV dword ptr [ECX + 0x7c9790]
00567EAE  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
00567EB2  EB 05                     JMP 0x00567eb9
LAB_00567eb4:
00567EB4  B8 E8 03 00 00            MOV EAX,0x3e8
LAB_00567eb9:
00567EB9  3B F3                     CMP ESI,EBX
00567EBB  89 B7 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],ESI
00567EC1  75 04                     JNZ 0x00567ec7
00567EC3  33 C9                     XOR ECX,ECX
00567EC5  EB 24                     JMP 0x00567eeb
LAB_00567ec7:
00567EC7  8B 8F E5 10 00 00         MOV ECX,dword ptr [EDI + 0x10e5]
00567ECD  85 C9                     TEST ECX,ECX
00567ECF  74 0E                     JZ 0x00567edf
00567ED1  83 F9 03                  CMP ECX,0x3
00567ED4  74 09                     JZ 0x00567edf
00567ED6  33 C9                     XOR ECX,ECX
00567ED8  3B DE                     CMP EBX,ESI
00567EDA  0F 9E C1                  SETLE CL
00567EDD  EB 07                     JMP 0x00567ee6
LAB_00567edf:
00567EDF  33 C9                     XOR ECX,ECX
00567EE1  3B DE                     CMP EBX,ESI
00567EE3  0F 9D C1                  SETGE CL
LAB_00567ee6:
00567EE6  49                        DEC ECX
00567EE7  83 E1 02                  AND ECX,0x2
00567EEA  49                        DEC ECX
LAB_00567eeb:
00567EEB  0F AF C8                  IMUL ECX,EAX
00567EEE  51                        PUSH ECX
00567EEF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00567EF2  51                        PUSH ECX
00567EF3  E8 88 9E 15 00            CALL 0x006c1d80
00567EF8  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_00567efb:
00567EFB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00567efe:
00567EFE  43                        INC EBX
00567EFF  83 C6 0C                  ADD ESI,0xc
00567F02  83 FB 20                  CMP EBX,0x20
00567F05  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00567F08  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00567F0B  0F 8C 54 FD FF FF         JL 0x00567c65
00567F11  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00567F14  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00567F1A  5F                        POP EDI
00567F1B  5E                        POP ESI
00567F1C  5B                        POP EBX
00567F1D  8B E5                     MOV ESP,EBP
00567F1F  5D                        POP EBP
00567F20  C2 04 00                  RET 0x4
LAB_00567f23:
00567F23  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00567F26  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00567f2b:
00567F2B  5F                        POP EDI
00567F2C  5E                        POP ESI
00567F2D  5B                        POP EBX
00567F2E  8B E5                     MOV ESP,EBP
00567F30  5D                        POP EBP
00567F31  C2 04 00                  RET 0x4
