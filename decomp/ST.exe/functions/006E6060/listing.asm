FUN_006e6060:
006E6060  55                        PUSH EBP
006E6061  8B EC                     MOV EBP,ESP
006E6063  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6066  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E6069  50                        PUSH EAX
006E606A  89 10                     MOV dword ptr [EAX],EDX
006E606C  C7 40 04 02 00 00 00      MOV dword ptr [EAX + 0x4],0x2
006E6073  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006E6076  8B 11                     MOV EDX,dword ptr [ECX]
006E6078  FF 52 18                  CALL dword ptr [EDX + 0x18]
006E607B  5D                        POP EBP
006E607C  C2 04 00                  RET 0x4
