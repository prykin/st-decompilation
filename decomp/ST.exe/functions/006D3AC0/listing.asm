FUN_006d3ac0:
006D3AC0  55                        PUSH EBP
006D3AC1  8B EC                     MOV EBP,ESP
006D3AC3  83 EC 30                  SUB ESP,0x30
006D3AC6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D3AC9  53                        PUSH EBX
006D3ACA  56                        PUSH ESI
006D3ACB  8D 45 FC                  LEA EAX,[EBP + -0x4]
006D3ACE  6A 00                     PUSH 0x0
006D3AD0  BE 28 00 00 00            MOV ESI,0x28
006D3AD5  50                        PUSH EAX
006D3AD6  8D 4D D0                  LEA ECX,[EBP + -0x30]
006D3AD9  56                        PUSH ESI
006D3ADA  51                        PUSH ECX
006D3ADB  52                        PUSH EDX
006D3ADC  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
006D3AE2  85 C0                     TEST EAX,EAX
006D3AE4  75 23                     JNZ 0x006d3b09
006D3AE6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D3AEB  6A 18                     PUSH 0x18
006D3AED  68 14 E2 7E 00            PUSH 0x7ee214
006D3AF2  50                        PUSH EAX
006D3AF3  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D3AF9  50                        PUSH EAX
006D3AFA  E8 41 23 FD FF            CALL 0x006a5e40
006D3AFF  5E                        POP ESI
006D3B00  33 C0                     XOR EAX,EAX
006D3B02  5B                        POP EBX
006D3B03  8B E5                     MOV ESP,EBP
006D3B05  5D                        POP EBP
006D3B06  C2 04 00                  RET 0x4
LAB_006d3b09:
006D3B09  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
006D3B0C  0F 85 F9 00 00 00         JNZ 0x006d3c0b
006D3B12  39 75 D0                  CMP dword ptr [EBP + -0x30],ESI
006D3B15  0F 85 F0 00 00 00         JNZ 0x006d3c0b
006D3B1B  8D 4D D0                  LEA ECX,[EBP + -0x30]
006D3B1E  51                        PUSH ECX
006D3B1F  E8 EC 14 FE FF            CALL 0x006b5010
006D3B24  C1 E8 02                  SHR EAX,0x2
006D3B27  3D 00 01 00 00            CMP EAX,0x100
006D3B2C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D3B2F  0F 8F D6 00 00 00         JG 0x006d3c0b
006D3B35  8B 55 DE                  MOV EDX,dword ptr [EBP + -0x22]
006D3B38  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006D3B3B  6A 01                     PUSH 0x1
006D3B3D  50                        PUSH EAX
006D3B3E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006D3B41  81 E2 FF FF 00 00         AND EDX,0xffff
006D3B47  52                        PUSH EDX
006D3B48  50                        PUSH EAX
006D3B49  51                        PUSH ECX
006D3B4A  E8 A1 D5 FF FF            CALL 0x006d10f0
006D3B4F  8B D8                     MOV EBX,EAX
006D3B51  85 DB                     TEST EBX,EBX
006D3B53  75 1F                     JNZ 0x006d3b74
006D3B55  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006D3B5B  6A 24                     PUSH 0x24
006D3B5D  68 14 E2 7E 00            PUSH 0x7ee214
006D3B62  52                        PUSH EDX
006D3B63  6A FE                     PUSH -0x2
006D3B65  E8 D6 22 FD FF            CALL 0x006a5e40
006D3B6A  5E                        POP ESI
006D3B6B  33 C0                     XOR EAX,EAX
006D3B6D  5B                        POP EBX
006D3B6E  8B E5                     MOV ESP,EBP
006D3B70  5D                        POP EBP
006D3B71  C2 04 00                  RET 0x4
LAB_006d3b74:
006D3B74  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D3B77  85 C0                     TEST EAX,EAX
006D3B79  74 0C                     JZ 0x006d3b87
006D3B7B  39 43 14                  CMP dword ptr [EBX + 0x14],EAX
006D3B7E  74 0D                     JZ 0x006d3b8d
006D3B80  BE FB FF FF FF            MOV ESI,0xfffffffb
006D3B85  EB 42                     JMP 0x006d3bc9
LAB_006d3b87:
006D3B87  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006D3B8A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006d3b8d:
006D3B8D  57                        PUSH EDI
006D3B8E  B9 0A 00 00 00            MOV ECX,0xa
006D3B93  8D 75 D0                  LEA ESI,[EBP + -0x30]
006D3B96  8B FB                     MOV EDI,EBX
006D3B98  F3 A5                     MOVSD.REP ES:EDI,ESI
006D3B9A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006D3B9D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D3BA0  8D 4D FC                  LEA ECX,[EBP + -0x4]
006D3BA3  6A 00                     PUSH 0x0
006D3BA5  51                        PUSH ECX
006D3BA6  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
006D3BA9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D3BAC  8D 4B 28                  LEA ECX,[EBX + 0x28]
006D3BAF  50                        PUSH EAX
006D3BB0  51                        PUSH ECX
006D3BB1  52                        PUSH EDX
006D3BB2  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
006D3BB8  85 C0                     TEST EAX,EAX
006D3BBA  5F                        POP EDI
006D3BBB  75 30                     JNZ 0x006d3bed
006D3BBD  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D3BC3  8B F0                     MOV ESI,EAX
006D3BC5  85 F6                     TEST ESI,ESI
006D3BC7  74 38                     JZ 0x006d3c01
LAB_006d3bc9:
006D3BC9  53                        PUSH EBX
006D3BCA  E8 C1 22 FD FF            CALL 0x006a5e90
006D3BCF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006D3BD5  6A 44                     PUSH 0x44
006D3BD7  68 14 E2 7E 00            PUSH 0x7ee214
006D3BDC  52                        PUSH EDX
006D3BDD  56                        PUSH ESI
006D3BDE  E8 5D 22 FD FF            CALL 0x006a5e40
006D3BE3  5E                        POP ESI
006D3BE4  33 C0                     XOR EAX,EAX
006D3BE6  5B                        POP EBX
006D3BE7  8B E5                     MOV ESP,EBP
006D3BE9  5D                        POP EBP
006D3BEA  C2 04 00                  RET 0x4
LAB_006d3bed:
006D3BED  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D3BF0  8D 0C B0                  LEA ECX,[EAX + ESI*0x4]
006D3BF3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D3BF6  3B C1                     CMP EAX,ECX
006D3BF8  74 07                     JZ 0x006d3c01
006D3BFA  BE FB FF FF FF            MOV ESI,0xfffffffb
006D3BFF  EB C8                     JMP 0x006d3bc9
LAB_006d3c01:
006D3C01  8B C3                     MOV EAX,EBX
006D3C03  5E                        POP ESI
006D3C04  5B                        POP EBX
006D3C05  8B E5                     MOV ESP,EBP
006D3C07  5D                        POP EBP
006D3C08  C2 04 00                  RET 0x4
LAB_006d3c0b:
006D3C0B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D3C10  6A 1E                     PUSH 0x1e
006D3C12  68 14 E2 7E 00            PUSH 0x7ee214
006D3C17  50                        PUSH EAX
006D3C18  6A FB                     PUSH -0x5
006D3C1A  E8 21 22 FD FF            CALL 0x006a5e40
006D3C1F  5E                        POP ESI
006D3C20  33 C0                     XOR EAX,EAX
006D3C22  5B                        POP EBX
006D3C23  8B E5                     MOV ESP,EBP
006D3C25  5D                        POP EBP
006D3C26  C2 04 00                  RET 0x4
