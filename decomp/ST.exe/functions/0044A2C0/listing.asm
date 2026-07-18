STAllPlayersC::RegisterDeposit:
0044A2C0  55                        PUSH EBP
0044A2C1  8B EC                     MOV EBP,ESP
0044A2C3  83 EC 48                  SUB ESP,0x48
0044A2C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044A2CB  56                        PUSH ESI
0044A2CC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0044A2CF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0044A2D2  6A 00                     PUSH 0x0
0044A2D4  52                        PUSH EDX
0044A2D5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0044A2D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A2DE  E8 0D 35 2E 00            CALL 0x0072d7f0
0044A2E3  8B F0                     MOV ESI,EAX
0044A2E5  83 C4 08                  ADD ESP,0x8
0044A2E8  85 F6                     TEST ESI,ESI
0044A2EA  0F 85 AA 00 00 00         JNZ 0x0044a39a
0044A2F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044A2F3  85 C0                     TEST EAX,EAX
0044A2F5  75 1A                     JNZ 0x0044a311
0044A2F7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044A2FC  68 36 2F 00 00            PUSH 0x2f36
0044A301  68 04 60 7A 00            PUSH 0x7a6004
0044A306  50                        PUSH EAX
0044A307  68 04 00 FE AF            PUSH 0xaffe0004
0044A30C  E8 2F BB 25 00            CALL 0x006a5e40
LAB_0044a311:
0044A311  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044A314  66 81 FE FF FF            CMP SI,0xffff
0044A319  74 40                     JZ 0x0044a35b
0044A31B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044A31E  8B D6                     MOV EDX,ESI
0044A320  51                        PUSH ECX
0044A321  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
0044A327  81 E2 FF FF 00 00         AND EDX,0xffff
0044A32D  E8 3E 29 26 00            CALL 0x006acc70
0044A332  83 F8 FC                  CMP EAX,-0x4
0044A335  74 30                     JZ 0x0044a367
0044A337  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044A33A  85 C0                     TEST EAX,EAX
0044A33C  74 29                     JZ 0x0044a367
0044A33E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044A344  68 38 2F 00 00            PUSH 0x2f38
0044A349  68 04 60 7A 00            PUSH 0x7a6004
0044A34E  52                        PUSH EDX
0044A34F  68 06 00 FE AF            PUSH 0xaffe0006
0044A354  E8 E7 BA 25 00            CALL 0x006a5e40
0044A359  EB 0C                     JMP 0x0044a367
LAB_0044a35b:
0044A35B  A1 5C A1 7F 00            MOV EAX,[0x007fa15c]
0044A360  66 8B 70 0C               MOV SI,word ptr [EAX + 0xc]
0044A364  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_0044a367:
0044A367  A1 5C A1 7F 00            MOV EAX,[0x007fa15c]
0044A36C  8B D6                     MOV EDX,ESI
0044A36E  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044A371  81 E2 FF FF 00 00         AND EDX,0xffff
0044A377  51                        PUSH ECX
0044A378  52                        PUSH EDX
0044A379  50                        PUSH EAX
0044A37A  E8 C1 3D 26 00            CALL 0x006ae140
0044A37F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044A382  56                        PUSH ESI
0044A383  E8 60 70 FB FF            CALL 0x004013e8
0044A388  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0044A38B  33 C0                     XOR EAX,EAX
0044A38D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A393  5E                        POP ESI
0044A394  8B E5                     MOV ESP,EBP
0044A396  5D                        POP EBP
0044A397  C2 08 00                  RET 0x8
LAB_0044a39a:
0044A39A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0044A39D  68 A0 87 7A 00            PUSH 0x7a87a0
0044A3A2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A3A7  56                        PUSH ESI
0044A3A8  6A 00                     PUSH 0x0
0044A3AA  68 3E 2F 00 00            PUSH 0x2f3e
0044A3AF  68 04 60 7A 00            PUSH 0x7a6004
0044A3B4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044A3BA  E8 11 31 26 00            CALL 0x006ad4d0
0044A3BF  83 C4 18                  ADD ESP,0x18
0044A3C2  85 C0                     TEST EAX,EAX
0044A3C4  74 01                     JZ 0x0044a3c7
0044A3C6  CC                        INT3
LAB_0044a3c7:
0044A3C7  68 3F 2F 00 00            PUSH 0x2f3f
0044A3CC  68 04 60 7A 00            PUSH 0x7a6004
0044A3D1  6A 00                     PUSH 0x0
0044A3D3  56                        PUSH ESI
0044A3D4  E8 67 BA 25 00            CALL 0x006a5e40
0044A3D9  83 C8 FF                  OR EAX,0xffffffff
0044A3DC  5E                        POP ESI
0044A3DD  8B E5                     MOV ESP,EBP
0044A3DF  5D                        POP EBP
0044A3E0  C2 08 00                  RET 0x8
