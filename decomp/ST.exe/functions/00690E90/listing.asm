FUN_00690e90:
00690E90  55                        PUSH EBP
00690E91  8B EC                     MOV EBP,ESP
00690E93  83 EC 48                  SUB ESP,0x48
00690E96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00690E9B  56                        PUSH ESI
00690E9C  8D 55 BC                  LEA EDX,[EBP + -0x44]
00690E9F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00690EA2  6A 00                     PUSH 0x0
00690EA4  52                        PUSH EDX
00690EA5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00690EAC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00690EAF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00690EB5  E8 36 C9 09 00            CALL 0x0072d7f0
00690EBA  8B F0                     MOV ESI,EAX
00690EBC  83 C4 08                  ADD ESP,0x8
00690EBF  85 F6                     TEST ESI,ESI
00690EC1  0F 85 82 00 00 00         JNZ 0x00690f49
00690EC7  68 0C 01 00 00            PUSH 0x10c
00690ECC  E8 3F 9D 01 00            CALL 0x006aac10
00690ED1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00690ED4  C7 00 8E 03 00 00         MOV dword ptr [EAX],0x38e
00690EDA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00690EDD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00690EE0  6A 3F                     PUSH 0x3f
00690EE2  52                        PUSH EDX
00690EE3  C7 40 14 0C 01 00 00      MOV dword ptr [EAX + 0x14],0x10c
00690EEA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00690EED  C6 41 18 02               MOV byte ptr [ECX + 0x18],0x2
00690EF1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00690EF4  83 C0 1B                  ADD EAX,0x1b
00690EF7  50                        PUSH EAX
00690EF8  E8 43 D4 09 00            CALL 0x0072e340
00690EFD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00690F00  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
00690F04  83 C4 0C                  ADD ESP,0xc
00690F07  66 89 51 19               MOV word ptr [ECX + 0x19],DX
00690F0B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00690F0E  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
00690F12  66 89 48 5C               MOV word ptr [EAX + 0x5c],CX
00690F16  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00690F19  8B 82 85 00 00 00         MOV EAX,dword ptr [EDX + 0x85]
00690F1F  85 C0                     TEST EAX,EAX
00690F21  75 15                     JNZ 0x00690f38
00690F23  6A 0A                     PUSH 0xa
00690F25  6A 08                     PUSH 0x8
00690F27  6A 0A                     PUSH 0xa
00690F29  56                        PUSH ESI
00690F2A  E8 61 D3 01 00            CALL 0x006ae290
00690F2F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00690F32  89 81 85 00 00 00         MOV dword ptr [ECX + 0x85],EAX
LAB_00690f38:
00690F38  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00690F3B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00690F3E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00690F44  5E                        POP ESI
00690F45  8B E5                     MOV ESP,EBP
00690F47  5D                        POP EBP
00690F48  C3                        RET
LAB_00690f49:
00690F49  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00690F4C  8D 4D FC                  LEA ECX,[EBP + -0x4]
00690F4F  51                        PUSH ECX
00690F50  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00690F55  E8 A6 1E D7 FF            CALL 0x00402e00
00690F5A  83 C4 04                  ADD ESP,0x4
00690F5D  6A 21                     PUSH 0x21
00690F5F  68 FC 58 7D 00            PUSH 0x7d58fc
00690F64  6A 00                     PUSH 0x0
00690F66  56                        PUSH ESI
00690F67  E8 D4 4E 01 00            CALL 0x006a5e40
00690F6C  33 C0                     XOR EAX,EAX
00690F6E  5E                        POP ESI
00690F6F  8B E5                     MOV ESP,EBP
00690F71  5D                        POP EBP
00690F72  C3                        RET
