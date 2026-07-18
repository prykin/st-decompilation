FUN_00647a60:
00647A60  55                        PUSH EBP
00647A61  8B EC                     MOV EBP,ESP
00647A63  83 EC 0C                  SUB ESP,0xc
00647A66  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00647A69  33 C0                     XOR EAX,EAX
00647A6B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00647A6E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00647A71  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00647A74  8D 55 F4                  LEA EDX,[EBP + -0xc]
00647A77  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00647A7A  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
00647A7D  8B 49 18                  MOV ECX,dword ptr [ECX + 0x18]
00647A80  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00647A83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647A86  6A 00                     PUSH 0x0
00647A88  52                        PUSH EDX
00647A89  50                        PUSH EAX
00647A8A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00647A8D  6A 00                     PUSH 0x0
00647A8F  6A 03                     PUSH 0x3
00647A91  B9 58 76 80 00            MOV ECX,0x807658
00647A96  E8 3D D1 DB FF            CALL 0x00404bd8
00647A9B  8B E5                     MOV ESP,EBP
00647A9D  5D                        POP EBP
00647A9E  C2 04 00                  RET 0x4
