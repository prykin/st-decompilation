TLOBaseTy::TLOBaseTy:
004B7EF0  56                        PUSH ESI
004B7EF1  57                        PUSH EDI
004B7EF2  8B F1                     MOV ESI,ECX
004B7EF4  E8 3A 9A F4 FF            CALL 0x00401933
004B7EF9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004B7EFF  8B CF                     MOV ECX,EDI
004B7F01  E8 10 94 F4 FF            CALL 0x00401316
004B7F06  33 C0                     XOR EAX,EAX
004B7F08  83 C9 FF                  OR ECX,0xffffffff
004B7F0B  C7 07 00 0C 79 00         MOV dword ptr [EDI],0x790c00
004B7F11  89 86 EF 05 00 00         MOV dword ptr [ESI + 0x5ef],EAX
004B7F17  89 86 F3 05 00 00         MOV dword ptr [ESI + 0x5f3],EAX
004B7F1D  89 86 F7 05 00 00         MOV dword ptr [ESI + 0x5f7],EAX
004B7F23  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004B7F29  89 86 03 06 00 00         MOV dword ptr [ESI + 0x603],EAX
004B7F2F  89 86 07 06 00 00         MOV dword ptr [ESI + 0x607],EAX
004B7F35  89 86 51 02 00 00         MOV dword ptr [ESI + 0x251],EAX
004B7F3B  89 86 1B 06 00 00         MOV dword ptr [ESI + 0x61b],EAX
004B7F41  89 86 1F 06 00 00         MOV dword ptr [ESI + 0x61f],EAX
004B7F47  C7 06 A0 0A 79 00         MOV dword ptr [ESI],0x790aa0
004B7F4D  89 8E 45 02 00 00         MOV dword ptr [ESI + 0x245],ECX
004B7F53  89 8E 49 02 00 00         MOV dword ptr [ESI + 0x249],ECX
004B7F59  89 8E 4D 02 00 00         MOV dword ptr [ESI + 0x24d],ECX
004B7F5F  8B C6                     MOV EAX,ESI
004B7F61  5F                        POP EDI
004B7F62  5E                        POP ESI
004B7F63  C3                        RET
