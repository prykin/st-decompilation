FUN_005f0150:
005F0150  55                        PUSH EBP
005F0151  8B EC                     MOV EBP,ESP
005F0153  56                        PUSH ESI
005F0154  8B F1                     MOV ESI,ECX
005F0156  57                        PUSH EDI
005F0157  8B 06                     MOV EAX,dword ptr [ESI]
005F0159  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005F015C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F015F  8B CE                     MOV ECX,ESI
005F0161  89 07                     MOV dword ptr [EDI],EAX
005F0163  8B 16                     MOV EDX,dword ptr [ESI]
005F0165  FF 52 0C                  CALL dword ptr [EDX + 0xc]
005F0168  B9 01 00 00 00            MOV ECX,0x1
005F016D  88 47 04                  MOV byte ptr [EDI + 0x4],AL
005F0170  C6 47 05 04               MOV byte ptr [EDI + 0x5],0x4
005F0174  88 4F 06                  MOV byte ptr [EDI + 0x6],CL
005F0177  8B 86 3A 02 00 00         MOV EAX,dword ptr [ESI + 0x23a]
005F017D  83 F8 05                  CMP EAX,0x5
005F0180  74 0D                     JZ 0x005f018f
005F0182  83 F8 06                  CMP EAX,0x6
005F0185  74 08                     JZ 0x005f018f
005F0187  83 F8 07                  CMP EAX,0x7
005F018A  74 03                     JZ 0x005f018f
005F018C  88 4F 07                  MOV byte ptr [EDI + 0x7],CL
LAB_005f018f:
005F018F  8B 86 B1 02 00 00         MOV EAX,dword ptr [ESI + 0x2b1]
005F0195  85 C0                     TEST EAX,EAX
005F0197  74 29                     JZ 0x005f01c2
005F0199  3B C1                     CMP EAX,ECX
005F019B  74 25                     JZ 0x005f01c2
005F019D  83 F8 02                  CMP EAX,0x2
005F01A0  74 20                     JZ 0x005f01c2
005F01A2  8B 06                     MOV EAX,dword ptr [ESI]
005F01A4  8B CE                     MOV ECX,ESI
005F01A6  FF 90 34 01 00 00         CALL dword ptr [EAX + 0x134]
005F01AC  88 47 1C                  MOV byte ptr [EDI + 0x1c],AL
005F01AF  8B 16                     MOV EDX,dword ptr [ESI]
005F01B1  8B CE                     MOV ECX,ESI
005F01B3  FF 92 3C 01 00 00         CALL dword ptr [EDX + 0x13c]
005F01B9  89 47 21                  MOV dword ptr [EDI + 0x21],EAX
005F01BC  5F                        POP EDI
005F01BD  5E                        POP ESI
005F01BE  5D                        POP EBP
005F01BF  C2 04 00                  RET 0x4
LAB_005f01c2:
005F01C2  8B 16                     MOV EDX,dword ptr [ESI]
005F01C4  8B CE                     MOV ECX,ESI
005F01C6  FF 92 34 01 00 00         CALL dword ptr [EDX + 0x134]
005F01CC  88 47 1C                  MOV byte ptr [EDI + 0x1c],AL
005F01CF  8B 06                     MOV EAX,dword ptr [ESI]
005F01D1  8B CE                     MOV ECX,ESI
005F01D3  FF 90 38 01 00 00         CALL dword ptr [EAX + 0x138]
005F01D9  89 47 1D                  MOV dword ptr [EDI + 0x1d],EAX
005F01DC  8B 16                     MOV EDX,dword ptr [ESI]
005F01DE  8B CE                     MOV ECX,ESI
005F01E0  FF 92 3C 01 00 00         CALL dword ptr [EDX + 0x13c]
005F01E6  89 47 21                  MOV dword ptr [EDI + 0x21],EAX
005F01E9  5F                        POP EDI
005F01EA  5E                        POP ESI
005F01EB  5D                        POP EBP
005F01EC  C2 04 00                  RET 0x4
