FUN_005a2d70:
005A2D70  55                        PUSH EBP
005A2D71  8B EC                     MOV EBP,ESP
005A2D73  83 EC 78                  SUB ESP,0x78
005A2D76  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A2D7C  53                        PUSH EBX
005A2D7D  56                        PUSH ESI
005A2D7E  3C 06                     CMP AL,0x6
005A2D80  57                        PUSH EDI
005A2D81  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A2D84  0F 85 D9 01 00 00         JNZ 0x005a2f63
005A2D8A  33 DB                     XOR EBX,EBX
005A2D8C  8D 55 8C                  LEA EDX,[EBP + -0x74]
005A2D8F  88 99 60 1A 00 00         MOV byte ptr [ECX + 0x1a60],BL
005A2D95  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A2D9A  8D 4D 88                  LEA ECX,[EBP + -0x78]
005A2D9D  53                        PUSH EBX
005A2D9E  52                        PUSH EDX
005A2D9F  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
005A2DA2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2DA8  E8 43 AA 18 00            CALL 0x0072d7f0
005A2DAD  8B F0                     MOV ESI,EAX
005A2DAF  83 C4 08                  ADD ESP,0x8
005A2DB2  3B F3                     CMP ESI,EBX
005A2DB4  0F 85 6D 01 00 00         JNZ 0x005a2f27
005A2DBA  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A2DC0  3B F3                     CMP ESI,EBX
005A2DC2  74 4B                     JZ 0x005a2e0f
005A2DC4  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A2DCA  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A2DD0  50                        PUSH EAX
005A2DD1  51                        PUSH ECX
005A2DD2  53                        PUSH EBX
005A2DD3  8B CE                     MOV ECX,ESI
005A2DD5  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A2DDC  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A2DE5  E8 94 22 E6 FF            CALL 0x0040507e
005A2DEA  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A2DF0  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A2DF6  52                        PUSH EDX
005A2DF7  50                        PUSH EAX
005A2DF8  8B CE                     MOV ECX,ESI
005A2DFA  E8 1F F6 E5 FF            CALL 0x0040241e
005A2DFF  88 9E D2 00 00 00         MOV byte ptr [ESI + 0xd2],BL
005A2E05  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a2e0f:
005A2E0F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A2E15  68 F3 00 00 00            PUSH 0xf3
005A2E1A  68 24 01 00 00            PUSH 0x124
005A2E1F  6A 5E                     PUSH 0x5e
005A2E21  68 E9 01 00 00            PUSH 0x1e9
005A2E26  51                        PUSH ECX
005A2E27  E8 54 31 11 00            CALL 0x006b5f80
005A2E2C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A2E2F  8B 96 9A 1E 00 00         MOV EDX,dword ptr [ESI + 0x1e9a]
005A2E35  52                        PUSH EDX
005A2E36  6A 01                     PUSH 0x1
005A2E38  68 F3 00 00 00            PUSH 0xf3
005A2E3D  68 24 01 00 00            PUSH 0x124
005A2E42  53                        PUSH EBX
005A2E43  53                        PUSH EBX
005A2E44  6A 5E                     PUSH 0x5e
005A2E46  68 E9 01 00 00            PUSH 0x1e9
005A2E4B  E8 48 F4 E5 FF            CALL 0x00402298
005A2E50  8B 86 A6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ea6]
005A2E56  83 C4 20                  ADD ESP,0x20
005A2E59  8D 4D CC                  LEA ECX,[EBP + -0x34]
005A2E5C  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
005A2E5F  8B 96 A6 1E 00 00         MOV EDX,dword ptr [ESI + 0x1ea6]
005A2E65  51                        PUSH ECX
005A2E66  52                        PUSH EDX
005A2E67  C6 45 F9 01               MOV byte ptr [EBP + -0x7],0x1
005A2E6B  E8 50 B3 10 00            CALL 0x006ae1c0
005A2E70  8B 86 A6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ea6]
005A2E76  8B 96 20 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b20]
005A2E7C  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005A2E83  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005A2E86  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005A2E89  57                        PUSH EDI
005A2E8A  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005A2E8D  52                        PUSH EDX
005A2E8E  6A 02                     PUSH 0x2
005A2E90  8B CE                     MOV ECX,ESI
005A2E92  66 C7 46 35 01 00         MOV word ptr [ESI + 0x35],0x1
005A2E98  E8 E3 31 14 00            CALL 0x006e6080
005A2E9D  8B 86 A6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ea6]
005A2EA3  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005A2EAA  39 58 0C                  CMP dword ptr [EAX + 0xc],EBX
005A2EAD  74 0F                     JZ 0x005a2ebe
005A2EAF  39 9E 6B 1A 00 00         CMP dword ptr [ESI + 0x1a6b],EBX
005A2EB5  74 07                     JZ 0x005a2ebe
005A2EB7  B8 01 00 00 00            MOV EAX,0x1
005A2EBC  EB 02                     JMP 0x005a2ec0
LAB_005a2ebe:
005A2EBE  33 C0                     XOR EAX,EAX
LAB_005a2ec0:
005A2EC0  8B 8E 20 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b20]
005A2EC6  57                        PUSH EDI
005A2EC7  51                        PUSH ECX
005A2EC8  6A 02                     PUSH 0x2
005A2ECA  8B CE                     MOV ECX,ESI
005A2ECC  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005A2ECF  E8 AC 31 14 00            CALL 0x006e6080
005A2ED4  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
005A2EDA  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005A2EE1  3B C3                     CMP EAX,EBX
005A2EE3  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005A2EE6  74 0B                     JZ 0x005a2ef3
005A2EE8  57                        PUSH EDI
005A2EE9  50                        PUSH EAX
005A2EEA  6A 02                     PUSH 0x2
005A2EEC  8B CE                     MOV ECX,ESI
005A2EEE  E8 8D 31 14 00            CALL 0x006e6080
LAB_005a2ef3:
005A2EF3  8B 86 18 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b18]
005A2EF9  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005A2F00  3B C3                     CMP EAX,EBX
005A2F02  74 13                     JZ 0x005a2f17
005A2F04  39 9E 6B 1A 00 00         CMP dword ptr [ESI + 0x1a6b],EBX
005A2F0A  74 0B                     JZ 0x005a2f17
005A2F0C  57                        PUSH EDI
005A2F0D  50                        PUSH EAX
005A2F0E  6A 02                     PUSH 0x2
005A2F10  8B CE                     MOV ECX,ESI
005A2F12  E8 69 31 14 00            CALL 0x006e6080
LAB_005a2f17:
005A2F17  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
005A2F1A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A2F20  5F                        POP EDI
005A2F21  5E                        POP ESI
005A2F22  5B                        POP EBX
005A2F23  8B E5                     MOV ESP,EBP
005A2F25  5D                        POP EBP
005A2F26  C3                        RET
LAB_005a2f27:
005A2F27  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
005A2F2A  68 20 C5 7C 00            PUSH 0x7cc520
005A2F2F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A2F34  56                        PUSH ESI
005A2F35  53                        PUSH EBX
005A2F36  68 7D 0A 00 00            PUSH 0xa7d
005A2F3B  68 70 BF 7C 00            PUSH 0x7cbf70
005A2F40  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A2F45  E8 86 A5 10 00            CALL 0x006ad4d0
005A2F4A  83 C4 18                  ADD ESP,0x18
005A2F4D  85 C0                     TEST EAX,EAX
005A2F4F  74 01                     JZ 0x005a2f52
005A2F51  CC                        INT3
LAB_005a2f52:
005A2F52  68 7D 0A 00 00            PUSH 0xa7d
005A2F57  68 70 BF 7C 00            PUSH 0x7cbf70
005A2F5C  53                        PUSH EBX
005A2F5D  56                        PUSH ESI
005A2F5E  E8 DD 2E 10 00            CALL 0x006a5e40
LAB_005a2f63:
005A2F63  5F                        POP EDI
005A2F64  5E                        POP ESI
005A2F65  5B                        POP EBX
005A2F66  8B E5                     MOV ESP,EBP
005A2F68  5D                        POP EBP
005A2F69  C3                        RET
