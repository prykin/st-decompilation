FUN_006c1390:
006C1390  55                        PUSH EBP
006C1391  8B EC                     MOV EBP,ESP
006C1393  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006C1396  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C1399  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C139C  50                        PUSH EAX
006C139D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C13A0  51                        PUSH ECX
006C13A1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C13A4  6A 00                     PUSH 0x0
006C13A6  6A 00                     PUSH 0x0
006C13A8  6A 00                     PUSH 0x0
006C13AA  6A 00                     PUSH 0x0
006C13AC  6A 00                     PUSH 0x0
006C13AE  52                        PUSH EDX
006C13AF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C13B2  50                        PUSH EAX
006C13B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C13B6  51                        PUSH ECX
006C13B7  52                        PUSH EDX
006C13B8  50                        PUSH EAX
006C13B9  E8 F2 FB FF FF            CALL 0x006c0fb0
006C13BE  5D                        POP EBP
006C13BF  C2 1C 00                  RET 0x1c
