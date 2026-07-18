FUN_00759660:
00759660  55                        PUSH EBP
00759661  8B EC                     MOV EBP,ESP
00759663  53                        PUSH EBX
00759664  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00759667  56                        PUSH ESI
00759668  57                        PUSH EDI
00759669  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075966C  83 FB 01                  CMP EBX,0x1
0075966F  8B 37                     MOV ESI,dword ptr [EDI]
00759671  74 17                     JZ 0x0075968a
00759673  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759678  68 2F 02 00 00            PUSH 0x22f
0075967D  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759682  50                        PUSH EAX
00759683  6A 0C                     PUSH 0xc
00759685  E8 B6 C7 F4 FF            CALL 0x006a5e40
LAB_0075968a:
0075968A  6A 7E                     PUSH 0x7e
0075968C  53                        PUSH EBX
0075968D  57                        PUSH EDI
0075968E  E8 FD FB FF FF            CALL 0x00759290
00759693  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00759696  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00759699  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0075969C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0075969F  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
007596A2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007596A5  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
007596AB  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
007596AE  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
007596B1  C7 40 28 00 00 00 00      MOV dword ptr [EAX + 0x28],0x0
007596B8  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
007596BB  5F                        POP EDI
007596BC  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
007596BF  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
007596C2  5E                        POP ESI
007596C3  5B                        POP EBX
007596C4  5D                        POP EBP
007596C5  C2 18 00                  RET 0x18
