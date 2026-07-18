FUN_0057bf60:
0057BF60  55                        PUSH EBP
0057BF61  8B EC                     MOV EBP,ESP
0057BF63  83 EC 7C                  SUB ESP,0x7c
0057BF66  8B 81 3B 02 00 00         MOV EAX,dword ptr [ECX + 0x23b]
0057BF6C  53                        PUSH EBX
0057BF6D  56                        PUSH ESI
0057BF6E  83 F8 06                  CMP EAX,0x6
0057BF71  57                        PUSH EDI
0057BF72  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0057BF75  75 14                     JNZ 0x0057bf8b
0057BF77  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057BF7A  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
0057BF7E  74 0B                     JZ 0x0057bf8b
0057BF80  33 C0                     XOR EAX,EAX
0057BF82  5F                        POP EDI
0057BF83  5E                        POP ESI
0057BF84  5B                        POP EBX
0057BF85  8B E5                     MOV ESP,EBP
0057BF87  5D                        POP EBP
0057BF88  C2 04 00                  RET 0x4
LAB_0057bf8b:
0057BF8B  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0057BF91  33 FF                     XOR EDI,EDI
0057BF93  8D 45 88                  LEA EAX,[EBP + -0x78]
0057BF96  8D 55 84                  LEA EDX,[EBP + -0x7c]
0057BF99  57                        PUSH EDI
0057BF9A  50                        PUSH EAX
0057BF9B  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
0057BF9E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057BFA4  E8 47 18 1B 00            CALL 0x0072d7f0
0057BFA9  8B F0                     MOV ESI,EAX
0057BFAB  83 C4 08                  ADD ESP,0x8
0057BFAE  3B F7                     CMP ESI,EDI
0057BFB0  0F 85 84 08 00 00         JNZ 0x0057c83a
0057BFB6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057BFB9  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0057BFBC  56                        PUSH ESI
0057BFBD  8B CB                     MOV ECX,EBX
0057BFBF  E8 43 8F E8 FF            CALL 0x00404f07
0057BFC4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0057BFC7  3D 10 01 00 00            CMP EAX,0x110
0057BFCC  0F 87 81 06 00 00         JA 0x0057c653
0057BFD2  0F 84 10 06 00 00         JZ 0x0057c5e8
0057BFD8  83 F8 03                  CMP EAX,0x3
0057BFDB  0F 87 C3 04 00 00         JA 0x0057c4a4
0057BFE1  0F 84 66 04 00 00         JZ 0x0057c44d
0057BFE7  2B C7                     SUB EAX,EDI
0057BFE9  0F 84 37 04 00 00         JZ 0x0057c426
0057BFEF  83 E8 02                  SUB EAX,0x2
0057BFF2  0F 85 2F 08 00 00         JNZ 0x0057c827
0057BFF8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0057BFFB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0057BFFE  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0057C001  83 F9 01                  CMP ECX,0x1
0057C004  0F 86 09 01 00 00         JBE 0x0057c113
0057C00A  83 F9 02                  CMP ECX,0x2
0057C00D  0F 85 D1 03 00 00         JNZ 0x0057c3e4
0057C013  8D BB 43 02 00 00         LEA EDI,[EBX + 0x243]
0057C019  B9 0A 00 00 00            MOV ECX,0xa
0057C01E  8B F0                     MOV ESI,EAX
0057C020  F3 A5                     MOVSD.REP ES:EDI,ESI
0057C022  8B 48 3E                  MOV ECX,dword ptr [EAX + 0x3e]
0057C025  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0057C028  8D 4C 01 46               LEA ECX,[ECX + EAX*0x1 + 0x46]
0057C02C  51                        PUSH ECX
0057C02D  8B CB                     MOV ECX,EBX
0057C02F  E8 EB 94 E8 FF            CALL 0x0040551f
0057C034  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0057C037  6A 44                     PUSH 0x44
0057C039  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0057C03C  89 93 3B 02 00 00         MOV dword ptr [EBX + 0x23b],EDX
0057C042  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0057C045  89 83 31 02 00 00         MOV dword ptr [EBX + 0x231],EAX
0057C04B  8B 4E 36                  MOV ECX,dword ptr [ESI + 0x36]
0057C04E  89 8B 3F 02 00 00         MOV dword ptr [EBX + 0x23f],ECX
0057C054  66 8B 56 30               MOV DX,word ptr [ESI + 0x30]
0057C058  66 89 93 35 02 00 00      MOV word ptr [EBX + 0x235],DX
0057C05F  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0057C063  66 89 83 37 02 00 00      MOV word ptr [EBX + 0x237],AX
0057C06A  66 8B 4E 34               MOV CX,word ptr [ESI + 0x34]
0057C06E  66 89 8B 39 02 00 00      MOV word ptr [EBX + 0x239],CX
0057C075  E8 F6 EB 12 00            CALL 0x006aac70
0057C07A  33 D2                     XOR EDX,EDX
0057C07C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0057C07F  3B C2                     CMP EAX,EDX
0057C081  0F 84 5D 03 00 00         JZ 0x0057c3e4
0057C087  33 C9                     XOR ECX,ECX
0057C089  EB 03                     JMP 0x0057c08e
LAB_0057c08b:
0057C08B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_0057c08e:
0057C08E  83 F9 08                  CMP ECX,0x8
0057C091  75 0B                     JNZ 0x0057c09e
0057C093  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
0057C099  89 78 20                  MOV dword ptr [EAX + 0x20],EDI
0057C09C  EB 09                     JMP 0x0057c0a7
LAB_0057c09e:
0057C09E  8B 3D 6C 67 80 00         MOV EDI,dword ptr [0x0080676c]
0057C0A4  89 3C 88                  MOV dword ptr [EAX + ECX*0x4],EDI
LAB_0057c0a7:
0057C0A7  41                        INC ECX
0057C0A8  83 F9 11                  CMP ECX,0x11
0057C0AB  7C DE                     JL 0x0057c08b
0057C0AD  A1 CC 73 80 00            MOV EAX,[0x008073cc]
0057C0B2  83 C6 42                  ADD ESI,0x42
0057C0B5  8D 4D C8                  LEA ECX,[EBP + -0x38]
0057C0B8  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
0057C0BE  56                        PUSH ESI
0057C0BF  51                        PUSH ECX
0057C0C0  8B CF                     MOV ECX,EDI
0057C0C2  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0057C0C5  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0057C0C8  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0057C0CB  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0057C0CE  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0057C0D1  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0057C0D4  E8 CC 8B E8 FF            CALL 0x00404ca5
0057C0D9  8D 55 C8                  LEA EDX,[EBP + -0x38]
0057C0DC  52                        PUSH EDX
0057C0DD  E8 7E EF 12 00            CALL 0x006ab060
0057C0E2  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0057C0E5  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
0057C0E9  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
0057C0ED  50                        PUSH EAX
0057C0EE  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
0057C0F2  53                        PUSH EBX
0057C0F3  6A 01                     PUSH 0x1
0057C0F5  51                        PUSH ECX
0057C0F6  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0057C0FC  52                        PUSH EDX
0057C0FD  50                        PUSH EAX
0057C0FE  E8 22 52 E8 FF            CALL 0x00401325
0057C103  6A 00                     PUSH 0x0
0057C105  6A 0E                     PUSH 0xe
0057C107  8B CF                     MOV ECX,EDI
0057C109  E8 56 4F E8 FF            CALL 0x00401064
0057C10E  E9 D1 02 00 00            JMP 0x0057c3e4
LAB_0057c113:
0057C113  C7 83 3B 02 00 00 06 00 00 00  MOV dword ptr [EBX + 0x23b],0x6
0057C11D  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
0057C123  89 BB 3F 02 00 00         MOV dword ptr [EBX + 0x23f],EDI
0057C129  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0057C12C  B9 0A 00 00 00            MOV ECX,0xa
0057C131  8D BB 43 02 00 00         LEA EDI,[EBX + 0x243]
0057C137  F3 A5                     MOVSD.REP ES:EDI,ESI
0057C139  8B CB                     MOV ECX,EBX
0057C13B  E8 78 73 E8 FF            CALL 0x004034b8
0057C140  6A 01                     PUSH 0x1
0057C142  8B CB                     MOV ECX,EBX
0057C144  E8 14 6A E8 FF            CALL 0x00402b5d
0057C149  8B 83 57 02 00 00         MOV EAX,dword ptr [EBX + 0x257]
0057C14F  83 CF FF                  OR EDI,0xffffffff
0057C152  85 C0                     TEST EAX,EAX
0057C154  66 89 7B 5F               MOV word ptr [EBX + 0x5f],DI
0057C158  66 89 7B 5D               MOV word ptr [EBX + 0x5d],DI
0057C15C  66 89 7B 5B               MOV word ptr [EBX + 0x5b],DI
0057C160  0F 8C 6D 02 00 00         JL 0x0057c3d3
0057C166  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0057C16D  3B C1                     CMP EAX,ECX
0057C16F  0F 8D 5E 02 00 00         JGE 0x0057c3d3
0057C175  8B 83 5B 02 00 00         MOV EAX,dword ptr [EBX + 0x25b]
0057C17B  85 C0                     TEST EAX,EAX
0057C17D  0F 8C 50 02 00 00         JL 0x0057c3d3
0057C183  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0057C18A  3B C2                     CMP EAX,EDX
0057C18C  0F 8D 41 02 00 00         JGE 0x0057c3d3
0057C192  8B 83 5F 02 00 00         MOV EAX,dword ptr [EBX + 0x25f]
0057C198  85 C0                     TEST EAX,EAX
0057C19A  0F 8C 33 02 00 00         JL 0x0057c3d3
0057C1A0  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
0057C1A7  3B C1                     CMP EAX,ECX
0057C1A9  0F 8D 24 02 00 00         JGE 0x0057c3d3
0057C1AF  66 8B 8B 57 02 00 00      MOV CX,word ptr [EBX + 0x257]
0057C1B6  66 8B D0                  MOV DX,AX
0057C1B9  66 8B 83 5B 02 00 00      MOV AX,word ptr [EBX + 0x25b]
0057C1C0  6A 01                     PUSH 0x1
0057C1C2  52                        PUSH EDX
0057C1C3  50                        PUSH EAX
0057C1C4  51                        PUSH ECX
0057C1C5  8B CB                     MOV ECX,EBX
0057C1C7  E8 93 67 E8 FF            CALL 0x0040295f
0057C1CC  85 C0                     TEST EAX,EAX
0057C1CE  0F 85 FF 01 00 00         JNZ 0x0057c3d3
0057C1D4  6A 08                     PUSH 0x8
0057C1D6  8B CB                     MOV ECX,EBX
0057C1D8  E8 CD 58 E8 FF            CALL 0x00401aaa
0057C1DD  85 C0                     TEST EAX,EAX
0057C1DF  0F 85 EE 01 00 00         JNZ 0x0057c3d3
0057C1E5  66 8B 93 63 02 00 00      MOV DX,word ptr [EBX + 0x263]
0057C1EC  8B CB                     MOV ECX,EBX
0057C1EE  52                        PUSH EDX
0057C1EF  E8 CD 9B E8 FF            CALL 0x00405dc1
0057C1F4  85 C0                     TEST EAX,EAX
0057C1F6  0F 85 D7 01 00 00         JNZ 0x0057c3d3
0057C1FC  8B 83 67 02 00 00         MOV EAX,dword ptr [EBX + 0x267]
0057C202  05 19 FF FF FF            ADD EAX,0xffffff19
0057C207  83 F8 04                  CMP EAX,0x4
0057C20A  0F 87 31 01 00 00         JA 0x0057c341
switchD_0057c210::switchD:
0057C210  FF 24 85 88 C8 57 00      JMP dword ptr [EAX*0x4 + 0x57c888]
switchD_0057c210::caseD_e8:
0057C217  A1 6C 67 80 00            MOV EAX,[0x0080676c]
0057C21C  6A 1D                     PUSH 0x1d
0057C21E  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C224  68 F8 AF 7C 00            PUSH 0x7caff8
0057C229  50                        PUSH EAX
0057C22A  6A 0E                     PUSH 0xe
0057C22C  8B CE                     MOV ECX,ESI
0057C22E  E8 50 7F E8 FF            CALL 0x00404183
0057C233  85 C0                     TEST EAX,EAX
0057C235  0F 84 FD 00 00 00         JZ 0x0057c338
0057C23B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0057C241  68 EA 00 00 00            PUSH 0xea
0057C246  68 44 B0 7C 00            PUSH 0x7cb044
0057C24B  51                        PUSH ECX
0057C24C  E9 E1 00 00 00            JMP 0x0057c332
switchD_0057c210::caseD_e9:
0057C251  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
0057C257  6A 1D                     PUSH 0x1d
0057C259  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C25F  68 00 B0 7C 00            PUSH 0x7cb000
0057C264  52                        PUSH EDX
0057C265  6A 0E                     PUSH 0xe
0057C267  8B CE                     MOV ECX,ESI
0057C269  E8 15 7F E8 FF            CALL 0x00404183
0057C26E  85 C0                     TEST EAX,EAX
0057C270  0F 84 C2 00 00 00         JZ 0x0057c338
0057C276  68 F0 00 00 00            PUSH 0xf0
0057C27B  E9 A7 00 00 00            JMP 0x0057c327
switchD_0057c210::caseD_e7:
0057C280  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
0057C286  6A 1D                     PUSH 0x1d
0057C288  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C28E  68 F0 AF 7C 00            PUSH 0x7caff0
0057C293  51                        PUSH ECX
0057C294  6A 0E                     PUSH 0xe
0057C296  8B CE                     MOV ECX,ESI
0057C298  E8 E6 7E E8 FF            CALL 0x00404183
0057C29D  85 C0                     TEST EAX,EAX
0057C29F  74 17                     JZ 0x0057c2b8
0057C2A1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0057C2A7  68 F6 00 00 00            PUSH 0xf6
0057C2AC  68 44 B0 7C 00            PUSH 0x7cb044
0057C2B1  52                        PUSH EDX
0057C2B2  57                        PUSH EDI
0057C2B3  E8 88 9B 12 00            CALL 0x006a5e40
LAB_0057c2b8:
0057C2B8  6A 0E                     PUSH 0xe
0057C2BA  8B CE                     MOV ECX,ESI
0057C2BC  E8 E5 97 E8 FF            CALL 0x00405aa6
0057C2C1  6A 00                     PUSH 0x0
0057C2C3  6A 0E                     PUSH 0xe
0057C2C5  8B CE                     MOV ECX,ESI
0057C2C7  E8 98 4D E8 FF            CALL 0x00401064
0057C2CC  EB 73                     JMP 0x0057c341
switchD_0057c210::caseD_ea:
0057C2CE  A1 6C 67 80 00            MOV EAX,[0x0080676c]
0057C2D3  6A 1D                     PUSH 0x1d
0057C2D5  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C2DB  68 08 B0 7C 00            PUSH 0x7cb008
0057C2E0  50                        PUSH EAX
0057C2E1  6A 0E                     PUSH 0xe
0057C2E3  8B CE                     MOV ECX,ESI
0057C2E5  E8 99 7E E8 FF            CALL 0x00404183
0057C2EA  85 C0                     TEST EAX,EAX
0057C2EC  74 4A                     JZ 0x0057c338
0057C2EE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0057C2F4  68 FD 00 00 00            PUSH 0xfd
0057C2F9  68 44 B0 7C 00            PUSH 0x7cb044
0057C2FE  51                        PUSH ECX
0057C2FF  EB 31                     JMP 0x0057c332
switchD_0057c210::caseD_eb:
0057C301  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
0057C307  6A 1D                     PUSH 0x1d
0057C309  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C30F  68 10 B0 7C 00            PUSH 0x7cb010
0057C314  52                        PUSH EDX
0057C315  6A 0E                     PUSH 0xe
0057C317  8B CE                     MOV ECX,ESI
0057C319  E8 65 7E E8 FF            CALL 0x00404183
0057C31E  85 C0                     TEST EAX,EAX
0057C320  74 16                     JZ 0x0057c338
0057C322  68 04 01 00 00            PUSH 0x104
LAB_0057c327:
0057C327  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0057C32C  68 44 B0 7C 00            PUSH 0x7cb044
0057C331  50                        PUSH EAX
LAB_0057c332:
0057C332  57                        PUSH EDI
0057C333  E8 08 9B 12 00            CALL 0x006a5e40
LAB_0057c338:
0057C338  6A 0E                     PUSH 0xe
0057C33A  8B CE                     MOV ECX,ESI
0057C33C  E8 65 97 E8 FF            CALL 0x00405aa6
switchD_0057c210::default:
0057C341  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057C347  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C34D  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057C353  8B CE                     MOV ECX,ESI
0057C355  52                        PUSH EDX
0057C356  6A 0E                     PUSH 0xe
0057C358  E8 E3 8E E8 FF            CALL 0x00405240
0057C35D  DB 83 5F 02 00 00         FILD dword ptr [EBX + 0x25f]
0057C363  51                        PUSH ECX
0057C364  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057C36A  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0057C370  D9 1C 24                  FSTP float ptr [ESP]
0057C373  DB 83 5B 02 00 00         FILD dword ptr [EBX + 0x25b]
0057C379  51                        PUSH ECX
0057C37A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057C380  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057C386  D9 1C 24                  FSTP float ptr [ESP]
0057C389  DB 83 57 02 00 00         FILD dword ptr [EBX + 0x257]
0057C38F  51                        PUSH ECX
0057C390  8B CE                     MOV ECX,ESI
0057C392  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057C398  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057C39E  D9 1C 24                  FSTP float ptr [ESP]
0057C3A1  E8 33 82 E8 FF            CALL 0x004045d9
0057C3A6  66 8B 43 47               MOV AX,word ptr [EBX + 0x47]
0057C3AA  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0057C3AE  66 8B 53 4B               MOV DX,word ptr [EBX + 0x4b]
0057C3B2  66 89 83 35 02 00 00      MOV word ptr [EBX + 0x235],AX
0057C3B9  66 89 8B 37 02 00 00      MOV word ptr [EBX + 0x237],CX
0057C3C0  66 89 93 39 02 00 00      MOV word ptr [EBX + 0x239],DX
0057C3C7  C7 83 3B 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x23b],0x0
0057C3D1  EB 11                     JMP 0x0057c3e4
LAB_0057c3d3:
0057C3D3  8B CB                     MOV ECX,EBX
0057C3D5  E8 E0 6E E8 FF            CALL 0x004032ba
0057C3DA  C7 83 3B 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x23b],0x3
LAB_0057c3e4:
0057C3E4  83 BB 3B 02 00 00 06      CMP dword ptr [EBX + 0x23b],0x6
0057C3EB  0F 84 36 04 00 00         JZ 0x0057c827
0057C3F1  53                        PUSH EBX
0057C3F2  E8 CC 4C E8 FF            CALL 0x004010c3
0057C3F7  83 C4 04                  ADD ESP,0x4
0057C3FA  85 C0                     TEST EAX,EAX
0057C3FC  0F 85 25 04 00 00         JNZ 0x0057c827
0057C402  8B CB                     MOV ECX,EBX
0057C404  E8 B1 6E E8 FF            CALL 0x004032ba
0057C409  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C40C  C7 83 3B 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x23b],0x3
0057C416  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C41B  33 C0                     XOR EAX,EAX
0057C41D  5F                        POP EDI
0057C41E  5E                        POP ESI
0057C41F  5B                        POP EBX
0057C420  8B E5                     MOV ESP,EBP
0057C422  5D                        POP EBP
0057C423  C2 04 00                  RET 0x4
LAB_0057c426:
0057C426  83 BB 3B 02 00 00 03      CMP dword ptr [EBX + 0x23b],0x3
0057C42D  0F 84 F4 03 00 00         JZ 0x0057c827
0057C433  8B CB                     MOV ECX,EBX
0057C435  E8 CC 9A E8 FF            CALL 0x00405f06
0057C43A  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C43D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C442  33 C0                     XOR EAX,EAX
0057C444  5F                        POP EDI
0057C445  5E                        POP ESI
0057C446  5B                        POP EBX
0057C447  8B E5                     MOV ESP,EBP
0057C449  5D                        POP EBP
0057C44A  C2 04 00                  RET 0x4
LAB_0057c44d:
0057C44D  8B CB                     MOV ECX,EBX
0057C44F  E8 FE 94 E8 FF            CALL 0x00405952
0057C454  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0057C457  8A 8B 8E 00 00 00         MOV CL,byte ptr [EBX + 0x8e]
0057C45D  66 8B 53 5F               MOV DX,word ptr [EBX + 0x5f]
0057C461  50                        PUSH EAX
0057C462  66 8B 43 5D               MOV AX,word ptr [EBX + 0x5d]
0057C466  53                        PUSH EBX
0057C467  51                        PUSH ECX
0057C468  66 8B 4B 5B               MOV CX,word ptr [EBX + 0x5b]
0057C46C  52                        PUSH EDX
0057C46D  50                        PUSH EAX
0057C46E  51                        PUSH ECX
0057C46F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0057C475  E8 47 8A E8 FF            CALL 0x00404ec1
0057C47A  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0057C47D  52                        PUSH EDX
0057C47E  E8 06 6D E8 FF            CALL 0x00403189
0057C483  83 C4 04                  ADD ESP,0x4
0057C486  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057C48C  E8 44 5D E8 FF            CALL 0x004021d5
0057C491  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C494  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C499  33 C0                     XOR EAX,EAX
0057C49B  5F                        POP EDI
0057C49C  5E                        POP ESI
0057C49D  5B                        POP EBX
0057C49E  8B E5                     MOV ESP,EBP
0057C4A0  5D                        POP EBP
0057C4A1  C2 04 00                  RET 0x4
LAB_0057c4a4:
0057C4A4  3D 0F 01 00 00            CMP EAX,0x10f
0057C4A9  0F 85 78 03 00 00         JNZ 0x0057c827
0057C4AF  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057C4B2  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057C4B8  50                        PUSH EAX
0057C4B9  E8 16 54 E8 FF            CALL 0x004018d4
0057C4BE  8D 4D F4                  LEA ECX,[EBP + -0xc]
0057C4C1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0057C4C4  51                        PUSH ECX
0057C4C5  8B CB                     MOV ECX,EBX
0057C4C7  E8 CE 4C E8 FF            CALL 0x0040119a
0057C4CC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057C4CF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0057C4D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057C4D5  8D 4C 02 46               LEA ECX,[EDX + EAX*0x1 + 0x46]
0057C4D9  51                        PUSH ECX
0057C4DA  E8 91 E7 12 00            CALL 0x006aac70
0057C4DF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0057C4E2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057C4E5  3B CF                     CMP ECX,EDI
0057C4E7  0F 84 3A 03 00 00         JZ 0x0057c827
0057C4ED  3B C7                     CMP EAX,EDI
0057C4EF  0F 84 32 03 00 00         JZ 0x0057c827
0057C4F5  8D B3 43 02 00 00         LEA ESI,[EBX + 0x243]
0057C4FB  B9 0A 00 00 00            MOV ECX,0xa
0057C500  8B F8                     MOV EDI,EAX
0057C502  F3 A5                     MOVSD.REP ES:EDI,ESI
0057C504  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0057C50B  8B 93 31 02 00 00         MOV EDX,dword ptr [EBX + 0x231]
0057C511  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
0057C514  8B 8B 3B 02 00 00         MOV ECX,dword ptr [EBX + 0x23b]
0057C51A  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
0057C51D  8B 93 3F 02 00 00         MOV EDX,dword ptr [EBX + 0x23f]
0057C523  89 50 36                  MOV dword ptr [EAX + 0x36],EDX
0057C526  66 8B 8B 35 02 00 00      MOV CX,word ptr [EBX + 0x235]
0057C52D  66 89 48 30               MOV word ptr [EAX + 0x30],CX
0057C531  66 8B 93 37 02 00 00      MOV DX,word ptr [EBX + 0x237]
0057C538  66 89 50 32               MOV word ptr [EAX + 0x32],DX
0057C53C  66 8B 8B 39 02 00 00      MOV CX,word ptr [EBX + 0x239]
0057C543  66 89 48 34               MOV word ptr [EAX + 0x34],CX
0057C547  C7 40 3A 00 00 00 00      MOV dword ptr [EAX + 0x3a],0x0
0057C54E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057C551  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057C554  89 50 3E                  MOV dword ptr [EAX + 0x3e],EDX
0057C557  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057C55A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0057C55D  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0057C560  8B C1                     MOV EAX,ECX
0057C562  8D 7A 42                  LEA EDI,[EDX + 0x42]
0057C565  C1 E9 02                  SHR ECX,0x2
0057C568  F3 A5                     MOVSD.REP ES:EDI,ESI
0057C56A  8B C8                     MOV ECX,EAX
0057C56C  83 E1 03                  AND ECX,0x3
0057C56F  F3 A4                     MOVSB.REP ES:EDI,ESI
0057C571  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0057C574  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057C577  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0057C57A  89 4C 02 42               MOV dword ptr [EDX + EAX*0x1 + 0x42],ECX
0057C57E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057C581  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057C584  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0057C587  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0057C58A  8D 7C 10 46               LEA EDI,[EAX + EDX*0x1 + 0x46]
0057C58E  8B D1                     MOV EDX,ECX
0057C590  C1 E9 02                  SHR ECX,0x2
0057C593  F3 A5                     MOVSD.REP ES:EDI,ESI
0057C595  8B CA                     MOV ECX,EDX
0057C597  83 E1 03                  AND ECX,0x3
0057C59A  F3 A4                     MOVSB.REP ES:EDI,ESI
0057C59C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057C59F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0057C5A2  8D 54 01 46               LEA EDX,[ECX + EAX*0x1 + 0x46]
0057C5A6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057C5A9  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0057C5AC  52                        PUSH EDX
0057C5AD  50                        PUSH EAX
0057C5AE  51                        PUSH ECX
0057C5AF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057C5B5  E8 3F 60 E8 FF            CALL 0x004025f9
0057C5BA  8D 55 F0                  LEA EDX,[EBP + -0x10]
0057C5BD  52                        PUSH EDX
0057C5BE  E8 9D EA 12 00            CALL 0x006ab060
0057C5C3  8D 45 EC                  LEA EAX,[EBP + -0x14]
0057C5C6  50                        PUSH EAX
0057C5C7  E8 94 EA 12 00            CALL 0x006ab060
0057C5CC  8D 4D F8                  LEA ECX,[EBP + -0x8]
0057C5CF  51                        PUSH ECX
0057C5D0  E8 8B EA 12 00            CALL 0x006ab060
0057C5D5  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C5D8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C5DD  33 C0                     XOR EAX,EAX
0057C5DF  5F                        POP EDI
0057C5E0  5E                        POP ESI
0057C5E1  5B                        POP EBX
0057C5E2  8B E5                     MOV ESP,EBP
0057C5E4  5D                        POP EBP
0057C5E5  C2 04 00                  RET 0x4
LAB_0057c5e8:
0057C5E8  39 BB 3B 02 00 00         CMP dword ptr [EBX + 0x23b],EDI
0057C5EE  0F 84 33 02 00 00         JZ 0x0057c827
0057C5F4  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0057C5FA  6A 0E                     PUSH 0xe
0057C5FC  8B CE                     MOV ECX,ESI
0057C5FE  C7 83 3B 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x23b],0x5
0057C608  E8 57 7C E8 FF            CALL 0x00404264
0057C60D  8B CE                     MOV ECX,ESI
0057C60F  E8 7C 64 E8 FF            CALL 0x00402a90
0057C614  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0057C61A  6A 1D                     PUSH 0x1d
0057C61C  68 18 B0 7C 00            PUSH 0x7cb018
0057C621  52                        PUSH EDX
0057C622  6A 08                     PUSH 0x8
0057C624  8B CE                     MOV ECX,ESI
0057C626  E8 58 7B E8 FF            CALL 0x00404183
0057C62B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0057C630  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0057C636  51                        PUSH ECX
0057C637  6A 08                     PUSH 0x8
0057C639  8B CE                     MOV ECX,ESI
0057C63B  E8 00 8C E8 FF            CALL 0x00405240
0057C640  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C643  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C648  33 C0                     XOR EAX,EAX
0057C64A  5F                        POP EDI
0057C64B  5E                        POP ESI
0057C64C  5B                        POP EBX
0057C64D  8B E5                     MOV ESP,EBP
0057C64F  5D                        POP EBP
0057C650  C2 04 00                  RET 0x4
LAB_0057c653:
0057C653  05 EE FE FF FF            ADD EAX,0xfffffeee
0057C658  83 F8 16                  CMP EAX,0x16
0057C65B  0F 87 C6 01 00 00         JA 0x0057c827
0057C661  33 D2                     XOR EDX,EDX
0057C663  8A 90 B0 C8 57 00         MOV DL,byte ptr [EAX + 0x57c8b0]
switchD_0057c669::switchD:
0057C669  FF 24 95 9C C8 57 00      JMP dword ptr [EDX*0x4 + 0x57c89c]
switchD_0057c669::caseD_127:
0057C670  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0057C673  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057C676  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0057C679  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
0057C67D  C1 E8 10                  SHR EAX,0x10
0057C680  0F BF D2                  MOVSX EDX,DX
0057C683  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057C686  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0057C689  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0057C68D  0F BF F8                  MOVSX EDI,AX
0057C690  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0057C693  8D B3 35 02 00 00         LEA ESI,[EBX + 0x235]
0057C699  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057C69C  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0057C69F  8D 4C C8 64               LEA ECX,[EAX + ECX*0x8 + 0x64]
0057C6A3  0F BF C9                  MOVSX ECX,CX
0057C6A6  C1 E8 10                  SHR EAX,0x10
0057C6A9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0057C6AC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057C6AF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0057C6B2  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0057C6B6  8D 8B 39 02 00 00         LEA ECX,[EBX + 0x239]
0057C6BC  0F BF C0                  MOVSX EAX,AX
0057C6BF  51                        PUSH ECX
0057C6C0  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0057C6C3  56                        PUSH ESI
0057C6C4  56                        PUSH ESI
0057C6C5  50                        PUSH EAX
0057C6C6  57                        PUSH EDI
0057C6C7  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0057C6CE  51                        PUSH ECX
0057C6CF  52                        PUSH EDX
0057C6D0  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0057C6D7  4A                        DEC EDX
0057C6D8  53                        PUSH EBX
0057C6D9  48                        DEC EAX
0057C6DA  52                        PUSH EDX
0057C6DB  50                        PUSH EAX
0057C6DC  6A 00                     PUSH 0x0
0057C6DE  6A 00                     PUSH 0x0
0057C6E0  E8 02 53 E8 FF            CALL 0x004019e7
0057C6E5  83 C4 30                  ADD ESP,0x30
0057C6E8  85 C0                     TEST EAX,EAX
0057C6EA  0F 84 37 01 00 00         JZ 0x0057c827
0057C6F0  66 8B 06                  MOV AX,word ptr [ESI]
0057C6F3  66 85 C0                  TEST AX,AX
0057C6F6  0F BF C8                  MOVSX ECX,AX
0057C6F9  B8 79 19 8C 02            MOV EAX,0x28c1979
0057C6FE  7C 10                     JL 0x0057c710
0057C700  F7 E9                     IMUL ECX
0057C702  D1 FA                     SAR EDX,0x1
0057C704  8B CA                     MOV ECX,EDX
0057C706  C1 E9 1F                  SHR ECX,0x1f
0057C709  03 D1                     ADD EDX,ECX
0057C70B  0F BF C2                  MOVSX EAX,DX
0057C70E  EB 0F                     JMP 0x0057c71f
LAB_0057c710:
0057C710  F7 E9                     IMUL ECX
0057C712  D1 FA                     SAR EDX,0x1
0057C714  8B C2                     MOV EAX,EDX
0057C716  C1 E8 1F                  SHR EAX,0x1f
0057C719  03 D0                     ADD EDX,EAX
0057C71B  0F BF C2                  MOVSX EAX,DX
0057C71E  48                        DEC EAX
LAB_0057c71f:
0057C71F  66 89 06                  MOV word ptr [ESI],AX
0057C722  66 8B 83 37 02 00 00      MOV AX,word ptr [EBX + 0x237]
0057C729  66 85 C0                  TEST AX,AX
0057C72C  0F BF C8                  MOVSX ECX,AX
0057C72F  B8 79 19 8C 02            MOV EAX,0x28c1979
0057C734  7C 10                     JL 0x0057c746
0057C736  F7 E9                     IMUL ECX
0057C738  D1 FA                     SAR EDX,0x1
0057C73A  8B CA                     MOV ECX,EDX
0057C73C  C1 E9 1F                  SHR ECX,0x1f
0057C73F  03 D1                     ADD EDX,ECX
0057C741  0F BF C2                  MOVSX EAX,DX
0057C744  EB 0F                     JMP 0x0057c755
LAB_0057c746:
0057C746  F7 E9                     IMUL ECX
0057C748  D1 FA                     SAR EDX,0x1
0057C74A  8B C2                     MOV EAX,EDX
0057C74C  C1 E8 1F                  SHR EAX,0x1f
0057C74F  03 D0                     ADD EDX,EAX
0057C751  0F BF C2                  MOVSX EAX,DX
0057C754  48                        DEC EAX
LAB_0057c755:
0057C755  66 89 83 37 02 00 00      MOV word ptr [EBX + 0x237],AX
0057C75C  66 8B 83 39 02 00 00      MOV AX,word ptr [EBX + 0x239]
0057C763  66 85 C0                  TEST AX,AX
0057C766  0F BF C8                  MOVSX ECX,AX
0057C769  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0057C76E  7C 11                     JL 0x0057c781
0057C770  F7 E9                     IMUL ECX
0057C772  C1 FA 06                  SAR EDX,0x6
0057C775  8B CA                     MOV ECX,EDX
0057C777  C1 E9 1F                  SHR ECX,0x1f
0057C77A  03 D1                     ADD EDX,ECX
0057C77C  0F BF C2                  MOVSX EAX,DX
0057C77F  EB 10                     JMP 0x0057c791
LAB_0057c781:
0057C781  F7 E9                     IMUL ECX
0057C783  C1 FA 06                  SAR EDX,0x6
0057C786  8B C2                     MOV EAX,EDX
0057C788  C1 E8 1F                  SHR EAX,0x1f
0057C78B  03 D0                     ADD EDX,EAX
0057C78D  0F BF C2                  MOVSX EAX,DX
0057C790  48                        DEC EAX
LAB_0057c791:
0057C791  66 89 83 39 02 00 00      MOV word ptr [EBX + 0x239],AX
0057C798  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C79B  C7 83 3B 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x23b],0x4
0057C7A5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C7AA  33 C0                     XOR EAX,EAX
0057C7AC  5F                        POP EDI
0057C7AD  5E                        POP ESI
0057C7AE  5B                        POP EBX
0057C7AF  8B E5                     MOV ESP,EBP
0057C7B1  5D                        POP EBP
0057C7B2  C2 04 00                  RET 0x4
switchD_0057c669::caseD_128:
0057C7B5  8B 83 3B 02 00 00         MOV EAX,dword ptr [EBX + 0x23b]
0057C7BB  BE 03 00 00 00            MOV ESI,0x3
0057C7C0  3B C6                     CMP EAX,ESI
0057C7C2  74 63                     JZ 0x0057c827
0057C7C4  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057C7CA  E8 FD 8A E8 FF            CALL 0x004052cc
0057C7CF  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0057C7D5  50                        PUSH EAX
0057C7D6  E8 85 E3 16 00            CALL 0x006eab60
0057C7DB  8B CB                     MOV ECX,EBX
0057C7DD  E8 D8 6A E8 FF            CALL 0x004032ba
0057C7E2  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C7E5  89 B3 3B 02 00 00         MOV dword ptr [EBX + 0x23b],ESI
0057C7EB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C7F0  33 C0                     XOR EAX,EAX
0057C7F2  5F                        POP EDI
0057C7F3  5E                        POP ESI
0057C7F4  5B                        POP EBX
0057C7F5  8B E5                     MOV ESP,EBP
0057C7F7  5D                        POP EBP
0057C7F8  C2 04 00                  RET 0x4
switchD_0057c669::caseD_112:
0057C7FB  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057C801  E8 8A 62 E8 FF            CALL 0x00402a90
0057C806  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C809  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C80E  33 C0                     XOR EAX,EAX
0057C810  5F                        POP EDI
0057C811  5E                        POP ESI
0057C812  5B                        POP EBX
0057C813  8B E5                     MOV ESP,EBP
0057C815  5D                        POP EBP
0057C816  C2 04 00                  RET 0x4
switchD_0057c669::caseD_113:
0057C819  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
0057C81F  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0057C825  FF 12                     CALL dword ptr [EDX]
switchD_0057c669::caseD_114:
0057C827  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057C82A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057C82F  33 C0                     XOR EAX,EAX
0057C831  5F                        POP EDI
0057C832  5E                        POP ESI
0057C833  5B                        POP EBX
0057C834  8B E5                     MOV ESP,EBP
0057C836  5D                        POP EBP
0057C837  C2 04 00                  RET 0x4
LAB_0057c83a:
0057C83A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0057C83D  68 2C B0 7C 00            PUSH 0x7cb02c
0057C842  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057C847  56                        PUSH ESI
0057C848  57                        PUSH EDI
0057C849  68 63 06 00 00            PUSH 0x663
0057C84E  68 44 B0 7C 00            PUSH 0x7cb044
0057C853  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057C859  E8 72 0C 13 00            CALL 0x006ad4d0
0057C85E  83 C4 18                  ADD ESP,0x18
0057C861  85 C0                     TEST EAX,EAX
0057C863  74 01                     JZ 0x0057c866
0057C865  CC                        INT3
LAB_0057c866:
0057C866  68 64 06 00 00            PUSH 0x664
0057C86B  68 44 B0 7C 00            PUSH 0x7cb044
0057C870  57                        PUSH EDI
0057C871  56                        PUSH ESI
0057C872  E8 C9 95 12 00            CALL 0x006a5e40
0057C877  5F                        POP EDI
0057C878  5E                        POP ESI
0057C879  B8 FF FF 00 00            MOV EAX,0xffff
0057C87E  5B                        POP EBX
0057C87F  8B E5                     MOV ESP,EBP
0057C881  5D                        POP EBP
0057C882  C2 04 00                  RET 0x4
