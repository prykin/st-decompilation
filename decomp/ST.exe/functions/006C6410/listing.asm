FUN_006c6410:
006C6410  55                        PUSH EBP
006C6411  8B EC                     MOV EBP,ESP
006C6413  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C6416  56                        PUSH ESI
006C6417  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C641A  8B 91 9C 04 00 00         MOV EDX,dword ptr [ECX + 0x49c]
006C6420  8B 81 A0 04 00 00         MOV EAX,dword ptr [ECX + 0x4a0]
006C6426  83 E2 FE                  AND EDX,0xfffffffe
006C6429  89 B1 A0 04 00 00         MOV dword ptr [ECX + 0x4a0],ESI
006C642F  83 FE FF                  CMP ESI,-0x1
006C6432  89 91 9C 04 00 00         MOV dword ptr [ECX + 0x49c],EDX
006C6438  5E                        POP ESI
006C6439  74 09                     JZ 0x006c6444
006C643B  83 CA 01                  OR EDX,0x1
006C643E  89 91 9C 04 00 00         MOV dword ptr [ECX + 0x49c],EDX
LAB_006c6444:
006C6444  5D                        POP EBP
006C6445  C2 08 00                  RET 0x8
