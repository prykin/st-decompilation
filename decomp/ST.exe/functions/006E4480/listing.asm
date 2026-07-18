FUN_006e4480:
006E4480  55                        PUSH EBP
006E4481  8B EC                     MOV EBP,ESP
006E4483  53                        PUSH EBX
006E4484  8B D9                     MOV EBX,ECX
006E4486  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E4489  33 C0                     XOR EAX,EAX
006E448B  56                        PUSH ESI
006E448C  57                        PUSH EDI
006E448D  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006E4490  3B C8                     CMP ECX,EAX
006E4492  74 41                     JZ 0x006e44d5
006E4494  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E4497  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_006e449a:
006E449A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E449D  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
006E44A0  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
006E44A3  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
006E44A6  3B F1                     CMP ESI,ECX
006E44A8  73 2B                     JNC 0x006e44d5
006E44AA  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006E44AD  0F AF CE                  IMUL ECX,ESI
006E44B0  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006E44B3  8D 76 01                  LEA ESI,[ESI + 0x1]
006E44B6  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
006E44B9  74 1A                     JZ 0x006e44d5
006E44BB  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006E44BE  39 78 14                  CMP dword ptr [EAX + 0x14],EDI
006E44C1  74 0F                     JZ 0x006e44d2
006E44C3  57                        PUSH EDI
006E44C4  51                        PUSH ECX
006E44C5  8B CB                     MOV ECX,EBX
006E44C7  E8 B4 FF FF FF            CALL 0x006e4480
006E44CC  85 C0                     TEST EAX,EAX
006E44CE  75 05                     JNZ 0x006e44d5
006E44D0  EB C8                     JMP 0x006e449a
LAB_006e44d2:
006E44D2  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
LAB_006e44d5:
006E44D5  5F                        POP EDI
006E44D6  5E                        POP ESI
006E44D7  5B                        POP EBX
006E44D8  5D                        POP EBP
006E44D9  C2 08 00                  RET 0x8
