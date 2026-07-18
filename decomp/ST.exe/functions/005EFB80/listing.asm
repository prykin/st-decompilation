FUN_005efb80:
005EFB80  55                        PUSH EBP
005EFB81  8B EC                     MOV EBP,ESP
005EFB83  8A 91 4F 02 00 00         MOV DL,byte ptr [ECX + 0x24f]
005EFB89  33 C0                     XOR EAX,EAX
005EFB8B  3A D0                     CMP DL,AL
005EFB8D  74 27                     JZ 0x005efbb6
005EFB8F  8B 91 A7 02 00 00         MOV EDX,dword ptr [ECX + 0x2a7]
005EFB95  56                        PUSH ESI
005EFB96  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005EFB99  3B D6                     CMP EDX,ESI
005EFB9B  5E                        POP ESI
005EFB9C  75 18                     JNZ 0x005efbb6
005EFB9E  89 81 A7 02 00 00         MOV dword ptr [ECX + 0x2a7],EAX
005EFBA4  66 89 81 AB 02 00 00      MOV word ptr [ECX + 0x2ab],AX
005EFBAB  88 81 4F 02 00 00         MOV byte ptr [ECX + 0x24f],AL
005EFBB1  B8 01 00 00 00            MOV EAX,0x1
LAB_005efbb6:
005EFBB6  5D                        POP EBP
005EFBB7  C2 04 00                  RET 0x4
