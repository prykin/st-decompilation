STAllPlayersC::SetActivityToObjs:
0042D370  55                        PUSH EBP
0042D371  8B EC                     MOV EBP,ESP
0042D373  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042D376  56                        PUSH ESI
0042D377  57                        PUSH EDI
0042D378  3D 9A 01 00 00            CMP EAX,0x19a
0042D37D  8B F9                     MOV EDI,ECX
0042D37F  0F 8F 85 00 00 00         JG 0x0042d40a
0042D385  74 2B                     JZ 0x0042d3b2
0042D387  83 F8 5A                  CMP EAX,0x5a
0042D38A  7F 18                     JG 0x0042d3a4
0042D38C  74 0F                     JZ 0x0042d39d
0042D38E  85 C0                     TEST EAX,EAX
0042D390  0F 84 FC 00 00 00         JZ 0x0042d492
0042D396  83 F8 3C                  CMP EAX,0x3c
0042D399  74 17                     JZ 0x0042d3b2
0042D39B  EB 7E                     JMP 0x0042d41b
LAB_0042d39d:
0042D39D  6A 04                     PUSH 0x4
0042D39F  E9 A8 00 00 00            JMP 0x0042d44c
LAB_0042d3a4:
0042D3A4  3D 72 01 00 00            CMP EAX,0x172
0042D3A9  75 70                     JNZ 0x0042d41b
0042D3AB  6A 02                     PUSH 0x2
0042D3AD  E9 9A 00 00 00            JMP 0x0042d44c
LAB_0042d3b2:
0042D3B2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042D3B5  33 F6                     XOR ESI,ESI
0042D3B7  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042D3BA  85 C0                     TEST EAX,EAX
0042D3BC  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0042D3BF  0F 8E CD 00 00 00         JLE 0x0042d492
0042D3C5  53                        PUSH EBX
0042D3C6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0042d3c9:
0042D3C9  8D 4D 08                  LEA ECX,[EBP + 0x8]
0042D3CC  8B D6                     MOV EDX,ESI
0042D3CE  51                        PUSH ECX
0042D3CF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0042D3D2  E8 99 F8 27 00            CALL 0x006acc70
0042D3D7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042D3DA  66 3D FF FF               CMP AX,0xffff
0042D3DE  74 1B                     JZ 0x0042d3fb
0042D3E0  6A 01                     PUSH 0x1
0042D3E2  50                        PUSH EAX
0042D3E3  53                        PUSH EBX
0042D3E4  8B CF                     MOV ECX,EDI
0042D3E6  E8 CF 54 FD FF            CALL 0x004028ba
0042D3EB  85 C0                     TEST EAX,EAX
0042D3ED  74 0C                     JZ 0x0042d3fb
0042D3EF  8B 10                     MOV EDX,dword ptr [EAX]
0042D3F1  6A 01                     PUSH 0x1
0042D3F3  8B C8                     MOV ECX,EAX
0042D3F5  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
LAB_0042d3fb:
0042D3FB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042D3FE  46                        INC ESI
0042D3FF  3B F0                     CMP ESI,EAX
0042D401  7C C6                     JL 0x0042d3c9
0042D403  5B                        POP EBX
0042D404  5F                        POP EDI
0042D405  5E                        POP ESI
0042D406  5D                        POP EBP
0042D407  C2 10 00                  RET 0x10
LAB_0042d40a:
0042D40A  2D A4 01 00 00            SUB EAX,0x1a4
0042D40F  74 60                     JZ 0x0042d471
0042D411  83 E8 0A                  SUB EAX,0xa
0042D414  74 34                     JZ 0x0042d44a
0042D416  83 E8 0A                  SUB EAX,0xa
0042D419  74 2B                     JZ 0x0042d446
LAB_0042d41b:
0042D41B  68 A4 63 7A 00            PUSH 0x7a63a4
0042D420  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042D425  6A 00                     PUSH 0x0
0042D427  6A 00                     PUSH 0x0
0042D429  68 3D 04 00 00            PUSH 0x43d
0042D42E  68 04 60 7A 00            PUSH 0x7a6004
0042D433  E8 98 00 28 00            CALL 0x006ad4d0
0042D438  83 C4 18                  ADD ESP,0x18
0042D43B  85 C0                     TEST EAX,EAX
0042D43D  74 53                     JZ 0x0042d492
0042D43F  CC                        INT3
LAB_0042d446:
0042D446  6A 06                     PUSH 0x6
0042D448  EB 02                     JMP 0x0042d44c
LAB_0042d44a:
0042D44A  6A 03                     PUSH 0x3
LAB_0042d44c:
0042D44C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042D44F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042D452  50                        PUSH EAX
0042D453  51                        PUSH ECX
0042D454  8B CF                     MOV ECX,EDI
0042D456  E8 5F 54 FD FF            CALL 0x004028ba
0042D45B  85 C0                     TEST EAX,EAX
0042D45D  74 33                     JZ 0x0042d492
0042D45F  8B 10                     MOV EDX,dword ptr [EAX]
0042D461  6A 01                     PUSH 0x1
0042D463  8B C8                     MOV ECX,EAX
0042D465  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042D46B  5F                        POP EDI
0042D46C  5E                        POP ESI
0042D46D  5D                        POP EBP
0042D46E  C2 10 00                  RET 0x10
LAB_0042d471:
0042D471  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042D474  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042D477  6A 05                     PUSH 0x5
0042D479  50                        PUSH EAX
0042D47A  51                        PUSH ECX
0042D47B  8B CF                     MOV ECX,EDI
0042D47D  E8 38 54 FD FF            CALL 0x004028ba
0042D482  85 C0                     TEST EAX,EAX
0042D484  74 0C                     JZ 0x0042d492
0042D486  8B 10                     MOV EDX,dword ptr [EAX]
0042D488  6A 01                     PUSH 0x1
0042D48A  8B C8                     MOV ECX,EAX
0042D48C  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
LAB_0042d492:
0042D492  5F                        POP EDI
0042D493  5E                        POP ESI
0042D494  5D                        POP EBP
0042D495  C2 10 00                  RET 0x10
