FUN_004d6df0:
004D6DF0  56                        PUSH ESI
004D6DF1  8B F1                     MOV ESI,ECX
004D6DF3  57                        PUSH EDI
004D6DF4  8B 06                     MOV EAX,dword ptr [ESI]
004D6DF6  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D6DF9  83 F8 32                  CMP EAX,0x32
004D6DFC  7C 1C                     JL 0x004d6e1a
004D6DFE  8B 16                     MOV EDX,dword ptr [ESI]
004D6E00  8B CE                     MOV ECX,ESI
004D6E02  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D6E05  83 F8 74                  CMP EAX,0x74
004D6E08  7D 10                     JGE 0x004d6e1a
004D6E0A  8B 06                     MOV EAX,dword ptr [ESI]
004D6E0C  8B CE                     MOV ECX,ESI
004D6E0E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D6E11  8B 3C 85 F8 22 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e22f8]
004D6E18  EB 26                     JMP 0x004d6e40
LAB_004d6e1a:
004D6E1A  8B 16                     MOV EDX,dword ptr [ESI]
004D6E1C  8B CE                     MOV ECX,ESI
004D6E1E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D6E21  83 F8 01                  CMP EAX,0x1
004D6E24  7C 1E                     JL 0x004d6e44
004D6E26  8B 06                     MOV EAX,dword ptr [ESI]
004D6E28  8B CE                     MOV ECX,ESI
004D6E2A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D6E2D  83 F8 29                  CMP EAX,0x29
004D6E30  7D 12                     JGE 0x004d6e44
004D6E32  8B 16                     MOV EDX,dword ptr [ESI]
004D6E34  8B CE                     MOV ECX,ESI
004D6E36  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D6E39  8B 3C 85 1C 06 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e061c]
LAB_004d6e40:
004D6E40  85 FF                     TEST EDI,EDI
004D6E42  75 05                     JNZ 0x004d6e49
LAB_004d6e44:
004D6E44  5F                        POP EDI
004D6E45  33 C0                     XOR EAX,EAX
004D6E47  5E                        POP ESI
004D6E48  C3                        RET
LAB_004d6e49:
004D6E49  8B 06                     MOV EAX,dword ptr [ESI]
004D6E4B  8B CE                     MOV ECX,ESI
004D6E4D  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
004D6E53  B9 64 00 00 00            MOV ECX,0x64
004D6E58  2B C8                     SUB ECX,EAX
004D6E5A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D6E5F  0F AF CF                  IMUL ECX,EDI
004D6E62  F7 E9                     IMUL ECX
004D6E64  8B C2                     MOV EAX,EDX
004D6E66  5F                        POP EDI
004D6E67  C1 F8 05                  SAR EAX,0x5
004D6E6A  8B C8                     MOV ECX,EAX
004D6E6C  5E                        POP ESI
004D6E6D  C1 E9 1F                  SHR ECX,0x1f
004D6E70  03 C1                     ADD EAX,ECX
004D6E72  C3                        RET
