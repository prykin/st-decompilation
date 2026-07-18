FUN_00617ed0:
00617ED0  55                        PUSH EBP
00617ED1  8B EC                     MOV EBP,ESP
00617ED3  83 EC 14                  SUB ESP,0x14
00617ED6  53                        PUSH EBX
00617ED7  8B D9                     MOV EBX,ECX
00617ED9  8B 43 66                  MOV EAX,dword ptr [EBX + 0x66]
00617EDC  85 C0                     TEST EAX,EAX
00617EDE  75 10                     JNZ 0x00617ef0
00617EE0  6A 0A                     PUSH 0xa
00617EE2  6A 08                     PUSH 0x8
00617EE4  6A 0A                     PUSH 0xa
00617EE6  6A 00                     PUSH 0x0
00617EE8  E8 A3 63 09 00            CALL 0x006ae290
00617EED  89 43 66                  MOV dword ptr [EBX + 0x66],EAX
LAB_00617ef0:
00617EF0  8B 43 66                  MOV EAX,dword ptr [EBX + 0x66]
00617EF3  85 C0                     TEST EAX,EAX
00617EF5  74 7B                     JZ 0x00617f72
00617EF7  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00617EFA  85 C9                     TEST ECX,ECX
00617EFC  74 07                     JZ 0x00617f05
00617EFE  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
LAB_00617f05:
00617F05  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00617F08  85 C0                     TEST EAX,EAX
00617F0A  7E 66                     JLE 0x00617f72
00617F0C  56                        PUSH ESI
00617F0D  57                        PUSH EDI
00617F0E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00617F11  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00617f14:
00617F14  8B 07                     MOV EAX,dword ptr [EDI]
00617F16  8D 4D F4                  LEA ECX,[EBP + -0xc]
00617F19  51                        PUSH ECX
00617F1A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00617F20  50                        PUSH EAX
00617F21  E8 AA E3 0C 00            CALL 0x006e62d0
00617F26  83 F8 FC                  CMP EAX,-0x4
00617F29  74 39                     JZ 0x00617f64
00617F2B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00617F2E  8D 55 FE                  LEA EDX,[EBP + -0x2]
00617F31  52                        PUSH EDX
00617F32  8D 45 FC                  LEA EAX,[EBP + -0x4]
00617F35  8D 55 FA                  LEA EDX,[EBP + -0x6]
00617F38  50                        PUSH EAX
00617F39  52                        PUSH EDX
00617F3A  8B F1                     MOV ESI,ECX
00617F3C  E8 84 99 DE FF            CALL 0x004018c5
00617F41  33 C0                     XOR EAX,EAX
00617F43  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00617F46  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00617F49  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00617F4C  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00617F4F  8B 4B 66                  MOV ECX,dword ptr [EBX + 0x66]
00617F52  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00617F56  8D 45 EC                  LEA EAX,[EBP + -0x14]
00617F59  50                        PUSH EAX
00617F5A  51                        PUSH ECX
00617F5B  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
00617F5F  E8 5C 62 09 00            CALL 0x006ae1c0
LAB_00617f64:
00617F64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00617F67  83 C7 04                  ADD EDI,0x4
00617F6A  48                        DEC EAX
00617F6B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00617F6E  75 A4                     JNZ 0x00617f14
00617F70  5F                        POP EDI
00617F71  5E                        POP ESI
LAB_00617f72:
00617F72  5B                        POP EBX
00617F73  8B E5                     MOV ESP,EBP
00617F75  5D                        POP EBP
00617F76  C2 08 00                  RET 0x8
