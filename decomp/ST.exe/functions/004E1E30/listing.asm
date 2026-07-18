FUN_004e1e30:
004E1E30  8B D1                     MOV EDX,ECX
004E1E32  57                        PUSH EDI
004E1E33  B9 14 00 00 00            MOV ECX,0x14
004E1E38  33 C0                     XOR EAX,EAX
004E1E3A  8D BA D0 04 00 00         LEA EDI,[EDX + 0x4d0]
004E1E40  F3 AB                     STOSD.REP ES:EDI
004E1E42  89 82 20 05 00 00         MOV dword ptr [EDX + 0x520],EAX
004E1E48  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E1E4D  5F                        POP EDI
004E1E4E  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E1E54  33 C0                     XOR EAX,EAX
004E1E56  89 8A 24 05 00 00         MOV dword ptr [EDX + 0x524],ECX
004E1E5C  C3                        RET
