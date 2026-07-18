FUN_006a5530:
006A5530  55                        PUSH EBP
006A5531  8B EC                     MOV EBP,ESP
006A5533  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A5536  A1 78 C1 7E 00            MOV EAX,[0x007ec178]
006A553B  83 F9 FF                  CMP ECX,-0x1
006A553E  74 06                     JZ 0x006a5546
006A5540  89 0D 78 C1 7E 00         MOV dword ptr [0x007ec178],ECX
LAB_006a5546:
006A5546  5D                        POP EBP
006A5547  C3                        RET
