FUN_00716820:
00716820  55                        PUSH EBP
00716821  8B EC                     MOV EBP,ESP
00716823  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00716826  33 C0                     XOR EAX,EAX
00716828  85 C9                     TEST ECX,ECX
0071682A  74 1D                     JZ 0x00716849
0071682C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0071682F  56                        PUSH ESI
00716830  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00716833  3B D6                     CMP EDX,ESI
00716835  5E                        POP ESI
00716836  7D 11                     JGE 0x00716849
00716838  85 D2                     TEST EDX,EDX
0071683A  7C 0F                     JL 0x0071684b
0071683C  42                        INC EDX
LAB_0071683d:
0071683D  8D 41 04                  LEA EAX,[ECX + 0x4]
00716840  8B 09                     MOV ECX,dword ptr [ECX]
00716842  03 C8                     ADD ECX,EAX
00716844  4A                        DEC EDX
00716845  75 F6                     JNZ 0x0071683d
00716847  5D                        POP EBP
00716848  C3                        RET
LAB_00716849:
00716849  33 C0                     XOR EAX,EAX
LAB_0071684b:
0071684B  5D                        POP EBP
0071684C  C3                        RET
