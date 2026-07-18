FUN_006d39f0:
006D39F0  55                        PUSH EBP
006D39F1  8B EC                     MOV EBP,ESP
006D39F3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D39F6  85 C0                     TEST EAX,EAX
006D39F8  7E 4A                     JLE 0x006d3a44
006D39FA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D39FD  85 C9                     TEST ECX,ECX
006D39FF  7E 43                     JLE 0x006d3a44
006D3A01  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D3A04  8B C8                     MOV ECX,EAX
006D3A06  F7 D9                     NEG ECX
006D3A08  53                        PUSH EBX
006D3A09  56                        PUSH ESI
006D3A0A  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006D3A0D  57                        PUSH EDI
006D3A0E  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006D3A11  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D3A14  2B C8                     SUB ECX,EAX
006D3A16  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006D3A19  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D3A1C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D3A1F  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006D3A22  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_006d3a25:
006D3A25  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006d3a28:
006D3A28  33 C0                     XOR EAX,EAX
006D3A2A  8A 06                     MOV AL,byte ptr [ESI]
006D3A2C  46                        INC ESI
006D3A2D  8B 04 83                  MOV EAX,dword ptr [EBX + EAX*0x4]
006D3A30  89 07                     MOV dword ptr [EDI],EAX
006D3A32  83 C7 04                  ADD EDI,0x4
006D3A35  49                        DEC ECX
006D3A36  7F F0                     JG 0x006d3a28
006D3A38  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006D3A3B  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D3A3E  4A                        DEC EDX
006D3A3F  7F E4                     JG 0x006d3a25
006D3A41  5F                        POP EDI
006D3A42  5E                        POP ESI
006D3A43  5B                        POP EBX
LAB_006d3a44:
006D3A44  5D                        POP EBP
006D3A45  C2 1C 00                  RET 0x1c
