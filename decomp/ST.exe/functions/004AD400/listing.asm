FUN_004ad400:
004AD400  55                        PUSH EBP
004AD401  8B EC                     MOV EBP,ESP
004AD403  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004AD406  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004AD409  89 02                     MOV dword ptr [EDX],EAX
004AD40B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AD40E  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
004AD411  89 02                     MOV dword ptr [EDX],EAX
004AD413  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
004AD416  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004AD419  89 01                     MOV dword ptr [ECX],EAX
004AD41B  5D                        POP EBP
004AD41C  C2 0C 00                  RET 0xc
