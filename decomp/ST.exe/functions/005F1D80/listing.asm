FUN_005f1d80:
005F1D80  55                        PUSH EBP
005F1D81  8B EC                     MOV EBP,ESP
005F1D83  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F1D88  56                        PUSH ESI
005F1D89  3C FF                     CMP AL,0xff
005F1D8B  57                        PUSH EDI
005F1D8C  8B F1                     MOV ESI,ECX
005F1D8E  74 74                     JZ 0x005f1e04
005F1D90  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F1D96  85 C0                     TEST EAX,EAX
005F1D98  74 6A                     JZ 0x005f1e04
005F1D9A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F1D9D  8D 45 08                  LEA EAX,[EBP + 0x8]
005F1DA0  8D 4D 0C                  LEA ECX,[EBP + 0xc]
005F1DA3  50                        PUSH EAX
005F1DA4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F1DA7  51                        PUSH ECX
005F1DA8  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
005F1DAE  52                        PUSH EDX
005F1DAF  50                        PUSH EAX
005F1DB0  51                        PUSH ECX
005F1DB1  8B CE                     MOV ECX,ESI
005F1DB3  E8 9B 21 E1 FF            CALL 0x00403f53
005F1DB8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F1DBB  85 C0                     TEST EAX,EAX
005F1DBD  7C 45                     JL 0x005f1e04
005F1DBF  83 F8 05                  CMP EAX,0x5
005F1DC2  7D 40                     JGE 0x005f1e04
005F1DC4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F1DC7  85 D2                     TEST EDX,EDX
005F1DC9  7C 39                     JL 0x005f1e04
005F1DCB  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
005F1DCE  3B D1                     CMP EDX,ECX
005F1DD0  7D 32                     JGE 0x005f1e04
005F1DD2  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F1DD9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F1DDC  03 C7                     ADD EAX,EDI
005F1DDE  85 C0                     TEST EAX,EAX
005F1DE0  7C 22                     JL 0x005f1e04
005F1DE2  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F1DE5  7D 1D                     JGE 0x005f1e04
005F1DE7  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F1DEA  85 F6                     TEST ESI,ESI
005F1DEC  74 16                     JZ 0x005f1e04
005F1DEE  0F AF C1                  IMUL EAX,ECX
005F1DF1  03 C6                     ADD EAX,ESI
005F1DF3  33 C9                     XOR ECX,ECX
005F1DF5  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005F1DF8  8B C1                     MOV EAX,ECX
005F1DFA  85 C0                     TEST EAX,EAX
005F1DFC  75 06                     JNZ 0x005f1e04
005F1DFE  5F                        POP EDI
005F1DFF  5E                        POP ESI
005F1E00  5D                        POP EBP
005F1E01  C2 0C 00                  RET 0xc
LAB_005f1e04:
005F1E04  5F                        POP EDI
005F1E05  B8 01 00 00 00            MOV EAX,0x1
005F1E0A  5E                        POP ESI
005F1E0B  5D                        POP EBP
005F1E0C  C2 0C 00                  RET 0xc
