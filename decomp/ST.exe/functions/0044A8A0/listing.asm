FUN_0044a8a0:
0044A8A0  55                        PUSH EBP
0044A8A1  8B EC                     MOV EBP,ESP
0044A8A3  83 EC 48                  SUB ESP,0x48
0044A8A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044A8AB  56                        PUSH ESI
0044A8AC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0044A8AF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0044A8B2  6A 00                     PUSH 0x0
0044A8B4  52                        PUSH EDX
0044A8B5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0044A8B8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A8BE  E8 2D 2F 2E 00            CALL 0x0072d7f0
0044A8C3  8B F0                     MOV ESI,EAX
0044A8C5  83 C4 08                  ADD ESP,0x8
0044A8C8  85 F6                     TEST ESI,ESI
0044A8CA  0F 85 AA 00 00 00         JNZ 0x0044a97a
0044A8D0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044A8D3  85 C0                     TEST EAX,EAX
0044A8D5  75 1A                     JNZ 0x0044a8f1
0044A8D7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044A8DC  68 A0 2F 00 00            PUSH 0x2fa0
0044A8E1  68 04 60 7A 00            PUSH 0x7a6004
0044A8E6  50                        PUSH EAX
0044A8E7  68 04 00 FE AF            PUSH 0xaffe0004
0044A8EC  E8 4F B5 25 00            CALL 0x006a5e40
LAB_0044a8f1:
0044A8F1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044A8F4  66 81 FE FF FF            CMP SI,0xffff
0044A8F9  74 40                     JZ 0x0044a93b
0044A8FB  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044A8FE  8B D6                     MOV EDX,ESI
0044A900  51                        PUSH ECX
0044A901  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
0044A907  81 E2 FF FF 00 00         AND EDX,0xffff
0044A90D  E8 5E 23 26 00            CALL 0x006acc70
0044A912  83 F8 FC                  CMP EAX,-0x4
0044A915  74 30                     JZ 0x0044a947
0044A917  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044A91A  85 C0                     TEST EAX,EAX
0044A91C  74 29                     JZ 0x0044a947
0044A91E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044A924  68 A2 2F 00 00            PUSH 0x2fa2
0044A929  68 04 60 7A 00            PUSH 0x7a6004
0044A92E  52                        PUSH EDX
0044A92F  68 06 00 FE AF            PUSH 0xaffe0006
0044A934  E8 07 B5 25 00            CALL 0x006a5e40
0044A939  EB 0C                     JMP 0x0044a947
LAB_0044a93b:
0044A93B  A1 64 A1 7F 00            MOV EAX,[0x007fa164]
0044A940  66 8B 70 0C               MOV SI,word ptr [EAX + 0xc]
0044A944  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_0044a947:
0044A947  A1 64 A1 7F 00            MOV EAX,[0x007fa164]
0044A94C  8B D6                     MOV EDX,ESI
0044A94E  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044A951  81 E2 FF FF 00 00         AND EDX,0xffff
0044A957  51                        PUSH ECX
0044A958  52                        PUSH EDX
0044A959  50                        PUSH EAX
0044A95A  E8 E1 37 26 00            CALL 0x006ae140
0044A95F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044A962  56                        PUSH ESI
0044A963  E8 80 6A FB FF            CALL 0x004013e8
0044A968  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0044A96B  33 C0                     XOR EAX,EAX
0044A96D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A973  5E                        POP ESI
0044A974  8B E5                     MOV ESP,EBP
0044A976  5D                        POP EBP
0044A977  C2 08 00                  RET 0x8
LAB_0044a97a:
0044A97A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0044A97D  68 44 88 7A 00            PUSH 0x7a8844
0044A982  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A987  56                        PUSH ESI
0044A988  6A 00                     PUSH 0x0
0044A98A  68 A8 2F 00 00            PUSH 0x2fa8
0044A98F  68 04 60 7A 00            PUSH 0x7a6004
0044A994  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044A99A  E8 31 2B 26 00            CALL 0x006ad4d0
0044A99F  83 C4 18                  ADD ESP,0x18
0044A9A2  85 C0                     TEST EAX,EAX
0044A9A4  74 01                     JZ 0x0044a9a7
0044A9A6  CC                        INT3
LAB_0044a9a7:
0044A9A7  68 A9 2F 00 00            PUSH 0x2fa9
0044A9AC  68 04 60 7A 00            PUSH 0x7a6004
0044A9B1  6A 00                     PUSH 0x0
0044A9B3  56                        PUSH ESI
0044A9B4  E8 87 B4 25 00            CALL 0x006a5e40
0044A9B9  83 C8 FF                  OR EAX,0xffffffff
0044A9BC  5E                        POP ESI
0044A9BD  8B E5                     MOV ESP,EBP
0044A9BF  5D                        POP EBP
0044A9C0  C2 08 00                  RET 0x8
