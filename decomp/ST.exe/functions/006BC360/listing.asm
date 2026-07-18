FUN_006bc360:
006BC360  55                        PUSH EBP
006BC361  8B EC                     MOV EBP,ESP
006BC363  53                        PUSH EBX
006BC364  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006BC367  56                        PUSH ESI
006BC368  53                        PUSH EBX
006BC369  E8 72 8C FF FF            CALL 0x006b4fe0
006BC36E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BC371  8B F0                     MOV ESI,EAX
006BC373  85 D2                     TEST EDX,EDX
006BC375  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006BC378  75 16                     JNZ 0x006bc390
006BC37A  68 00 04 00 00            PUSH 0x400
006BC37F  E8 EC E8 FE FF            CALL 0x006aac70
006BC384  8B D0                     MOV EDX,EAX
006BC386  85 D2                     TEST EDX,EDX
006BC388  75 06                     JNZ 0x006bc390
006BC38A  5E                        POP ESI
006BC38B  5B                        POP EBX
006BC38C  5D                        POP EBP
006BC38D  C2 0C 00                  RET 0xc
LAB_006bc390:
006BC390  57                        PUSH EDI
006BC391  B9 00 01 00 00            MOV ECX,0x100
006BC396  33 C0                     XOR EAX,EAX
006BC398  8B FA                     MOV EDI,EDX
006BC39A  F3 AB                     STOSD.REP ES:EDI
006BC39C  85 F6                     TEST ESI,ESI
006BC39E  5F                        POP EDI
006BC39F  7E 23                     JLE 0x006bc3c4
006BC3A1  8D 4A 02                  LEA ECX,[EDX + 0x2]
006BC3A4  8D 43 29                  LEA EAX,[EBX + 0x29]
LAB_006bc3a7:
006BC3A7  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
006BC3AA  83 C0 04                  ADD EAX,0x4
006BC3AD  88 59 FE                  MOV byte ptr [ECX + -0x2],BL
006BC3B0  8A 58 FC                  MOV BL,byte ptr [EAX + -0x4]
006BC3B3  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
006BC3B6  8A 58 FB                  MOV BL,byte ptr [EAX + -0x5]
006BC3B9  88 19                     MOV byte ptr [ECX],BL
006BC3BB  83 C1 04                  ADD ECX,0x4
006BC3BE  4E                        DEC ESI
006BC3BF  75 E6                     JNZ 0x006bc3a7
006BC3C1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_006bc3c4:
006BC3C4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BC3C7  85 C0                     TEST EAX,EAX
006BC3C9  74 02                     JZ 0x006bc3cd
006BC3CB  89 30                     MOV dword ptr [EAX],ESI
LAB_006bc3cd:
006BC3CD  5E                        POP ESI
006BC3CE  8B C2                     MOV EAX,EDX
006BC3D0  5B                        POP EBX
006BC3D1  5D                        POP EBP
006BC3D2  C2 0C 00                  RET 0xc
