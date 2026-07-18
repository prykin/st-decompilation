FUN_004b0f20:
004B0F20  55                        PUSH EBP
004B0F21  8B EC                     MOV EBP,ESP
004B0F23  83 EC 70                  SUB ESP,0x70
004B0F26  57                        PUSH EDI
004B0F27  B9 1B 00 00 00            MOV ECX,0x1b
004B0F2C  33 C0                     XOR EAX,EAX
004B0F2E  8D 7D 90                  LEA EDI,[EBP + -0x70]
004B0F31  F3 AB                     STOSD.REP ES:EDI
004B0F33  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B0F36  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B0F39  66 AB                     STOSW ES:EDI
004B0F3B  AA                        STOSB ES:EDI
004B0F3C  8B 04 95 68 1D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x791d68]
004B0F43  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
004B0F46  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B0F49  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004B0F4C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004B0F4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B0F52  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004B0F55  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B0F58  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004B0F5B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004B0F5E  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
004B0F61  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B0F64  3D FF 00 00 00            CMP EAX,0xff
004B0F69  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
004B0F70  C7 45 98 01 00 00 00      MOV dword ptr [EBP + -0x68],0x1
004B0F77  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
004B0F7A  C7 45 90 E9 03 00 00      MOV dword ptr [EBP + -0x70],0x3e9
004B0F81  C7 45 FB 00 00 00 00      MOV dword ptr [EBP + -0x5],0x0
004B0F88  C7 45 B0 03 00 00 00      MOV dword ptr [EBP + -0x50],0x3
004B0F8F  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
004B0F96  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004B0F99  C7 45 A4 E8 03 00 00      MOV dword ptr [EBP + -0x5c],0x3e8
004B0FA0  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
004B0FA3  5F                        POP EDI
004B0FA4  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004B0FA7  74 03                     JZ 0x004b0fac
004B0FA9  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_004b0fac:
004B0FAC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004B0FAF  85 C0                     TEST EAX,EAX
004B0FB1  74 0F                     JZ 0x004b0fc2
004B0FB3  6A 0E                     PUSH 0xe
004B0FB5  50                        PUSH EAX
004B0FB6  8D 45 D0                  LEA EAX,[EBP + -0x30]
004B0FB9  50                        PUSH EAX
004B0FBA  E8 81 D3 27 00            CALL 0x0072e340
004B0FBF  83 C4 0C                  ADD ESP,0xc
LAB_004b0fc2:
004B0FC2  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
004B0FC5  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
004B0FC8  8D 45 90                  LEA EAX,[EBP + -0x70]
004B0FCB  6A 00                     PUSH 0x0
004B0FCD  50                        PUSH EAX
004B0FCE  6A 00                     PUSH 0x0
004B0FD0  89 4D DF                  MOV dword ptr [EBP + -0x21],ECX
004B0FD3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004B0FD9  6A 00                     PUSH 0x0
004B0FDB  68 E9 03 00 00            PUSH 0x3e9
004B0FE0  89 55 E3                  MOV dword ptr [EBP + -0x1d],EDX
004B0FE3  C7 45 E7 64 00 00 00      MOV dword ptr [EBP + -0x19],0x64
004B0FEA  E8 D3 0B F5 FF            CALL 0x00401bc2
004B0FEF  8B E5                     MOV ESP,EBP
004B0FF1  5D                        POP EBP
004B0FF2  C3                        RET
