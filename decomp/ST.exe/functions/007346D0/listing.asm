FUN_007346d0:
007346D0  55                        PUSH EBP
007346D1  8B EC                     MOV EBP,ESP
007346D3  51                        PUSH ECX
007346D4  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007346DB  7E 13                     JLE 0x007346f0
007346DD  6A 04                     PUSH 0x4
007346DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007346E2  50                        PUSH EAX
007346E3  E8 28 BF FF FF            CALL 0x00730610
007346E8  83 C4 08                  ADD ESP,0x8
007346EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007346EE  EB 15                     JMP 0x00734705
LAB_007346f0:
007346F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007346F3  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007346F9  33 C0                     XOR EAX,EAX
007346FB  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007346FF  83 E0 04                  AND EAX,0x4
00734702  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00734705:
00734705  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734708  8B E5                     MOV ESP,EBP
0073470A  5D                        POP EBP
0073470B  C3                        RET
