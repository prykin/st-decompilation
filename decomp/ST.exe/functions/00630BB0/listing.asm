STManRuinC::sub_00630BB0:
00630BB0  55                        PUSH EBP
00630BB1  8B EC                     MOV EBP,ESP
00630BB3  8B D1                     MOV EDX,ECX
00630BB5  56                        PUSH ESI
00630BB6  57                        PUSH EDI
00630BB7  B9 08 00 00 00            MOV ECX,0x8
00630BBC  8D 72 40                  LEA ESI,[EDX + 0x40]
00630BBF  33 C0                     XOR EAX,EAX
00630BC1  8B FE                     MOV EDI,ESI
00630BC3  F3 AB                     STOSD.REP ES:EDI
00630BC5  AA                        STOSB ES:EDI
00630BC6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00630BC9  5F                        POP EDI
00630BCA  89 06                     MOV dword ptr [ESI],EAX
00630BCC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00630BCF  C6 42 60 00               MOV byte ptr [EDX + 0x60],0x0
00630BD3  C7 42 61 FF FF FF FF      MOV dword ptr [EDX + 0x61],0xffffffff
00630BDA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00630BDD  5E                        POP ESI
00630BDE  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00630BE1  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
00630BE5  0F BF C8                  MOVSX ECX,AX
00630BE8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00630BEB  89 4A 54                  MOV dword ptr [EDX + 0x54],ECX
00630BEE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00630BF1  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00630BF4  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
00630BF8  0F BF C8                  MOVSX ECX,AX
00630BFB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00630BFE  89 4A 58                  MOV dword ptr [EDX + 0x58],ECX
00630C01  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00630C04  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00630C07  8D 0C C5 64 00 00 00      LEA ECX,[EAX*0x8 + 0x64]
00630C0E  0F BF C1                  MOVSX EAX,CX
00630C11  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00630C14  89 42 5C                  MOV dword ptr [EDX + 0x5c],EAX
00630C17  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00630C1A  89 4A 4C                  MOV dword ptr [EDX + 0x4c],ECX
00630C1D  89 42 50                  MOV dword ptr [EDX + 0x50],EAX
00630C20  5D                        POP EBP
00630C21  C2 18 00                  RET 0x18
