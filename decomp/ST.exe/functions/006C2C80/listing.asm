FUN_006c2c80:
006C2C80  55                        PUSH EBP
006C2C81  8B EC                     MOV EBP,ESP
006C2C83  56                        PUSH ESI
006C2C84  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2C87  85 F6                     TEST ESI,ESI
006C2C89  74 2E                     JZ 0x006c2cb9
006C2C8B  8B 06                     MOV EAX,dword ptr [ESI]
006C2C8D  85 C0                     TEST EAX,EAX
006C2C8F  74 07                     JZ 0x006c2c98
006C2C91  50                        PUSH EAX
006C2C92  FF 15 94 BF 85 00         CALL dword ptr [0x0085bf94]
LAB_006c2c98:
006C2C98  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006C2C9B  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006C2CA1  50                        PUSH EAX
006C2CA2  8B 08                     MOV ECX,dword ptr [EAX]
006C2CA4  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C2CA7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C2CAA  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
006C2CB1  25 FF FF FF BF            AND EAX,0xbfffffff
006C2CB6  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
LAB_006c2cb9:
006C2CB9  5E                        POP ESI
006C2CBA  5D                        POP EBP
006C2CBB  C2 04 00                  RET 0x4
