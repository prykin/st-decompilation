FUN_00746bab:
00746BAB  55                        PUSH EBP
00746BAC  8B EC                     MOV EBP,ESP
00746BAE  56                        PUSH ESI
00746BAF  8D 45 14                  LEA EAX,[EBP + 0x14]
00746BB2  57                        PUSH EDI
00746BB3  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00746BB6  50                        PUSH EAX
00746BB7  68 B8 22 7A 00            PUSH 0x7a22b8
00746BBC  83 27 00                  AND dword ptr [EDI],0x0
00746BBF  6A 01                     PUSH 0x1
00746BC1  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00746BC4  68 B0 1A 7A 00            PUSH 0x7a1ab0
00746BC9  FF 15 E4 C0 85 00         CALL dword ptr [0x0085c0e4]
00746BCF  85 C0                     TEST EAX,EAX
00746BD1  7C 4B                     JL 0x00746c1e
00746BD3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00746BD6  8D 55 08                  LEA EDX,[EBP + 0x8]
00746BD9  52                        PUSH EDX
00746BDA  68 A0 1A 7A 00            PUSH 0x7a1aa0
00746BDF  8B 08                     MOV ECX,dword ptr [EAX]
00746BE1  50                        PUSH EAX
00746BE2  FF 11                     CALL dword ptr [ECX]
00746BE4  8B F0                     MOV ESI,EAX
00746BE6  85 F6                     TEST ESI,ESI
00746BE8  7D 05                     JGE 0x00746bef
00746BEA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00746BED  EB 21                     JMP 0x00746c10
LAB_00746bef:
00746BEF  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00746BF2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746BF5  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00746BF8  8B 08                     MOV ECX,dword ptr [EAX]
00746BFA  50                        PUSH EAX
00746BFB  FF 51 0C                  CALL dword ptr [ECX + 0xc]
00746BFE  8B F0                     MOV ESI,EAX
00746C00  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746C03  50                        PUSH EAX
00746C04  8B 08                     MOV ECX,dword ptr [EAX]
00746C06  FF 51 08                  CALL dword ptr [ECX + 0x8]
00746C09  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00746C0C  85 F6                     TEST ESI,ESI
00746C0E  7D 0A                     JGE 0x00746c1a
LAB_00746c10:
00746C10  8B 08                     MOV ECX,dword ptr [EAX]
00746C12  50                        PUSH EAX
00746C13  FF 51 08                  CALL dword ptr [ECX + 0x8]
00746C16  8B C6                     MOV EAX,ESI
00746C18  EB 04                     JMP 0x00746c1e
LAB_00746c1a:
00746C1A  89 07                     MOV dword ptr [EDI],EAX
00746C1C  33 C0                     XOR EAX,EAX
LAB_00746c1e:
00746C1E  5F                        POP EDI
00746C1F  5E                        POP ESI
00746C20  5D                        POP EBP
00746C21  C2 10 00                  RET 0x10
