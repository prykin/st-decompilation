FUN_006eb540:
006EB540  55                        PUSH EBP
006EB541  8B EC                     MOV EBP,ESP
006EB543  56                        PUSH ESI
006EB544  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EB547  6A 00                     PUSH 0x0
006EB549  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006EB54C  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
006EB54F  50                        PUSH EAX
006EB550  8B 08                     MOV ECX,dword ptr [EAX]
006EB552  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006EB558  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006EB55B  52                        PUSH EDX
006EB55C  E8 1F 04 FD FF            CALL 0x006bb980
006EB561  33 C0                     XOR EAX,EAX
006EB563  5E                        POP ESI
006EB564  5D                        POP EBP
006EB565  C2 04 00                  RET 0x4
