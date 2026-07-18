FUN_005b6ff0:
005B6FF0  55                        PUSH EBP
005B6FF1  8B EC                     MOV EBP,ESP
005B6FF3  83 EC 48                  SUB ESP,0x48
005B6FF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B6FFB  53                        PUSH EBX
005B6FFC  56                        PUSH ESI
005B6FFD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B7000  57                        PUSH EDI
005B7001  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B7004  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B7007  6A 00                     PUSH 0x0
005B7009  52                        PUSH EDX
005B700A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B700D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7013  E8 D8 67 17 00            CALL 0x0072d7f0
005B7018  8B F0                     MOV ESI,EAX
005B701A  83 C4 08                  ADD ESP,0x8
005B701D  85 F6                     TEST ESI,ESI
005B701F  0F 85 36 01 00 00         JNZ 0x005b715b
005B7025  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B7028  BB 0D 00 00 00            MOV EBX,0xd
005B702D  8D 77 66                  LEA ESI,[EDI + 0x66]
LAB_005b7030:
005B7030  8B 06                     MOV EAX,dword ptr [ESI]
005B7032  85 C0                     TEST EAX,EAX
005B7034  74 09                     JZ 0x005b703f
005B7036  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005B7039  50                        PUSH EAX
005B703A  E8 71 E6 12 00            CALL 0x006e56b0
LAB_005b703f:
005B703F  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
005B7045  83 C6 04                  ADD ESI,0x4
005B7048  4B                        DEC EBX
005B7049  75 E5                     JNZ 0x005b7030
005B704B  C7 87 FF 1C 00 00 00 00 00 00  MOV dword ptr [EDI + 0x1cff],0x0
005B7055  8B 87 FB 1C 00 00         MOV EAX,dword ptr [EDI + 0x1cfb]
005B705B  83 F8 FF                  CMP EAX,-0x1
005B705E  74 22                     JZ 0x005b7082
005B7060  8B 8F 17 1D 00 00         MOV ECX,dword ptr [EDI + 0x1d17]
005B7066  8B 97 13 1D 00 00         MOV EDX,dword ptr [EDI + 0x1d13]
005B706C  51                        PUSH ECX
005B706D  8B 8F FF 1C 00 00         MOV ECX,dword ptr [EDI + 0x1cff]
005B7073  52                        PUSH EDX
005B7074  8B 97 3F 1D 00 00         MOV EDX,dword ptr [EDI + 0x1d3f]
005B707A  51                        PUSH ECX
005B707B  50                        PUSH EAX
005B707C  52                        PUSH EDX
005B707D  E8 AE C6 0F 00            CALL 0x006b3730
LAB_005b7082:
005B7082  8B 87 FB 1C 00 00         MOV EAX,dword ptr [EDI + 0x1cfb]
005B7088  83 F8 FF                  CMP EAX,-0x1
005B708B  74 0D                     JZ 0x005b709a
005B708D  50                        PUSH EAX
005B708E  8B 87 3F 1D 00 00         MOV EAX,dword ptr [EDI + 0x1d3f]
005B7094  50                        PUSH EAX
005B7095  E8 56 CA 0F 00            CALL 0x006b3af0
LAB_005b709a:
005B709A  8B 87 8C 1D 00 00         MOV EAX,dword ptr [EDI + 0x1d8c]
005B70A0  83 F8 FF                  CMP EAX,-0x1
005B70A3  74 0D                     JZ 0x005b70b2
005B70A5  8B 8F D0 1D 00 00         MOV ECX,dword ptr [EDI + 0x1dd0]
005B70AB  50                        PUSH EAX
005B70AC  51                        PUSH ECX
005B70AD  E8 3E CA 0F 00            CALL 0x006b3af0
LAB_005b70b2:
005B70B2  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B70B8  33 DB                     XOR EBX,EBX
005B70BA  84 C0                     TEST AL,AL
005B70BC  0F 86 85 00 00 00         JBE 0x005b7147
005B70C2  8D B7 E7 00 00 00         LEA ESI,[EDI + 0xe7]
LAB_005b70c8:
005B70C8  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
005B70CF  8B 06                     MOV EAX,dword ptr [ESI]
005B70D1  83 F8 FF                  CMP EAX,-0x1
005B70D4  74 16                     JZ 0x005b70ec
005B70D6  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005B70D9  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005B70DC  52                        PUSH EDX
005B70DD  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005B70E0  51                        PUSH ECX
005B70E1  52                        PUSH EDX
005B70E2  50                        PUSH EAX
005B70E3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005B70E6  50                        PUSH EAX
005B70E7  E8 44 C6 0F 00            CALL 0x006b3730
LAB_005b70ec:
005B70EC  8B 06                     MOV EAX,dword ptr [ESI]
005B70EE  83 F8 FF                  CMP EAX,-0x1
005B70F1  74 0A                     JZ 0x005b70fd
005B70F3  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
005B70F6  50                        PUSH EAX
005B70F7  51                        PUSH ECX
005B70F8  E8 F3 C9 0F 00            CALL 0x006b3af0
LAB_005b70fd:
005B70FD  8B 86 91 00 00 00         MOV EAX,dword ptr [ESI + 0x91]
005B7103  83 F8 FF                  CMP EAX,-0x1
005B7106  74 0D                     JZ 0x005b7115
005B7108  8B 96 D5 00 00 00         MOV EDX,dword ptr [ESI + 0xd5]
005B710E  50                        PUSH EAX
005B710F  52                        PUSH EDX
005B7110  E8 DB C9 0F 00            CALL 0x006b3af0
LAB_005b7115:
005B7115  8A 46 FB                  MOV AL,byte ptr [ESI + -0x5]
005B7118  84 C0                     TEST AL,AL
005B711A  74 18                     JZ 0x005b7134
005B711C  8B 86 22 01 00 00         MOV EAX,dword ptr [ESI + 0x122]
005B7122  83 F8 FF                  CMP EAX,-0x1
005B7125  74 0D                     JZ 0x005b7134
005B7127  50                        PUSH EAX
005B7128  8B 86 66 01 00 00         MOV EAX,dword ptr [ESI + 0x166]
005B712E  50                        PUSH EAX
005B712F  E8 BC C9 0F 00            CALL 0x006b3af0
LAB_005b7134:
005B7134  33 C9                     XOR ECX,ECX
005B7136  43                        INC EBX
005B7137  8A 8F 9A 00 00 00         MOV CL,byte ptr [EDI + 0x9a]
005B713D  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B7143  3B D9                     CMP EBX,ECX
005B7145  7C 81                     JL 0x005b70c8
LAB_005b7147:
005B7147  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B714A  C6 47 65 02               MOV byte ptr [EDI + 0x65],0x2
005B714E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B7154  5F                        POP EDI
005B7155  5E                        POP ESI
005B7156  5B                        POP EBX
005B7157  8B E5                     MOV ESP,EBP
005B7159  5D                        POP EBP
005B715A  C3                        RET
LAB_005b715b:
005B715B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B715E  68 30 CC 7C 00            PUSH 0x7ccc30
005B7163  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B7168  56                        PUSH ESI
005B7169  6A 00                     PUSH 0x0
005B716B  6A 41                     PUSH 0x41
005B716D  68 74 CB 7C 00            PUSH 0x7ccb74
005B7172  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B7177  E8 54 63 0F 00            CALL 0x006ad4d0
005B717C  83 C4 18                  ADD ESP,0x18
005B717F  85 C0                     TEST EAX,EAX
005B7181  74 01                     JZ 0x005b7184
005B7183  CC                        INT3
LAB_005b7184:
005B7184  6A 41                     PUSH 0x41
005B7186  68 74 CB 7C 00            PUSH 0x7ccb74
005B718B  6A 00                     PUSH 0x0
005B718D  56                        PUSH ESI
005B718E  E8 AD EC 0E 00            CALL 0x006a5e40
005B7193  5F                        POP EDI
005B7194  5E                        POP ESI
005B7195  5B                        POP EBX
005B7196  8B E5                     MOV ESP,EBP
005B7198  5D                        POP EBP
005B7199  C3                        RET
