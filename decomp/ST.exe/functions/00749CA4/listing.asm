FUN_00749ca4:
00749CA4  55                        PUSH EBP
00749CA5  8B EC                     MOV EBP,ESP
00749CA7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00749CAA  56                        PUSH ESI
00749CAB  57                        PUSH EDI
00749CAC  6A 10                     PUSH 0x10
00749CAE  59                        POP ECX
00749CAF  BF 10 12 7A 00            MOV EDI,0x7a1210
00749CB4  8B F0                     MOV ESI,EAX
00749CB6  33 D2                     XOR EDX,EDX
00749CB8  F3 A6                     CMPSB.REPE ES:EDI,ESI
00749CBA  74 1E                     JZ 0x00749cda
00749CBC  6A 10                     PUSH 0x10
00749CBE  BF 00 12 7A 00            MOV EDI,0x7a1200
00749CC3  59                        POP ECX
00749CC4  8B F0                     MOV ESI,EAX
00749CC6  33 D2                     XOR EDX,EDX
00749CC8  F3 A6                     CMPSB.REPE ES:EDI,ESI
00749CCA  74 0E                     JZ 0x00749cda
00749CCC  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00749CCF  50                        PUSH EAX
00749CD0  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00749CD3  E8 8D D1 FF FF            CALL 0x00746e65
00749CD8  EB 0C                     JMP 0x00749ce6
LAB_00749cda:
00749CDA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00749CDD  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00749CE0  8B 11                     MOV EDX,dword ptr [ECX]
00749CE2  50                        PUSH EAX
00749CE3  FF 52 24                  CALL dword ptr [EDX + 0x24]
LAB_00749ce6:
00749CE6  5F                        POP EDI
00749CE7  5E                        POP ESI
00749CE8  5D                        POP EBP
00749CE9  C2 0C 00                  RET 0xc
