FUN_006c7000:
006C7000  55                        PUSH EBP
006C7001  8B EC                     MOV EBP,ESP
006C7003  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7006  8B 41 56                  MOV EAX,dword ptr [ECX + 0x56]
006C7009  A8 08                     TEST AL,0x8
006C700B  74 06                     JZ 0x006c7013
006C700D  33 C0                     XOR EAX,EAX
006C700F  5D                        POP EBP
006C7010  C2 04 00                  RET 0x4
LAB_006c7013:
006C7013  A8 01                     TEST AL,0x1
006C7015  74 07                     JZ 0x006c701e
006C7017  83 C8 FF                  OR EAX,0xffffffff
006C701A  5D                        POP EBP
006C701B  C2 04 00                  RET 0x4
LAB_006c701e:
006C701E  33 C0                     XOR EAX,EAX
006C7020  66 8B 41 5F               MOV AX,word ptr [ECX + 0x5f]
006C7024  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006C7027  D1 E0                     SHL EAX,0x1
006C7029  5D                        POP EBP
006C702A  C2 04 00                  RET 0x4
