FUN_004e99e0:
004E99E0  55                        PUSH EBP
004E99E1  8B EC                     MOV EBP,ESP
004E99E3  83 EC 70                  SUB ESP,0x70
004E99E6  56                        PUSH ESI
004E99E7  8B F1                     MOV ESI,ECX
004E99E9  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E99EF  85 C0                     TEST EAX,EAX
004E99F1  0F 85 C9 00 00 00         JNZ 0x004e9ac0
004E99F7  57                        PUSH EDI
004E99F8  B9 1B 00 00 00            MOV ECX,0x1b
004E99FD  33 C0                     XOR EAX,EAX
004E99FF  8D 7D 90                  LEA EDI,[EBP + -0x70]
004E9A02  F3 AB                     STOSD.REP ES:EDI
004E9A04  66 AB                     STOSW ES:EDI
004E9A06  AA                        STOSB ES:EDI
004E9A07  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E9A0A  8B 0D 18 1F 79 00         MOV ECX,dword ptr [0x00791f18]
004E9A10  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
004E9A13  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004E9A16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E9A19  BA 01 00 00 00            MOV EDX,0x1
004E9A1E  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004E9A21  33 C0                     XOR EAX,EAX
004E9A23  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
004E9A27  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
004E9A2A  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004E9A2D  B8 64 00 00 00            MOV EAX,0x64
004E9A32  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
004E9A35  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E9A38  89 45 E3                  MOV dword ptr [EBP + -0x1d],EAX
004E9A3B  89 45 E7                  MOV dword ptr [EBP + -0x19],EAX
004E9A3E  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
004E9A41  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
004E9A44  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
004E9A47  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E9A4A  8D 45 90                  LEA EAX,[EBP + -0x70]
004E9A4D  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
004E9A50  8B 8E C0 05 00 00         MOV ECX,dword ptr [ESI + 0x5c0]
004E9A56  8D BE 1B 06 00 00         LEA EDI,[ESI + 0x61b]
004E9A5C  6A 00                     PUSH 0x0
004E9A5E  50                        PUSH EAX
004E9A5F  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
004E9A62  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004E9A65  57                        PUSH EDI
004E9A66  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004E9A69  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E9A6F  6A 00                     PUSH 0x0
004E9A71  68 E9 03 00 00            PUSH 0x3e9
004E9A76  C7 45 90 E9 03 00 00      MOV dword ptr [EBP + -0x70],0x3e9
004E9A7D  C7 45 FB 00 00 00 00      MOV dword ptr [EBP + -0x5],0x0
004E9A84  C7 45 B0 03 00 00 00      MOV dword ptr [EBP + -0x50],0x3
004E9A8B  C7 45 A4 E8 03 00 00      MOV dword ptr [EBP + -0x5c],0x3e8
004E9A92  C7 45 B8 6C 00 00 00      MOV dword ptr [EBP + -0x48],0x6c
004E9A99  89 55 DF                  MOV dword ptr [EBP + -0x21],EDX
004E9A9C  E8 21 81 F1 FF            CALL 0x00401bc2
004E9AA1  8B 0F                     MOV ECX,dword ptr [EDI]
004E9AA3  5F                        POP EDI
004E9AA4  33 C0                     XOR EAX,EAX
004E9AA6  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004E9AA9  C7 86 FC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4fc],0x0
004E9AB3  89 96 F8 04 00 00         MOV dword ptr [ESI + 0x4f8],EDX
004E9AB9  5E                        POP ESI
004E9ABA  8B E5                     MOV ESP,EBP
004E9ABC  5D                        POP EBP
004E9ABD  C2 0C 00                  RET 0xc
LAB_004e9ac0:
004E9AC0  33 C0                     XOR EAX,EAX
004E9AC2  5E                        POP ESI
004E9AC3  8B E5                     MOV ESP,EBP
004E9AC5  5D                        POP EBP
004E9AC6  C2 0C 00                  RET 0xc
