FUN_00620da0:
00620DA0  55                        PUSH EBP
00620DA1  8B EC                     MOV EBP,ESP
00620DA3  56                        PUSH ESI
00620DA4  33 C0                     XOR EAX,EAX
00620DA6  33 D2                     XOR EDX,EDX
00620DA8  8D 71 20                  LEA ESI,[ECX + 0x20]
LAB_00620dab:
00620DAB  80 3E 00                  CMP byte ptr [ESI],0x0
00620DAE  74 0E                     JZ 0x00620dbe
00620DB0  42                        INC EDX
00620DB1  83 C6 1D                  ADD ESI,0x1d
00620DB4  83 FA 05                  CMP EDX,0x5
00620DB7  7C F2                     JL 0x00620dab
00620DB9  5E                        POP ESI
00620DBA  5D                        POP EBP
00620DBB  C2 0C 00                  RET 0xc
LAB_00620dbe:
00620DBE  8D 34 D5 00 00 00 00      LEA ESI,[EDX*0x8 + 0x0]
00620DC5  B8 01 00 00 00            MOV EAX,0x1
00620DCA  2B F2                     SUB ESI,EDX
00620DCC  03 D1                     ADD EDX,ECX
00620DCE  8D 14 B2                  LEA EDX,[EDX + ESI*0x4]
00620DD1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00620DD4  88 42 20                  MOV byte ptr [EDX + 0x20],AL
00620DD7  89 72 21                  MOV dword ptr [EDX + 0x21],ESI
00620DDA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00620DDD  89 72 25                  MOV dword ptr [EDX + 0x25],ESI
00620DE0  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00620DE3  89 72 29                  MOV dword ptr [EDX + 0x29],ESI
00620DE6  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00620DE9  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
00620DEC  D1 E6                     SHL ESI,0x1
00620DEE  89 72 2D                  MOV dword ptr [EDX + 0x2d],ESI
00620DF1  8B 35 38 2A 80 00         MOV ESI,dword ptr [0x00802a38]
00620DF7  8B B6 E4 00 00 00         MOV ESI,dword ptr [ESI + 0xe4]
00620DFD  89 72 39                  MOV dword ptr [EDX + 0x39],ESI
00620E00  C7 42 31 0F 00 00 00      MOV dword ptr [EDX + 0x31],0xf
00620E07  DB 41 1C                  FILD dword ptr [ECX + 0x1c]
00620E0A  5E                        POP ESI
00620E0B  DC 0D F0 CE 79 00         FMUL double ptr [0x0079cef0]
00620E11  DC 3D E0 CE 79 00         FDIVR double ptr [0x0079cee0]
00620E17  D9 5A 35                  FSTP float ptr [EDX + 0x35]
00620E1A  5D                        POP EBP
00620E1B  C2 0C 00                  RET 0xc
