FUN_006788b0:
006788B0  56                        PUSH ESI
006788B1  57                        PUSH EDI
006788B2  8B F1                     MOV ESI,ECX
006788B4  E8 27 D8 06 00            CALL 0x006e60e0
006788B9  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
006788BC  8B CF                     MOV ECX,EDI
006788BE  E8 6C A3 D8 FF            CALL 0x00402c2f
006788C3  85 F6                     TEST ESI,ESI
006788C5  C7 06 14 D7 79 00         MOV dword ptr [ESI],0x79d714
006788CB  C7 07 D4 D6 79 00         MOV dword ptr [EDI],0x79d6d4
006788D1  74 08                     JZ 0x006788db
006788D3  8D BE D3 05 00 00         LEA EDI,[ESI + 0x5d3]
006788D9  EB 02                     JMP 0x006788dd
LAB_006788db:
006788DB  33 FF                     XOR EDI,EDI
LAB_006788dd:
006788DD  B9 4A 00 00 00            MOV ECX,0x4a
006788E2  33 C0                     XOR EAX,EAX
006788E4  F3 AB                     STOSD.REP ES:EDI
006788E6  66 AB                     STOSW ES:EDI
006788E8  AA                        STOSB ES:EDI
006788E9  C7 86 D3 05 00 00 98 03 00 00  MOV dword ptr [ESI + 0x5d3],0x398
006788F3  C7 86 40 06 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x640],0xff
006788FD  8B C6                     MOV EAX,ESI
006788FF  5F                        POP EDI
00678900  5E                        POP ESI
00678901  C3                        RET
