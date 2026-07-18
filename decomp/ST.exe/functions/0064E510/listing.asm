FUN_0064e510:
0064E510  55                        PUSH EBP
0064E511  8B EC                     MOV EBP,ESP
0064E513  8B 91 EE 04 00 00         MOV EDX,dword ptr [ECX + 0x4ee]
0064E519  53                        PUSH EBX
0064E51A  56                        PUSH ESI
0064E51B  57                        PUSH EDI
0064E51C  85 D2                     TEST EDX,EDX
0064E51E  74 29                     JZ 0x0064e549
0064E520  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0064E523  33 C9                     XOR ECX,ECX
0064E525  85 F6                     TEST ESI,ESI
0064E527  7E 20                     JLE 0x0064e549
0064E529  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0064E52C  3B CE                     CMP ECX,ESI
LAB_0064e52e:
0064E52E  73 14                     JNC 0x0064e544
0064E530  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0064E533  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0064E536  0F AF C1                  IMUL EAX,ECX
0064E539  03 C3                     ADD EAX,EBX
0064E53B  85 C0                     TEST EAX,EAX
0064E53D  74 05                     JZ 0x0064e544
0064E53F  39 78 01                  CMP dword ptr [EAX + 0x1],EDI
0064E542  74 07                     JZ 0x0064e54b
LAB_0064e544:
0064E544  41                        INC ECX
0064E545  3B CE                     CMP ECX,ESI
0064E547  7C E5                     JL 0x0064e52e
LAB_0064e549:
0064E549  33 C0                     XOR EAX,EAX
LAB_0064e54b:
0064E54B  5F                        POP EDI
0064E54C  5E                        POP ESI
0064E54D  5B                        POP EBX
0064E54E  5D                        POP EBP
0064E54F  C2 04 00                  RET 0x4
