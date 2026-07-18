FUN_004ea7e0:
004EA7E0  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004EA7E6  33 D2                     XOR EDX,EDX
004EA7E8  2B C2                     SUB EAX,EDX
004EA7EA  74 17                     JZ 0x004ea803
004EA7EC  48                        DEC EAX
004EA7ED  74 05                     JZ 0x004ea7f4
004EA7EF  83 E8 05                  SUB EAX,0x5
004EA7F2  75 0C                     JNZ 0x004ea800
LAB_004ea7f4:
004EA7F4  89 91 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EDX
LAB_004ea7fa:
004EA7FA  89 91 61 02 00 00         MOV dword ptr [ECX + 0x261],EDX
LAB_004ea800:
004EA800  33 C0                     XOR EAX,EAX
004EA802  C3                        RET
LAB_004ea803:
004EA803  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004EA809  2B C2                     SUB EAX,EDX
004EA80B  74 ED                     JZ 0x004ea7fa
004EA80D  48                        DEC EAX
004EA80E  75 F0                     JNZ 0x004ea800
004EA810  C7 81 61 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x261],0x1
004EA81A  33 C0                     XOR EAX,EAX
004EA81C  C3                        RET
