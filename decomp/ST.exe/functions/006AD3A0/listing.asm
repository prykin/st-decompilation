FUN_006ad3a0:
006AD3A0  55                        PUSH EBP
006AD3A1  8B EC                     MOV EBP,ESP
006AD3A3  A1 B8 4E 85 00            MOV EAX,[0x00854eb8]
006AD3A8  53                        PUSH EBX
006AD3A9  56                        PUSH ESI
006AD3AA  33 F6                     XOR ESI,ESI
006AD3AC  85 C0                     TEST EAX,EAX
006AD3AE  74 03                     JZ 0x006ad3b3
006AD3B0  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
LAB_006ad3b3:
006AD3B3  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006AD3B6  F6 C7 30                  TEST BH,0x30
006AD3B9  75 03                     JNZ 0x006ad3be
006AD3BB  80 CF 10                  OR BH,0x10
LAB_006ad3be:
006AD3BE  F6 C3 F0                  TEST BL,0xf0
006AD3C1  75 03                     JNZ 0x006ad3c6
006AD3C3  83 CB 10                  OR EBX,0x10
LAB_006ad3c6:
006AD3C6  8B 0D 84 4A 85 00         MOV ECX,dword ptr [0x00854a84]
006AD3CC  81 CB 00 00 01 00         OR EBX,0x10000
006AD3D2  85 C9                     TEST ECX,ECX
006AD3D4  74 23                     JZ 0x006ad3f9
006AD3D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AD3D9  81 E3 1F DF FF FF         AND EBX,0xffffdf1f
006AD3DF  81 CB 10 10 00 00         OR EBX,0x1010
006AD3E5  53                        PUSH EBX
006AD3E6  68 DC D7 7E 00            PUSH 0x7ed7dc
006AD3EB  50                        PUSH EAX
006AD3EC  56                        PUSH ESI
006AD3ED  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
006AD3F3  5E                        POP ESI
006AD3F4  5B                        POP EBX
006AD3F5  5D                        POP EBP
006AD3F6  C2 0C 00                  RET 0xc
LAB_006ad3f9:
006AD3F9  85 C0                     TEST EAX,EAX
006AD3FB  C7 05 84 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a84],0x1
006AD405  74 76                     JZ 0x006ad47d
006AD407  F6 40 08 01               TEST byte ptr [EAX + 0x8],0x1
006AD40B  74 70                     JZ 0x006ad47d
006AD40D  68 00 01 00 00            PUSH 0x100
006AD412  6A 00                     PUSH 0x0
006AD414  68 A4 4A 85 00            PUSH 0x854aa4
006AD419  50                        PUSH EAX
006AD41A  E8 81 37 00 00            CALL 0x006b0ba0
006AD41F  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006AD425  6A 00                     PUSH 0x0
006AD427  6A 01                     PUSH 0x1
006AD429  6A 00                     PUSH 0x0
006AD42B  68 C0 4E 85 00            PUSH 0x854ec0
006AD430  51                        PUSH ECX
006AD431  E8 EA 35 00 00            CALL 0x006b0a20
006AD436  8B 15 B8 4E 85 00         MOV EDX,dword ptr [0x00854eb8]
006AD43C  6A 00                     PUSH 0x0
006AD43E  6A 01                     PUSH 0x1
006AD440  6A 04                     PUSH 0x4
006AD442  68 A0 D7 7E 00            PUSH 0x7ed7a0
006AD447  52                        PUSH EDX
006AD448  E8 D3 35 00 00            CALL 0x006b0a20
006AD44D  A1 B8 4E 85 00            MOV EAX,[0x00854eb8]
006AD452  6A 00                     PUSH 0x0
006AD454  6A 01                     PUSH 0x1
006AD456  6A 07                     PUSH 0x7
006AD458  68 A4 D7 7E 00            PUSH 0x7ed7a4
006AD45D  50                        PUSH EAX
006AD45E  E8 BD 35 00 00            CALL 0x006b0a20
006AD463  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006AD469  6A 00                     PUSH 0x0
006AD46B  6A 01                     PUSH 0x1
006AD46D  68 FF 00 00 00            PUSH 0xff
006AD472  68 A8 D7 7E 00            PUSH 0x7ed7a8
006AD477  51                        PUSH ECX
006AD478  E8 A3 35 00 00            CALL 0x006b0a20
LAB_006ad47d:
006AD47D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AD480  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AD483  53                        PUSH EBX
006AD484  52                        PUSH EDX
006AD485  50                        PUSH EAX
006AD486  56                        PUSH ESI
006AD487  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
006AD48D  8B F0                     MOV ESI,EAX
006AD48F  A1 B8 4E 85 00            MOV EAX,[0x00854eb8]
006AD494  85 C0                     TEST EAX,EAX
006AD496  74 1A                     JZ 0x006ad4b2
006AD498  F6 40 08 01               TEST byte ptr [EAX + 0x8],0x1
006AD49C  74 14                     JZ 0x006ad4b2
006AD49E  6A 00                     PUSH 0x0
006AD4A0  68 00 01 00 00            PUSH 0x100
006AD4A5  6A 00                     PUSH 0x0
006AD4A7  68 A4 4A 85 00            PUSH 0x854aa4
006AD4AC  50                        PUSH EAX
006AD4AD  E8 6E 35 00 00            CALL 0x006b0a20
LAB_006ad4b2:
006AD4B2  8B C6                     MOV EAX,ESI
006AD4B4  5E                        POP ESI
006AD4B5  C7 05 84 4A 85 00 00 00 00 00  MOV dword ptr [0x00854a84],0x0
006AD4BF  5B                        POP EBX
006AD4C0  5D                        POP EBP
006AD4C1  C2 0C 00                  RET 0xc
