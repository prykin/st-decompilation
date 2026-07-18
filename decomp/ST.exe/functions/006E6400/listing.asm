FUN_006e6400:
006E6400  55                        PUSH EBP
006E6401  8B EC                     MOV EBP,ESP
006E6403  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E6406  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E6409  89 81 DC 03 00 00         MOV dword ptr [ECX + 0x3dc],EAX
006E640F  89 81 24 04 00 00         MOV dword ptr [ECX + 0x424],EAX
006E6415  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6418  89 91 3E 04 00 00         MOV dword ptr [ECX + 0x43e],EDX
006E641E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E6421  C7 81 18 04 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x418],0xffffffff
006E642B  85 C0                     TEST EAX,EAX
006E642D  89 91 E4 03 00 00         MOV dword ptr [ECX + 0x3e4],EDX
006E6433  C7 81 E0 03 00 00 01 00 00 00  MOV dword ptr [ECX + 0x3e0],0x1
006E643D  74 1C                     JZ 0x006e645b
006E643F  8B 10                     MOV EDX,dword ptr [EAX]
006E6441  81 C1 28 04 00 00         ADD ECX,0x428
006E6447  89 11                     MOV dword ptr [ECX],EDX
006E6449  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006E644C  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006E644F  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E6452  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006E6455  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E6458  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
LAB_006e645b:
006E645B  5D                        POP EBP
006E645C  C2 10 00                  RET 0x10
