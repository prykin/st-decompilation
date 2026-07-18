FUN_005f02c0:
005F02C0  55                        PUSH EBP
005F02C1  8B EC                     MOV EBP,ESP
005F02C3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F02C6  56                        PUSH ESI
005F02C7  85 C0                     TEST EAX,EAX
005F02C9  74 2F                     JZ 0x005f02fa
005F02CB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005F02CE  BA 15 00 00 00            MOV EDX,0x15
005F02D3  3B F2                     CMP ESI,EDX
005F02D5  75 23                     JNZ 0x005f02fa
005F02D7  53                        PUSH EBX
005F02D8  8A 99 4F 02 00 00         MOV BL,byte ptr [ECX + 0x24f]
005F02DE  84 DB                     TEST BL,BL
005F02E0  5B                        POP EBX
005F02E1  75 17                     JNZ 0x005f02fa
005F02E3  8A 00                     MOV AL,byte ptr [EAX]
005F02E5  8D B1 25 03 00 00         LEA ESI,[ECX + 0x325]
005F02EB  88 06                     MOV byte ptr [ESI],AL
005F02ED  C6 81 20 03 00 00 01      MOV byte ptr [ECX + 0x320],0x1
005F02F4  89 91 21 03 00 00         MOV dword ptr [ECX + 0x321],EDX
LAB_005f02fa:
005F02FA  5E                        POP ESI
005F02FB  5D                        POP EBP
005F02FC  C2 08 00                  RET 0x8
