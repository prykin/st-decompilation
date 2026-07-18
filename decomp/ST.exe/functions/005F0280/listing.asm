FUN_005f0280:
005F0280  55                        PUSH EBP
005F0281  8B EC                     MOV EBP,ESP
005F0283  56                        PUSH ESI
005F0284  57                        PUSH EDI
005F0285  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F0288  8B F1                     MOV ESI,ECX
005F028A  C6 07 04                  MOV byte ptr [EDI],0x4
005F028D  C6 47 01 01               MOV byte ptr [EDI + 0x1],0x1
005F0291  8B 06                     MOV EAX,dword ptr [ESI]
005F0293  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005F0296  89 47 02                  MOV dword ptr [EDI + 0x2],EAX
005F0299  8B 16                     MOV EDX,dword ptr [ESI]
005F029B  8B CE                     MOV ECX,ESI
005F029D  FF 52 0C                  CALL dword ptr [EDX + 0xc]
005F02A0  88 47 06                  MOV byte ptr [EDI + 0x6],AL
005F02A3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F02A6  89 47 07                  MOV dword ptr [EDI + 0x7],EAX
005F02A9  5F                        POP EDI
005F02AA  5E                        POP ESI
005F02AB  5D                        POP EBP
005F02AC  C2 04 00                  RET 0x4
