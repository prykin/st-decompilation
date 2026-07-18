FUN_006bfb30:
006BFB30  55                        PUSH EBP
006BFB31  8B EC                     MOV EBP,ESP
006BFB33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BFB36  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BFB39  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BFB3C  51                        PUSH ECX
006BFB3D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006BFB40  52                        PUSH EDX
006BFB41  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006BFB44  51                        PUSH ECX
006BFB45  52                        PUSH EDX
006BFB46  50                        PUSH EAX
006BFB47  E8 A4 FE FF FF            CALL 0x006bf9f0
006BFB4C  5D                        POP EBP
006BFB4D  C2 04 00                  RET 0x4
