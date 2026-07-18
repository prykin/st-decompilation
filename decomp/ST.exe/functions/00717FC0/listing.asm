FUN_00717fc0:
00717FC0  55                        PUSH EBP
00717FC1  8B EC                     MOV EBP,ESP
00717FC3  83 EC 48                  SUB ESP,0x48
00717FC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00717FCB  56                        PUSH ESI
00717FCC  8D 55 BC                  LEA EDX,[EBP + -0x44]
00717FCF  8D 4D B8                  LEA ECX,[EBP + -0x48]
00717FD2  6A 00                     PUSH 0x0
00717FD4  52                        PUSH EDX
00717FD5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00717FDC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00717FDF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00717FE5  E8 06 58 01 00            CALL 0x0072d7f0
00717FEA  8B F0                     MOV ESI,EAX
00717FEC  83 C4 08                  ADD ESP,0x8
00717FEF  85 F6                     TEST ESI,ESI
00717FF1  75 4D                     JNZ 0x00718040
00717FF3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00717FF6  85 F6                     TEST ESI,ESI
00717FF8  75 14                     JNZ 0x0071800e
00717FFA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00717FFF  6A 17                     PUSH 0x17
00718001  68 F8 06 7F 00            PUSH 0x7f06f8
00718006  50                        PUSH EAX
00718007  6A CC                     PUSH -0x34
00718009  E8 32 DE F8 FF            CALL 0x006a5e40
LAB_0071800e:
0071800E  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00718011  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00718014  A8 04                     TEST AL,0x4
00718016  51                        PUSH ECX
00718017  74 0A                     JZ 0x00718023
00718019  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071801C  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071801F  52                        PUSH EDX
00718020  50                        PUSH EAX
00718021  EB 06                     JMP 0x00718029
LAB_00718023:
00718023  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00718026  6A 00                     PUSH 0x0
00718028  52                        PUSH EDX
LAB_00718029:
00718029  6A 20                     PUSH 0x20
0071802B  8B CE                     MOV ECX,ESI
0071802D  E8 AE 9C FD FF            CALL 0x006f1ce0
00718032  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00718035  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071803B  5E                        POP ESI
0071803C  8B E5                     MOV ESP,EBP
0071803E  5D                        POP EBP
0071803F  C3                        RET
LAB_00718040:
00718040  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00718043  68 EC 06 7F 00            PUSH 0x7f06ec
00718048  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071804D  56                        PUSH ESI
0071804E  6A 00                     PUSH 0x0
00718050  6A 1C                     PUSH 0x1c
00718052  68 F8 06 7F 00            PUSH 0x7f06f8
00718057  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071805D  E8 6E 54 F9 FF            CALL 0x006ad4d0
00718062  83 C4 18                  ADD ESP,0x18
00718065  85 C0                     TEST EAX,EAX
00718067  74 01                     JZ 0x0071806a
00718069  CC                        INT3
LAB_0071806a:
0071806A  6A 1E                     PUSH 0x1e
0071806C  68 F8 06 7F 00            PUSH 0x7f06f8
00718071  6A 00                     PUSH 0x0
00718073  56                        PUSH ESI
00718074  E8 C7 DD F8 FF            CALL 0x006a5e40
00718079  33 C0                     XOR EAX,EAX
0071807B  5E                        POP ESI
0071807C  8B E5                     MOV ESP,EBP
0071807E  5D                        POP EBP
0071807F  C3                        RET
