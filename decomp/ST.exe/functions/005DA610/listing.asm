StartSystemTy::StartSystemTy:
005DA610  55                        PUSH EBP
005DA611  8B EC                     MOV EBP,ESP
005DA613  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005DA616  53                        PUSH EBX
005DA617  56                        PUSH ESI
005DA618  57                        PUSH EDI
005DA619  68 00 02 00 00            PUSH 0x200
005DA61E  8B F1                     MOV ESI,ECX
005DA620  50                        PUSH EAX
005DA621  E8 9A AB 10 00            CALL 0x006e51c0
005DA626  8D 8E F8 02 00 00         LEA ECX,[ESI + 0x2f8]
005DA62C  E8 EF B1 13 00            CALL 0x00715820
005DA631  8D 8E 8D 03 00 00         LEA ECX,[ESI + 0x38d]
005DA637  E8 E4 B1 13 00            CALL 0x00715820
005DA63C  8D 8E 1E 04 00 00         LEA ECX,[ESI + 0x41e]
005DA642  E8 D9 B1 13 00            CALL 0x00715820
005DA647  8D 8E AF 04 00 00         LEA ECX,[ESI + 0x4af]
005DA64D  E8 CE B1 13 00            CALL 0x00715820
005DA652  8D 8E 5C 05 00 00         LEA ECX,[ESI + 0x55c]
005DA658  E8 C3 B1 13 00            CALL 0x00715820
005DA65D  8D 8E ED 05 00 00         LEA ECX,[ESI + 0x5ed]
005DA663  E8 B8 B1 13 00            CALL 0x00715820
005DA668  C7 06 E8 C1 79 00         MOV dword ptr [ESI],0x79c1e8
005DA66E  8B 0D 32 73 80 00         MOV ECX,dword ptr [0x00807332]
005DA674  B0 01                     MOV AL,0x1
005DA676  89 35 6C 17 81 00         MOV dword ptr [0x0081176c],ESI
005DA67C  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
005DA67F  33 D2                     XOR EDX,EDX
005DA681  88 86 EA 02 00 00         MOV byte ptr [ESI + 0x2ea],AL
005DA687  88 86 EB 02 00 00         MOV byte ptr [ESI + 0x2eb],AL
005DA68D  83 CB FF                  OR EBX,0xffffffff
005DA690  B9 06 00 00 00            MOV ECX,0x6
005DA695  33 C0                     XOR EAX,EAX
005DA697  8D BE 44 02 00 00         LEA EDI,[ESI + 0x244]
005DA69D  89 96 E6 02 00 00         MOV dword ptr [ESI + 0x2e6],EDX
005DA6A3  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
005DA6A6  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
005DA6A9  89 56 38                  MOV dword ptr [ESI + 0x38],EDX
005DA6AC  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
005DA6AF  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
005DA6B2  89 96 F4 02 00 00         MOV dword ptr [ESI + 0x2f4],EDX
005DA6B8  89 9E EC 02 00 00         MOV dword ptr [ESI + 0x2ec],EBX
005DA6BE  89 96 F0 02 00 00         MOV dword ptr [ESI + 0x2f0],EDX
005DA6C4  89 96 89 03 00 00         MOV dword ptr [ESI + 0x389],EDX
005DA6CA  89 9E 40 05 00 00         MOV dword ptr [ESI + 0x540],EBX
005DA6D0  89 96 44 05 00 00         MOV dword ptr [ESI + 0x544],EDX
005DA6D6  89 96 48 05 00 00         MOV dword ptr [ESI + 0x548],EDX
005DA6DC  89 96 50 05 00 00         MOV dword ptr [ESI + 0x550],EDX
005DA6E2  89 96 4C 05 00 00         MOV dword ptr [ESI + 0x54c],EDX
005DA6E8  89 9E 58 05 00 00         MOV dword ptr [ESI + 0x558],EBX
005DA6EE  89 9E 54 05 00 00         MOV dword ptr [ESI + 0x554],EBX
005DA6F4  89 96 82 06 00 00         MOV dword ptr [ESI + 0x682],EDX
005DA6FA  89 96 7E 06 00 00         MOV dword ptr [ESI + 0x67e],EDX
005DA700  89 96 86 06 00 00         MOV dword ptr [ESI + 0x686],EDX
005DA706  F3 AB                     STOSD.REP ES:EDI
005DA708  B9 22 00 00 00            MOV ECX,0x22
005DA70D  8D BE 5C 02 00 00         LEA EDI,[ESI + 0x25c]
005DA713  F3 AB                     STOSD.REP ES:EDI
005DA715  66 AB                     STOSW ES:EDI
005DA717  89 96 8A 06 00 00         MOV dword ptr [ESI + 0x68a],EDX
005DA71D  89 96 8E 06 00 00         MOV dword ptr [ESI + 0x68e],EDX
005DA723  89 9E 92 06 00 00         MOV dword ptr [ESI + 0x692],EBX
005DA729  89 96 96 06 00 00         MOV dword ptr [ESI + 0x696],EDX
005DA72F  89 96 9A 06 00 00         MOV dword ptr [ESI + 0x69a],EDX
005DA735  89 96 B2 06 00 00         MOV dword ptr [ESI + 0x6b2],EDX
005DA73B  89 96 AE 06 00 00         MOV dword ptr [ESI + 0x6ae],EDX
005DA741  89 96 9E 06 00 00         MOV dword ptr [ESI + 0x69e],EDX
005DA747  8B C6                     MOV EAX,ESI
005DA749  5F                        POP EDI
005DA74A  5E                        POP ESI
005DA74B  5B                        POP EBX
005DA74C  5D                        POP EBP
005DA74D  C2 04 00                  RET 0x4
