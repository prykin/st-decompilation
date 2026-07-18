FUN_0065d120:
0065D120  55                        PUSH EBP
0065D121  8B EC                     MOV EBP,ESP
0065D123  83 EC 48                  SUB ESP,0x48
0065D126  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065D12B  56                        PUSH ESI
0065D12C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0065D12F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0065D132  6A 00                     PUSH 0x0
0065D134  52                        PUSH EDX
0065D135  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0065D13C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0065D13F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065D145  E8 A6 06 0D 00            CALL 0x0072d7f0
0065D14A  8B F0                     MOV ESI,EAX
0065D14C  83 C4 08                  ADD ESP,0x8
0065D14F  85 F6                     TEST ESI,ESI
0065D151  75 39                     JNZ 0x0065d18c
0065D153  6A 1B                     PUSH 0x1b
0065D155  E8 B6 DA 04 00            CALL 0x006aac10
0065D15A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065D15D  C6 00 00                  MOV byte ptr [EAX],0x0
0065D160  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065D163  6A 05                     PUSH 0x5
0065D165  6A 02                     PUSH 0x2
0065D167  6A 05                     PUSH 0x5
0065D169  56                        PUSH ESI
0065D16A  66 C7 40 09 FF FF         MOV word ptr [EAX + 0x9],0xffff
0065D170  E8 1B 11 05 00            CALL 0x006ae290
0065D175  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065D178  89 41 0F                  MOV dword ptr [ECX + 0xf],EAX
0065D17B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0065D17E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065D181  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065D187  5E                        POP ESI
0065D188  8B E5                     MOV ESP,EBP
0065D18A  5D                        POP EBP
0065D18B  C3                        RET
LAB_0065d18c:
0065D18C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0065D18F  8D 4D FC                  LEA ECX,[EBP + -0x4]
0065D192  51                        PUSH ECX
0065D193  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065D198  E8 43 5E DA FF            CALL 0x00402fe0
0065D19D  83 C4 04                  ADD ESP,0x4
0065D1A0  68 B7 00 00 00            PUSH 0xb7
0065D1A5  68 4C 2B 7D 00            PUSH 0x7d2b4c
0065D1AA  6A 00                     PUSH 0x0
0065D1AC  56                        PUSH ESI
0065D1AD  E8 8E 8C 04 00            CALL 0x006a5e40
0065D1B2  33 C0                     XOR EAX,EAX
0065D1B4  5E                        POP ESI
0065D1B5  8B E5                     MOV ESP,EBP
0065D1B7  5D                        POP EBP
0065D1B8  C3                        RET
