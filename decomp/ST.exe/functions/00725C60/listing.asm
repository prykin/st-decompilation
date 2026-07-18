FUN_00725c60:
00725C60  55                        PUSH EBP
00725C61  8B EC                     MOV EBP,ESP
00725C63  83 EC 4C                  SUB ESP,0x4c
00725C66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00725C6B  53                        PUSH EBX
00725C6C  56                        PUSH ESI
00725C6D  33 F6                     XOR ESI,ESI
00725C6F  57                        PUSH EDI
00725C70  8D 55 B8                  LEA EDX,[EBP + -0x48]
00725C73  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00725C76  56                        PUSH ESI
00725C77  52                        PUSH EDX
00725C78  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00725C7B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00725C7E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00725C81  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725C87  E8 64 7B 00 00            CALL 0x0072d7f0
00725C8C  8B F8                     MOV EDI,EAX
00725C8E  83 C4 08                  ADD ESP,0x8
00725C91  3B FE                     CMP EDI,ESI
00725C93  0F 85 0C 01 00 00         JNZ 0x00725da5
00725C99  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00725C9C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00725C9F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00725CA2  50                        PUSH EAX
00725CA3  56                        PUSH ESI
00725CA4  51                        PUSH ECX
00725CA5  6A 07                     PUSH 0x7
00725CA7  8B CB                     MOV ECX,EBX
00725CA9  E8 32 C0 FC FF            CALL 0x006f1ce0
00725CAE  3B C6                     CMP EAX,ESI
00725CB0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00725CB3  75 18                     JNZ 0x00725ccd
00725CB5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00725CBB  6A 1C                     PUSH 0x1c
00725CBD  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725CC2  52                        PUSH EDX
00725CC3  6A FC                     PUSH -0x4
00725CC5  E8 76 01 F8 FF            CALL 0x006a5e40
00725CCA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00725ccd:
00725CCD  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00725CD1  8D 04 85 31 00 00 00      LEA EAX,[EAX*0x4 + 0x31]
00725CD8  50                        PUSH EAX
00725CD9  E8 32 4F F8 FF            CALL 0x006aac10
00725CDE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00725CE1  B9 0C 00 00 00            MOV ECX,0xc
00725CE6  8B F8                     MOV EDI,EAX
00725CE8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00725CEB  F3 A5                     MOVSD.REP ES:EDI,ESI
00725CED  A4                        MOVSB ES:EDI,ESI
00725CEE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00725CF1  33 F6                     XOR ESI,ESI
00725CF3  89 59 25                  MOV dword ptr [ECX + 0x25],EBX
00725CF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00725CF9  66 89 72 2B               MOV word ptr [EDX + 0x2b],SI
00725CFD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725D00  66 89 70 29               MOV word ptr [EAX + 0x29],SI
00725D04  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725D07  66 39 70 23               CMP word ptr [EAX + 0x23],SI
00725D0B  7E 7A                     JLE 0x00725d87
00725D0D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00725d10:
00725D10  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00725D13  0F BF 50 21               MOVSX EDX,word ptr [EAX + 0x21]
00725D17  51                        PUSH ECX
00725D18  33 C9                     XOR ECX,ECX
00725D1A  8A 48 20                  MOV CL,byte ptr [EAX + 0x20]
00725D1D  03 D6                     ADD EDX,ESI
00725D1F  57                        PUSH EDI
00725D20  52                        PUSH EDX
00725D21  51                        PUSH ECX
00725D22  50                        PUSH EAX
00725D23  E8 D8 CE FC FF            CALL 0x006f2c00
00725D28  83 C4 0C                  ADD ESP,0xc
00725D2B  50                        PUSH EAX
00725D2C  53                        PUSH EBX
00725D2D  E8 1E 4D FE FF            CALL 0x0070aa50
00725D32  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00725D35  83 C4 10                  ADD ESP,0x10
00725D38  89 44 B2 2D               MOV dword ptr [EDX + ESI*0x4 + 0x2d],EAX
00725D3C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725D3F  8B 4C B0 2D               MOV ECX,dword ptr [EAX + ESI*0x4 + 0x2d]
00725D43  85 C9                     TEST ECX,ECX
00725D45  75 17                     JNZ 0x00725d5e
00725D47  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00725D4C  6A 27                     PUSH 0x27
00725D4E  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725D53  50                        PUSH EAX
00725D54  6A FC                     PUSH -0x4
00725D56  E8 E5 00 F8 FF            CALL 0x006a5e40
00725D5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00725d5e:
00725D5E  85 F6                     TEST ESI,ESI
00725D60  75 1C                     JNZ 0x00725d7e
00725D62  8B 48 2D                  MOV ECX,dword ptr [EAX + 0x2d]
00725D65  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00725D69  66 89 50 29               MOV word ptr [EAX + 0x29],DX
00725D6D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725D70  8B 48 2D                  MOV ECX,dword ptr [EAX + 0x2d]
00725D73  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
00725D77  66 89 50 2B               MOV word ptr [EAX + 0x2b],DX
00725D7B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00725d7e:
00725D7E  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
00725D82  46                        INC ESI
00725D83  3B F1                     CMP ESI,ECX
00725D85  7C 89                     JL 0x00725d10
LAB_00725d87:
00725D87  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00725D8A  8D 45 F8                  LEA EAX,[EBP + -0x8]
00725D8D  50                        PUSH EAX
00725D8E  8B CB                     MOV ECX,EBX
00725D90  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00725D96  E8 45 C3 FC FF            CALL 0x006f20e0
00725D9B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725D9E  5F                        POP EDI
00725D9F  5E                        POP ESI
00725DA0  5B                        POP EBX
00725DA1  8B E5                     MOV ESP,EBP
00725DA3  5D                        POP EBP
00725DA4  C3                        RET
LAB_00725da5:
00725DA5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00725DA8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00725DAB  8D 55 F8                  LEA EDX,[EBP + -0x8]
00725DAE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725DB4  52                        PUSH EDX
00725DB5  8B CB                     MOV ECX,EBX
00725DB7  E8 24 C3 FC FF            CALL 0x006f20e0
00725DBC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725DBF  3B C6                     CMP EAX,ESI
00725DC1  74 28                     JZ 0x00725deb
00725DC3  66 83 78 23 00            CMP word ptr [EAX + 0x23],0x0
00725DC8  7E 18                     JLE 0x00725de2
LAB_00725dca:
00725DCA  8D 44 B0 2D               LEA EAX,[EAX + ESI*0x4 + 0x2d]
00725DCE  8B CB                     MOV ECX,EBX
00725DD0  50                        PUSH EAX
00725DD1  E8 0A C3 FC FF            CALL 0x006f20e0
00725DD6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725DD9  46                        INC ESI
00725DDA  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
00725DDE  3B F1                     CMP ESI,ECX
00725DE0  7C E8                     JL 0x00725dca
LAB_00725de2:
00725DE2  8D 55 FC                  LEA EDX,[EBP + -0x4]
00725DE5  52                        PUSH EDX
00725DE6  E8 75 52 F8 FF            CALL 0x006ab060
LAB_00725deb:
00725DEB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00725DEE  85 C0                     TEST EAX,EAX
00725DF0  75 05                     JNZ 0x00725df7
00725DF2  83 FF FC                  CMP EDI,-0x4
00725DF5  74 30                     JZ 0x00725e27
LAB_00725df7:
00725DF7  68 80 0C 7F 00            PUSH 0x7f0c80
00725DFC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00725E01  57                        PUSH EDI
00725E02  6A 00                     PUSH 0x0
00725E04  6A 3E                     PUSH 0x3e
00725E06  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725E0B  E8 C0 76 F8 FF            CALL 0x006ad4d0
00725E10  83 C4 18                  ADD ESP,0x18
00725E13  85 C0                     TEST EAX,EAX
00725E15  74 01                     JZ 0x00725e18
00725E17  CC                        INT3
LAB_00725e18:
00725E18  6A 40                     PUSH 0x40
00725E1A  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725E1F  6A 00                     PUSH 0x0
00725E21  57                        PUSH EDI
00725E22  E8 19 00 F8 FF            CALL 0x006a5e40
LAB_00725e27:
00725E27  5F                        POP EDI
00725E28  5E                        POP ESI
00725E29  33 C0                     XOR EAX,EAX
00725E2B  5B                        POP EBX
00725E2C  8B E5                     MOV ESP,EBP
00725E2E  5D                        POP EBP
00725E2F  C3                        RET
