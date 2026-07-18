FUN_007348d0:
007348D0  55                        PUSH EBP
007348D1  8B EC                     MOV EBP,ESP
007348D3  51                        PUSH ECX
007348D4  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007348DB  7E 13                     JLE 0x007348f0
007348DD  6A 20                     PUSH 0x20
007348DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007348E2  50                        PUSH EAX
007348E3  E8 28 BD FF FF            CALL 0x00730610
007348E8  83 C4 08                  ADD ESP,0x8
007348EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007348EE  EB 15                     JMP 0x00734905
LAB_007348f0:
007348F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007348F3  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007348F9  33 C0                     XOR EAX,EAX
007348FB  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007348FF  83 E0 20                  AND EAX,0x20
00734902  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00734905:
00734905  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734908  8B E5                     MOV ESP,EBP
0073490A  5D                        POP EBP
0073490B  C3                        RET
