FUN_006e4bb0:
006E4BB0  55                        PUSH EBP
006E4BB1  8B EC                     MOV EBP,ESP
006E4BB3  83 EC 20                  SUB ESP,0x20
006E4BB6  53                        PUSH EBX
006E4BB7  56                        PUSH ESI
006E4BB8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E4BBB  57                        PUSH EDI
006E4BBC  8B F9                     MOV EDI,ECX
006E4BBE  83 3E 01                  CMP dword ptr [ESI],0x1
006E4BC1  75 2C                     JNZ 0x006e4bef
006E4BC3  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E4BC6  C7 45 E8 0F 00 00 00      MOV dword ptr [EBP + -0x18],0xf
006E4BCD  C7 45 F0 09 00 00 00      MOV dword ptr [EBP + -0x10],0x9
006E4BD4  8D 55 E0                  LEA EDX,[EBP + -0x20]
006E4BD7  8B 01                     MOV EAX,dword ptr [ECX]
006E4BD9  52                        PUSH EDX
006E4BDA  FF 50 20                  CALL dword ptr [EAX + 0x20]
006E4BDD  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E4BE0  8D 45 E0                  LEA EAX,[EBP + -0x20]
006E4BE3  50                        PUSH EAX
006E4BE4  E8 87 10 00 00            CALL 0x006e5c70
006E4BE9  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_006e4bef:
006E4BEF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E4BF2  85 C0                     TEST EAX,EAX
006E4BF4  74 31                     JZ 0x006e4c27
006E4BF6  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_006e4bfd:
006E4BFD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E4C00  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006E4C03  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E4C06  3B D1                     CMP EDX,ECX
006E4C08  73 1D                     JNC 0x006e4c27
006E4C0A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E4C0D  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
006E4C10  0F AF CA                  IMUL ECX,EDX
006E4C13  8D 52 01                  LEA EDX,[EDX + 0x1]
006E4C16  03 CB                     ADD ECX,EBX
006E4C18  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006E4C1B  74 0A                     JZ 0x006e4c27
006E4C1D  51                        PUSH ECX
006E4C1E  8B CF                     MOV ECX,EDI
006E4C20  E8 8B FF FF FF            CALL 0x006e4bb0
006E4C25  EB D6                     JMP 0x006e4bfd
LAB_006e4c27:
006E4C27  5F                        POP EDI
006E4C28  5E                        POP ESI
006E4C29  5B                        POP EBX
006E4C2A  8B E5                     MOV ESP,EBP
006E4C2C  5D                        POP EBP
006E4C2D  C2 04 00                  RET 0x4
