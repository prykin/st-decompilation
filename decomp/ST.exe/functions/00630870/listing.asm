FUN_00630870:
00630870  56                        PUSH ESI
00630871  57                        PUSH EDI
00630872  8B F1                     MOV ESI,ECX
00630874  E8 67 58 0B 00            CALL 0x006e60e0
00630879  85 F6                     TEST ESI,ESI
0063087B  C7 06 9C D1 79 00         MOV dword ptr [ESI],0x79d19c
00630881  74 05                     JZ 0x00630888
00630883  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
00630886  EB 02                     JMP 0x0063088a
LAB_00630888:
00630888  33 FF                     XOR EDI,EDI
LAB_0063088a:
0063088A  B9 15 00 00 00            MOV ECX,0x15
0063088F  33 C0                     XOR EAX,EAX
00630891  F3 AB                     STOSD.REP ES:EDI
00630893  AA                        STOSB ES:EDI
00630894  C7 46 61 FF FF FF FF      MOV dword ptr [ESI + 0x61],0xffffffff
0063089B  8B C6                     MOV EAX,ESI
0063089D  5F                        POP EDI
0063089E  5E                        POP ESI
0063089F  C3                        RET
