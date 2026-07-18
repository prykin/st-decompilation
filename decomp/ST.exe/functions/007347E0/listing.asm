FUN_007347e0:
007347E0  55                        PUSH EBP
007347E1  8B EC                     MOV EBP,ESP
007347E3  51                        PUSH ECX
007347E4  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007347EB  7E 16                     JLE 0x00734803
007347ED  68 07 01 00 00            PUSH 0x107
007347F2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007347F5  50                        PUSH EAX
007347F6  E8 15 BE FF FF            CALL 0x00730610
007347FB  83 C4 08                  ADD ESP,0x8
007347FE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734801  EB 17                     JMP 0x0073481a
LAB_00734803:
00734803  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734806  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
0073480C  33 C0                     XOR EAX,EAX
0073480E  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00734812  25 07 01 00 00            AND EAX,0x107
00734817  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073481a:
0073481A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073481D  8B E5                     MOV ESP,EBP
0073481F  5D                        POP EBP
00734820  C3                        RET
