FUN_00423e30:
00423E30  55                        PUSH EBP
00423E31  8B EC                     MOV EBP,ESP
00423E33  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00423E36  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00423E39  03 C8                     ADD ECX,EAX
00423E3B  3B C1                     CMP EAX,ECX
00423E3D  73 16                     JNC 0x00423e55
00423E3F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00423E42  57                        PUSH EDI
00423E43  2B C8                     SUB ECX,EAX
00423E45  8D 3C 42                  LEA EDI,[EDX + EAX*0x2]
00423E48  83 C8 FF                  OR EAX,0xffffffff
00423E4B  D1 E9                     SHR ECX,0x1
00423E4D  F3 AB                     STOSD.REP ES:EDI
00423E4F  13 C9                     ADC ECX,ECX
00423E51  66 F3 AB                  STOSW.REP ES:EDI
00423E54  5F                        POP EDI
LAB_00423e55:
00423E55  5D                        POP EBP
00423E56  C2 0C 00                  RET 0xc
