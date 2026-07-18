STPlaySystemC::SaveObjData:
0054D430  55                        PUSH EBP
0054D431  8B EC                     MOV EBP,ESP
0054D433  83 EC 68                  SUB ESP,0x68
0054D436  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0054D439  56                        PUSH ESI
0054D43A  85 C0                     TEST EAX,EAX
0054D43C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054D43F  75 0C                     JNZ 0x0054d44d
0054D441  B8 FC FF FF FF            MOV EAX,0xfffffffc
0054D446  5E                        POP ESI
0054D447  8B E5                     MOV ESP,EBP
0054D449  5D                        POP EBP
0054D44A  C2 0C 00                  RET 0xc
LAB_0054d44d:
0054D44D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054D452  8D 55 9C                  LEA EDX,[EBP + -0x64]
0054D455  8D 4D 98                  LEA ECX,[EBP + -0x68]
0054D458  6A 00                     PUSH 0x0
0054D45A  52                        PUSH EDX
0054D45B  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0054D45E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D464  E8 87 03 1E 00            CALL 0x0072d7f0
0054D469  8B F0                     MOV ESI,EAX
0054D46B  83 C4 08                  ADD ESP,0x8
0054D46E  85 F6                     TEST ESI,ESI
0054D470  75 4C                     JNZ 0x0054d4be
0054D472  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054D475  8B 0D B0 83 7C 00         MOV ECX,dword ptr [0x007c83b0]
0054D47B  50                        PUSH EAX
0054D47C  51                        PUSH ECX
0054D47D  8D 55 DC                  LEA EDX,[EBP + -0x24]
0054D480  68 30 85 7C 00            PUSH 0x7c8530
0054D485  52                        PUSH EDX
0054D486  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054D48C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0054D48F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054D492  83 C4 10                  ADD ESP,0x10
0054D495  8D 55 DC                  LEA EDX,[EBP + -0x24]
0054D498  56                        PUSH ESI
0054D499  6A 02                     PUSH 0x2
0054D49B  56                        PUSH ESI
0054D49C  50                        PUSH EAX
0054D49D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054D4A0  51                        PUSH ECX
0054D4A1  52                        PUSH EDX
0054D4A2  6A 0C                     PUSH 0xc
0054D4A4  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0054D4A7  E8 44 3F 1A 00            CALL 0x006f13f0
0054D4AC  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0054D4AF  33 C0                     XOR EAX,EAX
0054D4B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D4B7  5E                        POP ESI
0054D4B8  8B E5                     MOV ESP,EBP
0054D4BA  5D                        POP EBP
0054D4BB  C2 0C 00                  RET 0xc
LAB_0054d4be:
0054D4BE  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0054D4C1  68 10 85 7C 00            PUSH 0x7c8510
0054D4C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054D4CB  56                        PUSH ESI
0054D4CC  6A 00                     PUSH 0x0
0054D4CE  68 18 02 00 00            PUSH 0x218
0054D4D3  68 30 84 7C 00            PUSH 0x7c8430
0054D4D8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054D4DE  E8 ED FF 15 00            CALL 0x006ad4d0
0054D4E3  83 C4 18                  ADD ESP,0x18
0054D4E6  85 C0                     TEST EAX,EAX
0054D4E8  74 01                     JZ 0x0054d4eb
0054D4EA  CC                        INT3
LAB_0054d4eb:
0054D4EB  68 18 02 00 00            PUSH 0x218
0054D4F0  68 30 84 7C 00            PUSH 0x7c8430
0054D4F5  6A 00                     PUSH 0x0
0054D4F7  56                        PUSH ESI
0054D4F8  E8 43 89 15 00            CALL 0x006a5e40
0054D4FD  8B C6                     MOV EAX,ESI
0054D4FF  5E                        POP ESI
0054D500  8B E5                     MOV ESP,EBP
0054D502  5D                        POP EBP
0054D503  C2 0C 00                  RET 0xc
