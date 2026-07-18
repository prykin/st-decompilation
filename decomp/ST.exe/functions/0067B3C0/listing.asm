FUN_0067b3c0:
0067B3C0  55                        PUSH EBP
0067B3C1  8B EC                     MOV EBP,ESP
0067B3C3  83 EC 5C                  SUB ESP,0x5c
0067B3C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067B3C9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067B3CC  56                        PUSH ESI
0067B3CD  50                        PUSH EAX
0067B3CE  52                        PUSH EDX
0067B3CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067B3D2  E8 5A 99 D8 FF            CALL 0x00404d31
0067B3D7  85 C0                     TEST EAX,EAX
0067B3D9  7E 09                     JLE 0x0067b3e4
0067B3DB  33 C0                     XOR EAX,EAX
0067B3DD  5E                        POP ESI
0067B3DE  8B E5                     MOV ESP,EBP
0067B3E0  5D                        POP EBP
0067B3E1  C2 10 00                  RET 0x10
LAB_0067b3e4:
0067B3E4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067B3E9  8D 55 A8                  LEA EDX,[EBP + -0x58]
0067B3EC  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0067B3EF  6A 00                     PUSH 0x0
0067B3F1  52                        PUSH EDX
0067B3F2  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0067B3F5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067B3FB  E8 F0 23 0B 00            CALL 0x0072d7f0
0067B400  8B F0                     MOV ESI,EAX
0067B402  83 C4 08                  ADD ESP,0x8
0067B405  85 F6                     TEST ESI,ESI
0067B407  75 73                     JNZ 0x0067b47c
0067B409  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0067B40C  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
0067B40F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0067B412  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
0067B416  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0067B419  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
0067B41C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0067B41F  66 89 55 E9               MOV word ptr [EBP + -0x17],DX
0067B423  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
0067B427  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
0067B42A  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0067B42E  66 C7 45 ED 01 00         MOV word ptr [EBP + -0x13],0x1
0067B434  66 89 45 EB               MOV word ptr [EBP + -0x15],AX
0067B438  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0067B43B  85 C0                     TEST EAX,EAX
0067B43D  7E 04                     JLE 0x0067b443
0067B43F  66 89 45 ED               MOV word ptr [EBP + -0x13],AX
LAB_0067b443:
0067B443  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0067B446  8D 4D E8                  LEA ECX,[EBP + -0x18]
0067B449  51                        PUSH ECX
0067B44A  8B 96 A1 06 00 00         MOV EDX,dword ptr [ESI + 0x6a1]
0067B450  52                        PUSH EDX
0067B451  E8 6A 2D 03 00            CALL 0x006ae1c0
0067B456  8B 86 A1 06 00 00         MOV EAX,dword ptr [ESI + 0x6a1]
0067B45C  68 B9 29 40 00            PUSH 0x4029b9
0067B461  50                        PUSH EAX
0067B462  E8 41 95 D8 FF            CALL 0x004049a8
0067B467  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0067B46A  83 C4 08                  ADD ESP,0x8
0067B46D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067B473  33 C0                     XOR EAX,EAX
0067B475  5E                        POP ESI
0067B476  8B E5                     MOV ESP,EBP
0067B478  5D                        POP EBP
0067B479  C2 10 00                  RET 0x10
LAB_0067b47c:
0067B47C  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0067B47F  68 F4 2E 7D 00            PUSH 0x7d2ef4
0067B484  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067B489  56                        PUSH ESI
0067B48A  6A 00                     PUSH 0x0
0067B48C  68 A9 03 00 00            PUSH 0x3a9
0067B491  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067B496  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067B49C  E8 2F 20 03 00            CALL 0x006ad4d0
0067B4A1  83 C4 18                  ADD ESP,0x18
0067B4A4  85 C0                     TEST EAX,EAX
0067B4A6  74 01                     JZ 0x0067b4a9
0067B4A8  CC                        INT3
LAB_0067b4a9:
0067B4A9  68 AA 03 00 00            PUSH 0x3aa
0067B4AE  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067B4B3  6A 00                     PUSH 0x0
0067B4B5  56                        PUSH ESI
0067B4B6  E8 85 A9 02 00            CALL 0x006a5e40
0067B4BB  8B C6                     MOV EAX,ESI
0067B4BD  5E                        POP ESI
0067B4BE  8B E5                     MOV ESP,EBP
0067B4C0  5D                        POP EBP
0067B4C1  C2 10 00                  RET 0x10
