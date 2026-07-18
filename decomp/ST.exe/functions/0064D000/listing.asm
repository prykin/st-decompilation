FUN_0064d000:
0064D000  55                        PUSH EBP
0064D001  8B EC                     MOV EBP,ESP
0064D003  83 EC 48                  SUB ESP,0x48
0064D006  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064D00B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0064D00E  56                        PUSH ESI
0064D00F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064D012  8D 4D B8                  LEA ECX,[EBP + -0x48]
0064D015  6A 00                     PUSH 0x0
0064D017  52                        PUSH EDX
0064D018  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0064D01B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D021  E8 CA 07 0E 00            CALL 0x0072d7f0
0064D026  8B F0                     MOV ESI,EAX
0064D028  83 C4 08                  ADD ESP,0x8
0064D02B  85 F6                     TEST ESI,ESI
0064D02D  75 3A                     JNZ 0x0064d069
0064D02F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0064D032  85 F6                     TEST ESI,ESI
0064D034  74 08                     JZ 0x0064d03e
0064D036  8D 86 8C 00 00 00         LEA EAX,[ESI + 0x8c]
0064D03C  EB 02                     JMP 0x0064d040
LAB_0064d03e:
0064D03E  33 C0                     XOR EAX,EAX
LAB_0064d040:
0064D040  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064D043  51                        PUSH ECX
0064D044  50                        PUSH EAX
0064D045  E8 75 4E DB FF            CALL 0x00401ebf
0064D04A  C6 00 01                  MOV byte ptr [EAX],0x1
0064D04D  8B 96 88 00 00 00         MOV EDX,dword ptr [ESI + 0x88]
0064D053  89 50 4E                  MOV dword ptr [EAX + 0x4e],EDX
0064D056  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0064D059  83 C4 08                  ADD ESP,0x8
0064D05C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D062  5E                        POP ESI
0064D063  8B E5                     MOV ESP,EBP
0064D065  5D                        POP EBP
0064D066  C2 04 00                  RET 0x4
LAB_0064d069:
0064D069  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0064D06C  68 78 2A 7D 00            PUSH 0x7d2a78
0064D071  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064D076  56                        PUSH ESI
0064D077  6A 00                     PUSH 0x0
0064D079  6A 66                     PUSH 0x66
0064D07B  68 34 2A 7D 00            PUSH 0x7d2a34
0064D080  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064D086  E8 45 04 06 00            CALL 0x006ad4d0
0064D08B  83 C4 18                  ADD ESP,0x18
0064D08E  85 C0                     TEST EAX,EAX
0064D090  74 01                     JZ 0x0064d093
0064D092  CC                        INT3
LAB_0064d093:
0064D093  6A 67                     PUSH 0x67
0064D095  68 34 2A 7D 00            PUSH 0x7d2a34
0064D09A  6A 00                     PUSH 0x0
0064D09C  56                        PUSH ESI
0064D09D  E8 9E 8D 05 00            CALL 0x006a5e40
0064D0A2  33 C0                     XOR EAX,EAX
0064D0A4  5E                        POP ESI
0064D0A5  8B E5                     MOV ESP,EBP
0064D0A7  5D                        POP EBP
0064D0A8  C2 04 00                  RET 0x4
