FUN_00646c90:
00646C90  56                        PUSH ESI
00646C91  57                        PUSH EDI
00646C92  8B F1                     MOV ESI,ECX
00646C94  E8 47 F4 09 00            CALL 0x006e60e0
00646C99  85 F6                     TEST ESI,ESI
00646C9B  C7 06 10 D6 79 00         MOV dword ptr [ESI],0x79d610
00646CA1  74 05                     JZ 0x00646ca8
00646CA3  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
00646CA6  EB 02                     JMP 0x00646caa
LAB_00646ca8:
00646CA8  33 FF                     XOR EDI,EDI
LAB_00646caa:
00646CAA  B9 25 00 00 00            MOV ECX,0x25
00646CAF  33 C0                     XOR EAX,EAX
00646CB1  F3 AB                     STOSD.REP ES:EDI
00646CB3  AA                        STOSB ES:EDI
00646CB4  83 C8 FF                  OR EAX,0xffffffff
00646CB7  5F                        POP EDI
00646CB8  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
00646CBB  89 46 7A                  MOV dword ptr [ESI + 0x7a],EAX
00646CBE  89 86 86 00 00 00         MOV dword ptr [ESI + 0x86],EAX
00646CC4  8B C6                     MOV EAX,ESI
00646CC6  5E                        POP ESI
00646CC7  C3                        RET
