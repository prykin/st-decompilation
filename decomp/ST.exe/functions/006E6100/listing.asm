SystemWithNamedObjClassTy::SystemWithNamedObjClassTy:
006E6100  55                        PUSH EBP
006E6101  8B EC                     MOV EBP,ESP
006E6103  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E6106  56                        PUSH ESI
006E6107  8B F1                     MOV ESI,ECX
006E6109  50                        PUSH EAX
006E610A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E610D  51                        PUSH ECX
006E610E  8B CE                     MOV ECX,ESI
006E6110  E8 AB F0 FF FF            CALL 0x006e51c0
006E6115  C7 06 B4 E1 79 00         MOV dword ptr [ESI],0x79e1b4
006E611B  C7 46 20 01 00 00 00      MOV dword ptr [ESI + 0x20],0x1
006E6122  8B C6                     MOV EAX,ESI
006E6124  5E                        POP ESI
006E6125  5D                        POP EBP
006E6126  C2 08 00                  RET 0x8
