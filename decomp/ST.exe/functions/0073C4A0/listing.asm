FUN_0073c4a0:
0073C4A0  55                        PUSH EBP
0073C4A1  8B EC                     MOV EBP,ESP
LAB_0073c4a3:
0073C4A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073C4A6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C4A9  83 E9 01                  SUB ECX,0x1
0073C4AC  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0073C4AF  85 C0                     TEST EAX,EAX
0073C4B1  7E 20                     JLE 0x0073c4d3
0073C4B3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073C4B6  52                        PUSH EDX
0073C4B7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073C4BA  50                        PUSH EAX
0073C4BB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C4BE  51                        PUSH ECX
0073C4BF  E8 5C FF FF FF            CALL 0x0073c420
0073C4C4  83 C4 0C                  ADD ESP,0xc
0073C4C7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073C4CA  83 3A FF                  CMP dword ptr [EDX],-0x1
0073C4CD  75 02                     JNZ 0x0073c4d1
0073C4CF  EB 02                     JMP 0x0073c4d3
LAB_0073c4d1:
0073C4D1  EB D0                     JMP 0x0073c4a3
LAB_0073c4d3:
0073C4D3  5D                        POP EBP
0073C4D4  C3                        RET
