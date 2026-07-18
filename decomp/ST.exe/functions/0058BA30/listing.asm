FUN_0058ba30:
0058BA30  56                        PUSH ESI
0058BA31  57                        PUSH EDI
0058BA32  8B F1                     MOV ESI,ECX
0058BA34  E8 FA 5E E7 FF            CALL 0x00401933
0058BA39  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058BA3F  8B CF                     MOV ECX,EDI
0058BA41  E8 D0 58 E7 FF            CALL 0x00401316
0058BA46  C7 07 7C BE 79 00         MOV dword ptr [EDI],0x79be7c
0058BA4C  33 C0                     XOR EAX,EAX
0058BA4E  B9 09 00 00 00            MOV ECX,0x9
0058BA53  8D BE 75 02 00 00         LEA EDI,[ESI + 0x275]
0058BA59  C7 06 1C BD 79 00         MOV dword ptr [ESI],0x79bd1c
0058BA5F  C7 86 31 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x231],0x1
0058BA69  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
0058BA6F  89 86 45 02 00 00         MOV dword ptr [ESI + 0x245],EAX
0058BA75  89 86 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EAX
0058BA7B  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
0058BA81  F3 AB                     STOSD.REP ES:EDI
0058BA83  66 AB                     STOSW ES:EDI
0058BA85  8B C6                     MOV EAX,ESI
0058BA87  5F                        POP EDI
0058BA88  5E                        POP ESI
0058BA89  C3                        RET
