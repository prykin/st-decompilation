FUN_0070b630:
0070B630  55                        PUSH EBP
0070B631  8B EC                     MOV EBP,ESP
0070B633  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070B636  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070B639  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070B63C  50                        PUSH EAX
0070B63D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B640  51                        PUSH ECX
0070B641  52                        PUSH EDX
0070B642  50                        PUSH EAX
0070B643  E8 E8 F2 FF FF            CALL 0x0070a930
0070B648  83 C4 10                  ADD ESP,0x10
0070B64B  5D                        POP EBP
0070B64C  C3                        RET
