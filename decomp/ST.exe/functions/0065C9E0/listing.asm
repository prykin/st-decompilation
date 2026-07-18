FUN_0065c9e0:
0065C9E0  55                        PUSH EBP
0065C9E1  8B EC                     MOV EBP,ESP
0065C9E3  83 EC 48                  SUB ESP,0x48
0065C9E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065C9EB  56                        PUSH ESI
0065C9EC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0065C9EF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0065C9F2  6A 00                     PUSH 0x0
0065C9F4  52                        PUSH EDX
0065C9F5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0065C9FC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0065C9FF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065CA05  E8 E6 0D 0D 00            CALL 0x0072d7f0
0065CA0A  8B F0                     MOV ESI,EAX
0065CA0C  83 C4 08                  ADD ESP,0x8
0065CA0F  85 F6                     TEST ESI,ESI
0065CA11  75 7C                     JNZ 0x0065ca8f
0065CA13  68 9F 04 00 00            PUSH 0x49f
0065CA18  E8 F3 E1 04 00            CALL 0x006aac10
0065CA1D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065CA20  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065CA23  C7 40 01 9F 04 00 00      MOV dword ptr [EAX + 0x1],0x49f
0065CA2A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CA2D  6A 3F                     PUSH 0x3f
0065CA2F  51                        PUSH ECX
0065CA30  C6 40 05 02               MOV byte ptr [EAX + 0x5],0x2
0065CA34  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CA37  83 C2 06                  ADD EDX,0x6
0065CA3A  52                        PUSH EDX
0065CA3B  E8 00 19 0D 00            CALL 0x0072e340
0065CA40  83 C4 0C                  ADD ESP,0xc
0065CA43  6A 05                     PUSH 0x5
0065CA45  6A 05                     PUSH 0x5
0065CA47  56                        PUSH ESI
0065CA48  E8 A3 8A 05 00            CALL 0x006b54f0
0065CA4D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065CA50  6A 05                     PUSH 0x5
0065CA52  6A 1B                     PUSH 0x1b
0065CA54  6A 05                     PUSH 0x5
0065CA56  56                        PUSH ESI
0065CA57  89 81 56 04 00 00         MOV dword ptr [ECX + 0x456],EAX
0065CA5D  E8 2E 18 05 00            CALL 0x006ae290
0065CA62  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CA65  6A 0A                     PUSH 0xa
0065CA67  89 82 62 04 00 00         MOV dword ptr [EDX + 0x462],EAX
0065CA6D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CA70  05 6E 04 00 00            ADD EAX,0x46e
0065CA75  50                        PUSH EAX
0065CA76  E8 1A 88 DA FF            CALL 0x00405295
0065CA7B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0065CA7E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CA81  83 C4 08                  ADD ESP,0x8
0065CA84  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065CA8A  5E                        POP ESI
0065CA8B  8B E5                     MOV ESP,EBP
0065CA8D  5D                        POP EBP
0065CA8E  C3                        RET
LAB_0065ca8f:
0065CA8F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0065CA92  8D 45 FC                  LEA EAX,[EBP + -0x4]
0065CA95  50                        PUSH EAX
0065CA96  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065CA9C  E8 96 4A DA FF            CALL 0x00401537
0065CAA1  83 C4 04                  ADD ESP,0x4
0065CAA4  6A 21                     PUSH 0x21
0065CAA6  68 4C 2B 7D 00            PUSH 0x7d2b4c
0065CAAB  6A 00                     PUSH 0x0
0065CAAD  56                        PUSH ESI
0065CAAE  E8 8D 93 04 00            CALL 0x006a5e40
0065CAB3  33 C0                     XOR EAX,EAX
0065CAB5  5E                        POP ESI
0065CAB6  8B E5                     MOV ESP,EBP
0065CAB8  5D                        POP EBP
0065CAB9  C3                        RET
