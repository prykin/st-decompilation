HelpPanelTy::ShiftControls:
00511C70  55                        PUSH EBP
00511C71  8B EC                     MOV EBP,ESP
00511C73  83 EC 48                  SUB ESP,0x48
00511C76  8B D1                     MOV EDX,ECX
00511C78  53                        PUSH EBX
00511C79  56                        PUSH ESI
00511C7A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00511C7D  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
00511C80  57                        PUSH EDI
00511C81  3B F0                     CMP ESI,EAX
00511C83  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00511C86  0F 84 FC 00 00 00         JZ 0x00511d88
00511C8C  B9 08 00 00 00            MOV ECX,0x8
00511C91  33 C0                     XOR EAX,EAX
00511C93  8D 7A 18                  LEA EDI,[EDX + 0x18]
00511C96  89 72 5C                  MOV dword ptr [EDX + 0x5c],ESI
00511C99  F3 AB                     STOSD.REP ES:EDI
00511C9B  8B 82 74 01 00 00         MOV EAX,dword ptr [EDX + 0x174]
00511CA1  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
00511CA8  85 F6                     TEST ESI,ESI
00511CAA  75 02                     JNZ 0x00511cae
00511CAC  F7 D8                     NEG EAX
LAB_00511cae:
00511CAE  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
00511CB2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00511CB7  8D 55 BC                  LEA EDX,[EBP + -0x44]
00511CBA  8D 4D B8                  LEA ECX,[EBP + -0x48]
00511CBD  6A 00                     PUSH 0x0
00511CBF  52                        PUSH EDX
00511CC0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00511CC3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511CC9  E8 22 BB 21 00            CALL 0x0072d7f0
00511CCE  8B F0                     MOV ESI,EAX
00511CD0  83 C4 08                  ADD ESP,0x8
00511CD3  85 F6                     TEST ESI,ESI
00511CD5  75 72                     JNZ 0x00511d49
00511CD7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00511CDA  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
00511CE0  85 C0                     TEST EAX,EAX
00511CE2  74 0E                     JZ 0x00511cf2
00511CE4  8D 4E 18                  LEA ECX,[ESI + 0x18]
00511CE7  51                        PUSH ECX
00511CE8  50                        PUSH EAX
00511CE9  6A 02                     PUSH 0x2
00511CEB  8B CE                     MOV ECX,ESI
00511CED  E8 8E 43 1D 00            CALL 0x006e6080
LAB_00511cf2:
00511CF2  8D BE 80 01 00 00         LEA EDI,[ESI + 0x180]
00511CF8  BB 07 00 00 00            MOV EBX,0x7
LAB_00511cfd:
00511CFD  8B 07                     MOV EAX,dword ptr [EDI]
00511CFF  85 C0                     TEST EAX,EAX
00511D01  74 0E                     JZ 0x00511d11
00511D03  8D 56 18                  LEA EDX,[ESI + 0x18]
00511D06  8B CE                     MOV ECX,ESI
00511D08  52                        PUSH EDX
00511D09  50                        PUSH EAX
00511D0A  6A 02                     PUSH 0x2
00511D0C  E8 6F 43 1D 00            CALL 0x006e6080
LAB_00511d11:
00511D11  83 C7 04                  ADD EDI,0x4
00511D14  4B                        DEC EBX
00511D15  75 E6                     JNZ 0x00511cfd
00511D17  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
00511D1D  85 C0                     TEST EAX,EAX
00511D1F  74 17                     JZ 0x00511d38
00511D21  8D 7E 18                  LEA EDI,[ESI + 0x18]
00511D24  8B CE                     MOV ECX,ESI
00511D26  57                        PUSH EDI
00511D27  50                        PUSH EAX
00511D28  6A 02                     PUSH 0x2
00511D2A  E8 51 43 1D 00            CALL 0x006e6080
00511D2F  B9 08 00 00 00            MOV ECX,0x8
00511D34  33 C0                     XOR EAX,EAX
00511D36  F3 AB                     STOSD.REP ES:EDI
LAB_00511d38:
00511D38  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00511D3B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511D40  5F                        POP EDI
00511D41  5E                        POP ESI
00511D42  5B                        POP EBX
00511D43  8B E5                     MOV ESP,EBP
00511D45  5D                        POP EBP
00511D46  C2 04 00                  RET 0x4
LAB_00511d49:
00511D49  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00511D4C  68 58 39 7C 00            PUSH 0x7c3958
00511D51  68 CC 4C 7A 00            PUSH 0x7a4ccc
00511D56  56                        PUSH ESI
00511D57  6A 00                     PUSH 0x0
00511D59  68 F2 00 00 00            PUSH 0xf2
00511D5E  68 3C 38 7C 00            PUSH 0x7c383c
00511D63  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511D69  E8 62 B7 19 00            CALL 0x006ad4d0
00511D6E  83 C4 18                  ADD ESP,0x18
00511D71  85 C0                     TEST EAX,EAX
00511D73  74 01                     JZ 0x00511d76
00511D75  CC                        INT3
LAB_00511d76:
00511D76  68 F2 00 00 00            PUSH 0xf2
00511D7B  68 3C 38 7C 00            PUSH 0x7c383c
00511D80  6A 00                     PUSH 0x0
00511D82  56                        PUSH ESI
00511D83  E8 B8 40 19 00            CALL 0x006a5e40
LAB_00511d88:
00511D88  5F                        POP EDI
00511D89  5E                        POP ESI
00511D8A  5B                        POP EBX
00511D8B  8B E5                     MOV ESP,EBP
00511D8D  5D                        POP EBP
00511D8E  C2 04 00                  RET 0x4
