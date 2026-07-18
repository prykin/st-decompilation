FUN_0074fea4:
0074FEA4  55                        PUSH EBP
0074FEA5  8B EC                     MOV EBP,ESP
0074FEA7  51                        PUSH ECX
0074FEA8  51                        PUSH ECX
0074FEA9  8B 41 60                  MOV EAX,dword ptr [ECX + 0x60]
0074FEAC  85 C0                     TEST EAX,EAX
0074FEAE  74 41                     JZ 0x0074fef1
0074FEB0  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0074FEB4  74 12                     JZ 0x0074fec8
0074FEB6  83 79 64 00               CMP dword ptr [ECX + 0x64],0x0
0074FEBA  74 35                     JZ 0x0074fef1
0074FEBC  8B 51 68                  MOV EDX,dword ptr [ECX + 0x68]
0074FEBF  8B 49 6C                  MOV ECX,dword ptr [ECX + 0x6c]
0074FEC2  01 55 08                  ADD dword ptr [EBP + 0x8],EDX
0074FEC5  11 4D 0C                  ADC dword ptr [EBP + 0xc],ECX
LAB_0074fec8:
0074FEC8  83 65 F8 00               AND dword ptr [EBP + -0x8],0x0
0074FECC  83 65 FC 00               AND dword ptr [EBP + -0x4],0x0
0074FED0  8B 08                     MOV ECX,dword ptr [EAX]
0074FED2  8D 55 F8                  LEA EDX,[EBP + -0x8]
0074FED5  52                        PUSH EDX
0074FED6  50                        PUSH EAX
0074FED7  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074FEDA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074FEDD  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
0074FEE0  7F 0F                     JG 0x0074fef1
0074FEE2  7C 08                     JL 0x0074feec
0074FEE4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074FEE7  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
0074FEEA  77 05                     JA 0x0074fef1
LAB_0074feec:
0074FEEC  6A 01                     PUSH 0x1
0074FEEE  58                        POP EAX
0074FEEF  EB 02                     JMP 0x0074fef3
LAB_0074fef1:
0074FEF1  33 C0                     XOR EAX,EAX
LAB_0074fef3:
0074FEF3  C9                        LEAVE
0074FEF4  C2 0C 00                  RET 0xc
