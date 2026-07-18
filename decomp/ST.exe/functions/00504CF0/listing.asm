CPanelTy::PaintNameResSI:
00504CF0  55                        PUSH EBP
00504CF1  8B EC                     MOV EBP,ESP
00504CF3  83 EC 48                  SUB ESP,0x48
00504CF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00504CFB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00504CFE  56                        PUSH ESI
00504CFF  8D 55 BC                  LEA EDX,[EBP + -0x44]
00504D02  8D 4D B8                  LEA ECX,[EBP + -0x48]
00504D05  6A 00                     PUSH 0x0
00504D07  52                        PUSH EDX
00504D08  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00504D0B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504D11  E8 DA 8A 22 00            CALL 0x0072d7f0
00504D16  8B F0                     MOV ESI,EAX
00504D18  83 C4 08                  ADD ESP,0x8
00504D1B  85 F6                     TEST ESI,ESI
00504D1D  0F 85 9F 00 00 00         JNZ 0x00504dc2
00504D23  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00504D26  8A 86 32 0C 00 00         MOV AL,byte ptr [ESI + 0xc32]
00504D2C  8A 8E 31 0C 00 00         MOV CL,byte ptr [ESI + 0xc31]
00504D32  50                        PUSH EAX
00504D33  51                        PUSH ECX
00504D34  E8 B7 E6 EF FF            CALL 0x004033f0
00504D39  8B 96 9A 02 00 00         MOV EDX,dword ptr [ESI + 0x29a]
00504D3F  50                        PUSH EAX
00504D40  52                        PUSH EDX
00504D41  E8 5A 66 20 00            CALL 0x0070b3a0
00504D46  50                        PUSH EAX
00504D47  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00504D4D  6A 01                     PUSH 0x1
00504D4F  6A 50                     PUSH 0x50
00504D51  6A 26                     PUSH 0x26
00504D53  50                        PUSH EAX
00504D54  E8 D0 E4 EF FF            CALL 0x00403229
00504D59  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00504D5F  83 C4 24                  ADD ESP,0x24
00504D62  6A 0B                     PUSH 0xb
00504D64  68 C3 00 00 00            PUSH 0xc3
00504D69  6A 6C                     PUSH 0x6c
00504D6B  6A 15                     PUSH 0x15
00504D6D  6A 00                     PUSH 0x0
00504D6F  51                        PUSH ECX
00504D70  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504D76  E8 15 BD 20 00            CALL 0x00710a90
00504D7B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00504D81  8A 86 32 0C 00 00         MOV AL,byte ptr [ESI + 0xc32]
00504D87  8A 8E 31 0C 00 00         MOV CL,byte ptr [ESI + 0xc31]
00504D8D  6A FF                     PUSH -0x1
00504D8F  6A FF                     PUSH -0x1
00504D91  6A 05                     PUSH 0x5
00504D93  6A FF                     PUSH -0x1
00504D95  6A FE                     PUSH -0x2
00504D97  52                        PUSH EDX
00504D98  50                        PUSH EAX
00504D99  51                        PUSH ECX
00504D9A  E8 8A FD EF FF            CALL 0x00404b29
00504D9F  83 C4 08                  ADD ESP,0x8
00504DA2  50                        PUSH EAX
00504DA3  E8 98 B3 1A 00            CALL 0x006b0140
00504DA8  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504DAE  50                        PUSH EAX
00504DAF  E8 BC CD 20 00            CALL 0x00711b70
00504DB4  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00504DB7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00504DBD  5E                        POP ESI
00504DBE  8B E5                     MOV ESP,EBP
00504DC0  5D                        POP EBP
00504DC1  C3                        RET
LAB_00504dc2:
00504DC2  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00504DC5  68 B0 27 7C 00            PUSH 0x7c27b0
00504DCA  68 CC 4C 7A 00            PUSH 0x7a4ccc
00504DCF  56                        PUSH ESI
00504DD0  6A 00                     PUSH 0x0
00504DD2  68 84 00 00 00            PUSH 0x84
00504DD7  68 00 27 7C 00            PUSH 0x7c2700
00504DDC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00504DE1  E8 EA 86 1A 00            CALL 0x006ad4d0
00504DE6  83 C4 18                  ADD ESP,0x18
00504DE9  85 C0                     TEST EAX,EAX
00504DEB  74 01                     JZ 0x00504dee
00504DED  CC                        INT3
LAB_00504dee:
00504DEE  68 84 00 00 00            PUSH 0x84
00504DF3  68 00 27 7C 00            PUSH 0x7c2700
00504DF8  6A 00                     PUSH 0x0
00504DFA  56                        PUSH ESI
00504DFB  E8 40 10 1A 00            CALL 0x006a5e40
00504E00  5E                        POP ESI
00504E01  8B E5                     MOV ESP,EBP
00504E03  5D                        POP EBP
00504E04  C3                        RET
