FUN_006e83f0:
006E83F0  55                        PUSH EBP
006E83F1  8B EC                     MOV EBP,ESP
006E83F3  56                        PUSH ESI
006E83F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E83F7  33 C0                     XOR EAX,EAX
006E83F9  56                        PUSH ESI
006E83FA  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
006E83FE  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
006E8402  83 C0 1F                  ADD EAX,0x1f
006E8405  C1 E8 03                  SHR EAX,0x3
006E8408  25 FC FF FF 1F            AND EAX,0x1ffffffc
006E840D  A3 8C 6D 85 00            MOV [0x00856d8c],EAX
006E8412  E8 89 CB FC FF            CALL 0x006b4fa0
006E8417  DB 45 18                  FILD dword ptr [EBP + 0x18]
006E841A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006E841D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006E8420  2B CE                     SUB ECX,ESI
006E8422  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E8425  D8 3D D0 DF 79 00         FDIVR float ptr [0x0079dfd0]
006E842B  49                        DEC ECX
006E842C  03 D0                     ADD EDX,EAX
006E842E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E8431  5E                        POP ESI
006E8432  A3 A0 6D 85 00            MOV [0x00856da0],EAX
006E8437  0F AF 0D 8C 6D 85 00      IMUL ECX,dword ptr [0x00856d8c]
006E843E  D9 1D 80 6D 85 00         FSTP float ptr [0x00856d80]
006E8444  03 CA                     ADD ECX,EDX
006E8446  99                        CDQ
006E8447  2B C2                     SUB EAX,EDX
006E8449  89 0D 88 6D 85 00         MOV dword ptr [0x00856d88],ECX
006E844F  D1 F8                     SAR EAX,0x1
006E8451  A3 84 6D 85 00            MOV [0x00856d84],EAX
006E8456  5D                        POP EBP
006E8457  C3                        RET
