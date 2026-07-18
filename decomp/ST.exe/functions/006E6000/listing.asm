FUN_006e6000:
006E6000  55                        PUSH EBP
006E6001  8B EC                     MOV EBP,ESP
006E6003  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E6006  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E6009  50                        PUSH EAX
006E600A  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006E600D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E6010  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006E6013  E8 C8 FF FF FF            CALL 0x006e5fe0
006E6018  5D                        POP EBP
006E6019  C2 0C 00                  RET 0xc
