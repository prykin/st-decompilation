FUN_006d7000:
006D7000  55                        PUSH EBP
006D7001  8B EC                     MOV EBP,ESP
006D7003  8B 89 E0 00 00 00         MOV ECX,dword ptr [ECX + 0xe0]
006D7009  8B 91 90 00 00 00         MOV EDX,dword ptr [ECX + 0x90]
006D700F  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
006D7012  85 C0                     TEST EAX,EAX
006D7014  74 2E                     JZ 0x006d7044
006D7016  53                        PUSH EBX
006D7017  56                        PUSH ESI
006D7018  57                        PUSH EDI
006D7019  8D 7A 2C                  LEA EDI,[EDX + 0x2c]
006D701C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D701F  B9 04 00 00 00            MOV ECX,0x4
006D7024  33 DB                     XOR EBX,EBX
006D7026  8D 72 10                  LEA ESI,[EDX + 0x10]
006D7029  F3 A7                     CMPSD.REPE ES:EDI,ESI
006D702B  5F                        POP EDI
006D702C  5E                        POP ESI
006D702D  5B                        POP EBX
006D702E  75 0B                     JNZ 0x006d703b
006D7030  8B 08                     MOV ECX,dword ptr [EAX]
006D7032  52                        PUSH EDX
006D7033  50                        PUSH EAX
006D7034  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
006D7037  5D                        POP EBP
006D7038  C2 04 00                  RET 0x4
LAB_006d703b:
006D703B  B8 2A 02 04 80            MOV EAX,0x8004022a
006D7040  5D                        POP EBP
006D7041  C2 04 00                  RET 0x4
LAB_006d7044:
006D7044  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D7047  8B 81 A0 00 00 00         MOV EAX,dword ptr [ECX + 0xa0]
006D704D  52                        PUSH EDX
006D704E  50                        PUSH EAX
006D704F  E8 9C DC FF FF            CALL 0x006d4cf0
006D7054  83 C4 08                  ADD ESP,0x8
006D7057  5D                        POP EBP
006D7058  C2 04 00                  RET 0x4
