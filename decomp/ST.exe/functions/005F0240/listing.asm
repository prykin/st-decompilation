FUN_005f0240:
005F0240  55                        PUSH EBP
005F0241  8B EC                     MOV EBP,ESP
005F0243  56                        PUSH ESI
005F0244  57                        PUSH EDI
005F0245  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F0248  8B F1                     MOV ESI,ECX
005F024A  C6 07 04                  MOV byte ptr [EDI],0x4
005F024D  C6 47 01 01               MOV byte ptr [EDI + 0x1],0x1
005F0251  8B 06                     MOV EAX,dword ptr [ESI]
005F0253  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005F0256  89 47 02                  MOV dword ptr [EDI + 0x2],EAX
005F0259  8B 16                     MOV EDX,dword ptr [ESI]
005F025B  8B CE                     MOV ECX,ESI
005F025D  FF 52 0C                  CALL dword ptr [EDX + 0xc]
005F0260  88 47 06                  MOV byte ptr [EDI + 0x6],AL
005F0263  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F0266  89 47 07                  MOV dword ptr [EDI + 0x7],EAX
005F0269  5F                        POP EDI
005F026A  5E                        POP ESI
005F026B  5D                        POP EBP
005F026C  C2 04 00                  RET 0x4
