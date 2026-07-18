FUN_004ecdf0:
004ECDF0  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004ECDF6  33 D2                     XOR EDX,EDX
004ECDF8  2B C2                     SUB EAX,EDX
004ECDFA  74 17                     JZ 0x004ece13
004ECDFC  48                        DEC EAX
004ECDFD  74 05                     JZ 0x004ece04
004ECDFF  83 E8 05                  SUB EAX,0x5
004ECE02  75 0C                     JNZ 0x004ece10
LAB_004ece04:
004ECE04  89 91 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EDX
LAB_004ece0a:
004ECE0A  89 91 61 02 00 00         MOV dword ptr [ECX + 0x261],EDX
LAB_004ece10:
004ECE10  33 C0                     XOR EAX,EAX
004ECE12  C3                        RET
LAB_004ece13:
004ECE13  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004ECE19  2B C2                     SUB EAX,EDX
004ECE1B  74 ED                     JZ 0x004ece0a
004ECE1D  48                        DEC EAX
004ECE1E  75 F0                     JNZ 0x004ece10
004ECE20  C7 81 61 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x261],0x1
004ECE2A  33 C0                     XOR EAX,EAX
004ECE2C  C3                        RET
