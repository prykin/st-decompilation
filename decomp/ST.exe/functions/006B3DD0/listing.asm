FUN_006b3dd0:
006B3DD0  55                        PUSH EBP
006B3DD1  8B EC                     MOV EBP,ESP
006B3DD3  53                        PUSH EBX
006B3DD4  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006B3DD7  56                        PUSH ESI
006B3DD8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B3DDB  57                        PUSH EDI
006B3DDC  6A 01                     PUSH 0x1
006B3DDE  6A 00                     PUSH 0x0
006B3DE0  6A FF                     PUSH -0x1
006B3DE2  6A FF                     PUSH -0x1
006B3DE4  6A 00                     PUSH 0x0
006B3DE6  6A 00                     PUSH 0x0
006B3DE8  8D BE E0 01 00 00         LEA EDI,[ESI + 0x1e0]
006B3DEE  6A 00                     PUSH 0x0
006B3DF0  50                        PUSH EAX
006B3DF1  57                        PUSH EDI
006B3DF2  56                        PUSH ESI
006B3DF3  E8 58 DF FF FF            CALL 0x006b1d50
006B3DF8  8B D8                     MOV EBX,EAX
006B3DFA  85 DB                     TEST EBX,EBX
006B3DFC  0F 85 0E 01 00 00         JNZ 0x006b3f10
006B3E02  8B 0F                     MOV ECX,dword ptr [EDI]
006B3E04  8B 96 B0 01 00 00         MOV EDX,dword ptr [ESI + 0x1b0]
006B3E0A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B3E0D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B3E10  8B 3C 8A                  MOV EDI,dword ptr [EDX + ECX*0x4]
006B3E13  8B 17                     MOV EDX,dword ptr [EDI]
006B3E15  89 47 3C                  MOV dword ptr [EDI + 0x3c],EAX
006B3E18  83 CA 08                  OR EDX,0x8
006B3E1B  89 47 34                  MOV dword ptr [EDI + 0x34],EAX
006B3E1E  89 47 24                  MOV dword ptr [EDI + 0x24],EAX
006B3E21  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
006B3E24  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006B3E27  89 5F 38                  MOV dword ptr [EDI + 0x38],EBX
006B3E2A  89 5F 30                  MOV dword ptr [EDI + 0x30],EBX
006B3E2D  89 5F 20                  MOV dword ptr [EDI + 0x20],EBX
006B3E30  89 5F 0C                  MOV dword ptr [EDI + 0xc],EBX
006B3E33  89 17                     MOV dword ptr [EDI],EDX
006B3E35  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
006B3E3B  50                        PUSH EAX
006B3E3C  51                        PUSH ECX
006B3E3D  56                        PUSH ESI
006B3E3E  E8 CD DC FF FF            CALL 0x006b1b10
006B3E43  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B3E46  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B3E49  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B3E4C  89 86 1C 02 00 00         MOV dword ptr [ESI + 0x21c],EAX
006B3E52  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B3E55  89 96 04 02 00 00         MOV dword ptr [ESI + 0x204],EDX
006B3E5B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B3E5E  89 8E FC 01 00 00         MOV dword ptr [ESI + 0x1fc],ECX
006B3E64  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B3E67  89 86 14 02 00 00         MOV dword ptr [ESI + 0x214],EAX
006B3E6D  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006B3E70  89 96 00 02 00 00         MOV dword ptr [ESI + 0x200],EDX
006B3E76  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006B3E79  89 8E 18 02 00 00         MOV dword ptr [ESI + 0x218],ECX
006B3E7F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B3E82  89 86 F0 01 00 00         MOV dword ptr [ESI + 0x1f0],EAX
006B3E88  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006B3E8B  89 96 EC 01 00 00         MOV dword ptr [ESI + 0x1ec],EDX
006B3E91  89 9E F4 01 00 00         MOV dword ptr [ESI + 0x1f4],EBX
006B3E97  89 8E F8 01 00 00         MOV dword ptr [ESI + 0x1f8],ECX
006B3E9D  8B 57 50                  MOV EDX,dword ptr [EDI + 0x50]
006B3EA0  89 86 E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EAX
006B3EA6  8D BE 10 02 00 00         LEA EDI,[ESI + 0x210]
006B3EAC  B8 01 00 00 00            MOV EAX,0x1
006B3EB1  57                        PUSH EDI
006B3EB2  89 96 E4 01 00 00         MOV dword ptr [ESI + 0x1e4],EDX
006B3EB8  89 86 DC 01 00 00         MOV dword ptr [ESI + 0x1dc],EAX
006B3EBE  89 86 B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EAX
006B3EC4  89 86 B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EAX
006B3ECA  E8 91 71 FF FF            CALL 0x006ab060
006B3ECF  81 C6 20 02 00 00         ADD ESI,0x220
006B3ED5  56                        PUSH ESI
006B3ED6  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006B3ED9  E8 82 71 FF FF            CALL 0x006ab060
006B3EDE  8D 43 07                  LEA EAX,[EBX + 0x7]
006B3EE1  99                        CDQ
006B3EE2  83 E2 07                  AND EDX,0x7
006B3EE5  03 C2                     ADD EAX,EDX
006B3EE7  8B F0                     MOV ESI,EAX
006B3EE9  C1 FE 03                  SAR ESI,0x3
006B3EEC  0F AF 75 18               IMUL ESI,dword ptr [EBP + 0x18]
006B3EF0  56                        PUSH ESI
006B3EF1  E8 DA C5 FF FF            CALL 0x006b04d0
006B3EF6  85 C0                     TEST EAX,EAX
006B3EF8  89 07                     MOV dword ptr [EDI],EAX
006B3EFA  74 0F                     JZ 0x006b3f0b
006B3EFC  56                        PUSH ESI
006B3EFD  E8 CE C5 FF FF            CALL 0x006b04d0
006B3F02  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006B3F05  85 C0                     TEST EAX,EAX
006B3F07  89 01                     MOV dword ptr [ECX],EAX
006B3F09  75 25                     JNZ 0x006b3f30
LAB_006b3f0b:
006B3F0B  BB FE FF FF FF            MOV EBX,0xfffffffe
LAB_006b3f10:
006B3F10  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B3F16  68 7D 08 00 00            PUSH 0x87d
006B3F1B  68 C0 DA 7E 00            PUSH 0x7edac0
006B3F20  52                        PUSH EDX
006B3F21  53                        PUSH EBX
006B3F22  E8 19 1F FF FF            CALL 0x006a5e40
006B3F27  5F                        POP EDI
006B3F28  8B C3                     MOV EAX,EBX
006B3F2A  5E                        POP ESI
006B3F2B  5B                        POP EBX
006B3F2C  5D                        POP EBP
006B3F2D  C2 34 00                  RET 0x34
LAB_006b3f30:
006B3F30  5F                        POP EDI
006B3F31  5E                        POP ESI
006B3F32  33 C0                     XOR EAX,EAX
006B3F34  5B                        POP EBX
006B3F35  5D                        POP EBP
006B3F36  C2 34 00                  RET 0x34
