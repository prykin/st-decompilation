FUN_006774c0:
006774C0  55                        PUSH EBP
006774C1  8B EC                     MOV EBP,ESP
006774C3  83 EC 48                  SUB ESP,0x48
006774C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006774CB  56                        PUSH ESI
006774CC  8D 55 BC                  LEA EDX,[EBP + -0x44]
006774CF  8D 4D B8                  LEA ECX,[EBP + -0x48]
006774D2  6A 00                     PUSH 0x0
006774D4  52                        PUSH EDX
006774D5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006774DC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006774DF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006774E5  E8 06 63 0B 00            CALL 0x0072d7f0
006774EA  8B F0                     MOV ESI,EAX
006774EC  83 C4 08                  ADD ESP,0x8
006774EF  85 F6                     TEST ESI,ESI
006774F1  75 68                     JNZ 0x0067755b
006774F3  6A 0A                     PUSH 0xa
006774F5  6A 02                     PUSH 0x2
006774F7  6A 0A                     PUSH 0xa
006774F9  50                        PUSH EAX
006774FA  E8 91 6D 03 00            CALL 0x006ae290
006774FF  8B F0                     MOV ESI,EAX
00677501  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00677504  85 C0                     TEST EAX,EAX
00677506  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00677509  B8 52 18 40 00            MOV EAX,0x401852
0067750E  75 05                     JNZ 0x00677515
00677510  B8 90 34 40 00            MOV EAX,0x403490
LAB_00677515:
00677515  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00677518  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0067751B  6A 00                     PUSH 0x0
0067751D  56                        PUSH ESI
0067751E  50                        PUSH EAX
0067751F  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00677522  50                        PUSH EAX
00677523  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00677526  51                        PUSH ECX
00677527  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0067752A  52                        PUSH EDX
0067752B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0067752E  50                        PUSH EAX
0067752F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677532  51                        PUSH ECX
00677533  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00677536  52                        PUSH EDX
00677537  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067753A  50                        PUSH EAX
0067753B  51                        PUSH ECX
0067753C  68 FF FF FF 3F            PUSH 0x3fffffff
00677541  6A 00                     PUSH 0x0
00677543  52                        PUSH EDX
00677544  E8 AF 9D D8 FF            CALL 0x004012f8
00677549  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0067754C  83 C4 38                  ADD ESP,0x38
0067754F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00677554  8B C6                     MOV EAX,ESI
00677556  5E                        POP ESI
00677557  8B E5                     MOV ESP,EBP
00677559  5D                        POP EBP
0067755A  C3                        RET
LAB_0067755b:
0067755B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067755E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00677561  85 C0                     TEST EAX,EAX
00677563  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677569  74 06                     JZ 0x00677571
0067756B  50                        PUSH EAX
0067756C  E8 9F 6B 03 00            CALL 0x006ae110
LAB_00677571:
00677571  68 EE 02 00 00            PUSH 0x2ee
00677576  68 58 2D 7D 00            PUSH 0x7d2d58
0067757B  6A 00                     PUSH 0x0
0067757D  56                        PUSH ESI
0067757E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00677585  E8 B6 E8 02 00            CALL 0x006a5e40
0067758A  33 C0                     XOR EAX,EAX
0067758C  5E                        POP ESI
0067758D  8B E5                     MOV ESP,EBP
0067758F  5D                        POP EBP
00677590  C3                        RET
