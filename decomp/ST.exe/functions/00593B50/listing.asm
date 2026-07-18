FUN_00593b50:
00593B50  55                        PUSH EBP
00593B51  8B EC                     MOV EBP,ESP
00593B53  81 EC 24 05 00 00         SUB ESP,0x524
00593B59  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00593B5E  53                        PUSH EBX
00593B5F  56                        PUSH ESI
00593B60  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00593B63  57                        PUSH EDI
00593B64  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00593B67  8D 4D B0                  LEA ECX,[EBP + -0x50]
00593B6A  6A 00                     PUSH 0x0
00593B6C  52                        PUSH EDX
00593B6D  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00593B70  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00593B76  E8 75 9C 19 00            CALL 0x0072d7f0
00593B7B  8B F0                     MOV ESI,EAX
00593B7D  83 C4 08                  ADD ESP,0x8
00593B80  85 F6                     TEST ESI,ESI
00593B82  0F 85 B2 04 00 00         JNZ 0x0059403a
00593B88  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00593B8B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00593B8E  B9 20 00 00 00            MOV ECX,0x20
00593B93  8D BB 88 00 00 00         LEA EDI,[EBX + 0x88]
00593B99  F3 A5                     MOVSD.REP ES:EDI,ESI
00593B9B  8B 8B D4 00 00 00         MOV ECX,dword ptr [EBX + 0xd4]
00593BA1  C7 83 9C 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x9c],0xffffffff
00593BAB  85 C9                     TEST ECX,ECX
00593BAD  0F 84 6E 04 00 00         JZ 0x00594021
00593BB3  8B 83 D0 00 00 00         MOV EAX,dword ptr [EBX + 0xd0]
00593BB9  85 C0                     TEST EAX,EAX
00593BBB  0F 84 60 04 00 00         JZ 0x00594021
00593BC1  8B B3 C8 00 00 00         MOV ESI,dword ptr [EBX + 0xc8]
00593BC7  8D 50 FF                  LEA EDX,[EAX + -0x1]
00593BCA  3B F2                     CMP ESI,EDX
00593BCC  7E 0A                     JLE 0x00593bd8
00593BCE  C7 83 C8 00 00 00 00 00 00 00  MOV dword ptr [EBX + 0xc8],0x0
LAB_00593bd8:
00593BD8  0F AF 83 CC 00 00 00      IMUL EAX,dword ptr [EBX + 0xcc]
00593BDF  83 C0 0A                  ADD EAX,0xa
00593BE2  6A 01                     PUSH 0x1
00593BE4  89 83 F8 00 00 00         MOV dword ptr [EBX + 0xf8],EAX
00593BEA  8D 41 28                  LEA EAX,[ECX + 0x28]
00593BED  50                        PUSH EAX
00593BEE  51                        PUSH ECX
00593BEF  E8 EC 13 12 00            CALL 0x006b4fe0
00593BF4  8B 8B D4 00 00 00         MOV ECX,dword ptr [EBX + 0xd4]
00593BFA  33 D2                     XOR EDX,EDX
00593BFC  50                        PUSH EAX
00593BFD  8B 83 F8 00 00 00         MOV EAX,dword ptr [EBX + 0xf8]
00593C03  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
00593C07  8B 8B F4 00 00 00         MOV ECX,dword ptr [EBX + 0xf4]
00593C0D  52                        PUSH EDX
00593C0E  50                        PUSH EAX
00593C0F  51                        PUSH ECX
00593C10  E8 AB 14 12 00            CALL 0x006b50c0
00593C15  89 83 FC 00 00 00         MOV dword ptr [EBX + 0xfc],EAX
00593C1B  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00593C1E  85 F6                     TEST ESI,ESI
00593C20  75 18                     JNZ 0x00593c3a
00593C22  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00593C26  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00593C2A  83 C6 1F                  ADD ESI,0x1f
00593C2D  C1 EE 03                  SHR ESI,0x3
00593C30  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00593C36  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00593c3a:
00593C3A  8A 93 D8 00 00 00         MOV DL,byte ptr [EBX + 0xd8]
00593C40  50                        PUSH EAX
00593C41  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00593C44  E8 57 13 12 00            CALL 0x006b4fa0
00593C49  8B F8                     MOV EDI,EAX
00593C4B  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00593C4E  8A D0                     MOV DL,AL
00593C50  8B CE                     MOV ECX,ESI
00593C52  8A F2                     MOV DH,DL
00593C54  6A 01                     PUSH 0x1
00593C56  8B C2                     MOV EAX,EDX
00593C58  C1 E0 10                  SHL EAX,0x10
00593C5B  66 8B C2                  MOV AX,DX
00593C5E  C1 E9 02                  SHR ECX,0x2
00593C61  F3 AB                     STOSD.REP ES:EDI
00593C63  8B CE                     MOV ECX,ESI
00593C65  83 E1 03                  AND ECX,0x3
00593C68  F3 AA                     STOSB.REP ES:EDI
00593C6A  8B 83 D4 00 00 00         MOV EAX,dword ptr [EBX + 0xd4]
00593C70  8D 48 28                  LEA ECX,[EAX + 0x28]
00593C73  51                        PUSH ECX
00593C74  50                        PUSH EAX
00593C75  E8 66 13 12 00            CALL 0x006b4fe0
00593C7A  8B 93 D4 00 00 00         MOV EDX,dword ptr [EBX + 0xd4]
00593C80  8B 8B F8 00 00 00         MOV ECX,dword ptr [EBX + 0xf8]
00593C86  50                        PUSH EAX
00593C87  33 C0                     XOR EAX,EAX
00593C89  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
00593C8D  8B 93 F4 00 00 00         MOV EDX,dword ptr [EBX + 0xf4]
00593C93  50                        PUSH EAX
00593C94  51                        PUSH ECX
00593C95  52                        PUSH EDX
00593C96  E8 25 14 12 00            CALL 0x006b50c0
00593C9B  89 83 00 01 00 00         MOV dword ptr [EBX + 0x100],EAX
00593CA1  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00593CA4  85 F6                     TEST ESI,ESI
00593CA6  75 18                     JNZ 0x00593cc0
00593CA8  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00593CAC  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00593CB0  83 C6 1F                  ADD ESI,0x1f
00593CB3  C1 EE 03                  SHR ESI,0x3
00593CB6  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00593CBC  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00593cc0:
00593CC0  8A 93 E0 00 00 00         MOV DL,byte ptr [EBX + 0xe0]
00593CC6  50                        PUSH EAX
00593CC7  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00593CCA  E8 D1 12 12 00            CALL 0x006b4fa0
00593CCF  8B F8                     MOV EDI,EAX
00593CD1  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00593CD4  8A D0                     MOV DL,AL
00593CD6  8B CE                     MOV ECX,ESI
00593CD8  8A F2                     MOV DH,DL
00593CDA  6A 01                     PUSH 0x1
00593CDC  8B C2                     MOV EAX,EDX
00593CDE  C1 E0 10                  SHL EAX,0x10
00593CE1  66 8B C2                  MOV AX,DX
00593CE4  C1 E9 02                  SHR ECX,0x2
00593CE7  F3 AB                     STOSD.REP ES:EDI
00593CE9  8B CE                     MOV ECX,ESI
00593CEB  83 E1 03                  AND ECX,0x3
00593CEE  F3 AA                     STOSB.REP ES:EDI
00593CF0  8B 83 D4 00 00 00         MOV EAX,dword ptr [EBX + 0xd4]
00593CF6  8D 48 28                  LEA ECX,[EAX + 0x28]
00593CF9  51                        PUSH ECX
00593CFA  50                        PUSH EAX
00593CFB  E8 E0 12 12 00            CALL 0x006b4fe0
00593D00  8B 93 D4 00 00 00         MOV EDX,dword ptr [EBX + 0xd4]
00593D06  8B 8B CC 00 00 00         MOV ECX,dword ptr [EBX + 0xcc]
00593D0C  50                        PUSH EAX
00593D0D  33 C0                     XOR EAX,EAX
00593D0F  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
00593D13  8B 93 F4 00 00 00         MOV EDX,dword ptr [EBX + 0xf4]
00593D19  50                        PUSH EAX
00593D1A  83 EA 0A                  SUB EDX,0xa
00593D1D  51                        PUSH ECX
00593D1E  52                        PUSH EDX
00593D1F  E8 9C 13 12 00            CALL 0x006b50c0
00593D24  89 83 04 01 00 00         MOV dword ptr [EBX + 0x104],EAX
00593D2A  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00593D2D  85 F6                     TEST ESI,ESI
00593D2F  75 18                     JNZ 0x00593d49
00593D31  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00593D35  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00593D39  83 C6 1F                  ADD ESI,0x1f
00593D3C  C1 EE 03                  SHR ESI,0x3
00593D3F  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00593D45  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00593d49:
00593D49  8A 93 D8 00 00 00         MOV DL,byte ptr [EBX + 0xd8]
00593D4F  50                        PUSH EAX
00593D50  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00593D53  E8 48 12 12 00            CALL 0x006b4fa0
00593D58  8B F8                     MOV EDI,EAX
00593D5A  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00593D5D  8A D0                     MOV DL,AL
00593D5F  8B CE                     MOV ECX,ESI
00593D61  8A F2                     MOV DH,DL
00593D63  6A 0D                     PUSH 0xd
00593D65  8B C2                     MOV EAX,EDX
00593D67  C1 E0 10                  SHL EAX,0x10
00593D6A  66 8B C2                  MOV AX,DX
00593D6D  C1 E9 02                  SHR ECX,0x2
00593D70  F3 AB                     STOSD.REP ES:EDI
00593D72  8B CE                     MOV ECX,ESI
00593D74  83 E1 03                  AND ECX,0x3
00593D77  F3 AA                     STOSB.REP ES:EDI
00593D79  8B 8B 04 01 00 00         MOV ECX,dword ptr [EBX + 0x104]
00593D7F  8B 83 F8 00 00 00         MOV EAX,dword ptr [EBX + 0xf8]
00593D85  8B 93 DC 00 00 00         MOV EDX,dword ptr [EBX + 0xdc]
00593D8B  89 8B C0 00 00 00         MOV dword ptr [EBX + 0xc0],ECX
00593D91  8B 8B F4 00 00 00         MOV ECX,dword ptr [EBX + 0xf4]
00593D97  83 E8 04                  SUB EAX,0x4
00593D9A  52                        PUSH EDX
00593D9B  8B 93 FC 00 00 00         MOV EDX,dword ptr [EBX + 0xfc]
00593DA1  83 E9 04                  SUB ECX,0x4
00593DA4  50                        PUSH EAX
00593DA5  51                        PUSH ECX
00593DA6  6A 02                     PUSH 0x2
00593DA8  6A 02                     PUSH 0x2
00593DAA  6A 00                     PUSH 0x0
00593DAC  52                        PUSH EDX
00593DAD  E8 2E 21 12 00            CALL 0x006b5ee0
00593DB2  8B 83 FC 00 00 00         MOV EAX,dword ptr [EBX + 0xfc]
00593DB8  8D 8B 88 00 00 00         LEA ECX,[EBX + 0x88]
00593DBE  51                        PUSH ECX
00593DBF  8D B3 08 01 00 00         LEA ESI,[EBX + 0x108]
00593DC5  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00593DC8  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00593DCB  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00593DD0  83 C1 03                  ADD ECX,0x3
00593DD3  83 C2 03                  ADD EDX,0x3
00593DD6  51                        PUSH ECX
00593DD7  52                        PUSH EDX
00593DD8  68 12 17 40 00            PUSH 0x401712
00593DDD  6A 02                     PUSH 0x2
00593DDF  56                        PUSH ESI
00593DE0  50                        PUSH EAX
00593DE1  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00593DE4  E8 47 E5 11 00            CALL 0x006b2330
00593DE9  8B 93 EC 00 00 00         MOV EDX,dword ptr [EBX + 0xec]
00593DEF  8B 8B F0 00 00 00         MOV ECX,dword ptr [EBX + 0xf0]
00593DF5  8B 06                     MOV EAX,dword ptr [ESI]
00593DF7  83 EA 03                  SUB EDX,0x3
00593DFA  51                        PUSH ECX
00593DFB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00593E01  52                        PUSH EDX
00593E02  6A FF                     PUSH -0x1
00593E04  50                        PUSH EAX
00593E05  51                        PUSH ECX
00593E06  E8 35 F8 11 00            CALL 0x006b3640
00593E0B  8D 73 18                  LEA ESI,[EBX + 0x18]
00593E0E  B9 08 00 00 00            MOV ECX,0x8
00593E13  33 C0                     XOR EAX,EAX
00593E15  8B FE                     MOV EDI,ESI
00593E17  F3 AB                     STOSD.REP ES:EDI
00593E19  56                        PUSH ESI
00593E1A  6A 01                     PUSH 0x1
00593E1C  6A 03                     PUSH 0x3
00593E1E  8B CB                     MOV ECX,EBX
00593E20  C7 43 28 1A 00 00 00      MOV dword ptr [EBX + 0x28],0x1a
00593E27  E8 D4 21 15 00            CALL 0x006e6000
00593E2C  B9 08 00 00 00            MOV ECX,0x8
00593E31  33 C0                     XOR EAX,EAX
00593E33  8B FE                     MOV EDI,ESI
00593E35  56                        PUSH ESI
00593E36  F3 AB                     STOSD.REP ES:EDI
00593E38  6A 01                     PUSH 0x1
00593E3A  C7 43 28 18 00 00 00      MOV dword ptr [EBX + 0x28],0x18
00593E41  6A 03                     PUSH 0x3
00593E43  8B CB                     MOV ECX,EBX
00593E45  E8 B6 21 15 00            CALL 0x006e6000
00593E4A  B9 08 00 00 00            MOV ECX,0x8
00593E4F  33 C0                     XOR EAX,EAX
00593E51  8B FE                     MOV EDI,ESI
00593E53  56                        PUSH ESI
00593E54  F3 AB                     STOSD.REP ES:EDI
00593E56  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00593E59  6A 01                     PUSH 0x1
00593E5B  6A 03                     PUSH 0x3
00593E5D  8B CB                     MOV ECX,EBX
00593E5F  C7 43 28 13 00 00 00      MOV dword ptr [EBX + 0x28],0x13
00593E66  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
00593E69  E8 92 21 15 00            CALL 0x006e6000
00593E6E  B9 08 00 00 00            MOV ECX,0x8
00593E73  33 C0                     XOR EAX,EAX
00593E75  8B FE                     MOV EDI,ESI
00593E77  56                        PUSH ESI
00593E78  F3 AB                     STOSD.REP ES:EDI
00593E7A  6A 01                     PUSH 0x1
00593E7C  6A 03                     PUSH 0x3
00593E7E  8B CB                     MOV ECX,EBX
00593E80  C7 43 28 65 00 00 00      MOV dword ptr [EBX + 0x28],0x65
00593E87  E8 74 21 15 00            CALL 0x006e6000
00593E8C  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
00593E8F  8D 53 38                  LEA EDX,[EBX + 0x38]
00593E92  40                        INC EAX
00593E93  B9 13 00 00 00            MOV ECX,0x13
00593E98  89 83 84 00 00 00         MOV dword ptr [EBX + 0x84],EAX
00593E9E  33 C0                     XOR EAX,EAX
00593EA0  8B FA                     MOV EDI,EDX
00593EA2  56                        PUSH ESI
00593EA3  F3 AB                     STOSD.REP ES:EDI
00593EA5  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00593EA8  8B 83 84 00 00 00         MOV EAX,dword ptr [EBX + 0x84]
00593EAE  89 4B 4C                  MOV dword ptr [EBX + 0x4c],ECX
00593EB1  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
00593EB4  B9 08 00 00 00            MOV ECX,0x8
00593EB9  33 C0                     XOR EAX,EAX
00593EBB  8B FE                     MOV EDI,ESI
00593EBD  C7 43 50 02 00 00 00      MOV dword ptr [EBX + 0x50],0x2
00593EC4  C7 43 54 03 00 01 00      MOV dword ptr [EBX + 0x54],0x10003
00593ECB  C7 02 0A 00 00 00         MOV dword ptr [EDX],0xa
00593ED1  C7 43 3C 01 00 00 00      MOV dword ptr [EBX + 0x3c],0x1
00593ED8  6A 01                     PUSH 0x1
00593EDA  F3 AB                     STOSD.REP ES:EDI
00593EDC  6A 03                     PUSH 0x3
00593EDE  8B CB                     MOV ECX,EBX
00593EE0  C7 43 28 10 00 00 00      MOV dword ptr [EBX + 0x28],0x10
00593EE7  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
00593EEA  E8 11 21 15 00            CALL 0x006e6000
00593EEF  B9 35 01 00 00            MOV ECX,0x135
00593EF4  33 C0                     XOR EAX,EAX
00593EF6  8D BD DC FA FF FF         LEA EDI,[EBP + 0xfffffadc]
00593EFC  8B 93 F0 00 00 00         MOV EDX,dword ptr [EBX + 0xf0]
00593F02  F3 AB                     STOSD.REP ES:EDI
00593F04  8B 8B EC 00 00 00         MOV ECX,dword ptr [EBX + 0xec]
00593F0A  8B 83 F4 00 00 00         MOV EAX,dword ptr [EBX + 0xf4]
00593F10  83 C1 05                  ADD ECX,0x5
00593F13  83 C2 05                  ADD EDX,0x5
00593F16  89 8D E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],ECX
00593F1C  8B 8B F8 00 00 00         MOV ECX,dword ptr [EBX + 0xf8]
00593F22  83 E8 0A                  SUB EAX,0xa
00593F25  83 E9 0A                  SUB ECX,0xa
00593F28  89 95 E8 FA FF FF         MOV dword ptr [EBP + 0xfffffae8],EDX
00593F2E  8B 93 D0 00 00 00         MOV EDX,dword ptr [EBX + 0xd0]
00593F34  89 85 EC FA FF FF         MOV dword ptr [EBP + 0xfffffaec],EAX
00593F3A  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00593F3D  89 8D F0 FA FF FF         MOV dword ptr [EBP + 0xfffffaf0],ECX
00593F43  B9 02 00 00 00            MOV ECX,0x2
00593F48  C7 85 DC FA FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffadc],0x1
00593F52  89 95 F4 FA FF FF         MOV dword ptr [EBP + 0xfffffaf4],EDX
00593F58  C7 85 F8 FA FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffaf8],0x0
00593F62  89 85 04 FB FF FF         MOV dword ptr [EBP + 0xfffffb04],EAX
00593F68  89 8D 08 FB FF FF         MOV dword ptr [EBP + 0xfffffb08],ECX
00593F6E  C7 85 0C FB FF FF FF FF 00 00  MOV dword ptr [EBP + 0xfffffb0c],0xffff
00593F78  89 85 64 FB FF FF         MOV dword ptr [EBP + 0xfffffb64],EAX
00593F7E  89 8D 68 FB FF FF         MOV dword ptr [EBP + 0xfffffb68],ECX
00593F84  C7 85 6C FB FF FF 02 00 01 00  MOV dword ptr [EBP + 0xfffffb6c],0x10002
00593F8E  89 85 24 FB FF FF         MOV dword ptr [EBP + 0xfffffb24],EAX
00593F94  89 8D 28 FB FF FF         MOV dword ptr [EBP + 0xfffffb28],ECX
00593F9A  89 8D 48 FB FF FF         MOV dword ptr [EBP + 0xfffffb48],ECX
00593FA0  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00593FA3  8D 95 DC FA FF FF         LEA EDX,[EBP + 0xfffffadc]
00593FA9  6A 00                     PUSH 0x0
00593FAB  8D BB 0C 01 00 00         LEA EDI,[EBX + 0x10c]
00593FB1  52                        PUSH EDX
00593FB2  C7 85 2C FB FF FF 01 00 01 00  MOV dword ptr [EBP + 0xfffffb2c],0x10001
00593FBC  89 85 44 FB FF FF         MOV dword ptr [EBP + 0xfffffb44],EAX
00593FC2  C7 85 4C FB FF FF 00 00 01 00  MOV dword ptr [EBP + 0xfffffb4c],0x10000
00593FCC  8B 01                     MOV EAX,dword ptr [ECX]
00593FCE  6A 00                     PUSH 0x0
00593FD0  57                        PUSH EDI
00593FD1  6A 07                     PUSH 0x7
00593FD3  FF 50 08                  CALL dword ptr [EAX + 0x8]
00593FD6  8B 0F                     MOV ECX,dword ptr [EDI]
00593FD8  8B 83 C8 00 00 00         MOV EAX,dword ptr [EBX + 0xc8]
00593FDE  56                        PUSH ESI
00593FDF  51                        PUSH ECX
00593FE0  6A 02                     PUSH 0x2
00593FE2  8B CB                     MOV ECX,EBX
00593FE4  C7 43 28 22 00 00 00      MOV dword ptr [EBX + 0x28],0x22
00593FEB  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
00593FEE  E8 8D 20 15 00            CALL 0x006e6080
00593FF3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00593FF6  C7 83 10 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x110],0x1
00594000  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00594006  8B 02                     MOV EAX,dword ptr [EDX]
00594008  50                        PUSH EAX
00594009  51                        PUSH ECX
0059400A  E8 C1 F5 11 00            CALL 0x006b35d0
0059400F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00594012  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00594018  5F                        POP EDI
00594019  5E                        POP ESI
0059401A  5B                        POP EBX
0059401B  8B E5                     MOV ESP,EBP
0059401D  5D                        POP EBP
0059401E  C2 04 00                  RET 0x4
LAB_00594021:
00594021  8B CB                     MOV ECX,EBX
00594023  E8 40 F9 E6 FF            CALL 0x00403968
00594028  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0059402B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00594031  5F                        POP EDI
00594032  5E                        POP ESI
00594033  5B                        POP EBX
00594034  8B E5                     MOV ESP,EBP
00594036  5D                        POP EBP
00594037  C2 04 00                  RET 0x4
LAB_0059403a:
0059403A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0059403D  68 28 BF 7C 00            PUSH 0x7cbf28
00594042  68 CC 4C 7A 00            PUSH 0x7a4ccc
00594047  56                        PUSH ESI
00594048  6A 00                     PUSH 0x0
0059404A  6A 63                     PUSH 0x63
0059404C  68 EC BE 7C 00            PUSH 0x7cbeec
00594051  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00594056  E8 75 94 11 00            CALL 0x006ad4d0
0059405B  83 C4 18                  ADD ESP,0x18
0059405E  85 C0                     TEST EAX,EAX
00594060  74 01                     JZ 0x00594063
00594062  CC                        INT3
LAB_00594063:
00594063  6A 63                     PUSH 0x63
00594065  68 EC BE 7C 00            PUSH 0x7cbeec
0059406A  6A 00                     PUSH 0x0
0059406C  56                        PUSH ESI
0059406D  E8 CE 1D 11 00            CALL 0x006a5e40
00594072  5F                        POP EDI
00594073  5E                        POP ESI
00594074  5B                        POP EBX
00594075  8B E5                     MOV ESP,EBP
00594077  5D                        POP EBP
00594078  C2 04 00                  RET 0x4
