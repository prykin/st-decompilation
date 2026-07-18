FUN_00753fa7:
00753FA7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00753FAA  2B 45 24                  SUB EAX,dword ptr [EBP + 0x24]
00753FAD  01 45 3C                  ADD dword ptr [EBP + 0x3c],EAX
00753FB0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00753FB3  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
00753FB6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00753FB9  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
00753FBC  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
00753FC0  72 0D                     JC 0x00753fcf
00753FC2  53                        PUSH EBX
00753FC3  56                        PUSH ESI
00753FC4  50                        PUSH EAX
00753FC5  FF 55 0C                  CALL dword ptr [EBP + 0xc]
00753FC8  83 C4 04                  ADD ESP,0x4
00753FCB  FC                        CLD
00753FCC  F8                        CLC
00753FCD  5E                        POP ESI
00753FCE  5B                        POP EBX
LAB_00753fcf:
00753FCF  C3                        RET
