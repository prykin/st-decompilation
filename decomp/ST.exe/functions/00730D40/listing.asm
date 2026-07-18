FUN_00730d40:
00730D40  55                        PUSH EBP
00730D41  8B EC                     MOV EBP,ESP
00730D43  51                        PUSH ECX
00730D44  A1 D0 71 85 00            MOV EAX,[0x008571d0]
00730D49  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730D4C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730D4F  89 0D D0 71 85 00         MOV dword ptr [0x008571d0],ECX
00730D55  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730D58  8B E5                     MOV ESP,EBP
00730D5A  5D                        POP EBP
00730D5B  C3                        RET
