FUN_006c4350:
006C4350  55                        PUSH EBP
006C4351  8B EC                     MOV EBP,ESP
006C4353  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C4356  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C4359  85 C0                     TEST EAX,EAX
006C435B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C435E  74 0E                     JZ 0x006c436e
006C4360  F6 C4 48                  TEST AH,0x48
006C4363  75 09                     JNZ 0x006c436e
006C4365  F6 41 0C 08               TEST byte ptr [ECX + 0xc],0x8
006C4369  75 03                     JNZ 0x006c436e
006C436B  80 CC 08                  OR AH,0x8
LAB_006c436e:
006C436E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C4371  56                        PUSH ESI
006C4372  50                        PUSH EAX
006C4373  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C4376  6A FF                     PUSH -0x1
006C4378  50                        PUSH EAX
006C4379  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C437C  52                        PUSH EDX
006C437D  50                        PUSH EAX
006C437E  51                        PUSH ECX
006C437F  E8 3C 73 FF FF            CALL 0x006bb6c0
006C4384  8B F0                     MOV ESI,EAX
006C4386  85 F6                     TEST ESI,ESI
006C4388  74 1B                     JZ 0x006c43a5
006C438A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C4390  6A 10                     PUSH 0x10
006C4392  68 F4 DE 7E 00            PUSH 0x7edef4
006C4397  51                        PUSH ECX
006C4398  56                        PUSH ESI
006C4399  E8 A2 1A FE FF            CALL 0x006a5e40
006C439E  8B C6                     MOV EAX,ESI
006C43A0  5E                        POP ESI
006C43A1  5D                        POP EBP
006C43A2  C2 18 00                  RET 0x18
LAB_006c43a5:
006C43A5  33 C0                     XOR EAX,EAX
006C43A7  5E                        POP ESI
006C43A8  5D                        POP EBP
006C43A9  C2 18 00                  RET 0x18
