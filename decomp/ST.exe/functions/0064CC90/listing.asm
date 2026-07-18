FUN_0064cc90:
0064CC90  56                        PUSH ESI
0064CC91  8B F1                     MOV ESI,ECX
0064CC93  85 F6                     TEST ESI,ESI
0064CC95  57                        PUSH EDI
0064CC96  C6 46 04 00               MOV byte ptr [ESI + 0x4],0x0
0064CC9A  C7 86 84 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x84],0x0
0064CCA4  C7 06 7C D6 79 00         MOV dword ptr [ESI],0x79d67c
0064CCAA  74 08                     JZ 0x0064ccb4
0064CCAC  8D BE 8C 00 00 00         LEA EDI,[ESI + 0x8c]
0064CCB2  EB 02                     JMP 0x0064ccb6
LAB_0064ccb4:
0064CCB4  33 FF                     XOR EDI,EDI
LAB_0064ccb6:
0064CCB6  B9 27 01 00 00            MOV ECX,0x127
0064CCBB  33 C0                     XOR EAX,EAX
0064CCBD  F3 AB                     STOSD.REP ES:EDI
0064CCBF  66 AB                     STOSW ES:EDI
0064CCC1  68 78 3F 7D 00            PUSH 0x7d3f78
0064CCC6  AA                        STOSB ES:EDI
0064CCC7  E8 7C 64 DB FF            CALL 0x00403148
0064CCCC  B9 21 00 00 00            MOV ECX,0x21
0064CCD1  33 C0                     XOR EAX,EAX
0064CCD3  8D BE 2F 05 00 00         LEA EDI,[ESI + 0x52f]
0064CCD9  C7 86 B3 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5b3],0x0
0064CCE3  F3 AB                     STOSD.REP ES:EDI
0064CCE5  8B C6                     MOV EAX,ESI
0064CCE7  5F                        POP EDI
0064CCE8  5E                        POP ESI
0064CCE9  C3                        RET
