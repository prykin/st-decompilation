FUN_006c7ea0:
006C7EA0  55                        PUSH EBP
006C7EA1  8B EC                     MOV EBP,ESP
006C7EA3  83 EC 0C                  SUB ESP,0xc
006C7EA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7EA9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C7EAC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7EAF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C7EB2  81 E2 FF 00 00 00         AND EDX,0xff
006C7EB8  8D 45 F4                  LEA EAX,[EBP + -0xc]
006C7EBB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C7EBE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C7EC1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C7EC4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C7EC7  50                        PUSH EAX
006C7EC8  68 E0 7E 6C 00            PUSH 0x6c7ee0
006C7ECD  51                        PUSH ECX
006C7ECE  52                        PUSH EDX
006C7ECF  E8 8C 03 01 00            CALL 0x006d8260
006C7ED4  8B E5                     MOV ESP,EBP
006C7ED6  5D                        POP EBP
006C7ED7  C2 14 00                  RET 0x14
