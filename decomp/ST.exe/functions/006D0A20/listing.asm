FUN_006d0a20:
006D0A20  55                        PUSH EBP
006D0A21  8B EC                     MOV EBP,ESP
006D0A23  6A FF                     PUSH -0x1
006D0A25  68 90 DA 79 00            PUSH 0x79da90
006D0A2A  68 64 D9 72 00            PUSH 0x72d964
006D0A2F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D0A35  50                        PUSH EAX
006D0A36  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D0A3D  81 EC 10 01 00 00         SUB ESP,0x110
006D0A43  53                        PUSH EBX
006D0A44  56                        PUSH ESI
006D0A45  57                        PUSH EDI
006D0A46  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D0A49  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006D0A50  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D0A53  85 C0                     TEST EAX,EAX
006D0A55  0F 8E 45 02 00 00         JLE 0x006d0ca0
006D0A5B  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D0A5E  85 C0                     TEST EAX,EAX
006D0A60  0F 8E 3A 02 00 00         JLE 0x006d0ca0
006D0A66  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D0A69  85 C0                     TEST EAX,EAX
006D0A6B  75 0C                     JNZ 0x006d0a79
006D0A6D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D0A70  50                        PUSH EAX
006D0A71  E8 2A 45 FE FF            CALL 0x006b4fa0
006D0A76  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d0a79:
006D0A79  B9 08 00 00 00            MOV ECX,0x8
006D0A7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D0A81  39 48 20                  CMP dword ptr [EAX + 0x20],ECX
006D0A84  0F 85 5B 01 00 00         JNZ 0x006d0be5
006D0A8A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D0A8D  66 39 4A 0E               CMP word ptr [EDX + 0xe],CX
006D0A91  0F 85 4E 01 00 00         JNZ 0x006d0be5
006D0A97  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D0A9E  74 0C                     JZ 0x006d0aac
006D0AA0  05 F0 04 00 00            ADD EAX,0x4f0
006D0AA5  50                        PUSH EAX
006D0AA6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006d0aac:
006D0AAC  B9 1F 00 00 00            MOV ECX,0x1f
006D0AB1  33 C0                     XOR EAX,EAX
006D0AB3  8D BD 0C FF FF FF         LEA EDI,[EBP + 0xffffff0c]
006D0AB9  F3 AB                     STOSD.REP ES:EDI
006D0ABB  C7 85 0C FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff0c],0x7c
006D0AC5  C7 85 10 FF FF FF 06 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x6
006D0ACF  33 FF                     XOR EDI,EDI
006D0AD1  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006d0ad4:
006D0AD4  8B 03                     MOV EAX,dword ptr [EBX]
006D0AD6  6A 00                     PUSH 0x0
006D0AD8  6A 21                     PUSH 0x21
006D0ADA  8D 8D 0C FF FF FF         LEA ECX,[EBP + 0xffffff0c]
006D0AE0  51                        PUSH ECX
006D0AE1  6A 00                     PUSH 0x0
006D0AE3  53                        PUSH EBX
006D0AE4  FF 50 64                  CALL dword ptr [EAX + 0x64]
006D0AE7  8B F0                     MOV ESI,EAX
006D0AE9  85 F6                     TEST ESI,ESI
006D0AEB  74 1C                     JZ 0x006d0b09
006D0AED  81 FE C2 01 76 88         CMP ESI,0x887601c2
006D0AF3  75 0C                     JNZ 0x006d0b01
006D0AF5  8B 13                     MOV EDX,dword ptr [EBX]
006D0AF7  53                        PUSH EBX
006D0AF8  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006D0AFB  47                        INC EDI
006D0AFC  83 FF 02                  CMP EDI,0x2
006D0AFF  7C D3                     JL 0x006d0ad4
LAB_006d0b01:
006D0B01  85 F6                     TEST ESI,ESI
006D0B03  0F 85 AB 00 00 00         JNZ 0x006d0bb4
LAB_006d0b09:
006D0B09  B9 0A 00 00 00            MOV ECX,0xa
006D0B0E  33 C0                     XOR EAX,EAX
006D0B10  8D BD E4 FE FF FF         LEA EDI,[EBP + 0xfffffee4]
006D0B16  F3 AB                     STOSD.REP ES:EDI
006D0B18  C7 85 E4 FE FF FF 28 00 00 00  MOV dword ptr [EBP + 0xfffffee4],0x28
006D0B22  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
006D0B28  89 85 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EAX
006D0B2E  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
006D0B34  F7 D9                     NEG ECX
006D0B36  89 8D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],ECX
006D0B3C  66 C7 85 F0 FE FF FF 01 00  MOV word ptr [EBP + 0xfffffef0],0x1
006D0B45  66 C7 85 F2 FE FF FF 08 00  MOV word ptr [EBP + 0xfffffef2],0x8
006D0B4E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D0B55  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006D0B58  52                        PUSH EDX
006D0B59  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D0B5C  50                        PUSH EAX
006D0B5D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D0B60  51                        PUSH ECX
006D0B61  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D0B64  52                        PUSH EDX
006D0B65  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D0B68  50                        PUSH EAX
006D0B69  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0B6C  51                        PUSH ECX
006D0B6D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D0B70  52                        PUSH EDX
006D0B71  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D0B74  50                        PUSH EAX
006D0B75  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
006D0B7B  51                        PUSH ECX
006D0B7C  8D 95 E4 FE FF FF         LEA EDX,[EBP + 0xfffffee4]
006D0B82  52                        PUSH EDX
006D0B83  E8 68 4A FE FF            CALL 0x006b55f0
006D0B88  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D0B8F  EB 18                     JMP 0x006d0ba9
LAB_006d0ba9:
006D0BA9  8B 03                     MOV EAX,dword ptr [EBX]
006D0BAB  6A 00                     PUSH 0x0
006D0BAD  53                        PUSH EBX
006D0BAE  FF 90 80 00 00 00         CALL dword ptr [EAX + 0x80]
LAB_006d0bb4:
006D0BB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D0BB7  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D0BBE  0F 84 C7 00 00 00         JZ 0x006d0c8b
006D0BC4  05 F0 04 00 00            ADD EAX,0x4f0
006D0BC9  50                        PUSH EAX
006D0BCA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D0BD0  8B C6                     MOV EAX,ESI
006D0BD2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0BD5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0BDC  5F                        POP EDI
006D0BDD  5E                        POP ESI
006D0BDE  5B                        POP EBX
006D0BDF  8B E5                     MOV ESP,EBP
006D0BE1  5D                        POP EBP
006D0BE2  C2 28 00                  RET 0x28
LAB_006d0be5:
006D0BE5  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006D0BEB  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
006D0BEE  8D 55 90                  LEA EDX,[EBP + -0x70]
006D0BF1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D0BF7  8D 45 94                  LEA EAX,[EBP + -0x6c]
006D0BFA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D0BFD  51                        PUSH ECX
006D0BFE  68 21 DA 72 00            PUSH 0x72da21
006D0C03  6A 02                     PUSH 0x2
006D0C05  50                        PUSH EAX
006D0C06  E8 E5 CB 05 00            CALL 0x0072d7f0
006D0C0B  83 C4 10                  ADD ESP,0x10
006D0C0E  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D0C11  85 C0                     TEST EAX,EAX
006D0C13  75 44                     JNZ 0x006d0c59
006D0C15  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006D0C18  52                        PUSH EDX
006D0C19  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D0C1C  50                        PUSH EAX
006D0C1D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D0C20  57                        PUSH EDI
006D0C21  E8 0A 3A FF FF            CALL 0x006c4630
006D0C26  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D0C29  51                        PUSH ECX
006D0C2A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006D0C2D  52                        PUSH EDX
006D0C2E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D0C31  50                        PUSH EAX
006D0C32  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D0C35  51                        PUSH ECX
006D0C36  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D0C39  52                        PUSH EDX
006D0C3A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D0C3D  50                        PUSH EAX
006D0C3E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D0C41  51                        PUSH ECX
006D0C42  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D0C45  52                        PUSH EDX
006D0C46  57                        PUSH EDI
006D0C47  E8 84 36 FE FF            CALL 0x006b42d0
006D0C4C  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006D0C4F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006D0C54  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006D0C57  EB 11                     JMP 0x006d0c6a
LAB_006d0c59:
006D0C59  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006D0C5C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006D0C62  8B F0                     MOV ESI,EAX
006D0C64  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006D0C67  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006d0c6a:
006D0C6A  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006D0C6D  52                        PUSH EDX
006D0C6E  57                        PUSH EDI
006D0C6F  E8 6C 38 FF FF            CALL 0x006c44e0
006D0C74  85 F6                     TEST ESI,ESI
006D0C76  74 13                     JZ 0x006d0c8b
006D0C78  6A 1F                     PUSH 0x1f
006D0C7A  68 CC E1 7E 00            PUSH 0x7ee1cc
006D0C7F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D0C84  50                        PUSH EAX
006D0C85  56                        PUSH ESI
006D0C86  E8 B5 51 FD FF            CALL 0x006a5e40
LAB_006d0c8b:
006D0C8B  8B C6                     MOV EAX,ESI
006D0C8D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0C90  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0C97  5F                        POP EDI
006D0C98  5E                        POP ESI
006D0C99  5B                        POP EBX
006D0C9A  8B E5                     MOV ESP,EBP
006D0C9C  5D                        POP EBP
006D0C9D  C2 28 00                  RET 0x28
LAB_006d0ca0:
006D0CA0  33 C0                     XOR EAX,EAX
006D0CA2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0CA5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0CAC  5F                        POP EDI
006D0CAD  5E                        POP ESI
006D0CAE  5B                        POP EBX
006D0CAF  8B E5                     MOV ESP,EBP
006D0CB1  5D                        POP EBP
006D0CB2  C2 28 00                  RET 0x28
