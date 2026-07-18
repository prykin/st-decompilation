FUN_006ead40:
006EAD40  55                        PUSH EBP
006EAD41  8B EC                     MOV EBP,ESP
006EAD43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006EAD46  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EAD49  89 81 34 03 00 00         MOV dword ptr [ECX + 0x334],EAX
006EAD4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EAD52  89 91 38 03 00 00         MOV dword ptr [ECX + 0x338],EDX
006EAD58  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006EAD5B  89 81 3C 03 00 00         MOV dword ptr [ECX + 0x33c],EAX
006EAD61  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006EAD64  89 91 40 03 00 00         MOV dword ptr [ECX + 0x340],EDX
006EAD6A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006EAD6D  89 81 44 03 00 00         MOV dword ptr [ECX + 0x344],EAX
006EAD73  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006EAD76  89 91 48 03 00 00         MOV dword ptr [ECX + 0x348],EDX
006EAD7C  89 81 4C 03 00 00         MOV dword ptr [ECX + 0x34c],EAX
006EAD82  5D                        POP EBP
006EAD83  C2 1C 00                  RET 0x1c
