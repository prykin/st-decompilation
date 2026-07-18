FUN_006b5480:
006B5480  55                        PUSH EBP
006B5481  8B EC                     MOV EBP,ESP
006B5483  56                        PUSH ESI
006B5484  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B5487  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B548A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006B548D  03 C1                     ADD EAX,ECX
006B548F  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006B5492  C1 E0 02                  SHL EAX,0x2
006B5495  50                        PUSH EAX
006B5496  51                        PUSH ECX
006B5497  E8 B4 7A FF FF            CALL 0x006acf50
006B549C  8B D0                     MOV EDX,EAX
006B549E  85 D2                     TEST EDX,EDX
006B54A0  75 0A                     JNZ 0x006b54ac
006B54A2  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B54A7  5E                        POP ESI
006B54A8  5D                        POP EBP
006B54A9  C2 04 00                  RET 0x4
LAB_006b54ac:
006B54AC  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006B54AF  53                        PUSH EBX
006B54B0  57                        PUSH EDI
006B54B1  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
006B54B4  C1 E1 02                  SHL ECX,0x2
006B54B7  8B D9                     MOV EBX,ECX
006B54B9  33 C0                     XOR EAX,EAX
006B54BB  8D 3C BA                  LEA EDI,[EDX + EDI*0x4]
006B54BE  C1 E9 02                  SHR ECX,0x2
006B54C1  F3 AB                     STOSD.REP ES:EDI
006B54C3  8B CB                     MOV ECX,EBX
006B54C5  83 E1 03                  AND ECX,0x3
006B54C8  F3 AA                     STOSB.REP ES:EDI
006B54CA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B54CD  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
006B54D0  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B54D3  5F                        POP EDI
006B54D4  03 C2                     ADD EAX,EDX
006B54D6  5B                        POP EBX
006B54D7  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006B54DA  33 C0                     XOR EAX,EAX
006B54DC  5E                        POP ESI
006B54DD  5D                        POP EBP
006B54DE  C2 04 00                  RET 0x4
