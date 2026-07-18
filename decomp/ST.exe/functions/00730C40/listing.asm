FUN_00730c40:
00730C40  55                        PUSH EBP
00730C41  8B EC                     MOV EBP,ESP
00730C43  83 EC 30                  SUB ESP,0x30
00730C46  53                        PUSH EBX
00730C47  56                        PUSH ESI
00730C48  57                        PUSH EDI
00730C49  8D 45 E0                  LEA EAX,[EBP + -0x20]
00730C4C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00730C4F  8D 4D 10                  LEA ECX,[EBP + 0x10]
00730C52  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_00730c55:
00730C55  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00730C59  75 1E                     JNZ 0x00730c79
00730C5B  68 74 FE 79 00            PUSH 0x79fe74
00730C60  6A 00                     PUSH 0x0
00730C62  6A 5D                     PUSH 0x5d
00730C64  68 2C FF 79 00            PUSH 0x79ff2c
00730C69  6A 02                     PUSH 0x2
00730C6B  E8 30 03 00 00            CALL 0x00730fa0
00730C70  83 C4 14                  ADD ESP,0x14
00730C73  83 F8 01                  CMP EAX,0x1
00730C76  75 01                     JNZ 0x00730c79
00730C78  CC                        INT3
LAB_00730c79:
00730C79  33 D2                     XOR EDX,EDX
00730C7B  85 D2                     TEST EDX,EDX
00730C7D  75 D6                     JNZ 0x00730c55
LAB_00730c7f:
00730C7F  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00730C83  75 1E                     JNZ 0x00730ca3
00730C85  68 90 FE 79 00            PUSH 0x79fe90
00730C8A  6A 00                     PUSH 0x0
00730C8C  6A 5E                     PUSH 0x5e
00730C8E  68 2C FF 79 00            PUSH 0x79ff2c
00730C93  6A 02                     PUSH 0x2
00730C95  E8 06 03 00 00            CALL 0x00730fa0
00730C9A  83 C4 14                  ADD ESP,0x14
00730C9D  83 F8 01                  CMP EAX,0x1
00730CA0  75 01                     JNZ 0x00730ca3
00730CA2  CC                        INT3
LAB_00730ca3:
00730CA3  33 C0                     XOR EAX,EAX
00730CA5  85 C0                     TEST EAX,EAX
00730CA7  75 D6                     JNZ 0x00730c7f
00730CA9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730CAC  C7 41 0C 42 00 00 00      MOV dword ptr [ECX + 0xc],0x42
00730CB3  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00730CB6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730CB9  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00730CBC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730CBF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730CC2  89 11                     MOV dword ptr [ECX],EDX
00730CC4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00730CC7  C7 40 04 FF FF FF 7F      MOV dword ptr [EAX + 0x4],0x7fffffff
00730CCE  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00730CD1  51                        PUSH ECX
00730CD2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00730CD5  52                        PUSH EDX
00730CD6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00730CD9  50                        PUSH EAX
00730CDA  E8 11 AA 00 00            CALL 0x0073b6f0
00730CDF  83 C4 0C                  ADD ESP,0xc
00730CE2  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00730CE5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730CE8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00730CEB  83 EA 01                  SUB EDX,0x1
00730CEE  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00730CF1  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00730CF4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730CF7  83 79 04 00               CMP dword ptr [ECX + 0x4],0x0
00730CFB  7C 22                     JL 0x00730d1f
00730CFD  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00730D00  8B 02                     MOV EAX,dword ptr [EDX]
00730D02  C6 00 00                  MOV byte ptr [EAX],0x0
00730D05  33 C9                     XOR ECX,ECX
00730D07  81 E1 FF 00 00 00         AND ECX,0xff
00730D0D  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00730D10  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00730D13  8B 02                     MOV EAX,dword ptr [EDX]
00730D15  83 C0 01                  ADD EAX,0x1
00730D18  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730D1B  89 01                     MOV dword ptr [ECX],EAX
00730D1D  EB 11                     JMP 0x00730d30
LAB_00730d1f:
00730D1F  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00730D22  52                        PUSH EDX
00730D23  6A 00                     PUSH 0x0
00730D25  E8 46 A7 00 00            CALL 0x0073b470
00730D2A  83 C4 08                  ADD ESP,0x8
00730D2D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_00730d30:
00730D30  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00730D33  5F                        POP EDI
00730D34  5E                        POP ESI
00730D35  5B                        POP EBX
00730D36  8B E5                     MOV ESP,EBP
00730D38  5D                        POP EBP
00730D39  C3                        RET
