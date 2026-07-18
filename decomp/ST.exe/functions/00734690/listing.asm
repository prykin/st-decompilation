FUN_00734690:
00734690  55                        PUSH EBP
00734691  8B EC                     MOV EBP,ESP
00734693  51                        PUSH ECX
00734694  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073469B  7E 13                     JLE 0x007346b0
0073469D  6A 02                     PUSH 0x2
0073469F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007346A2  50                        PUSH EAX
007346A3  E8 68 BF FF FF            CALL 0x00730610
007346A8  83 C4 08                  ADD ESP,0x8
007346AB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007346AE  EB 15                     JMP 0x007346c5
LAB_007346b0:
007346B0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007346B3  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007346B9  33 C0                     XOR EAX,EAX
007346BB  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007346BF  83 E0 02                  AND EAX,0x2
007346C2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007346c5:
007346C5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007346C8  8B E5                     MOV ESP,EBP
007346CA  5D                        POP EBP
007346CB  C3                        RET
