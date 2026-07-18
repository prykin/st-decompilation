FUN_00734650:
00734650  55                        PUSH EBP
00734651  8B EC                     MOV EBP,ESP
00734653  51                        PUSH ECX
00734654  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073465B  7E 13                     JLE 0x00734670
0073465D  6A 01                     PUSH 0x1
0073465F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734662  50                        PUSH EAX
00734663  E8 A8 BF FF FF            CALL 0x00730610
00734668  83 C4 08                  ADD ESP,0x8
0073466B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073466E  EB 15                     JMP 0x00734685
LAB_00734670:
00734670  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734673  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
00734679  33 C0                     XOR EAX,EAX
0073467B  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
0073467F  83 E0 01                  AND EAX,0x1
00734682  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00734685:
00734685  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734688  8B E5                     MOV ESP,EBP
0073468A  5D                        POP EBP
0073468B  C3                        RET
