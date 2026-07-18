FUN_0070a6f0:
0070A6F0  55                        PUSH EBP
0070A6F1  8B EC                     MOV EBP,ESP
0070A6F3  83 EC 50                  SUB ESP,0x50
0070A6F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A6FB  56                        PUSH ESI
0070A6FC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070A6FF  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070A702  6A 00                     PUSH 0x0
0070A704  52                        PUSH EDX
0070A705  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070A708  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A70E  E8 DD 30 02 00            CALL 0x0072d7f0
0070A713  8B F0                     MOV ESI,EAX
0070A715  83 C4 08                  ADD ESP,0x8
0070A718  85 F6                     TEST ESI,ESI
0070A71A  75 41                     JNZ 0x0070a75d
0070A71C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070A71F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070A722  8D 4D F4                  LEA ECX,[EBP + -0xc]
0070A725  50                        PUSH EAX
0070A726  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A729  51                        PUSH ECX
0070A72A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070A72D  52                        PUSH EDX
0070A72E  50                        PUSH EAX
0070A72F  E8 DC 7B FE FF            CALL 0x006f2310
0070A734  85 C0                     TEST EAX,EAX
0070A736  75 13                     JNZ 0x0070a74b
0070A738  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070A73B  B8 FC FF FF FF            MOV EAX,0xfffffffc
0070A740  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A746  5E                        POP ESI
0070A747  8B E5                     MOV ESP,EBP
0070A749  5D                        POP EBP
0070A74A  C3                        RET
LAB_0070a74b:
0070A74B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070A74E  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
0070A752  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A758  5E                        POP ESI
0070A759  8B E5                     MOV ESP,EBP
0070A75B  5D                        POP EBP
0070A75C  C3                        RET
LAB_0070a75d:
0070A75D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070A760  68 10 00 7F 00            PUSH 0x7f0010
0070A765  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A76A  56                        PUSH ESI
0070A76B  6A 00                     PUSH 0x0
0070A76D  6A 4E                     PUSH 0x4e
0070A76F  68 E0 FF 7E 00            PUSH 0x7effe0
0070A774  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A779  E8 52 2D FA FF            CALL 0x006ad4d0
0070A77E  83 C4 18                  ADD ESP,0x18
0070A781  85 C0                     TEST EAX,EAX
0070A783  74 01                     JZ 0x0070a786
0070A785  CC                        INT3
LAB_0070a786:
0070A786  6A 50                     PUSH 0x50
0070A788  68 E0 FF 7E 00            PUSH 0x7effe0
0070A78D  6A 00                     PUSH 0x0
0070A78F  56                        PUSH ESI
0070A790  E8 AB B6 F9 FF            CALL 0x006a5e40
0070A795  85 F6                     TEST ESI,ESI
0070A797  7D 07                     JGE 0x0070a7a0
0070A799  8B C6                     MOV EAX,ESI
0070A79B  5E                        POP ESI
0070A79C  8B E5                     MOV ESP,EBP
0070A79E  5D                        POP EBP
0070A79F  C3                        RET
LAB_0070a7a0:
0070A7A0  83 C8 FF                  OR EAX,0xffffffff
0070A7A3  5E                        POP ESI
0070A7A4  8B E5                     MOV ESP,EBP
0070A7A6  5D                        POP EBP
0070A7A7  C3                        RET
