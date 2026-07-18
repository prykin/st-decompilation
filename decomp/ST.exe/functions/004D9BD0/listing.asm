FUN_004d9bd0:
004D9BD0  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004D9BD6  33 D2                     XOR EDX,EDX
004D9BD8  2B C2                     SUB EAX,EDX
004D9BDA  74 17                     JZ 0x004d9bf3
004D9BDC  48                        DEC EAX
004D9BDD  74 05                     JZ 0x004d9be4
004D9BDF  83 E8 05                  SUB EAX,0x5
004D9BE2  75 0C                     JNZ 0x004d9bf0
LAB_004d9be4:
004D9BE4  89 91 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EDX
LAB_004d9bea:
004D9BEA  89 91 61 02 00 00         MOV dword ptr [ECX + 0x261],EDX
LAB_004d9bf0:
004D9BF0  33 C0                     XOR EAX,EAX
004D9BF2  C3                        RET
LAB_004d9bf3:
004D9BF3  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004D9BF9  2B C2                     SUB EAX,EDX
004D9BFB  74 ED                     JZ 0x004d9bea
004D9BFD  48                        DEC EAX
004D9BFE  75 F0                     JNZ 0x004d9bf0
004D9C00  C7 81 61 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x261],0x1
004D9C0A  33 C0                     XOR EAX,EAX
004D9C0C  C3                        RET
