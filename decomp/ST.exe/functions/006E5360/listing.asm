StartSystemTy::sub_006E5360:
006E5360  55                        PUSH EBP
006E5361  8B EC                     MOV EBP,ESP
006E5363  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E5366  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E5369  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
006E536C  50                        PUSH EAX
006E536D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E5370  52                        PUSH EDX
006E5371  50                        PUSH EAX
006E5372  51                        PUSH ECX
006E5373  E8 D8 E0 FF FF            CALL 0x006e3450
006E5378  83 C4 10                  ADD ESP,0x10
006E537B  5D                        POP EBP
006E537C  C2 0C 00                  RET 0xc
