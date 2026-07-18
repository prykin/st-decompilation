FUN_005861f0:
005861F0  56                        PUSH ESI
005861F1  57                        PUSH EDI
005861F2  8B F1                     MOV ESI,ECX
005861F4  E8 3A B7 E7 FF            CALL 0x00401933
005861F9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005861FF  8B CF                     MOV ECX,EDI
00586201  E8 10 B1 E7 FF            CALL 0x00401316
00586206  C7 07 B4 BB 79 00         MOV dword ptr [EDI],0x79bbb4
0058620C  C7 06 54 BA 79 00         MOV dword ptr [ESI],0x79ba54
00586212  C7 86 31 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x231],0x1
0058621C  C7 86 6F 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x26f],0xff
00586226  8B C6                     MOV EAX,ESI
00586228  5F                        POP EDI
00586229  5E                        POP ESI
0058622A  C3                        RET
