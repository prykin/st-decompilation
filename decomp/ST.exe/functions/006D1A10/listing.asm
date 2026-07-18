FUN_006d1a10:
006D1A10  55                        PUSH EBP
006D1A11  8B EC                     MOV EBP,ESP
006D1A13  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D1A16  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D1A19  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D1A1C  50                        PUSH EAX
006D1A1D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D1A20  51                        PUSH ECX
006D1A21  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D1A24  6A 08                     PUSH 0x8
006D1A26  52                        PUSH EDX
006D1A27  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D1A2A  50                        PUSH EAX
006D1A2B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D1A2E  51                        PUSH ECX
006D1A2F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1A32  52                        PUSH EDX
006D1A33  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1A36  6A 10                     PUSH 0x10
006D1A38  50                        PUSH EAX
006D1A39  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1A3C  51                        PUSH ECX
006D1A3D  52                        PUSH EDX
006D1A3E  50                        PUSH EAX
006D1A3F  E8 5C FC FF FF            CALL 0x006d16a0
006D1A44  5D                        POP EBP
006D1A45  C2 28 00                  RET 0x28
