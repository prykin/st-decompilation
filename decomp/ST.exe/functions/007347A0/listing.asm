FUN_007347a0:
007347A0  55                        PUSH EBP
007347A1  8B EC                     MOV EBP,ESP
007347A3  51                        PUSH ECX
007347A4  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007347AB  7E 13                     JLE 0x007347c0
007347AD  6A 10                     PUSH 0x10
007347AF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007347B2  50                        PUSH EAX
007347B3  E8 58 BE FF FF            CALL 0x00730610
007347B8  83 C4 08                  ADD ESP,0x8
007347BB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007347BE  EB 15                     JMP 0x007347d5
LAB_007347c0:
007347C0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007347C3  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007347C9  33 C0                     XOR EAX,EAX
007347CB  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007347CF  83 E0 10                  AND EAX,0x10
007347D2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007347d5:
007347D5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007347D8  8B E5                     MOV ESP,EBP
007347DA  5D                        POP EBP
007347DB  C3                        RET
