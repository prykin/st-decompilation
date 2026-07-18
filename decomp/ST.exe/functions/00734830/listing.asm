FUN_00734830:
00734830  55                        PUSH EBP
00734831  8B EC                     MOV EBP,ESP
00734833  51                        PUSH ECX
00734834  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073483B  7E 16                     JLE 0x00734853
0073483D  68 57 01 00 00            PUSH 0x157
00734842  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734845  50                        PUSH EAX
00734846  E8 C5 BD FF FF            CALL 0x00730610
0073484B  83 C4 08                  ADD ESP,0x8
0073484E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734851  EB 17                     JMP 0x0073486a
LAB_00734853:
00734853  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734856  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
0073485C  33 C0                     XOR EAX,EAX
0073485E  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00734862  25 57 01 00 00            AND EAX,0x157
00734867  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073486a:
0073486A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073486D  8B E5                     MOV ESP,EBP
0073486F  5D                        POP EBP
00734870  C3                        RET
