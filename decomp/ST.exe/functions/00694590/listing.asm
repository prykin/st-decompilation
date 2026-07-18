FUN_00694590:
00694590  8B C1                     MOV EAX,ECX
00694592  8B D0                     MOV EDX,EAX
00694594  33 C9                     XOR ECX,ECX
00694596  89 0A                     MOV dword ptr [EDX],ECX
00694598  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0069459B  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0069459E  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006945A1  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006945A4  C3                        RET
