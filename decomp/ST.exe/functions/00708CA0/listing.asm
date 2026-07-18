FUN_00708ca0:
00708CA0  55                        PUSH EBP
00708CA1  8B EC                     MOV EBP,ESP
00708CA3  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00708CA6  48                        DEC EAX
00708CA7  78 5A                     JS 0x00708d03
00708CA9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00708CAC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00708CAF  53                        PUSH EBX
00708CB0  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00708CB3  56                        PUSH ESI
00708CB4  40                        INC EAX
00708CB5  57                        PUSH EDI
00708CB6  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00708CB9  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
LAB_00708cbc:
00708CBC  8D 73 FF                  LEA ESI,[EBX + -0x1]
00708CBF  85 F6                     TEST ESI,ESI
00708CC1  7C 23                     JL 0x00708ce6
00708CC3  46                        INC ESI
LAB_00708cc4:
00708CC4  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00708CC7  33 C0                     XOR EAX,EAX
00708CC9  8A 07                     MOV AL,byte ptr [EDI]
00708CCB  47                        INC EDI
00708CCC  3B C3                     CMP EAX,EBX
00708CCE  74 0C                     JZ 0x00708cdc
00708CD0  33 DB                     XOR EBX,EBX
00708CD2  66 8B 1A                  MOV BX,word ptr [EDX]
00708CD5  39 5D 18                  CMP dword ptr [EBP + 0x18],EBX
00708CD8  77 02                     JA 0x00708cdc
00708CDA  88 01                     MOV byte ptr [ECX],AL
LAB_00708cdc:
00708CDC  83 C2 02                  ADD EDX,0x2
00708CDF  41                        INC ECX
00708CE0  4E                        DEC ESI
00708CE1  75 E1                     JNZ 0x00708cc4
00708CE3  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
LAB_00708ce6:
00708CE6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00708CE9  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00708CEC  2B C3                     SUB EAX,EBX
00708CEE  03 C8                     ADD ECX,EAX
00708CF0  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
00708CF3  2B F0                     SUB ESI,EAX
00708CF5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00708CF8  03 D6                     ADD EDX,ESI
00708CFA  48                        DEC EAX
00708CFB  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00708CFE  75 BC                     JNZ 0x00708cbc
00708D00  5F                        POP EDI
00708D01  5E                        POP ESI
00708D02  5B                        POP EBX
LAB_00708d03:
00708D03  5D                        POP EBP
00708D04  C2 28 00                  RET 0x28
