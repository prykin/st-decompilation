FUN_00542d80:
00542D80  55                        PUSH EBP
00542D81  8B EC                     MOV EBP,ESP
00542D83  83 EC 64                  SUB ESP,0x64
00542D86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00542D8B  56                        PUSH ESI
00542D8C  8D 55 A0                  LEA EDX,[EBP + -0x60]
00542D8F  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00542D92  6A 00                     PUSH 0x0
00542D94  52                        PUSH EDX
00542D95  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00542D98  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00542D9E  E8 4D AA 1E 00            CALL 0x0072d7f0
00542DA3  8B F0                     MOV ESI,EAX
00542DA5  83 C4 08                  ADD ESP,0x8
00542DA8  85 F6                     TEST ESI,ESI
00542DAA  0F 85 8B 00 00 00         JNZ 0x00542e3b
00542DB0  6A 34                     PUSH 0x34
00542DB2  E8 79 B7 1E 00            CALL 0x0072e530
00542DB7  83 C4 04                  ADD ESP,0x4
00542DBA  85 C0                     TEST EAX,EAX
00542DBC  74 10                     JZ 0x00542dce
00542DBE  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
00542DC4  51                        PUSH ECX
00542DC5  8B C8                     MOV ECX,EAX
00542DC7  E8 8E 19 EC FF            CALL 0x0040475a
00542DCC  EB 02                     JMP 0x00542dd0
LAB_00542dce:
00542DCE  33 C0                     XOR EAX,EAX
LAB_00542dd0:
00542DD0  A3 28 2A 80 00            MOV [0x00802a28],EAX
00542DD5  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00542DDC  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
00542DE2  8B 11                     MOV EDX,dword ptr [ECX]
00542DE4  FF 12                     CALL dword ptr [EDX]
00542DE6  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00542DEB  8B 0D 3C 16 81 00         MOV ECX,dword ptr [0x0081163c]
00542DF1  6A 00                     PUSH 0x0
00542DF3  50                        PUSH EAX
00542DF4  51                        PUSH ECX
00542DF5  B9 20 76 80 00            MOV ECX,0x807620
00542DFA  E8 61 1B 1A 00            CALL 0x006e4960
00542DFF  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
00542E05  E8 F8 EE EB FF            CALL 0x00401d02
00542E0A  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
00542E10  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
00542E17  8D 45 E0                  LEA EAX,[EBP + -0x20]
00542E1A  8B 11                     MOV EDX,dword ptr [ECX]
00542E1C  50                        PUSH EAX
00542E1D  FF 52 20                  CALL dword ptr [EDX + 0x20]
00542E20  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
00542E26  C7 41 20 01 00 00 00      MOV dword ptr [ECX + 0x20],0x1
00542E2D  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00542E30  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00542E36  5E                        POP ESI
00542E37  8B E5                     MOV ESP,EBP
00542E39  5D                        POP EBP
00542E3A  C3                        RET
LAB_00542e3b:
00542E3B  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00542E3E  68 58 7C 7C 00            PUSH 0x7c7c58
00542E43  68 CC 4C 7A 00            PUSH 0x7a4ccc
00542E48  56                        PUSH ESI
00542E49  6A 00                     PUSH 0x0
00542E4B  68 CA 00 00 00            PUSH 0xca
00542E50  68 E8 7B 7C 00            PUSH 0x7c7be8
00542E55  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00542E5A  E8 71 A6 16 00            CALL 0x006ad4d0
00542E5F  83 C4 18                  ADD ESP,0x18
00542E62  85 C0                     TEST EAX,EAX
00542E64  74 01                     JZ 0x00542e67
00542E66  CC                        INT3
LAB_00542e67:
00542E67  68 CA 00 00 00            PUSH 0xca
00542E6C  68 E8 7B 7C 00            PUSH 0x7c7be8
00542E71  6A 00                     PUSH 0x0
00542E73  56                        PUSH ESI
00542E74  E8 C7 2F 16 00            CALL 0x006a5e40
00542E79  5E                        POP ESI
00542E7A  8B E5                     MOV ESP,EBP
00542E7C  5D                        POP EBP
00542E7D  C3                        RET
