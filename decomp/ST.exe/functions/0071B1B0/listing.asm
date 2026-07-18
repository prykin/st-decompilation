FUN_0071b1b0:
0071B1B0  56                        PUSH ESI
0071B1B1  8B F1                     MOV ESI,ECX
0071B1B3  E8 F8 AD FC FF            CALL 0x006e5fb0
0071B1B8  33 C0                     XOR EAX,EAX
0071B1BA  C7 06 84 E2 79 00         MOV dword ptr [ESI],0x79e284
0071B1C0  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0071B1C3  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0071B1C6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0071B1C9  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0071B1CC  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0071B1CF  89 46 64                  MOV dword ptr [ESI + 0x64],EAX
0071B1D2  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
0071B1D5  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
0071B1D8  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
0071B1DB  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
0071B1DE  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
0071B1E1  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
0071B1E4  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
0071B1E7  89 46 74                  MOV dword ptr [ESI + 0x74],EAX
0071B1EA  8D 46 78                  LEA EAX,[ESI + 0x78]
0071B1ED  C7 46 44 FF FF FF FF      MOV dword ptr [ESI + 0x44],0xffffffff
0071B1F4  50                        PUSH EAX
0071B1F5  FF 15 88 BB 85 00         CALL dword ptr [0x0085bb88]
0071B1FB  8B C6                     MOV EAX,ESI
0071B1FD  5E                        POP ESI
0071B1FE  C3                        RET
