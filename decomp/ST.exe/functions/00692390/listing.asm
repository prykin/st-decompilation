FUN_00692390:
00692390  55                        PUSH EBP
00692391  8B EC                     MOV EBP,ESP
00692393  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00692396  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00692399  50                        PUSH EAX
0069239A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069239D  52                        PUSH EDX
0069239E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006923A1  50                        PUSH EAX
006923A2  52                        PUSH EDX
006923A3  68 CC 59 7D 00            PUSH 0x7d59cc
006923A8  E8 BE 21 D7 FF            CALL 0x0040456b
006923AD  50                        PUSH EAX
006923AE  68 C0 59 7D 00            PUSH 0x7d59c0
006923B3  68 6C 3B 85 00            PUSH 0x853b6c
006923B8  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006923BE  83 C4 18                  ADD ESP,0x18
006923C1  B8 6C 3B 85 00            MOV EAX,0x853b6c
006923C6  5D                        POP EBP
006923C7  C2 10 00                  RET 0x10
