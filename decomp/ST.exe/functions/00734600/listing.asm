FUN_00734600:
00734600  55                        PUSH EBP
00734601  8B EC                     MOV EBP,ESP
00734603  51                        PUSH ECX
00734604  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073460B  7E 16                     JLE 0x00734623
0073460D  68 03 01 00 00            PUSH 0x103
00734612  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734615  50                        PUSH EAX
00734616  E8 F5 BF FF FF            CALL 0x00730610
0073461B  83 C4 08                  ADD ESP,0x8
0073461E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734621  EB 17                     JMP 0x0073463a
LAB_00734623:
00734623  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734626  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
0073462C  33 C0                     XOR EAX,EAX
0073462E  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00734632  25 03 01 00 00            AND EAX,0x103
00734637  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073463a:
0073463A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073463D  8B E5                     MOV ESP,EBP
0073463F  5D                        POP EBP
00734640  C3                        RET
