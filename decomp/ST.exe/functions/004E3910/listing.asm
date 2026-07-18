FUN_004e3910:
004E3910  55                        PUSH EBP
004E3911  8B EC                     MOV EBP,ESP
004E3913  83 EC 1C                  SUB ESP,0x1c
004E3916  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E391B  53                        PUSH EBX
004E391C  8B D9                     MOV EBX,ECX
004E391E  56                        PUSH ESI
004E391F  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E3925  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004E3928  3B 8B E8 04 00 00         CMP ECX,dword ptr [EBX + 0x4e8]
004E392E  0F 82 A6 05 00 00         JC 0x004e3eda
004E3934  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
004E3937  B9 9E 00 00 00            MOV ECX,0x9e
004E393C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004E3942  33 F6                     XOR ESI,ESI
004E3944  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004E394A  33 D2                     XOR EDX,EDX
004E394C  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
004E394F  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004E3952  C1 E8 10                  SHR EAX,0x10
004E3955  F7 F1                     DIV ECX
004E3957  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E395C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004E395F  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E3965  8B 83 E4 04 00 00         MOV EAX,dword ptr [EBX + 0x4e4]
004E396B  3B C6                     CMP EAX,ESI
004E396D  8D 94 0A D4 01 00 00      LEA EDX,[EDX + ECX*0x1 + 0x1d4]
004E3974  89 93 E8 04 00 00         MOV dword ptr [EBX + 0x4e8],EDX
004E397A  0F 8E 5A 05 00 00         JLE 0x004e3eda
004E3980  57                        PUSH EDI
LAB_004e3981:
004E3981  8B 84 B3 D0 04 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x4d0]
004E3988  85 C0                     TEST EAX,EAX
004E398A  74 26                     JZ 0x004e39b2
004E398C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E3992  6A 00                     PUSH 0x0
004E3994  50                        PUSH EAX
004E3995  E8 36 29 20 00            CALL 0x006e62d0
004E399A  85 C0                     TEST EAX,EAX
004E399C  0F 84 1D 05 00 00         JZ 0x004e3ebf
004E39A2  C7 84 B3 D0 04 00 00 00 00 00 00  MOV dword ptr [EBX + ESI*0x4 + 0x4d0],0x0
004E39AD  E9 0D 05 00 00            JMP 0x004e3ebf
LAB_004e39b2:
004E39B2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E39B5  85 C0                     TEST EAX,EAX
004E39B7  0F 85 02 05 00 00         JNZ 0x004e3ebf
004E39BD  6A 0A                     PUSH 0xa
004E39BF  6A 0C                     PUSH 0xc
004E39C1  68 10 27 00 00            PUSH 0x2710
004E39C6  6A 00                     PUSH 0x0
004E39C8  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
004E39CF  E8 BC A8 1C 00            CALL 0x006ae290
004E39D4  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004E39DA  33 F6                     XOR ESI,ESI
004E39DC  66 39 35 42 B2 7F 00      CMP word ptr [0x007fb242],SI
004E39E3  8B F8                     MOV EDI,EAX
004E39E5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E39E8  0F 8E E4 01 00 00         JLE 0x004e3bd2
LAB_004e39ee:
004E39EE  33 FF                     XOR EDI,EDI
004E39F0  66 39 3D 44 B2 7F 00      CMP word ptr [0x007fb244],DI
004E39F7  0F 8E C2 01 00 00         JLE 0x004e3bbf
LAB_004e39fd:
004E39FD  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004E3A03  57                        PUSH EDI
004E3A04  56                        PUSH ESI
004E3A05  6A 00                     PUSH 0x0
004E3A07  E8 2F 13 F2 FF            CALL 0x00404d3b
004E3A0C  85 C0                     TEST EAX,EAX
004E3A0E  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
004E3A13  0F 84 AA 00 00 00         JZ 0x004e3ac3
004E3A19  66 85 C0                  TEST AX,AX
004E3A1C  0F 8E 82 00 00 00         JLE 0x004e3aa4
004E3A22  66 85 F6                  TEST SI,SI
004E3A25  7C 7D                     JL 0x004e3aa4
004E3A27  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004E3A2E  7D 32                     JGE 0x004e3a62
004E3A30  66 85 FF                  TEST DI,DI
004E3A33  7C 2D                     JL 0x004e3a62
004E3A35  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3A3C  7D 24                     JGE 0x004e3a62
004E3A3E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E3A45  0F BF CE                  MOVSX ECX,SI
004E3A48  0F BF D0                  MOVSX EDX,AX
004E3A4B  0F AF CA                  IMUL ECX,EDX
004E3A4E  0F BF D7                  MOVSX EDX,DI
004E3A51  0F AF D3                  IMUL EDX,EBX
004E3A54  03 CA                     ADD ECX,EDX
004E3A56  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004E3A5C  83 3C CA 00               CMP dword ptr [EDX + ECX*0x8],0x0
004E3A60  75 61                     JNZ 0x004e3ac3
LAB_004e3a62:
004E3A62  66 85 F6                  TEST SI,SI
004E3A65  7C 3D                     JL 0x004e3aa4
004E3A67  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004E3A6E  7D 34                     JGE 0x004e3aa4
004E3A70  66 85 FF                  TEST DI,DI
004E3A73  7C 2F                     JL 0x004e3aa4
004E3A75  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3A7C  7D 26                     JGE 0x004e3aa4
004E3A7E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E3A85  0F BF CE                  MOVSX ECX,SI
004E3A88  0F BF D0                  MOVSX EDX,AX
004E3A8B  0F AF CA                  IMUL ECX,EDX
004E3A8E  0F BF D7                  MOVSX EDX,DI
004E3A91  0F AF D3                  IMUL EDX,EBX
004E3A94  03 CA                     ADD ECX,EDX
004E3A96  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004E3A9C  8B 5C CA 04               MOV EBX,dword ptr [EDX + ECX*0x8 + 0x4]
004E3AA0  85 DB                     TEST EBX,EBX
004E3AA2  75 1F                     JNZ 0x004e3ac3
LAB_004e3aa4:
004E3AA4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E3AA7  8D 45 E4                  LEA EAX,[EBP + -0x1c]
004E3AAA  50                        PUSH EAX
004E3AAB  51                        PUSH ECX
004E3AAC  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004E3AB3  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004E3AB6  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004E3AB9  E8 02 A7 1C 00            CALL 0x006ae1c0
004E3ABE  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
LAB_004e3ac3:
004E3AC3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004E3AC9  57                        PUSH EDI
004E3ACA  48                        DEC EAX
004E3ACB  56                        PUSH ESI
004E3ACC  50                        PUSH EAX
004E3ACD  E8 69 12 F2 FF            CALL 0x00404d3b
004E3AD2  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004E3AD8  85 C0                     TEST EAX,EAX
004E3ADA  0F 84 CC 00 00 00         JZ 0x004e3bac
004E3AE0  8D 41 FF                  LEA EAX,[ECX + -0x1]
004E3AE3  66 85 C0                  TEST AX,AX
004E3AE6  0F 8C A0 00 00 00         JL 0x004e3b8c
004E3AEC  66 3B C1                  CMP AX,CX
004E3AEF  7D 48                     JGE 0x004e3b39
004E3AF1  66 85 F6                  TEST SI,SI
004E3AF4  7C 43                     JL 0x004e3b39
004E3AF6  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004E3AFD  7D 3A                     JGE 0x004e3b39
004E3AFF  66 85 FF                  TEST DI,DI
004E3B02  7C 35                     JL 0x004e3b39
004E3B04  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3B0B  7D 2C                     JGE 0x004e3b39
004E3B0D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E3B14  0F BF D6                  MOVSX EDX,SI
004E3B17  0F BF C1                  MOVSX EAX,CX
004E3B1A  0F AF D0                  IMUL EDX,EAX
004E3B1D  0F BF C7                  MOVSX EAX,DI
004E3B20  0F AF C3                  IMUL EAX,EBX
004E3B23  03 D0                     ADD EDX,EAX
004E3B25  8D 41 FF                  LEA EAX,[ECX + -0x1]
004E3B28  0F BF D8                  MOVSX EBX,AX
004E3B2B  03 D3                     ADD EDX,EBX
004E3B2D  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
004E3B33  83 3C D3 00               CMP dword ptr [EBX + EDX*0x8],0x0
004E3B37  75 73                     JNZ 0x004e3bac
LAB_004e3b39:
004E3B39  66 85 C0                  TEST AX,AX
004E3B3C  7C 4E                     JL 0x004e3b8c
004E3B3E  66 3B C1                  CMP AX,CX
004E3B41  7D 49                     JGE 0x004e3b8c
004E3B43  66 85 F6                  TEST SI,SI
004E3B46  7C 44                     JL 0x004e3b8c
004E3B48  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004E3B4F  7D 3B                     JGE 0x004e3b8c
004E3B51  66 85 FF                  TEST DI,DI
004E3B54  7C 36                     JL 0x004e3b8c
004E3B56  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3B5D  7D 2D                     JGE 0x004e3b8c
004E3B5F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E3B66  0F BF D6                  MOVSX EDX,SI
004E3B69  0F BF C1                  MOVSX EAX,CX
004E3B6C  0F AF D0                  IMUL EDX,EAX
004E3B6F  0F BF C7                  MOVSX EAX,DI
004E3B72  0F AF C3                  IMUL EAX,EBX
004E3B75  03 D0                     ADD EDX,EAX
004E3B77  8D 41 FF                  LEA EAX,[ECX + -0x1]
004E3B7A  0F BF C0                  MOVSX EAX,AX
004E3B7D  03 D0                     ADD EDX,EAX
004E3B7F  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004E3B84  8B 5C D0 04               MOV EBX,dword ptr [EAX + EDX*0x8 + 0x4]
004E3B88  85 DB                     TEST EBX,EBX
004E3B8A  75 20                     JNZ 0x004e3bac
LAB_004e3b8c:
004E3B8C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E3B8F  8D 55 E4                  LEA EDX,[EBP + -0x1c]
004E3B92  0F BF C9                  MOVSX ECX,CX
004E3B95  49                        DEC ECX
004E3B96  52                        PUSH EDX
004E3B97  50                        PUSH EAX
004E3B98  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004E3B9B  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004E3B9E  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004E3BA1  E8 1A A6 1C 00            CALL 0x006ae1c0
004E3BA6  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004e3bac:
004E3BAC  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004E3BB3  47                        INC EDI
004E3BB4  3B FA                     CMP EDI,EDX
004E3BB6  0F 8C 41 FE FF FF         JL 0x004e39fd
004E3BBC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_004e3bbf:
004E3BBF  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004E3BC6  46                        INC ESI
004E3BC7  3B F0                     CMP ESI,EAX
004E3BC9  0F 8C 1F FE FF FF         JL 0x004e39ee
004E3BCF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_004e3bd2:
004E3BD2  33 F6                     XOR ESI,ESI
004E3BD4  66 85 C9                  TEST CX,CX
004E3BD7  0F 8E E4 01 00 00         JLE 0x004e3dc1
004E3BDD  66 A1 44 B2 7F 00         MOV AX,[0x007fb244]
LAB_004e3be3:
004E3BE3  33 FF                     XOR EDI,EDI
004E3BE5  66 85 C0                  TEST AX,AX
004E3BE8  0F 8E C4 01 00 00         JLE 0x004e3db2
LAB_004e3bee:
004E3BEE  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004E3BF4  57                        PUSH EDI
004E3BF5  6A 00                     PUSH 0x0
004E3BF7  56                        PUSH ESI
004E3BF8  E8 3E 11 F2 FF            CALL 0x00404d3b
004E3BFD  85 C0                     TEST EAX,EAX
004E3BFF  0F 84 9C 00 00 00         JZ 0x004e3ca1
004E3C05  66 A1 46 B2 7F 00         MOV AX,[0x007fb246]
004E3C0B  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004E3C11  66 85 F6                  TEST SI,SI
004E3C14  7C 35                     JL 0x004e3c4b
004E3C16  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
004E3C1D  7D 2C                     JGE 0x004e3c4b
004E3C1F  66 83 3D 42 B2 7F 00 00   CMP word ptr [0x007fb242],0x0
004E3C27  7E 22                     JLE 0x004e3c4b
004E3C29  66 85 FF                  TEST DI,DI
004E3C2C  7C 1D                     JL 0x004e3c4b
004E3C2E  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3C35  7D 14                     JGE 0x004e3c4b
004E3C37  0F BF D7                  MOVSX EDX,DI
004E3C3A  0F BF D8                  MOVSX EBX,AX
004E3C3D  0F AF D3                  IMUL EDX,EBX
004E3C40  0F BF DE                  MOVSX EBX,SI
004E3C43  03 D3                     ADD EDX,EBX
004E3C45  83 3C D1 00               CMP dword ptr [ECX + EDX*0x8],0x0
004E3C49  75 56                     JNZ 0x004e3ca1
LAB_004e3c4b:
004E3C4B  66 85 F6                  TEST SI,SI
004E3C4E  7C 37                     JL 0x004e3c87
004E3C50  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
004E3C57  7D 2E                     JGE 0x004e3c87
004E3C59  66 83 3D 42 B2 7F 00 00   CMP word ptr [0x007fb242],0x0
004E3C61  7E 24                     JLE 0x004e3c87
004E3C63  66 85 FF                  TEST DI,DI
004E3C66  7C 1F                     JL 0x004e3c87
004E3C68  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3C6F  7D 16                     JGE 0x004e3c87
004E3C71  0F BF D7                  MOVSX EDX,DI
004E3C74  0F BF C0                  MOVSX EAX,AX
004E3C77  0F AF D0                  IMUL EDX,EAX
004E3C7A  0F BF C6                  MOVSX EAX,SI
004E3C7D  03 D0                     ADD EDX,EAX
004E3C7F  8B 44 D1 04               MOV EAX,dword ptr [ECX + EDX*0x8 + 0x4]
004E3C83  85 C0                     TEST EAX,EAX
004E3C85  75 1A                     JNZ 0x004e3ca1
LAB_004e3c87:
004E3C87  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E3C8A  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004E3C8D  51                        PUSH ECX
004E3C8E  52                        PUSH EDX
004E3C8F  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004E3C92  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
004E3C99  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004E3C9C  E8 1F A5 1C 00            CALL 0x006ae1c0
LAB_004e3ca1:
004E3CA1  66 A1 42 B2 7F 00         MOV AX,[0x007fb242]
004E3CA7  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004E3CAD  66 48                     DEC AX
004E3CAF  57                        PUSH EDI
004E3CB0  50                        PUSH EAX
004E3CB1  56                        PUSH ESI
004E3CB2  E8 84 10 F2 FF            CALL 0x00404d3b
004E3CB7  85 C0                     TEST EAX,EAX
004E3CB9  0F 84 D8 00 00 00         JZ 0x004e3d97
004E3CBF  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
004E3CC6  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004E3CCC  66 8B C2                  MOV AX,DX
004E3CCF  66 48                     DEC AX
004E3CD1  66 85 F6                  TEST SI,SI
004E3CD4  7C 54                     JL 0x004e3d2a
004E3CD6  66 3B F1                  CMP SI,CX
004E3CD9  7D 4F                     JGE 0x004e3d2a
004E3CDB  66 85 C0                  TEST AX,AX
004E3CDE  7C 4A                     JL 0x004e3d2a
004E3CE0  66 3B C2                  CMP AX,DX
004E3CE3  7D 45                     JGE 0x004e3d2a
004E3CE5  66 85 FF                  TEST DI,DI
004E3CE8  7C 40                     JL 0x004e3d2a
004E3CEA  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3CF1  7D 37                     JGE 0x004e3d2a
004E3CF3  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E3CFA  0F BF D7                  MOVSX EDX,DI
004E3CFD  0F AF D3                  IMUL EDX,EBX
004E3D00  0F BF C9                  MOVSX ECX,CX
004E3D03  0F BF D8                  MOVSX EBX,AX
004E3D06  0F AF CB                  IMUL ECX,EBX
004E3D09  03 D1                     ADD EDX,ECX
004E3D0B  0F BF CE                  MOVSX ECX,SI
004E3D0E  03 D1                     ADD EDX,ECX
004E3D10  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004E3D16  8B 1C D1                  MOV EBX,dword ptr [ECX + EDX*0x8]
004E3D19  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004E3D1F  85 DB                     TEST EBX,EBX
004E3D21  75 7A                     JNZ 0x004e3d9d
004E3D23  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
LAB_004e3d2a:
004E3D2A  66 85 F6                  TEST SI,SI
004E3D2D  7C 4E                     JL 0x004e3d7d
004E3D2F  66 3B F1                  CMP SI,CX
004E3D32  7D 49                     JGE 0x004e3d7d
004E3D34  66 85 C0                  TEST AX,AX
004E3D37  7C 44                     JL 0x004e3d7d
004E3D39  66 3B C2                  CMP AX,DX
004E3D3C  7D 3F                     JGE 0x004e3d7d
004E3D3E  66 85 FF                  TEST DI,DI
004E3D41  7C 3A                     JL 0x004e3d7d
004E3D43  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004E3D4A  7D 31                     JGE 0x004e3d7d
004E3D4C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E3D53  0F BF D7                  MOVSX EDX,DI
004E3D56  0F AF D3                  IMUL EDX,EBX
004E3D59  0F BF C0                  MOVSX EAX,AX
004E3D5C  0F BF D9                  MOVSX EBX,CX
004E3D5F  0F AF C3                  IMUL EAX,EBX
004E3D62  03 D0                     ADD EDX,EAX
004E3D64  0F BF C6                  MOVSX EAX,SI
004E3D67  03 D0                     ADD EDX,EAX
004E3D69  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004E3D6E  8B 5C D0 04               MOV EBX,dword ptr [EAX + EDX*0x8 + 0x4]
004E3D72  85 DB                     TEST EBX,EBX
004E3D74  75 27                     JNZ 0x004e3d9d
004E3D76  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
LAB_004e3d7d:
004E3D7D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E3D80  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004E3D83  0F BF CA                  MOVSX ECX,DX
004E3D86  8D 55 E4                  LEA EDX,[EBP + -0x1c]
004E3D89  49                        DEC ECX
004E3D8A  52                        PUSH EDX
004E3D8B  50                        PUSH EAX
004E3D8C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004E3D8F  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004E3D92  E8 29 A4 1C 00            CALL 0x006ae1c0
LAB_004e3d97:
004E3D97  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004e3d9d:
004E3D9D  66 A1 44 B2 7F 00         MOV AX,[0x007fb244]
004E3DA3  47                        INC EDI
004E3DA4  0F BF D0                  MOVSX EDX,AX
004E3DA7  3B FA                     CMP EDI,EDX
004E3DA9  0F 8C 3F FE FF FF         JL 0x004e3bee
004E3DAF  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_004e3db2:
004E3DB2  0F BF D1                  MOVSX EDX,CX
004E3DB5  46                        INC ESI
004E3DB6  3B F2                     CMP ESI,EDX
004E3DB8  0F 8C 25 FE FF FF         JL 0x004e3be3
004E3DBE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_004e3dc1:
004E3DC1  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004E3DC4  85 C0                     TEST EAX,EAX
004E3DC6  0F 84 EA 00 00 00         JZ 0x004e3eb6
004E3DCC  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
004E3DCF  33 D2                     XOR EDX,EDX
004E3DD1  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004E3DD7  05 39 30 00 00            ADD EAX,0x3039
004E3DDC  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004E3DDF  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
004E3DE2  51                        PUSH ECX
004E3DE3  C1 E8 10                  SHR EAX,0x10
004E3DE6  F7 77 0C                  DIV dword ptr [EDI + 0xc]
004E3DE9  8B CF                     MOV ECX,EDI
004E3DEB  E8 80 8E 1C 00            CALL 0x006acc70
004E3DF0  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004E3DF6  8D 50 F8                  LEA EDX,[EAX + -0x8]
004E3DF9  85 D2                     TEST EDX,EDX
004E3DFB  7D 02                     JGE 0x004e3dff
004E3DFD  33 D2                     XOR EDX,EDX
LAB_004e3dff:
004E3DFF  8D 70 08                  LEA ESI,[EAX + 0x8]
004E3E02  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004E3E09  3B F0                     CMP ESI,EAX
004E3E0B  7C 03                     JL 0x004e3e10
004E3E0D  8D 70 FF                  LEA ESI,[EAX + -0x1]
LAB_004e3e10:
004E3E10  8B 83 B4 05 00 00         MOV EAX,dword ptr [EBX + 0x5b4]
004E3E16  8D 48 F8                  LEA ECX,[EAX + -0x8]
004E3E19  85 C9                     TEST ECX,ECX
004E3E1B  7D 02                     JGE 0x004e3e1f
004E3E1D  33 C9                     XOR ECX,ECX
LAB_004e3e1f:
004E3E1F  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
004E3E26  83 C0 08                  ADD EAX,0x8
004E3E29  3B C7                     CMP EAX,EDI
004E3E2B  7C 03                     JL 0x004e3e30
004E3E2D  8D 47 FF                  LEA EAX,[EDI + -0x1]
LAB_004e3e30:
004E3E30  8B 7B 24                  MOV EDI,dword ptr [EBX + 0x24]
004E3E33  57                        PUSH EDI
004E3E34  6A 00                     PUSH 0x0
004E3E36  50                        PUSH EAX
004E3E37  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004E3E3A  56                        PUSH ESI
004E3E3B  51                        PUSH ECX
004E3E3C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004E3E3F  52                        PUSH EDX
004E3E40  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004E3E43  52                        PUSH EDX
004E3E44  50                        PUSH EAX
004E3E45  51                        PUSH ECX
004E3E46  E8 8C E1 F1 FF            CALL 0x00401fd7
004E3E4B  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004E3E4E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E3E51  83 C4 24                  ADD ESP,0x24
004E3E54  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004E3E5A  8B CE                     MOV ECX,ESI
004E3E5C  89 94 83 D0 04 00 00      MOV dword ptr [EBX + EAX*0x4 + 0x4d0],EDX
004E3E63  6A 00                     PUSH 0x0
004E3E65  6A 0B                     PUSH 0xb
004E3E67  E8 40 E4 F1 FF            CALL 0x004022ac
004E3E6C  50                        PUSH EAX
004E3E6D  6A 00                     PUSH 0x0
004E3E6F  6A 0B                     PUSH 0xb
004E3E71  8B CE                     MOV ECX,ESI
004E3E73  E8 42 E0 F1 FF            CALL 0x00401eba
004E3E78  6A 00                     PUSH 0x0
004E3E7A  6A 0B                     PUSH 0xb
004E3E7C  8B CE                     MOV ECX,ESI
004E3E7E  E8 E1 D1 F1 FF            CALL 0x00401064
004E3E83  6A 0B                     PUSH 0xb
004E3E85  8B CE                     MOV ECX,ESI
004E3E87  E8 48 E4 F1 FF            CALL 0x004022d4
004E3E8C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E3E92  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004E3E98  8B CE                     MOV ECX,ESI
004E3E9A  52                        PUSH EDX
004E3E9B  6A 0B                     PUSH 0xb
004E3E9D  E8 9E 13 F2 FF            CALL 0x00405240
004E3EA2  8B 03                     MOV EAX,dword ptr [EBX]
004E3EA4  68 5D 02 00 00            PUSH 0x25d
004E3EA9  6A 03                     PUSH 0x3
004E3EAB  8B CB                     MOV ECX,EBX
004E3EAD  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E3EB3  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_004e3eb6:
004E3EB6  57                        PUSH EDI
004E3EB7  E8 54 A2 1C 00            CALL 0x006ae110
004E3EBC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_004e3ebf:
004E3EBF  8B 83 E4 04 00 00         MOV EAX,dword ptr [EBX + 0x4e4]
004E3EC5  46                        INC ESI
004E3EC6  3B F0                     CMP ESI,EAX
004E3EC8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004E3ECB  0F 8C B0 FA FF FF         JL 0x004e3981
004E3ED1  5F                        POP EDI
004E3ED2  5E                        POP ESI
004E3ED3  33 C0                     XOR EAX,EAX
004E3ED5  5B                        POP EBX
004E3ED6  8B E5                     MOV ESP,EBP
004E3ED8  5D                        POP EBP
004E3ED9  C3                        RET
LAB_004e3eda:
004E3EDA  5E                        POP ESI
004E3EDB  33 C0                     XOR EAX,EAX
004E3EDD  5B                        POP EBX
004E3EDE  8B E5                     MOV ESP,EBP
004E3EE0  5D                        POP EBP
004E3EE1  C3                        RET
