FUN_00755e10:
00755E10  55                        PUSH EBP
00755E11  8B EC                     MOV EBP,ESP
00755E13  83 EC 0C                  SUB ESP,0xc
00755E16  53                        PUSH EBX
00755E17  56                        PUSH ESI
00755E18  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00755E1B  57                        PUSH EDI
00755E1C  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00755E23  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00755E26  0F BF 58 16               MOVSX EBX,word ptr [EAX + 0x16]
00755E2A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755E2D  83 EB 10                  SUB EBX,0x10
00755E30  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00755E33  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
00755E36  4F                        DEC EDI
00755E37  89 78 1C                  MOV dword ptr [EAX + 0x1c],EDI
00755E3A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755E3D  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755E40  51                        PUSH ECX
00755E41  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
00755E45  8B 44 C8 40               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x40]
00755E49  50                        PUSH EAX
00755E4A  56                        PUSH ESI
00755E4B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00755E4E  E8 2D DD FF FF            CALL 0x00753b80
00755E53  8B F8                     MOV EDI,EAX
00755E55  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00755E58  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00755E5B  83 C9 10                  OR ECX,0x10
00755E5E  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00755E61  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00755E64  51                        PUSH ECX
00755E65  56                        PUSH ESI
00755E66  E8 E5 15 00 00            CALL 0x00757450
00755E6B  0F BF 57 08               MOVSX EDX,word ptr [EDI + 0x8]
00755E6F  8B C8                     MOV ECX,EAX
00755E71  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755E74  3B CA                     CMP ECX,EDX
00755E76  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00755E79  0F 8D 89 01 00 00         JGE 0x00756008
00755E7F  66 8B 50 34               MOV DX,word ptr [EAX + 0x34]
00755E83  66 85 D2                  TEST DX,DX
00755E86  74 05                     JZ 0x00755e8d
00755E88  0F BF C2                  MOVSX EAX,DX
00755E8B  EB 0B                     JMP 0x00755e98
LAB_00755e8d:
00755E8D  8D 4C 39 18               LEA ECX,[ECX + EDI*0x1 + 0x18]
00755E91  51                        PUSH ECX
00755E92  FF 50 08                  CALL dword ptr [EAX + 0x8]
00755E95  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00755e98:
00755E98  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00755E9B  8D 44 10 08               LEA EAX,[EAX + EDX*0x1 + 0x8]
00755E9F  3B C3                     CMP EAX,EBX
00755EA1  0F 8D 10 03 00 00         JGE 0x007561b7
00755EA7  8D 4C 39 10               LEA ECX,[ECX + EDI*0x1 + 0x10]
00755EAB  51                        PUSH ECX
00755EAC  6A 01                     PUSH 0x1
00755EAE  56                        PUSH ESI
00755EAF  E8 7C 16 00 00            CALL 0x00757530
00755EB4  85 C0                     TEST EAX,EAX
00755EB6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00755EB9  75 0E                     JNZ 0x00755ec9
00755EBB  5F                        POP EDI
00755EBC  5E                        POP ESI
00755EBD  B8 FE FF FF FF            MOV EAX,0xfffffffe
00755EC2  5B                        POP EBX
00755EC3  8B E5                     MOV ESP,EBP
00755EC5  5D                        POP EBP
00755EC6  C2 0C 00                  RET 0xc
LAB_00755ec9:
00755EC9  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755ECC  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755ECF  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
00755ED3  41                        INC ECX
00755ED4  8B 7C 3A 10               MOV EDI,dword ptr [EDX + EDI*0x1 + 0x10]
00755ED8  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
00755EDB  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755EDE  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755EE1  51                        PUSH ECX
00755EE2  57                        PUSH EDI
00755EE3  56                        PUSH ESI
00755EE4  E8 97 DC FF FF            CALL 0x00753b80
00755EE9  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00755EEC  8B F8                     MOV EDI,EAX
00755EEE  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755EF1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00755EF4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00755EF7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755EFA  51                        PUSH ECX
00755EFB  52                        PUSH EDX
00755EFC  56                        PUSH ESI
00755EFD  E8 7E DC FF FF            CALL 0x00753b80
00755F02  8B D8                     MOV EBX,EAX
00755F04  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
00755F08  0F BF 4B 08               MOVSX ECX,word ptr [EBX + 0x8]
00755F0C  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00755F0F  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
00755F12  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00755F15  7C 14                     JL 0x00755f2b
00755F17  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00755F1A  03 CA                     ADD ECX,EDX
00755F1C  3B C1                     CMP EAX,ECX
00755F1E  7F 0B                     JG 0x00755f2b
00755F20  5F                        POP EDI
00755F21  5E                        POP ESI
00755F22  33 C0                     XOR EAX,EAX
00755F24  5B                        POP EBX
00755F25  8B E5                     MOV ESP,EBP
00755F27  5D                        POP EBP
00755F28  C2 0C 00                  RET 0xc
LAB_00755f2b:
00755F2B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00755F2E  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
00755F31  89 08                     MOV dword ptr [EAX],ECX
00755F33  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00755F36  0F BF 53 08               MOVSX EDX,word ptr [EBX + 0x8]
00755F3A  52                        PUSH EDX
00755F3B  50                        PUSH EAX
00755F3C  53                        PUSH EBX
00755F3D  56                        PUSH ESI
00755F3E  E8 7D 15 00 00            CALL 0x007574c0
00755F43  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
00755F47  0F BF 4B 08               MOVSX ECX,word ptr [EBX + 0x8]
00755F4B  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00755F4E  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00755F51  7D 49                     JGE 0x00755f9c
00755F53  50                        PUSH EAX
00755F54  8D 47 10                  LEA EAX,[EDI + 0x10]
00755F57  8D 4C 19 10               LEA ECX,[ECX + EBX*0x1 + 0x10]
00755F5B  50                        PUSH EAX
00755F5C  51                        PUSH ECX
00755F5D  E8 0E 7B FD FF            CALL 0x0072da70
00755F62  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00755F65  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
00755F69  66 01 53 08               ADD word ptr [EBX + 0x8],DX
00755F6D  83 C4 0C                  ADD ESP,0xc
00755F70  50                        PUSH EAX
00755F71  56                        PUSH ESI
00755F72  E8 F9 16 00 00            CALL 0x00757670
00755F77  85 C0                     TEST EAX,EAX
00755F79  0F 8C 3B 02 00 00         JL 0x007561ba
00755F7F  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
00755F82  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00755F89  5F                        POP EDI
00755F8A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00755F8D  48                        DEC EAX
00755F8E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00755F91  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00755F94  5E                        POP ESI
00755F95  5B                        POP EBX
00755F96  8B E5                     MOV ESP,EBP
00755F98  5D                        POP EBP
00755F99  C2 0C 00                  RET 0xc
LAB_00755f9c:
00755F9C  8D 47 10                  LEA EAX,[EDI + 0x10]
00755F9F  50                        PUSH EAX
00755FA0  6A 01                     PUSH 0x1
00755FA2  56                        PUSH ESI
00755FA3  E8 88 15 00 00            CALL 0x00757530
00755FA8  8B D8                     MOV EBX,EAX
00755FAA  85 DB                     TEST EBX,EBX
00755FAC  75 0E                     JNZ 0x00755fbc
00755FAE  5F                        POP EDI
00755FAF  5E                        POP ESI
00755FB0  B8 FE FF FF FF            MOV EAX,0xfffffffe
00755FB5  5B                        POP EBX
00755FB6  8B E5                     MOV ESP,EBP
00755FB8  5D                        POP EBP
00755FB9  C2 0C 00                  RET 0xc
LAB_00755fbc:
00755FBC  0F BF 4F 08               MOVSX ECX,word ptr [EDI + 0x8]
00755FC0  2B CB                     SUB ECX,EBX
00755FC2  8D 54 1F 10               LEA EDX,[EDI + EBX*0x1 + 0x10]
00755FC6  51                        PUSH ECX
00755FC7  8D 47 10                  LEA EAX,[EDI + 0x10]
00755FCA  52                        PUSH EDX
00755FCB  50                        PUSH EAX
00755FCC  E8 9F 7A FD FF            CALL 0x0072da70
00755FD1  66 29 5F 08               SUB word ptr [EDI + 0x8],BX
00755FD5  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00755FD8  83 C4 0C                  ADD ESP,0xc
00755FDB  8B 08                     MOV ECX,dword ptr [EAX]
00755FDD  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
00755FE0  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755FE3  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
00755FE6  4B                        DEC EBX
00755FE7  89 58 1C                  MOV dword ptr [EAX + 0x1c],EBX
00755FEA  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00755FED  52                        PUSH EDX
00755FEE  56                        PUSH ESI
00755FEF  E8 AC FD FF FF            CALL 0x00755da0
00755FF4  85 C0                     TEST EAX,EAX
00755FF6  0F 85 BE 01 00 00         JNZ 0x007561ba
00755FFC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00755FFF  5F                        POP EDI
00756000  5E                        POP ESI
00756001  5B                        POP EBX
00756002  8B E5                     MOV ESP,EBP
00756004  5D                        POP EBP
00756005  C2 0C 00                  RET 0xc
LAB_00756008:
00756008  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
0075600C  66 85 C9                  TEST CX,CX
0075600F  74 05                     JZ 0x00756016
00756011  0F BF C1                  MOVSX EAX,CX
00756014  EB 0F                     JMP 0x00756025
LAB_00756016:
00756016  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00756019  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
0075601D  8D 4C 3A 18               LEA ECX,[EDX + EDI*0x1 + 0x18]
00756021  51                        PUSH ECX
00756022  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00756025:
00756025  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00756028  8D 54 08 08               LEA EDX,[EAX + ECX*0x1 + 0x8]
0075602C  3B D3                     CMP EDX,EBX
0075602E  7C 08                     JL 0x00756038
00756030  85 C9                     TEST ECX,ECX
00756032  0F 85 7F 01 00 00         JNZ 0x007561b7
LAB_00756038:
00756038  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075603B  8D 44 1F 10               LEA EAX,[EDI + EBX*0x1 + 0x10]
0075603F  50                        PUSH EAX
00756040  6A 01                     PUSH 0x1
00756042  56                        PUSH ESI
00756043  E8 E8 14 00 00            CALL 0x00757530
00756048  85 C0                     TEST EAX,EAX
0075604A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075604D  75 0E                     JNZ 0x0075605d
0075604F  5F                        POP EDI
00756050  5E                        POP ESI
00756051  B8 FE FF FF FF            MOV EAX,0xfffffffe
00756056  5B                        POP EBX
00756057  8B E5                     MOV ESP,EBP
00756059  5D                        POP EBP
0075605A  C2 0C 00                  RET 0xc
LAB_0075605d:
0075605D  53                        PUSH EBX
0075605E  56                        PUSH ESI
0075605F  E8 6C 01 00 00            CALL 0x007561d0
00756064  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00756067  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0075606A  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
0075606E  83 FA FF                  CMP EDX,-0x1
00756071  75 05                     JNZ 0x00756078
00756073  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
00756076  EB 04                     JMP 0x0075607c
LAB_00756078:
00756078  8B 7C 3A 10               MOV EDI,dword ptr [EDX + EDI*0x1 + 0x10]
LAB_0075607c:
0075607C  41                        INC ECX
0075607D  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
00756080  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00756083  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00756086  52                        PUSH EDX
00756087  57                        PUSH EDI
00756088  56                        PUSH ESI
00756089  E8 F2 DA FF FF            CALL 0x00753b80
0075608E  8B D8                     MOV EBX,EAX
00756090  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
00756094  50                        PUSH EAX
00756095  56                        PUSH ESI
00756096  E8 E5 DB FF FF            CALL 0x00753c80
0075609B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075609E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007560A1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007560A4  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
007560A7  52                        PUSH EDX
007560A8  50                        PUSH EAX
007560A9  56                        PUSH ESI
007560AA  E8 D1 DA FF FF            CALL 0x00753b80
007560AF  8B F8                     MOV EDI,EAX
007560B1  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
007560B5  0F BF 4F 08               MOVSX ECX,word ptr [EDI + 0x8]
007560B9  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
007560BC  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
007560BF  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
007560C2  7C 14                     JL 0x007560d8
007560C4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007560C7  03 CA                     ADD ECX,EDX
007560C9  3B C1                     CMP EAX,ECX
007560CB  7F 0B                     JG 0x007560d8
007560CD  5F                        POP EDI
007560CE  5E                        POP ESI
007560CF  33 C0                     XOR EAX,EAX
007560D1  5B                        POP EBX
007560D2  8B E5                     MOV ESP,EBP
007560D4  5D                        POP EBP
007560D5  C2 0C 00                  RET 0xc
LAB_007560d8:
007560D8  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007560DB  6A 00                     PUSH 0x0
007560DD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007560E0  C7 44 C8 44 00 00 00 00   MOV dword ptr [EAX + ECX*0x8 + 0x44],0x0
007560E8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
007560EB  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
007560EE  89 02                     MOV dword ptr [EDX],EAX
007560F0  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
007560F3  51                        PUSH ECX
007560F4  57                        PUSH EDI
007560F5  56                        PUSH ESI
007560F6  E8 C5 13 00 00            CALL 0x007574c0
007560FB  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
007560FF  0F BF 4F 08               MOVSX ECX,word ptr [EDI + 0x8]
00756103  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
00756106  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00756109  7D 56                     JGE 0x00756161
0075610B  51                        PUSH ECX
0075610C  8D 4F 10                  LEA ECX,[EDI + 0x10]
0075610F  8D 54 18 10               LEA EDX,[EAX + EBX*0x1 + 0x10]
00756113  51                        PUSH ECX
00756114  52                        PUSH EDX
00756115  E8 56 79 FD FF            CALL 0x0072da70
0075611A  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
0075611E  83 C4 0C                  ADD ESP,0xc
00756121  66 01 43 08               ADD word ptr [EBX + 0x8],AX
00756125  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00756128  51                        PUSH ECX
00756129  56                        PUSH ESI
0075612A  E8 41 15 00 00            CALL 0x00757670
0075612F  85 C0                     TEST EAX,EAX
00756131  0F 8C 83 00 00 00         JL 0x007561ba
00756137  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075613A  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00756141  5F                        POP EDI
00756142  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00756145  49                        DEC ECX
00756146  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
00756149  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
0075614C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075614F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00756152  89 44 D6 44               MOV dword ptr [ESI + EDX*0x8 + 0x44],EAX
00756156  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00756159  5E                        POP ESI
0075615A  5B                        POP EBX
0075615B  8B E5                     MOV ESP,EBP
0075615D  5D                        POP EBP
0075615E  C2 0C 00                  RET 0xc
LAB_00756161:
00756161  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00756164  8B 54 0B 10               MOV EDX,dword ptr [EBX + ECX*0x1 + 0x10]
00756168  8D 44 0B 10               LEA EAX,[EBX + ECX*0x1 + 0x10]
0075616C  50                        PUSH EAX
0075616D  6A 01                     PUSH 0x1
0075616F  56                        PUSH ESI
00756170  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
00756173  E8 B8 13 00 00            CALL 0x00757530
00756178  85 C0                     TEST EAX,EAX
0075617A  75 0E                     JNZ 0x0075618a
0075617C  5F                        POP EDI
0075617D  5E                        POP ESI
0075617E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00756183  5B                        POP EBX
00756184  8B E5                     MOV ESP,EBP
00756186  5D                        POP EBP
00756187  C2 0C 00                  RET 0xc
LAB_0075618a:
0075618A  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0075618E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00756191  66 89 43 08               MOV word ptr [EBX + 0x8],AX
00756195  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00756198  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
0075619B  4B                        DEC EBX
0075619C  89 58 1C                  MOV dword ptr [EAX + 0x1c],EBX
0075619F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007561A2  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007561A5  89 54 C8 44               MOV dword ptr [EAX + ECX*0x8 + 0x44],EDX
007561A9  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007561AC  50                        PUSH EAX
007561AD  56                        PUSH ESI
007561AE  E8 ED FB FF FF            CALL 0x00755da0
007561B3  85 C0                     TEST EAX,EAX
007561B5  75 03                     JNZ 0x007561ba
LAB_007561b7:
007561B7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_007561ba:
007561BA  5F                        POP EDI
007561BB  5E                        POP ESI
007561BC  5B                        POP EBX
007561BD  8B E5                     MOV ESP,EBP
007561BF  5D                        POP EBP
007561C0  C2 0C 00                  RET 0xc
