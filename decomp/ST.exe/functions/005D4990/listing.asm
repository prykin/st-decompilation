SettMapMTy::PrepareAFT:
005D4990  55                        PUSH EBP
005D4991  8B EC                     MOV EBP,ESP
005D4993  83 EC 48                  SUB ESP,0x48
005D4996  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D4999  53                        PUSH EBX
005D499A  56                        PUSH ESI
005D499B  57                        PUSH EDI
005D499C  85 C0                     TEST EAX,EAX
005D499E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D49A1  0F 84 2F 01 00 00         JZ 0x005d4ad6
005D49A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005D49AA  85 C0                     TEST EAX,EAX
005D49AC  0F 84 24 01 00 00         JZ 0x005d4ad6
005D49B2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D49B7  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D49BA  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D49BD  6A 00                     PUSH 0x0
005D49BF  52                        PUSH EDX
005D49C0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D49C3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D49C9  E8 22 8E 15 00            CALL 0x0072d7f0
005D49CE  8B F0                     MOV ESI,EAX
005D49D0  83 C4 08                  ADD ESP,0x8
005D49D3  85 F6                     TEST ESI,ESI
005D49D5  0F 85 BD 00 00 00         JNZ 0x005d4a98
005D49DB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005D49DE  83 3E FF                  CMP dword ptr [ESI],-0x1
005D49E1  75 49                     JNZ 0x005d4a2c
005D49E3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005D49E6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D49E9  8B 82 5B 1A 00 00         MOV EAX,dword ptr [EDX + 0x1a5b]
005D49EF  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
005D49F2  8B 88 A6 06 00 00         MOV ECX,dword ptr [EAX + 0x6a6]
005D49F8  B8 01 01 01 01            MOV EAX,0x1010101
005D49FD  8B D9                     MOV EBX,ECX
005D49FF  C1 E9 02                  SHR ECX,0x2
005D4A02  F3 AB                     STOSD.REP ES:EDI
005D4A04  8B CB                     MOV ECX,EBX
005D4A06  83 E1 03                  AND ECX,0x3
005D4A09  F3 AA                     STOSB.REP ES:EDI
005D4A0B  8B 8A 5B 1A 00 00         MOV ECX,dword ptr [EDX + 0x1a5b]
005D4A11  8B 91 A6 06 00 00         MOV EDX,dword ptr [ECX + 0x6a6]
005D4A17  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
005D4A1A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D4A1D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D4A23  5F                        POP EDI
005D4A24  5E                        POP ESI
005D4A25  5B                        POP EBX
005D4A26  8B E5                     MOV ESP,EBP
005D4A28  5D                        POP EBP
005D4A29  C2 08 00                  RET 0x8
LAB_005d4a2c:
005D4A2C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D4A2F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D4A32  8B 88 5B 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a5b]
005D4A38  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
005D4A3B  33 C0                     XOR EAX,EAX
005D4A3D  8B 89 A6 06 00 00         MOV ECX,dword ptr [ECX + 0x6a6]
005D4A43  8B D9                     MOV EBX,ECX
005D4A45  C1 E9 02                  SHR ECX,0x2
005D4A48  F3 AB                     STOSD.REP ES:EDI
005D4A4A  8B CB                     MOV ECX,EBX
005D4A4C  83 E1 03                  AND ECX,0x3
005D4A4F  F3 AA                     STOSB.REP ES:EDI
005D4A51  8B 06                     MOV EAX,dword ptr [ESI]
005D4A53  8B 5A 08                  MOV EBX,dword ptr [EDX + 0x8]
005D4A56  33 C9                     XOR ECX,ECX
005D4A58  8D 7E 04                  LEA EDI,[ESI + 0x4]
005D4A5B  85 C0                     TEST EAX,EAX
005D4A5D  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
005D4A60  76 24                     JBE 0x005d4a86
005D4A62  8B F7                     MOV ESI,EDI
LAB_005d4a64:
005D4A64  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D4A67  8B 06                     MOV EAX,dword ptr [ESI]
005D4A69  8B BF 5B 1A 00 00         MOV EDI,dword ptr [EDI + 0x1a5b]
005D4A6F  3B 87 A6 06 00 00         CMP EAX,dword ptr [EDI + 0x6a6]
005D4A75  73 04                     JNC 0x005d4a7b
005D4A77  C6 04 18 01               MOV byte ptr [EAX + EBX*0x1],0x1
LAB_005d4a7b:
005D4A7B  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
005D4A7E  41                        INC ECX
005D4A7F  83 C6 04                  ADD ESI,0x4
005D4A82  3B C8                     CMP ECX,EAX
005D4A84  72 DE                     JC 0x005d4a64
LAB_005d4a86:
005D4A86  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D4A89  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D4A8F  5F                        POP EDI
005D4A90  5E                        POP ESI
005D4A91  5B                        POP EBX
005D4A92  8B E5                     MOV ESP,EBP
005D4A94  5D                        POP EBP
005D4A95  C2 08 00                  RET 0x8
LAB_005d4a98:
005D4A98  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D4A9B  68 28 D5 7C 00            PUSH 0x7cd528
005D4AA0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D4AA5  56                        PUSH ESI
005D4AA6  6A 00                     PUSH 0x0
005D4AA8  68 AF 09 00 00            PUSH 0x9af
005D4AAD  68 58 D2 7C 00            PUSH 0x7cd258
005D4AB2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D4AB7  E8 14 8A 0D 00            CALL 0x006ad4d0
005D4ABC  83 C4 18                  ADD ESP,0x18
005D4ABF  85 C0                     TEST EAX,EAX
005D4AC1  74 01                     JZ 0x005d4ac4
005D4AC3  CC                        INT3
LAB_005d4ac4:
005D4AC4  68 AF 09 00 00            PUSH 0x9af
005D4AC9  68 58 D2 7C 00            PUSH 0x7cd258
005D4ACE  6A 00                     PUSH 0x0
005D4AD0  56                        PUSH ESI
005D4AD1  E8 6A 13 0D 00            CALL 0x006a5e40
LAB_005d4ad6:
005D4AD6  5F                        POP EDI
005D4AD7  5E                        POP ESI
005D4AD8  5B                        POP EBX
005D4AD9  8B E5                     MOV ESP,EBP
005D4ADB  5D                        POP EBP
005D4ADC  C2 08 00                  RET 0x8
