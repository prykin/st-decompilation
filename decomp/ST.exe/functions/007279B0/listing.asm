FUN_007279b0:
007279B0  55                        PUSH EBP
007279B1  8B EC                     MOV EBP,ESP
007279B3  6A FF                     PUSH -0x1
007279B5  68 E8 E2 79 00            PUSH 0x79e2e8
007279BA  68 64 D9 72 00            PUSH 0x72d964
007279BF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
007279C5  50                        PUSH EAX
007279C6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
007279CD  83 EC 1C                  SUB ESP,0x1c
007279D0  53                        PUSH EBX
007279D1  56                        PUSH ESI
007279D2  57                        PUSH EDI
007279D3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007279D6  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
007279D9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007279DC  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
007279E3  2B C8                     SUB ECX,EAX
007279E5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007279E8  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
007279EB  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
007279EE  33 C9                     XOR ECX,ECX
007279F0  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
007279F3  C1 E1 04                  SHL ECX,0x4
007279F6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007279F9  03 CA                     ADD ECX,EDX
007279FB  8B F1                     MOV ESI,ECX
007279FD  8B 0E                     MOV ECX,dword ptr [ESI]
007279FF  89 0D A8 70 85 00         MOV dword ptr [0x008570a8],ECX
00727A05  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
00727A08  89 3D AC 70 85 00         MOV dword ptr [0x008570ac],EDI
00727A0E  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
00727A11  89 1D B0 70 85 00         MOV dword ptr [0x008570b0],EBX
00727A17  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
00727A1A  89 35 B4 70 85 00         MOV dword ptr [0x008570b4],ESI
00727A20  33 DB                     XOR EBX,EBX
00727A22  8A 58 02                  MOV BL,byte ptr [EAX + 0x2]
00727A25  C1 E3 04                  SHL EBX,0x4
00727A28  03 DA                     ADD EBX,EDX
00727A2A  8B 33                     MOV ESI,dword ptr [EBX]
00727A2C  89 35 B8 70 85 00         MOV dword ptr [0x008570b8],ESI
00727A32  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00727A35  89 35 BC 70 85 00         MOV dword ptr [0x008570bc],ESI
00727A3B  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
00727A3E  89 35 C0 70 85 00         MOV dword ptr [0x008570c0],ESI
00727A44  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
00727A47  89 35 C4 70 85 00         MOV dword ptr [0x008570c4],ESI
00727A4D  33 DB                     XOR EBX,EBX
00727A4F  8A 58 03                  MOV BL,byte ptr [EAX + 0x3]
00727A52  C1 E3 04                  SHL EBX,0x4
00727A55  03 DA                     ADD EBX,EDX
00727A57  8B 13                     MOV EDX,dword ptr [EBX]
00727A59  89 15 C8 70 85 00         MOV dword ptr [0x008570c8],EDX
00727A5F  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
00727A62  89 15 CC 70 85 00         MOV dword ptr [0x008570cc],EDX
00727A68  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00727A6B  89 15 D0 70 85 00         MOV dword ptr [0x008570d0],EDX
00727A71  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00727A74  89 15 D4 70 85 00         MOV dword ptr [0x008570d4],EDX
00727A7A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00727A7D  81 FA F6 FF 00 00         CMP EDX,0xfff6
00727A83  7C 05                     JL 0x00727a8a
00727A85  BA F6 FF 00 00            MOV EDX,0xfff6
LAB_00727a8a:
00727A8A  8B 35 9C 70 85 00         MOV ESI,dword ptr [0x0085709c]
00727A90  0F AF D6                  IMUL EDX,ESI
00727A93  89 15 40 70 85 00         MOV dword ptr [0x00857040],EDX
00727A99  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00727A9C  81 FA F6 FF 00 00         CMP EDX,0xfff6
00727AA2  7C 05                     JL 0x00727aa9
00727AA4  BA F6 FF 00 00            MOV EDX,0xfff6
LAB_00727aa9:
00727AA9  0F AF D6                  IMUL EDX,ESI
00727AAC  89 15 44 70 85 00         MOV dword ptr [0x00857044],EDX
00727AB2  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00727AB5  81 FA F6 FF 00 00         CMP EDX,0xfff6
00727ABB  7C 05                     JL 0x00727ac2
00727ABD  BA F6 FF 00 00            MOV EDX,0xfff6
LAB_00727ac2:
00727AC2  0F AF D6                  IMUL EDX,ESI
00727AC5  89 15 48 70 85 00         MOV dword ptr [0x00857048],EDX
00727ACB  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00727ACE  81 FA F6 FF 00 00         CMP EDX,0xfff6
00727AD4  7C 05                     JL 0x00727adb
00727AD6  BA F6 FF 00 00            MOV EDX,0xfff6
LAB_00727adb:
00727ADB  0F AF D6                  IMUL EDX,ESI
00727ADE  89 15 4C 70 85 00         MOV dword ptr [0x0085704c],EDX
00727AE4  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00727AE7  81 FA F6 FF 00 00         CMP EDX,0xfff6
00727AED  7C 05                     JL 0x00727af4
00727AEF  BA F6 FF 00 00            MOV EDX,0xfff6
LAB_00727af4:
00727AF4  0F AF D6                  IMUL EDX,ESI
00727AF7  89 15 50 70 85 00         MOV dword ptr [0x00857050],EDX
00727AFD  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00727B00  3D F6 FF 00 00            CMP EAX,0xfff6
00727B05  7C 05                     JL 0x00727b0c
00727B07  B8 F6 FF 00 00            MOV EAX,0xfff6
LAB_00727b0c:
00727B0C  0F AF C6                  IMUL EAX,ESI
00727B0F  A3 54 70 85 00            MOV [0x00857054],EAX
00727B14  8B DF                     MOV EBX,EDI
00727B16  8B C7                     MOV EAX,EDI
00727B18  8B 15 BC 70 85 00         MOV EDX,dword ptr [0x008570bc]
00727B1E  3B FA                     CMP EDI,EDX
00727B20  7E 02                     JLE 0x00727b24
00727B22  8B DA                     MOV EBX,EDX
LAB_00727b24:
00727B24  7D 02                     JGE 0x00727b28
00727B26  8B C2                     MOV EAX,EDX
LAB_00727b28:
00727B28  8B 15 CC 70 85 00         MOV EDX,dword ptr [0x008570cc]
00727B2E  3B DA                     CMP EBX,EDX
00727B30  7E 02                     JLE 0x00727b34
00727B32  8B DA                     MOV EBX,EDX
LAB_00727b34:
00727B34  3B C2                     CMP EAX,EDX
00727B36  7D 02                     JGE 0x00727b3a
00727B38  8B C2                     MOV EAX,EDX
LAB_00727b3a:
00727B3A  C1 FB 10                  SAR EBX,0x10
00727B3D  89 1D 64 70 85 00         MOV dword ptr [0x00857064],EBX
00727B43  C1 F8 10                  SAR EAX,0x10
00727B46  A3 EC 70 85 00            MOV [0x008570ec],EAX
00727B4B  8B F1                     MOV ESI,ECX
00727B4D  8B D1                     MOV EDX,ECX
00727B4F  C7 05 70 70 85 00 00 00 00 00  MOV dword ptr [0x00857070],0x0
00727B59  8B 3D B8 70 85 00         MOV EDI,dword ptr [0x008570b8]
00727B5F  3B CF                     CMP ECX,EDI
00727B61  7E 02                     JLE 0x00727b65
00727B63  8B F7                     MOV ESI,EDI
LAB_00727b65:
00727B65  7D 0C                     JGE 0x00727b73
00727B67  8B D7                     MOV EDX,EDI
00727B69  C7 05 70 70 85 00 01 00 00 00  MOV dword ptr [0x00857070],0x1
LAB_00727b73:
00727B73  8B 0D C8 70 85 00         MOV ECX,dword ptr [0x008570c8]
00727B79  3B F1                     CMP ESI,ECX
00727B7B  7E 02                     JLE 0x00727b7f
00727B7D  8B F1                     MOV ESI,ECX
LAB_00727b7f:
00727B7F  3B D1                     CMP EDX,ECX
00727B81  7D 0C                     JGE 0x00727b8f
00727B83  8B D1                     MOV EDX,ECX
00727B85  C7 05 70 70 85 00 02 00 00 00  MOV dword ptr [0x00857070],0x2
LAB_00727b8f:
00727B8F  C1 FE 10                  SAR ESI,0x10
00727B92  89 35 60 70 85 00         MOV dword ptr [0x00857060],ESI
00727B98  C1 FA 10                  SAR EDX,0x10
00727B9B  89 15 E8 70 85 00         MOV dword ptr [0x008570e8],EDX
00727BA1  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00727BA8  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00727BAB  8B 79 30                  MOV EDI,dword ptr [ECX + 0x30]
00727BAE  3B F7                     CMP ESI,EDI
00727BB0  7D 0F                     JGE 0x00727bc1
00727BB2  8B F7                     MOV ESI,EDI
00727BB4  89 35 60 70 85 00         MOV dword ptr [0x00857060],ESI
00727BBA  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
LAB_00727bc1:
00727BC1  8B 79 38                  MOV EDI,dword ptr [ECX + 0x38]
00727BC4  3B D7                     CMP EDX,EDI
00727BC6  7E 0F                     JLE 0x00727bd7
00727BC8  8B D7                     MOV EDX,EDI
00727BCA  89 15 E8 70 85 00         MOV dword ptr [0x008570e8],EDX
00727BD0  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
LAB_00727bd7:
00727BD7  8B 79 34                  MOV EDI,dword ptr [ECX + 0x34]
00727BDA  3B DF                     CMP EBX,EDI
00727BDC  7D 08                     JGE 0x00727be6
00727BDE  8B DF                     MOV EBX,EDI
00727BE0  89 1D 64 70 85 00         MOV dword ptr [0x00857064],EBX
LAB_00727be6:
00727BE6  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
00727BE9  3B C1                     CMP EAX,ECX
00727BEB  7E 07                     JLE 0x00727bf4
00727BED  8B C1                     MOV EAX,ECX
00727BEF  A3 EC 70 85 00            MOV [0x008570ec],EAX
LAB_00727bf4:
00727BF4  3B D8                     CMP EBX,EAX
00727BF6  7D 69                     JGE 0x00727c61
00727BF8  3B F2                     CMP ESI,EDX
00727BFA  7D 65                     JGE 0x00727c61
00727BFC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00727C03  2B C3                     SUB EAX,EBX
00727C05  40                        INC EAX
00727C06  C1 E0 05                  SHL EAX,0x5
00727C09  83 C0 03                  ADD EAX,0x3
00727C0C  24 FC                     AND AL,0xfc
00727C0E  E8 2D 5E 00 00            CALL 0x0072da40
00727C13  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00727C16  8B C4                     MOV EAX,ESP
00727C18  8B F0                     MOV ESI,EAX
00727C1A  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00727C1D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00727C24  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00727C27  50                        PUSH EAX
00727C28  56                        PUSH ESI
00727C29  E8 52 F1 FF FF            CALL 0x00726d80
00727C2E  83 C4 08                  ADD ESP,0x8
00727C31  56                        PUSH ESI
00727C32  E8 F9 F5 FF FF            CALL 0x00727230
00727C37  EB 28                     JMP 0x00727c61
LAB_00727c61:
00727C61  8D 65 C8                  LEA ESP,[EBP + -0x38]
00727C64  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00727C67  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00727C6E  5F                        POP EDI
00727C6F  5E                        POP ESI
00727C70  5B                        POP EBX
00727C71  8B E5                     MOV ESP,EBP
00727C73  5D                        POP EBP
00727C74  C2 0C 00                  RET 0xc
