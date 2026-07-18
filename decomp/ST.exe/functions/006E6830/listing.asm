FUN_006e6830:
006E6830  55                        PUSH EBP
006E6831  8B EC                     MOV EBP,ESP
006E6833  8D 81 52 04 00 00         LEA EAX,[ECX + 0x452]
006E6839  56                        PUSH ESI
006E683A  8B 30                     MOV ESI,dword ptr [EAX]
006E683C  85 F6                     TEST ESI,ESI
006E683E  74 24                     JZ 0x006e6864
006E6840  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_006e6843:
006E6843  39 4E 04                  CMP dword ptr [ESI + 0x4],ECX
006E6846  74 0B                     JZ 0x006e6853
006E6848  8B 36                     MOV ESI,dword ptr [ESI]
006E684A  85 F6                     TEST ESI,ESI
006E684C  75 F5                     JNZ 0x006e6843
006E684E  5E                        POP ESI
006E684F  5D                        POP EBP
006E6850  C2 04 00                  RET 0x4
LAB_006e6853:
006E6853  85 F6                     TEST ESI,ESI
006E6855  74 0D                     JZ 0x006e6864
006E6857  56                        PUSH ESI
006E6858  50                        PUSH EAX
006E6859  E8 62 30 FD FF            CALL 0x006b98c0
006E685E  56                        PUSH ESI
006E685F  E8 2C F6 FB FF            CALL 0x006a5e90
LAB_006e6864:
006E6864  5E                        POP ESI
006E6865  5D                        POP EBP
006E6866  C2 04 00                  RET 0x4
