FUN_00734710:
00734710  55                        PUSH EBP
00734711  8B EC                     MOV EBP,ESP
00734713  51                        PUSH ECX
00734714  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073471B  7E 16                     JLE 0x00734733
0073471D  68 80 00 00 00            PUSH 0x80
00734722  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734725  50                        PUSH EAX
00734726  E8 E5 BE FF FF            CALL 0x00730610
0073472B  83 C4 08                  ADD ESP,0x8
0073472E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734731  EB 17                     JMP 0x0073474a
LAB_00734733:
00734733  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734736  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
0073473C  33 C0                     XOR EAX,EAX
0073473E  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00734742  25 80 00 00 00            AND EAX,0x80
00734747  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073474a:
0073474A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073474D  8B E5                     MOV ESP,EBP
0073474F  5D                        POP EBP
00734750  C3                        RET
