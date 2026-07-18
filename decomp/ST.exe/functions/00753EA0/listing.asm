FUN_00753ea0:
00753EA0  55                        PUSH EBP
00753EA1  8B EC                     MOV EBP,ESP
00753EA3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00753EA6  53                        PUSH EBX
00753EA7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00753EAA  56                        PUSH ESI
00753EAB  8D 45 10                  LEA EAX,[EBP + 0x10]
00753EAE  57                        PUSH EDI
00753EAF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00753EB2  50                        PUSH EAX
00753EB3  51                        PUSH ECX
00753EB4  53                        PUSH EBX
00753EB5  57                        PUSH EDI
00753EB6  E8 D5 04 00 00            CALL 0x00754390
00753EBB  8B F0                     MOV ESI,EAX
00753EBD  85 F6                     TEST ESI,ESI
00753EBF  75 21                     JNZ 0x00753ee2
00753EC1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00753EC4  52                        PUSH EDX
00753EC5  57                        PUSH EDI
00753EC6  E8 F5 1C 00 00            CALL 0x00755bc0
00753ECB  8B F0                     MOV ESI,EAX
00753ECD  85 F6                     TEST ESI,ESI
00753ECF  75 11                     JNZ 0x00753ee2
00753ED1  50                        PUSH EAX
00753ED2  53                        PUSH EBX
00753ED3  57                        PUSH EDI
00753ED4  E8 97 1A 00 00            CALL 0x00755970
00753ED9  8B C6                     MOV EAX,ESI
00753EDB  5F                        POP EDI
00753EDC  5E                        POP ESI
00753EDD  5B                        POP EBX
00753EDE  5D                        POP EBP
00753EDF  C2 0C 00                  RET 0xc
LAB_00753ee2:
00753EE2  83 FE FC                  CMP ESI,-0x4
00753EE5  74 17                     JZ 0x00753efe
00753EE7  85 F6                     TEST ESI,ESI
00753EE9  74 13                     JZ 0x00753efe
00753EEB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00753EF0  6A 1A                     PUSH 0x1a
00753EF2  68 A0 2C 7F 00            PUSH 0x7f2ca0
00753EF7  50                        PUSH EAX
00753EF8  56                        PUSH ESI
00753EF9  E8 42 1F F5 FF            CALL 0x006a5e40
LAB_00753efe:
00753EFE  8B C6                     MOV EAX,ESI
00753F00  5F                        POP EDI
00753F01  5E                        POP ESI
00753F02  5B                        POP EBX
00753F03  5D                        POP EBP
00753F04  C2 0C 00                  RET 0xc
