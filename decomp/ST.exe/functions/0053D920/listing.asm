FUN_0053d920:
0053D920  55                        PUSH EBP
0053D921  8B EC                     MOV EBP,ESP
0053D923  83 EC 58                  SUB ESP,0x58
0053D926  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053D929  53                        PUSH EBX
0053D92A  56                        PUSH ESI
0053D92B  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053D92E  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0053D931  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053D938  57                        PUSH EDI
0053D939  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053D93C  8B 10                     MOV EDX,dword ptr [EAX]
0053D93E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0053D941  2B D6                     SUB EDX,ESI
0053D943  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0053D946  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053D949  85 D2                     TEST EDX,EDX
0053D94B  75 0D                     JNZ 0x0053d95a
0053D94D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0053D950  8B 51 48                  MOV EDX,dword ptr [ECX + 0x48]
0053D953  03 C2                     ADD EAX,EDX
0053D955  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053D958  EB 0B                     JMP 0x0053d965
LAB_0053d95a:
0053D95A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053D95D  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053D960  2B D0                     SUB EDX,EAX
0053D962  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0053d965:
0053D965  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0053D968  85 C0                     TEST EAX,EAX
0053D96A  0F 84 12 01 00 00         JZ 0x0053da82
0053D970  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053D975  8D 55 AC                  LEA EDX,[EBP + -0x54]
0053D978  8D 4D A8                  LEA ECX,[EBP + -0x58]
0053D97B  6A 00                     PUSH 0x0
0053D97D  52                        PUSH EDX
0053D97E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0053D981  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D987  E8 64 FE 1E 00            CALL 0x0072d7f0
0053D98C  8B F0                     MOV ESI,EAX
0053D98E  83 C4 08                  ADD ESP,0x8
0053D991  85 F6                     TEST ESI,ESI
0053D993  0F 85 B1 00 00 00         JNZ 0x0053da4a
0053D999  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0053D99C  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053D9A2  6A 01                     PUSH 0x1
0053D9A4  50                        PUSH EAX
0053D9A5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0053D9A8  50                        PUSH EAX
0053D9A9  57                        PUSH EDI
0053D9AA  E8 31 43 1B 00            CALL 0x006f1ce0
0053D9AF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0053D9B2  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0053D9B5  50                        PUSH EAX
0053D9B6  57                        PUSH EDI
0053D9B7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0053D9BA  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053D9BD  57                        PUSH EDI
0053D9BE  53                        PUSH EBX
0053D9BF  51                        PUSH ECX
0053D9C0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053D9C3  E8 61 58 EC FF            CALL 0x00403229
0053D9C8  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053D9CE  83 C4 14                  ADD ESP,0x14
0053D9D1  8D 55 FC                  LEA EDX,[EBP + -0x4]
0053D9D4  52                        PUSH EDX
0053D9D5  E8 06 47 1B 00            CALL 0x006f20e0
0053D9DA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0053D9DD  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0053D9E0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0053D9E3  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053D9E6  51                        PUSH ECX
0053D9E7  52                        PUSH EDX
0053D9E8  57                        PUSH EDI
0053D9E9  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0053D9EC  53                        PUSH EBX
0053D9ED  6A 00                     PUSH 0x0
0053D9EF  50                        PUSH EAX
0053D9F0  8B CF                     MOV ECX,EDI
0053D9F2  E8 99 30 1D 00            CALL 0x00710a90
0053D9F7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0053D9FA  51                        PUSH ECX
0053D9FB  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
0053D9FE  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0053DA04  83 C4 04                  ADD ESP,0x4
0053DA07  50                        PUSH EAX
0053DA08  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0053DA0B  6A FF                     PUSH -0x1
0053DA0D  6A FE                     PUSH -0x2
0053DA0F  52                        PUSH EDX
0053DA10  50                        PUSH EAX
0053DA11  E8 2A 27 17 00            CALL 0x006b0140
0053DA16  50                        PUSH EAX
0053DA17  8B CF                     MOV ECX,EDI
0053DA19  E8 A2 3F 1D 00            CALL 0x007119c0
0053DA1E  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053DA21  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053DA24  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0053DA27  51                        PUSH ECX
0053DA28  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053DA2E  52                        PUSH EDX
0053DA2F  6A FF                     PUSH -0x1
0053DA31  50                        PUSH EAX
0053DA32  51                        PUSH ECX
0053DA33  E8 08 5C 17 00            CALL 0x006b3640
0053DA38  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0053DA3B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053DA41  5F                        POP EDI
0053DA42  5E                        POP ESI
0053DA43  5B                        POP EBX
0053DA44  8B E5                     MOV ESP,EBP
0053DA46  5D                        POP EBP
0053DA47  C2 18 00                  RET 0x18
LAB_0053da4a:
0053DA4A  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0053DA4D  68 B0 78 7C 00            PUSH 0x7c78b0
0053DA52  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053DA57  56                        PUSH ESI
0053DA58  6A 00                     PUSH 0x0
0053DA5A  6A 3E                     PUSH 0x3e
0053DA5C  68 70 78 7C 00            PUSH 0x7c7870
0053DA61  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053DA66  E8 65 FA 16 00            CALL 0x006ad4d0
0053DA6B  83 C4 18                  ADD ESP,0x18
0053DA6E  85 C0                     TEST EAX,EAX
0053DA70  74 01                     JZ 0x0053da73
0053DA72  CC                        INT3
LAB_0053da73:
0053DA73  6A 3E                     PUSH 0x3e
0053DA75  68 70 78 7C 00            PUSH 0x7c7870
0053DA7A  6A 00                     PUSH 0x0
0053DA7C  56                        PUSH ESI
0053DA7D  E8 BE 83 16 00            CALL 0x006a5e40
LAB_0053da82:
0053DA82  5F                        POP EDI
0053DA83  5E                        POP ESI
0053DA84  5B                        POP EBX
0053DA85  8B E5                     MOV ESP,EBP
0053DA87  5D                        POP EBP
0053DA88  C2 18 00                  RET 0x18
