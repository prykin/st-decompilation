FUN_0071c8c0:
0071C8C0  55                        PUSH EBP
0071C8C1  8B EC                     MOV EBP,ESP
0071C8C3  83 EC 5C                  SUB ESP,0x5c
0071C8C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071C8CB  53                        PUSH EBX
0071C8CC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0071C8CF  56                        PUSH ESI
0071C8D0  8D 55 A8                  LEA EDX,[EBP + -0x58]
0071C8D3  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0071C8D6  6A 00                     PUSH 0x0
0071C8D8  52                        PUSH EDX
0071C8D9  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0071C8E0  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0071C8E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071C8E9  E8 02 0F 01 00            CALL 0x0072d7f0
0071C8EE  8B F0                     MOV ESI,EAX
0071C8F0  83 C4 08                  ADD ESP,0x8
0071C8F3  85 F6                     TEST ESI,ESI
0071C8F5  0F 85 A0 00 00 00         JNZ 0x0071c99b
0071C8FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071C8FE  85 C0                     TEST EAX,EAX
0071C900  0F 84 82 00 00 00         JZ 0x0071c988
0071C906  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0071C909  8D 4D FC                  LEA ECX,[EBP + -0x4]
0071C90C  51                        PUSH ECX
0071C90D  50                        PUSH EAX
0071C90E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0071C911  E8 7A 71 FC FF            CALL 0x006e3a90
0071C916  85 C0                     TEST EAX,EAX
0071C918  75 56                     JNZ 0x0071c970
0071C91A  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0071C91D  85 C0                     TEST EAX,EAX
0071C91F  75 10                     JNZ 0x0071c931
0071C921  6A 0A                     PUSH 0xa
0071C923  6A 0C                     PUSH 0xc
0071C925  6A 0A                     PUSH 0xa
0071C927  6A 00                     PUSH 0x0
0071C929  E8 62 19 F9 FF            CALL 0x006ae290
0071C92E  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
LAB_0071c931:
0071C931  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0071C934  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071C937  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0071C93A  8D 45 E8                  LEA EAX,[EBP + -0x18]
0071C93D  50                        PUSH EAX
0071C93E  51                        PUSH ECX
0071C93F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0071C942  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0071C949  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0071C94C  E8 6F 18 F9 FF            CALL 0x006ae1c0
0071C951  F6 C3 02                  TEST BL,0x2
0071C954  74 32                     JZ 0x0071c988
0071C956  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0071C959  C7 46 58 01 00 00 00      MOV dword ptr [ESI + 0x58],0x1
0071C960  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071C965  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0071C968  5E                        POP ESI
0071C969  5B                        POP EBX
0071C96A  8B E5                     MOV ESP,EBP
0071C96C  5D                        POP EBP
0071C96D  C2 08 00                  RET 0x8
LAB_0071c970:
0071C970  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071C976  68 7C 02 00 00            PUSH 0x27c
0071C97B  68 2C 09 7F 00            PUSH 0x7f092c
0071C980  52                        PUSH EDX
0071C981  6A FC                     PUSH -0x4
0071C983  E8 B8 94 F8 FF            CALL 0x006a5e40
LAB_0071c988:
0071C988  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0071C98B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071C990  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0071C993  5E                        POP ESI
0071C994  5B                        POP EBX
0071C995  8B E5                     MOV ESP,EBP
0071C997  5D                        POP EBP
0071C998  C2 08 00                  RET 0x8
LAB_0071c99b:
0071C99B  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0071C99E  68 B4 09 7F 00            PUSH 0x7f09b4
0071C9A3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071C9A8  56                        PUSH ESI
0071C9A9  6A 00                     PUSH 0x0
0071C9AB  68 80 02 00 00            PUSH 0x280
0071C9B0  68 2C 09 7F 00            PUSH 0x7f092c
0071C9B5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071C9BB  E8 10 0B F9 FF            CALL 0x006ad4d0
0071C9C0  83 C4 18                  ADD ESP,0x18
0071C9C3  85 C0                     TEST EAX,EAX
0071C9C5  74 01                     JZ 0x0071c9c8
0071C9C7  CC                        INT3
LAB_0071c9c8:
0071C9C8  68 81 02 00 00            PUSH 0x281
0071C9CD  68 2C 09 7F 00            PUSH 0x7f092c
0071C9D2  6A 00                     PUSH 0x0
0071C9D4  56                        PUSH ESI
0071C9D5  E8 66 94 F8 FF            CALL 0x006a5e40
0071C9DA  8B C6                     MOV EAX,ESI
0071C9DC  5E                        POP ESI
0071C9DD  5B                        POP EBX
0071C9DE  8B E5                     MOV ESP,EBP
0071C9E0  5D                        POP EBP
0071C9E1  C2 08 00                  RET 0x8
