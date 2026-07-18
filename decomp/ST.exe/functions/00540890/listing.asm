StartServTy::WrTextDDX:
00540890  55                        PUSH EBP
00540891  8B EC                     MOV EBP,ESP
00540893  83 EC 4C                  SUB ESP,0x4c
00540896  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054089B  53                        PUSH EBX
0054089C  56                        PUSH ESI
0054089D  57                        PUSH EDI
0054089E  8D 55 B8                  LEA EDX,[EBP + -0x48]
005408A1  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005408A4  6A 00                     PUSH 0x0
005408A6  52                        PUSH EDX
005408A7  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005408AA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005408B0  E8 3B CF 1E 00            CALL 0x0072d7f0
005408B5  83 C4 08                  ADD ESP,0x8
005408B8  85 C0                     TEST EAX,EAX
005408BA  0F 85 FF 00 00 00         JNZ 0x005409bf
005408C0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005408C3  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
005408C6  85 C0                     TEST EAX,EAX
005408C8  7F 1A                     JG 0x005408e4
005408CA  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005408CD  8B CF                     MOV ECX,EDI
005408CF  50                        PUSH EAX
005408D0  E8 9B 0A 1D 00            CALL 0x00711370
005408D5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005408D8  33 D2                     XOR EDX,EDX
005408DA  85 C9                     TEST ECX,ECX
005408DC  0F 9E C2                  SETLE DL
005408DF  4A                        DEC EDX
005408E0  23 D1                     AND EDX,ECX
005408E2  03 C2                     ADD EAX,EDX
LAB_005408e4:
005408E4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005408E7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005408EA  85 DB                     TEST EBX,EBX
005408EC  7F 1C                     JG 0x0054090a
005408EE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005408F1  8B CF                     MOV ECX,EDI
005408F3  50                        PUSH EAX
005408F4  E8 E7 0A 1D 00            CALL 0x007113e0
005408F9  8B D8                     MOV EBX,EAX
005408FB  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005408FE  33 C9                     XOR ECX,ECX
00540900  85 C0                     TEST EAX,EAX
00540902  0F 9E C1                  SETLE CL
00540905  49                        DEC ECX
00540906  23 C8                     AND ECX,EAX
00540908  03 D9                     ADD EBX,ECX
LAB_0054090a:
0054090A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0054090D  85 F6                     TEST ESI,ESI
0054090F  74 34                     JZ 0x00540945
00540911  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00540914  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00540917  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054091A  53                        PUSH EBX
0054091B  52                        PUSH EDX
0054091C  50                        PUSH EAX
0054091D  51                        PUSH ECX
0054091E  6A 00                     PUSH 0x0
00540920  56                        PUSH ESI
00540921  6A 00                     PUSH 0x0
00540923  6A 00                     PUSH 0x0
00540925  6A 00                     PUSH 0x0
00540927  6A 00                     PUSH 0x0
00540929  E8 C2 4C 17 00            CALL 0x006b55f0
0054092E  6A 00                     PUSH 0x0
00540930  6A 00                     PUSH 0x0
00540932  6A 00                     PUSH 0x0
00540934  6A 00                     PUSH 0x0
00540936  6A 00                     PUSH 0x0
00540938  50                        PUSH EAX
00540939  8B CF                     MOV ECX,EDI
0054093B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054093E  E8 4D 01 1D 00            CALL 0x00710a90
00540943  EB 19                     JMP 0x0054095e
LAB_00540945:
00540945  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00540948  6A 01                     PUSH 0x1
0054094A  53                        PUSH EBX
0054094B  52                        PUSH EDX
0054094C  6A 00                     PUSH 0x0
0054094E  6A 00                     PUSH 0x0
00540950  6A 00                     PUSH 0x0
00540952  6A 00                     PUSH 0x0
00540954  8B CF                     MOV ECX,EDI
00540956  E8 45 02 1D 00            CALL 0x00710ba0
0054095B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0054095e:
0054095E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00540961  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00540964  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00540967  6A FF                     PUSH -0x1
00540969  6A FF                     PUSH -0x1
0054096B  50                        PUSH EAX
0054096C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0054096F  51                        PUSH ECX
00540970  52                        PUSH EDX
00540971  50                        PUSH EAX
00540972  8B CF                     MOV ECX,EDI
00540974  E8 F7 11 1D 00            CALL 0x00711b70
00540979  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054097C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054097F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00540984  53                        PUSH EBX
00540985  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00540988  51                        PUSH ECX
00540989  53                        PUSH EBX
0054098A  52                        PUSH EDX
0054098B  50                        PUSH EAX
0054098C  E8 EF 55 17 00            CALL 0x006b5f80
00540991  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00540994  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00540997  F7 DE                     NEG ESI
00540999  1B F6                     SBB ESI,ESI
0054099B  56                        PUSH ESI
0054099C  51                        PUSH ECX
0054099D  6A 01                     PUSH 0x1
0054099F  53                        PUSH EBX
005409A0  52                        PUSH EDX
005409A1  E8 2E 55 EC FF            CALL 0x00405ed4
005409A6  83 C4 14                  ADD ESP,0x14
005409A9  8B CF                     MOV ECX,EDI
005409AB  E8 50 05 1D 00            CALL 0x00710f00
005409B0  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005409B3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005409B8  5F                        POP EDI
005409B9  5E                        POP ESI
005409BA  5B                        POP EBX
005409BB  8B E5                     MOV ESP,EBP
005409BD  5D                        POP EBP
005409BE  C3                        RET
LAB_005409bf:
005409BF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005409C2  68 84 7B 7C 00            PUSH 0x7c7b84
005409C7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005409CC  50                        PUSH EAX
005409CD  6A 00                     PUSH 0x0
005409CF  6A 75                     PUSH 0x75
005409D1  68 2C 7B 7C 00            PUSH 0x7c7b2c
005409D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005409DC  E8 EF CA 16 00            CALL 0x006ad4d0
005409E1  83 C4 18                  ADD ESP,0x18
005409E4  85 C0                     TEST EAX,EAX
005409E6  74 01                     JZ 0x005409e9
005409E8  CC                        INT3
LAB_005409e9:
005409E9  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
005409EC  E8 0F 05 1D 00            CALL 0x00710f00
005409F1  5F                        POP EDI
005409F2  5E                        POP ESI
005409F3  5B                        POP EBX
005409F4  8B E5                     MOV ESP,EBP
005409F6  5D                        POP EBP
005409F7  C3                        RET
