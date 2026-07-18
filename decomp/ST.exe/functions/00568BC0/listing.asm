FUN_00568bc0:
00568BC0  55                        PUSH EBP
00568BC1  8B EC                     MOV EBP,ESP
00568BC3  83 EC 48                  SUB ESP,0x48
00568BC6  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
00568BCC  56                        PUSH ESI
00568BCD  85 C0                     TEST EAX,EAX
00568BCF  74 56                     JZ 0x00568c27
00568BD1  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00568BD6  8D 55 BC                  LEA EDX,[EBP + -0x44]
00568BD9  8D 4D B8                  LEA ECX,[EBP + -0x48]
00568BDC  6A 00                     PUSH 0x0
00568BDE  52                        PUSH EDX
00568BDF  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00568BE2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568BE8  E8 03 4C 1C 00            CALL 0x0072d7f0
00568BED  83 C4 08                  ADD ESP,0x8
00568BF0  85 C0                     TEST EAX,EAX
00568BF2  75 2A                     JNZ 0x00568c1e
00568BF4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00568BF7  50                        PUSH EAX
00568BF8  8D 45 FC                  LEA EAX,[EBP + -0x4]
00568BFB  50                        PUSH EAX
00568BFC  56                        PUSH ESI
00568BFD  E8 FE 92 15 00            CALL 0x006c1f00
00568C02  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00568C06  75 06                     JNZ 0x00568c0e
00568C08  56                        PUSH ESI
00568C09  E8 92 8F 15 00            CALL 0x006c1ba0
LAB_00568c0e:
00568C0E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568C11  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568C17  5E                        POP ESI
00568C18  8B E5                     MOV ESP,EBP
00568C1A  5D                        POP EBP
00568C1B  C2 04 00                  RET 0x4
LAB_00568c1e:
00568C1E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00568C21  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00568c27:
00568C27  5E                        POP ESI
00568C28  8B E5                     MOV ESP,EBP
00568C2A  5D                        POP EBP
00568C2B  C2 04 00                  RET 0x4
