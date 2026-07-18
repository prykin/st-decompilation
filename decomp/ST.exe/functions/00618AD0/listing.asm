FUN_00618ad0:
00618AD0  8B 51 5E                  MOV EDX,dword ptr [ECX + 0x5e]
00618AD3  56                        PUSH ESI
00618AD4  57                        PUSH EDI
00618AD5  33 FF                     XOR EDI,EDI
00618AD7  3B D7                     CMP EDX,EDI
00618AD9  74 3C                     JZ 0x00618b17
00618ADB  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00618ADE  33 F6                     XOR ESI,ESI
00618AE0  3B C7                     CMP EAX,EDI
00618AE2  7E 33                     JLE 0x00618b17
00618AE4  53                        PUSH EBX
00618AE5  3B F0                     CMP ESI,EAX
LAB_00618ae7:
00618AE7  73 22                     JNC 0x00618b0b
00618AE9  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00618AEC  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
00618AEF  0F AF C6                  IMUL EAX,ESI
00618AF2  03 C3                     ADD EAX,EBX
00618AF4  3B C7                     CMP EAX,EDI
00618AF6  74 13                     JZ 0x00618b0b
00618AF8  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00618AFB  3B C7                     CMP EAX,EDI
00618AFD  74 0C                     JZ 0x00618b0b
00618AFF  89 78 7D                  MOV dword ptr [EAX + 0x7d],EDI
00618B02  89 B8 8B 00 00 00         MOV dword ptr [EAX + 0x8b],EDI
00618B08  89 78 79                  MOV dword ptr [EAX + 0x79],EDI
LAB_00618b0b:
00618B0B  8B 51 5E                  MOV EDX,dword ptr [ECX + 0x5e]
00618B0E  46                        INC ESI
00618B0F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00618B12  3B F0                     CMP ESI,EAX
00618B14  7C D1                     JL 0x00618ae7
00618B16  5B                        POP EBX
LAB_00618b17:
00618B17  5F                        POP EDI
00618B18  5E                        POP ESI
00618B19  C3                        RET
