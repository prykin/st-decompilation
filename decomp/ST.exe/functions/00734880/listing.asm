FUN_00734880:
00734880  55                        PUSH EBP
00734881  8B EC                     MOV EBP,ESP
00734883  51                        PUSH ECX
00734884  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073488B  7E 16                     JLE 0x007348a3
0073488D  68 17 01 00 00            PUSH 0x117
00734892  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734895  50                        PUSH EAX
00734896  E8 75 BD FF FF            CALL 0x00730610
0073489B  83 C4 08                  ADD ESP,0x8
0073489E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007348A1  EB 17                     JMP 0x007348ba
LAB_007348a3:
007348A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007348A6  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007348AC  33 C0                     XOR EAX,EAX
007348AE  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007348B2  25 17 01 00 00            AND EAX,0x117
007348B7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007348ba:
007348BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007348BD  8B E5                     MOV ESP,EBP
007348BF  5D                        POP EBP
007348C0  C3                        RET
