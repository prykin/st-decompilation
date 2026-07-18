FUN_004f3cf0:
004F3CF0  55                        PUSH EBP
004F3CF1  8B EC                     MOV EBP,ESP
004F3CF3  83 EC 58                  SUB ESP,0x58
004F3CF6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F3CF9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F3CFC  81 E2 FF 00 00 00         AND EDX,0xff
004F3D02  53                        PUSH EBX
004F3D03  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004F3D06  56                        PUSH ESI
004F3D07  8B 5C 91 3C               MOV EBX,dword ptr [ECX + EDX*0x4 + 0x3c]
004F3D0B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004F3D12  8B 30                     MOV ESI,dword ptr [EAX]
004F3D14  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004F3D17  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004F3D1A  2B F3                     SUB ESI,EBX
004F3D1C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004F3D1F  8D 72 FF                  LEA ESI,[EDX + -0x1]
004F3D22  83 FE 06                  CMP ESI,0x6
004F3D25  57                        PUSH EDI
004F3D26  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004F3D29  0F 87 88 01 00 00         JA 0x004f3eb7
switchD_004f3d2f::switchD:
004F3D2F  FF 24 B5 1C 3F 4F 00      JMP dword ptr [ESI*0x4 + 0x4f3f1c]
switchD_004f3d2f::caseD_1:
004F3D36  8B B1 34 01 00 00         MOV ESI,dword ptr [ECX + 0x134]
004F3D3C  EB 2C                     JMP 0x004f3d6a
switchD_004f3d2f::caseD_3:
004F3D3E  8B B1 34 01 00 00         MOV ESI,dword ptr [ECX + 0x134]
004F3D44  85 F6                     TEST ESI,ESI
004F3D46  74 35                     JZ 0x004f3d7d
004F3D48  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3D4F  EB 32                     JMP 0x004f3d83
switchD_004f3d2f::caseD_5:
004F3D51  8B B1 38 01 00 00         MOV ESI,dword ptr [ECX + 0x138]
004F3D57  85 F6                     TEST ESI,ESI
004F3D59  74 22                     JZ 0x004f3d7d
004F3D5B  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3D62  EB 1F                     JMP 0x004f3d83
switchD_004f3d2f::caseD_7:
004F3D64  8B B1 38 01 00 00         MOV ESI,dword ptr [ECX + 0x138]
LAB_004f3d6a:
004F3D6A  85 F6                     TEST ESI,ESI
004F3D6C  74 09                     JZ 0x004f3d77
004F3D6E  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3D75  EB 0C                     JMP 0x004f3d83
LAB_004f3d77:
004F3D77  2B 81 C0 00 00 00         SUB EAX,dword ptr [ECX + 0xc0]
LAB_004f3d7d:
004F3D7D  2B 05 34 67 80 00         SUB EAX,dword ptr [0x00806734]
LAB_004f3d83:
004F3D83  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F3D86  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004F3D89  85 C0                     TEST EAX,EAX
004F3D8B  0F 84 7F 01 00 00         JZ 0x004f3f10
004F3D91  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004F3D97  8D 45 AC                  LEA EAX,[EBP + -0x54]
004F3D9A  8D 55 A8                  LEA EDX,[EBP + -0x58]
004F3D9D  6A 00                     PUSH 0x0
004F3D9F  50                        PUSH EAX
004F3DA0  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004F3DA3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F3DA9  E8 42 9A 23 00            CALL 0x0072d7f0
004F3DAE  8B F0                     MOV ESI,EAX
004F3DB0  83 C4 08                  ADD ESP,0x8
004F3DB3  85 F6                     TEST ESI,ESI
004F3DB5  0F 85 16 01 00 00         JNZ 0x004f3ed1
004F3DBB  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004F3DBE  6A 01                     PUSH 0x1
004F3DC0  50                        PUSH EAX
004F3DC1  53                        PUSH EBX
004F3DC2  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
004F3DC5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F3DC8  50                        PUSH EAX
004F3DC9  6A 01                     PUSH 0x1
004F3DCB  51                        PUSH ECX
004F3DCC  E8 2F EE 1F 00            CALL 0x006f2c00
004F3DD1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F3DD4  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F3DDA  83 C4 10                  ADD ESP,0x10
004F3DDD  50                        PUSH EAX
004F3DDE  52                        PUSH EDX
004F3DDF  E8 FC DE 1F 00            CALL 0x006f1ce0
004F3DE4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F3DE7  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004F3DEA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F3DED  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F3DF0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F3DF3  50                        PUSH EAX
004F3DF4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F3DF7  81 E6 FF 00 00 00         AND ESI,0xff
004F3DFD  50                        PUSH EAX
004F3DFE  51                        PUSH ECX
004F3DFF  8B 84 B7 80 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x180]
004F3E06  52                        PUSH EDX
004F3E07  50                        PUSH EAX
004F3E08  E8 1C F4 F0 FF            CALL 0x00403229
004F3E0D  83 C4 14                  ADD ESP,0x14
004F3E10  8D 4D FC                  LEA ECX,[EBP + -0x4]
004F3E13  51                        PUSH ECX
004F3E14  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F3E1A  E8 C1 E2 1F 00            CALL 0x006f20e0
004F3E1F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004F3E22  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F3E25  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004F3E28  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
004F3E2B  52                        PUSH EDX
004F3E2C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F3E2F  50                        PUSH EAX
004F3E30  8B 84 B7 80 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x180]
004F3E37  51                        PUSH ECX
004F3E38  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
004F3E3E  52                        PUSH EDX
004F3E3F  6A 00                     PUSH 0x0
004F3E41  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
004F3E44  50                        PUSH EAX
004F3E45  E8 46 CC 21 00            CALL 0x00710a90
004F3E4A  6A FF                     PUSH -0x1
004F3E4C  6A FF                     PUSH -0x1
004F3E4E  53                        PUSH EBX
004F3E4F  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
004F3E52  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
004F3E58  83 C4 04                  ADD ESP,0x4
004F3E5B  50                        PUSH EAX
004F3E5C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004F3E5F  6A FF                     PUSH -0x1
004F3E61  6A FE                     PUSH -0x2
004F3E63  52                        PUSH EDX
004F3E64  50                        PUSH EAX
004F3E65  E8 D6 C2 1B 00            CALL 0x006b0140
004F3E6A  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
004F3E70  50                        PUSH EAX
004F3E71  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
004F3E74  E8 F7 DC 21 00            CALL 0x00711b70
004F3E79  80 7D 08 0B               CMP byte ptr [EBP + 0x8],0xb
004F3E7D  73 27                     JNC 0x004f3ea6
004F3E7F  8B 84 B7 48 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x148]
004F3E86  85 C0                     TEST EAX,EAX
004F3E88  7C 1C                     JL 0x004f3ea6
004F3E8A  8B 94 B7 94 00 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x94]
004F3E91  8B 4C B7 3C               MOV ECX,dword ptr [EDI + ESI*0x4 + 0x3c]
004F3E95  52                        PUSH EDX
004F3E96  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F3E9C  51                        PUSH ECX
004F3E9D  6A FF                     PUSH -0x1
004F3E9F  50                        PUSH EAX
004F3EA0  52                        PUSH EDX
004F3EA1  E8 9A F7 1B 00            CALL 0x006b3640
LAB_004f3ea6:
004F3EA6  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004F3EA9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F3EAE  5F                        POP EDI
004F3EAF  5E                        POP ESI
004F3EB0  5B                        POP EBX
004F3EB1  8B E5                     MOV ESP,EBP
004F3EB3  5D                        POP EBP
004F3EB4  C2 18 00                  RET 0x18
switchD_004f3d2f::caseD_2:
004F3EB7  8B B1 30 01 00 00         MOV ESI,dword ptr [ECX + 0x130]
004F3EBD  85 F6                     TEST ESI,ESI
004F3EBF  0F 84 B8 FE FF FF         JZ 0x004f3d7d
004F3EC5  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F3ECC  E9 B2 FE FF FF            JMP 0x004f3d83
LAB_004f3ed1:
004F3ED1  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004F3ED4  68 68 1B 7C 00            PUSH 0x7c1b68
004F3ED9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F3EDE  56                        PUSH ESI
004F3EDF  6A 00                     PUSH 0x0
004F3EE1  68 12 02 00 00            PUSH 0x212
004F3EE6  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F3EEB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F3EF1  E8 DA 95 1B 00            CALL 0x006ad4d0
004F3EF6  83 C4 18                  ADD ESP,0x18
004F3EF9  85 C0                     TEST EAX,EAX
004F3EFB  74 01                     JZ 0x004f3efe
004F3EFD  CC                        INT3
LAB_004f3efe:
004F3EFE  68 12 02 00 00            PUSH 0x212
004F3F03  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F3F08  6A 00                     PUSH 0x0
004F3F0A  56                        PUSH ESI
004F3F0B  E8 30 1F 1B 00            CALL 0x006a5e40
LAB_004f3f10:
004F3F10  5F                        POP EDI
004F3F11  5E                        POP ESI
004F3F12  5B                        POP EBX
004F3F13  8B E5                     MOV ESP,EBP
004F3F15  5D                        POP EBP
004F3F16  C2 18 00                  RET 0x18
