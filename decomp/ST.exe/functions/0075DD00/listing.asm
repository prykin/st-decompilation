FUN_0075dd00:
0075DD00  55                        PUSH EBP
0075DD01  8B EC                     MOV EBP,ESP
0075DD03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075DD06  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0075DD09  8B 48 68                  MOV ECX,dword ptr [EAX + 0x68]
0075DD0C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075DD0F  51                        PUSH ECX
0075DD10  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075DD13  52                        PUSH EDX
0075DD14  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075DD17  6A 00                     PUSH 0x0
0075DD19  50                        PUSH EAX
0075DD1A  8B 02                     MOV EAX,dword ptr [EDX]
0075DD1C  51                        PUSH ECX
0075DD1D  50                        PUSH EAX
0075DD1E  E8 8D C1 FF FF            CALL 0x00759eb0
0075DD23  5D                        POP EBP
0075DD24  C2 14 00                  RET 0x14
