FUN_00719790:
00719790  55                        PUSH EBP
00719791  8B EC                     MOV EBP,ESP
00719793  83 EC 14                  SUB ESP,0x14
00719796  56                        PUSH ESI
00719797  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071979A  8B 0E                     MOV ECX,dword ptr [ESI]
0071979C  85 C9                     TEST ECX,ECX
0071979E  75 0A                     JNZ 0x007197aa
007197A0  B8 01 00 00 00            MOV EAX,0x1
007197A5  5E                        POP ESI
007197A6  8B E5                     MOV ESP,EBP
007197A8  5D                        POP EBP
007197A9  C3                        RET
LAB_007197aa:
007197AA  33 C0                     XOR EAX,EAX
007197AC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007197AF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007197B2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007197B5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007197B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007197BB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007197BE  8B 10                     MOV EDX,dword ptr [EAX]
007197C0  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007197C3  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
007197C6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
007197C9  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
007197CC  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
007197CF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007197D2  8D 55 EC                  LEA EDX,[EBP + -0x14]
007197D5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007197D8  52                        PUSH EDX
007197D9  68 02 00 05 00            PUSH 0x50002
007197DE  68 42 08 00 00            PUSH 0x842
007197E3  51                        PUSH ECX
007197E4  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
007197EA  85 C0                     TEST EAX,EAX
007197EC  74 14                     JZ 0x00719802
007197EE  56                        PUSH ESI
007197EF  50                        PUSH EAX
007197F0  E8 9B 04 00 00            CALL 0x00719c90
007197F5  83 C4 08                  ADD ESP,0x8
007197F8  B8 01 00 00 00            MOV EAX,0x1
007197FD  5E                        POP ESI
007197FE  8B E5                     MOV ESP,EBP
00719800  5D                        POP EBP
00719801  C3                        RET
LAB_00719802:
00719802  33 C0                     XOR EAX,EAX
00719804  5E                        POP ESI
00719805  8B E5                     MOV ESP,EBP
00719807  5D                        POP EBP
00719808  C3                        RET
