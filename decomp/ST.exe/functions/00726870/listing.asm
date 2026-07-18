FUN_00726870:
00726870  55                        PUSH EBP
00726871  8B EC                     MOV EBP,ESP
00726873  57                        PUSH EDI
00726874  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00726877  8B 07                     MOV EAX,dword ptr [EDI]
00726879  85 C0                     TEST EAX,EAX
0072687B  74 38                     JZ 0x007268b5
0072687D  8B 48 11                  MOV ECX,dword ptr [EAX + 0x11]
00726880  85 C9                     TEST ECX,ECX
00726882  74 2B                     JZ 0x007268af
00726884  8B 08                     MOV ECX,dword ptr [EAX]
00726886  56                        PUSH ESI
00726887  33 F6                     XOR ESI,ESI
00726889  85 C9                     TEST ECX,ECX
0072688B  7E 16                     JLE 0x007268a3
LAB_0072688d:
0072688D  8B 48 11                  MOV ECX,dword ptr [EAX + 0x11]
00726890  8D 14 B1                  LEA EDX,[ECX + ESI*0x4]
00726893  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
00726896  52                        PUSH EDX
00726897  E8 44 B8 FC FF            CALL 0x006f20e0
0072689C  8B 07                     MOV EAX,dword ptr [EDI]
0072689E  46                        INC ESI
0072689F  3B 30                     CMP ESI,dword ptr [EAX]
007268A1  7C EA                     JL 0x0072688d
LAB_007268a3:
007268A3  8B 07                     MOV EAX,dword ptr [EDI]
007268A5  83 C0 11                  ADD EAX,0x11
007268A8  50                        PUSH EAX
007268A9  E8 B2 47 F8 FF            CALL 0x006ab060
007268AE  5E                        POP ESI
LAB_007268af:
007268AF  57                        PUSH EDI
007268B0  E8 AB 47 F8 FF            CALL 0x006ab060
LAB_007268b5:
007268B5  5F                        POP EDI
007268B6  5D                        POP EBP
007268B7  C3                        RET
