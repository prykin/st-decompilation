PutDDX:
005403C0  55                        PUSH EBP
005403C1  8B EC                     MOV EBP,ESP
005403C3  83 EC 44                  SUB ESP,0x44
005403C6  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005403CB  56                        PUSH ESI
005403CC  85 C0                     TEST EAX,EAX
005403CE  0F 84 D0 00 00 00         JZ 0x005404a4
005403D4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005403D7  85 C0                     TEST EAX,EAX
005403D9  0F 84 C5 00 00 00         JZ 0x005404a4
005403DF  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005403E4  8D 55 C0                  LEA EDX,[EBP + -0x40]
005403E7  8D 4D BC                  LEA ECX,[EBP + -0x44]
005403EA  6A 00                     PUSH 0x0
005403EC  52                        PUSH EDX
005403ED  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005403F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005403F6  E8 F5 D3 1E 00            CALL 0x0072d7f0
005403FB  8B F0                     MOV ESI,EAX
005403FD  83 C4 08                  ADD ESP,0x8
00540400  85 F6                     TEST ESI,ESI
00540402  75 67                     JNZ 0x0054046b
00540404  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00540407  25 FF 00 00 00            AND EAX,0xff
0054040C  48                        DEC EAX
0054040D  74 35                     JZ 0x00540444
0054040F  83 E8 05                  SUB EAX,0x5
00540412  75 49                     JNZ 0x0054045d
00540414  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00540417  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0054041A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0054041D  51                        PUSH ECX
0054041E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00540421  52                        PUSH EDX
00540422  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00540428  56                        PUSH ESI
00540429  56                        PUSH ESI
0054042A  50                        PUSH EAX
0054042B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054042E  50                        PUSH EAX
0054042F  51                        PUSH ECX
00540430  52                        PUSH EDX
00540431  E8 AA 7E 17 00            CALL 0x006b82e0
00540436  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00540439  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054043F  5E                        POP ESI
00540440  8B E5                     MOV ESP,EBP
00540442  5D                        POP EBP
00540443  C3                        RET
LAB_00540444:
00540444  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00540447  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054044A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0054044D  6A 00                     PUSH 0x0
0054044F  50                        PUSH EAX
00540450  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00540455  51                        PUSH ECX
00540456  52                        PUSH EDX
00540457  50                        PUSH EAX
00540458  E8 E3 41 17 00            CALL 0x006b4640
LAB_0054045d:
0054045D  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00540460  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540466  5E                        POP ESI
00540467  8B E5                     MOV ESP,EBP
00540469  5D                        POP EBP
0054046A  C3                        RET
LAB_0054046b:
0054046B  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0054046E  68 54 7B 7C 00            PUSH 0x7c7b54
00540473  68 CC 4C 7A 00            PUSH 0x7a4ccc
00540478  56                        PUSH ESI
00540479  6A 00                     PUSH 0x0
0054047B  6A 14                     PUSH 0x14
0054047D  68 2C 7B 7C 00            PUSH 0x7c7b2c
00540482  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00540488  E8 43 D0 16 00            CALL 0x006ad4d0
0054048D  83 C4 18                  ADD ESP,0x18
00540490  85 C0                     TEST EAX,EAX
00540492  74 01                     JZ 0x00540495
00540494  CC                        INT3
LAB_00540495:
00540495  6A 14                     PUSH 0x14
00540497  68 2C 7B 7C 00            PUSH 0x7c7b2c
0054049C  6A 00                     PUSH 0x0
0054049E  56                        PUSH ESI
0054049F  E8 9C 59 16 00            CALL 0x006a5e40
LAB_005404a4:
005404A4  5E                        POP ESI
005404A5  8B E5                     MOV ESP,EBP
005404A7  5D                        POP EBP
005404A8  C3                        RET
