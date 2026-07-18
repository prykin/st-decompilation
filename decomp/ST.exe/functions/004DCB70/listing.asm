FUN_004dcb70:
004DCB70  33 C0                     XOR EAX,EAX
004DCB72  C7 81 D1 02 00 00 07 00 00 00  MOV dword ptr [ECX + 0x2d1],0x7
004DCB7C  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004DCB82  89 81 EC 04 00 00         MOV dword ptr [ECX + 0x4ec],EAX
004DCB88  89 81 CD 02 00 00         MOV dword ptr [ECX + 0x2cd],EAX
004DCB8E  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004DCB94  83 F8 01                  CMP EAX,0x1
004DCB97  74 05                     JZ 0x004dcb9e
004DCB99  83 F8 03                  CMP EAX,0x3
004DCB9C  75 05                     JNZ 0x004dcba3
LAB_004dcb9e:
004DCB9E  E8 1F 64 F2 FF            CALL 0x00402fc2
LAB_004dcba3:
004DCBA3  33 C0                     XOR EAX,EAX
004DCBA5  C3                        RET
