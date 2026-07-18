FUN_005f09b0:
005F09B0  55                        PUSH EBP
005F09B1  8B EC                     MOV EBP,ESP
005F09B3  8A 91 4F 02 00 00         MOV DL,byte ptr [ECX + 0x24f]
005F09B9  33 C0                     XOR EAX,EAX
005F09BB  84 D2                     TEST DL,DL
005F09BD  75 40                     JNZ 0x005f09ff
005F09BF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F09C2  85 D2                     TEST EDX,EDX
005F09C4  74 39                     JZ 0x005f09ff
005F09C6  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
005F09C9  89 81 A7 02 00 00         MOV dword ptr [ECX + 0x2a7],EAX
005F09CF  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005F09D3  66 89 81 AB 02 00 00      MOV word ptr [ECX + 0x2ab],AX
005F09DA  8B 52 24                  MOV EDX,dword ptr [EDX + 0x24]
005F09DD  89 91 A3 02 00 00         MOV dword ptr [ECX + 0x2a3],EDX
005F09E3  8A 91 20 03 00 00         MOV DL,byte ptr [ECX + 0x320]
005F09E9  B8 01 00 00 00            MOV EAX,0x1
005F09EE  84 D2                     TEST DL,DL
005F09F0  88 81 4F 02 00 00         MOV byte ptr [ECX + 0x24f],AL
005F09F6  74 07                     JZ 0x005f09ff
005F09F8  C6 81 20 03 00 00 00      MOV byte ptr [ECX + 0x320],0x0
LAB_005f09ff:
005F09FF  5D                        POP EBP
005F0A00  C2 04 00                  RET 0x4
