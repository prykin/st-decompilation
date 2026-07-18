FUN_006a3d10:
006A3D10  55                        PUSH EBP
006A3D11  8B EC                     MOV EBP,ESP
006A3D13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A3D16  6A 00                     PUSH 0x0
006A3D18  6A 00                     PUSH 0x0
006A3D1A  6A 01                     PUSH 0x1
006A3D1C  50                        PUSH EAX
006A3D1D  E8 55 1A D6 FF            CALL 0x00405777
006A3D22  83 C4 10                  ADD ESP,0x10
006A3D25  5D                        POP EBP
006A3D26  C3                        RET
