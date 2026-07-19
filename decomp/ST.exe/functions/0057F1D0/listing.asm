STDcResourcC::STDcResourcC:
0057F1D0  56                        PUSH ESI
0057F1D1  57                        PUSH EDI
0057F1D2  8B F1                     MOV ESI,ECX
0057F1D4  E8 5A 27 E8 FF            CALL 0x00401933
0057F1D9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0057F1DF  8B CF                     MOV ECX,EDI
0057F1E1  E8 30 21 E8 FF            CALL 0x00401316
0057F1E6  C7 07 88 B6 79 00         MOV dword ptr [EDI],0x79b688
0057F1EC  B9 0A 00 00 00            MOV ECX,0xa
0057F1F1  33 C0                     XOR EAX,EAX
0057F1F3  8D BE 31 02 00 00         LEA EDI,[ESI + 0x231]
0057F1F9  C7 06 28 B5 79 00         MOV dword ptr [ESI],0x79b528
0057F1FF  F3 AB                     STOSD.REP ES:EDI
0057F201  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
0057F207  C7 86 59 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x259],0xffffffff
0057F211  8B C6                     MOV EAX,ESI
0057F213  5F                        POP EDI
0057F214  5E                        POP ESI
0057F215  C3                        RET
