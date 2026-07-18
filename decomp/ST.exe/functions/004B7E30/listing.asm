FUN_004b7e30:
004B7E30  55                        PUSH EBP
004B7E31  8B EC                     MOV EBP,ESP
004B7E33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B7E36  56                        PUSH ESI
004B7E37  57                        PUSH EDI
004B7E38  33 F6                     XOR ESI,ESI
004B7E3A  33 D2                     XOR EDX,EDX
004B7E3C  33 FF                     XOR EDI,EDI
004B7E3E  3D FE 00 00 00            CMP EAX,0xfe
004B7E43  75 27                     JNZ 0x004b7e6c
004B7E45  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B7E48  3D DD 00 00 00            CMP EAX,0xdd
004B7E4D  75 05                     JNZ 0x004b7e54
004B7E4F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B7E52  EB 45                     JMP 0x004b7e99
LAB_004b7e54:
004B7E54  3D DE 00 00 00            CMP EAX,0xde
004B7E59  75 05                     JNZ 0x004b7e60
004B7E5B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B7E5E  EB 39                     JMP 0x004b7e99
LAB_004b7e60:
004B7E60  3D E2 00 00 00            CMP EAX,0xe2
004B7E65  75 32                     JNZ 0x004b7e99
004B7E67  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004B7E6A  EB 2D                     JMP 0x004b7e99
LAB_004b7e6c:
004B7E6C  3D FD 00 00 00            CMP EAX,0xfd
004B7E71  75 07                     JNZ 0x004b7e7a
004B7E73  BE E8 03 00 00            MOV ESI,0x3e8
004B7E78  EB 1F                     JMP 0x004b7e99
LAB_004b7e7a:
004B7E7A  83 F8 01                  CMP EAX,0x1
004B7E7D  7C 1A                     JL 0x004b7e99
004B7E7F  83 F8 29                  CMP EAX,0x29
004B7E82  7D 15                     JGE 0x004b7e99
004B7E84  8B 3C 85 9C 07 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e079c]
004B7E8B  8B 14 85 5C 05 7E 00      MOV EDX,dword ptr [EAX*0x4 + 0x7e055c]
004B7E92  8B 34 85 DC 09 7E 00      MOV ESI,dword ptr [EAX*0x4 + 0x7e09dc]
LAB_004b7e99:
004B7E99  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
004B7E9C  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
004B7E9F  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004B7EA2  8D 04 7A                  LEA EAX,[EDX + EDI*0x2]
004B7EA5  50                        PUSH EAX
004B7EA6  51                        PUSH ECX
004B7EA7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B7EAD  E8 80 B4 F4 FF            CALL 0x00403332
004B7EB2  5F                        POP EDI
004B7EB3  33 C0                     XOR EAX,EAX
004B7EB5  5E                        POP ESI
004B7EB6  5D                        POP EBP
004B7EB7  C2 0C 00                  RET 0xc
