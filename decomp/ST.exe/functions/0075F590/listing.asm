FUN_0075f590:
0075F590  55                        PUSH EBP
0075F591  8B EC                     MOV EBP,ESP
0075F593  83 EC 34                  SUB ESP,0x34
0075F596  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075F599  53                        PUSH EBX
0075F59A  56                        PUSH ESI
0075F59B  57                        PUSH EDI
0075F59C  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075F5A2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075F5A5  33 FF                     XOR EDI,EDI
0075F5A7  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0075F5AA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0075F5AD  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0075F5B0  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0075F5B3  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0075F5B6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0075F5B9  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0075F5BC  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0075F5BF  8B 00                     MOV EAX,dword ptr [EAX]
0075F5C1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075F5C4  3B C1                     CMP EAX,ECX
0075F5C6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0075F5C9  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0075F5CC  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0075F5CF  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
0075F5D2  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0075F5D5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0075F5D8  0F 8F DA 00 00 00         JG 0x0075f6b8
0075F5DE  8D 14 C5 04 00 00 00      LEA EDX,[EAX*0x8 + 0x4]
0075F5E5  2B C8                     SUB ECX,EAX
0075F5E7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075F5EA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0075F5ED  41                        INC ECX
0075F5EE  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
0075F5F1  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0075F5F4  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_0075f5f7:
0075F5F7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0075F5FA  3B F0                     CMP ESI,EAX
0075F5FC  0F 8F 97 00 00 00         JG 0x0075f699
0075F602  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0075F605  8B CE                     MOV ECX,ESI
0075F607  C1 E1 05                  SHL ECX,0x5
0075F60A  8B 3F                     MOV EDI,dword ptr [EDI]
0075F60C  03 CB                     ADD ECX,EBX
0075F60E  2B C6                     SUB EAX,ESI
0075F610  8D 14 B5 02 00 00 00      LEA EDX,[ESI*0x4 + 0x2]
0075F617  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
0075F61A  40                        INC EAX
0075F61B  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075F61E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0075f621:
0075F621  3B 5D E8                  CMP EBX,dword ptr [EBP + -0x18]
0075F624  7F 5E                     JG 0x0075f684
0075F626  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0075F629  8D 0C DD 04 00 00 00      LEA ECX,[EBX*0x8 + 0x4]
0075F630  2B F3                     SUB ESI,EBX
0075F632  46                        INC ESI
LAB_0075f633:
0075F633  33 C0                     XOR EAX,EAX
0075F635  66 8B 07                  MOV AX,word ptr [EDI]
0075F638  83 C7 02                  ADD EDI,0x2
0075F63B  85 C0                     TEST EAX,EAX
0075F63D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
0075F640  74 36                     JZ 0x0075f678
0075F642  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075F645  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0075F648  03 F8                     ADD EDI,EAX
0075F64A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075F64D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0075F650  0F AF F8                  IMUL EDI,EAX
0075F653  03 DF                     ADD EBX,EDI
0075F655  8B FA                     MOV EDI,EDX
0075F657  0F AF F8                  IMUL EDI,EAX
0075F65A  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075F65D  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075F660  03 DF                     ADD EBX,EDI
0075F662  8B F9                     MOV EDI,ECX
0075F664  0F AF F8                  IMUL EDI,EAX
0075F667  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075F66A  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0075F66D  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
0075F670  03 C7                     ADD EAX,EDI
0075F672  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
0075F675  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0075f678:
0075F678  83 C1 08                  ADD ECX,0x8
0075F67B  4E                        DEC ESI
0075F67C  75 B5                     JNZ 0x0075f633
0075F67E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0075F681  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
LAB_0075f684:
0075F684  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075F687  83 C2 04                  ADD EDX,0x4
0075F68A  83 C7 40                  ADD EDI,0x40
0075F68D  48                        DEC EAX
0075F68E  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0075F691  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0075F694  75 8B                     JNZ 0x0075f621
0075F696  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0075f699:
0075F699  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075F69C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075F69F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0075F6A2  83 C2 04                  ADD EDX,0x4
0075F6A5  83 C1 08                  ADD ECX,0x8
0075F6A8  48                        DEC EAX
0075F6A9  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075F6AC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075F6AF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0075F6B2  0F 85 3F FF FF FF         JNZ 0x0075f5f7
LAB_0075f6b8:
0075F6B8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075F6BB  8B CF                     MOV ECX,EDI
0075F6BD  D1 F9                     SAR ECX,0x1
0075F6BF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075F6C2  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075F6C5  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0075F6C8  99                        CDQ
0075F6C9  F7 FF                     IDIV EDI
0075F6CB  8B 93 80 00 00 00         MOV EDX,dword ptr [EBX + 0x80]
0075F6D1  8B 12                     MOV EDX,dword ptr [EDX]
0075F6D3  88 04 32                  MOV byte ptr [EDX + ESI*0x1],AL
0075F6D6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075F6D9  03 C1                     ADD EAX,ECX
0075F6DB  99                        CDQ
0075F6DC  F7 FF                     IDIV EDI
0075F6DE  8B 93 80 00 00 00         MOV EDX,dword ptr [EBX + 0x80]
0075F6E4  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
0075F6E7  88 04 32                  MOV byte ptr [EDX + ESI*0x1],AL
0075F6EA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075F6ED  03 C1                     ADD EAX,ECX
0075F6EF  8B 8B 80 00 00 00         MOV ECX,dword ptr [EBX + 0x80]
0075F6F5  99                        CDQ
0075F6F6  F7 FF                     IDIV EDI
0075F6F8  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0075F6FB  5F                        POP EDI
0075F6FC  88 04 32                  MOV byte ptr [EDX + ESI*0x1],AL
0075F6FF  5E                        POP ESI
0075F700  5B                        POP EBX
0075F701  8B E5                     MOV ESP,EBP
0075F703  5D                        POP EBP
0075F704  C2 0C 00                  RET 0xc
