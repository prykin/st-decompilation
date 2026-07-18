FUN_0067a140:
0067A140  55                        PUSH EBP
0067A141  8B EC                     MOV EBP,ESP
0067A143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067A146  50                        PUSH EAX
0067A147  E8 64 7D D8 FF            CALL 0x00401eb0
0067A14C  85 C0                     TEST EAX,EAX
0067A14E  74 12                     JZ 0x0067a162
0067A150  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067A153  85 C9                     TEST ECX,ECX
0067A155  74 0B                     JZ 0x0067a162
0067A157  8B 10                     MOV EDX,dword ptr [EAX]
0067A159  51                        PUSH ECX
0067A15A  8B C8                     MOV ECX,EAX
0067A15C  FF 12                     CALL dword ptr [EDX]
0067A15E  5D                        POP EBP
0067A15F  C2 08 00                  RET 0x8
LAB_0067a162:
0067A162  B8 FF FF 00 00            MOV EAX,0xffff
0067A167  5D                        POP EBP
0067A168  C2 08 00                  RET 0x8
