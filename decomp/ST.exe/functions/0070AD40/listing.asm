FUN_0070ad40:
0070AD40  55                        PUSH EBP
0070AD41  8B EC                     MOV EBP,ESP
0070AD43  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AD46  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070AD49  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070AD4C  50                        PUSH EAX
0070AD4D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070AD50  51                        PUSH ECX
0070AD51  52                        PUSH EDX
0070AD52  6A 1A                     PUSH 0x1a
0070AD54  50                        PUSH EAX
0070AD55  E8 46 F8 FF FF            CALL 0x0070a5a0
0070AD5A  83 C4 14                  ADD ESP,0x14
0070AD5D  5D                        POP EBP
0070AD5E  C3                        RET
