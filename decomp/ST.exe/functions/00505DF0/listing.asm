FUN_00505df0:
00505DF0  55                        PUSH EBP
00505DF1  8B EC                     MOV EBP,ESP
00505DF3  83 EC 4C                  SUB ESP,0x4c
00505DF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00505DFB  53                        PUSH EBX
00505DFC  56                        PUSH ESI
00505DFD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00505E00  57                        PUSH EDI
00505E01  8D 55 B8                  LEA EDX,[EBP + -0x48]
00505E04  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00505E07  6A 00                     PUSH 0x0
00505E09  52                        PUSH EDX
00505E0A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00505E0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00505E13  E8 D8 79 22 00            CALL 0x0072d7f0
00505E18  8B F0                     MOV ESI,EAX
00505E1A  83 C4 08                  ADD ESP,0x8
00505E1D  85 F6                     TEST ESI,ESI
00505E1F  0F 85 55 01 00 00         JNZ 0x00505f7a
00505E25  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00505E28  6A 01                     PUSH 0x1
00505E2A  8B 86 B2 02 00 00         MOV EAX,dword ptr [ESI + 0x2b2]
00505E30  50                        PUSH EAX
00505E31  E8 6A 55 20 00            CALL 0x0070b3a0
00505E36  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00505E3C  50                        PUSH EAX
00505E3D  6A 01                     PUSH 0x1
00505E3F  6A 7B                     PUSH 0x7b
00505E41  6A 33                     PUSH 0x33
00505E43  51                        PUSH ECX
00505E44  E8 E0 D3 EF FF            CALL 0x00403229
00505E49  83 C4 1C                  ADD ESP,0x1c
00505E4C  66 83 BE 2F 0C 00 00 00   CMP word ptr [ESI + 0xc2f],0x0
00505E54  74 67                     JZ 0x00505ebd
00505E56  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00505E5C  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00505E62  6A 2B                     PUSH 0x2b
00505E64  68 A4 00 00 00            PUSH 0xa4
00505E69  6A 4C                     PUSH 0x4c
00505E6B  6A 24                     PUSH 0x24
00505E6D  6A 00                     PUSH 0x0
00505E6F  52                        PUSH EDX
00505E70  E8 1B AC 20 00            CALL 0x00710a90
00505E75  A1 18 76 80 00            MOV EAX,[0x00807618]
00505E7A  50                        PUSH EAX
00505E7B  68 AE 38 00 00            PUSH 0x38ae
00505E80  E8 BB A2 1A 00            CALL 0x006b0140
00505E85  33 C9                     XOR ECX,ECX
00505E87  50                        PUSH EAX
00505E88  66 8B 8E 2F 0C 00 00      MOV CX,word ptr [ESI + 0xc2f]
00505E8F  51                        PUSH ECX
00505E90  68 40 28 7C 00            PUSH 0x7c2840
00505E95  68 3A F3 80 00            PUSH 0x80f33a
00505E9A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00505EA0  83 C4 10                  ADD ESP,0x10
00505EA3  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00505EA9  6A FF                     PUSH -0x1
00505EAB  6A FF                     PUSH -0x1
00505EAD  6A 05                     PUSH 0x5
00505EAF  6A FF                     PUSH -0x1
00505EB1  6A FE                     PUSH -0x2
00505EB3  68 3A F3 80 00            PUSH 0x80f33a
00505EB8  E8 B3 BC 20 00            CALL 0x00711b70
LAB_00505ebd:
00505EBD  8A 86 29 0C 00 00         MOV AL,byte ptr [ESI + 0xc29]
00505EC3  3C FF                     CMP AL,0xff
00505EC5  0F 84 9F 00 00 00         JZ 0x00505f6a
00505ECB  3C 21                     CMP AL,0x21
00505ECD  76 07                     JBE 0x00505ed6
00505ECF  C6 86 29 0C 00 00 21      MOV byte ptr [ESI + 0xc29],0x21
LAB_00505ed6:
00505ED6  8A 86 29 0C 00 00         MOV AL,byte ptr [ESI + 0xc29]
00505EDC  32 DB                     XOR BL,BL
00505EDE  84 C0                     TEST AL,AL
00505EE0  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00505EE3  76 41                     JBE 0x00505f26
LAB_00505ee5:
00505EE5  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
00505EEB  6A 01                     PUSH 0x1
00505EED  52                        PUSH EDX
00505EEE  E8 AD 54 20 00            CALL 0x0070b3a0
00505EF3  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00505EF9  50                        PUSH EAX
00505EFA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00505EFD  6A 01                     PUSH 0x1
00505EFF  25 FF 00 00 00            AND EAX,0xff
00505F04  6A 7D                     PUSH 0x7d
00505F06  8D 0C 85 35 00 00 00      LEA ECX,[EAX*0x4 + 0x35]
00505F0D  51                        PUSH ECX
00505F0E  52                        PUSH EDX
00505F0F  E8 15 D3 EF FF            CALL 0x00403229
00505F14  8A 86 29 0C 00 00         MOV AL,byte ptr [ESI + 0xc29]
00505F1A  83 C4 1C                  ADD ESP,0x1c
00505F1D  FE C3                     INC BL
00505F1F  3A D8                     CMP BL,AL
00505F21  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00505F24  72 BF                     JC 0x00505ee5
LAB_00505f26:
00505F26  80 FB 21                  CMP BL,0x21
00505F29  73 3F                     JNC 0x00505f6a
00505F2B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00505F2E  BB 21 00 00 00            MOV EBX,0x21
00505F33  25 FF 00 00 00            AND EAX,0xff
00505F38  2B D8                     SUB EBX,EAX
00505F3A  8D 3C 85 35 00 00 00      LEA EDI,[EAX*0x4 + 0x35]
LAB_00505f41:
00505F41  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
00505F47  6A 00                     PUSH 0x0
00505F49  50                        PUSH EAX
00505F4A  E8 51 54 20 00            CALL 0x0070b3a0
00505F4F  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00505F55  50                        PUSH EAX
00505F56  6A 01                     PUSH 0x1
00505F58  6A 7D                     PUSH 0x7d
00505F5A  57                        PUSH EDI
00505F5B  51                        PUSH ECX
00505F5C  E8 C8 D2 EF FF            CALL 0x00403229
00505F61  83 C4 1C                  ADD ESP,0x1c
00505F64  83 C7 04                  ADD EDI,0x4
00505F67  4B                        DEC EBX
00505F68  75 D7                     JNZ 0x00505f41
LAB_00505f6a:
00505F6A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00505F6D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00505F73  5F                        POP EDI
00505F74  5E                        POP ESI
00505F75  5B                        POP EBX
00505F76  8B E5                     MOV ESP,EBP
00505F78  5D                        POP EBP
00505F79  C3                        RET
LAB_00505f7a:
00505F7A  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00505F7D  68 24 28 7C 00            PUSH 0x7c2824
00505F82  68 CC 4C 7A 00            PUSH 0x7a4ccc
00505F87  56                        PUSH ESI
00505F88  6A 00                     PUSH 0x0
00505F8A  68 9A 01 00 00            PUSH 0x19a
00505F8F  68 00 27 7C 00            PUSH 0x7c2700
00505F94  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00505F99  E8 32 75 1A 00            CALL 0x006ad4d0
00505F9E  83 C4 18                  ADD ESP,0x18
00505FA1  85 C0                     TEST EAX,EAX
00505FA3  74 01                     JZ 0x00505fa6
00505FA5  CC                        INT3
LAB_00505fa6:
00505FA6  68 9A 01 00 00            PUSH 0x19a
00505FAB  68 00 27 7C 00            PUSH 0x7c2700
00505FB0  6A 00                     PUSH 0x0
00505FB2  56                        PUSH ESI
00505FB3  E8 88 FE 19 00            CALL 0x006a5e40
00505FB8  5F                        POP EDI
00505FB9  5E                        POP ESI
00505FBA  5B                        POP EBX
00505FBB  8B E5                     MOV ESP,EBP
00505FBD  5D                        POP EBP
00505FBE  C3                        RET
