FUN_005ebd00:
005EBD00  55                        PUSH EBP
005EBD01  8B EC                     MOV EBP,ESP
005EBD03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EBD06  56                        PUSH ESI
005EBD07  8B B1 3E 02 00 00         MOV ESI,dword ptr [ECX + 0x23e]
005EBD0D  33 C0                     XOR EAX,EAX
005EBD0F  2B F2                     SUB ESI,EDX
005EBD11  8B D6                     MOV EDX,ESI
005EBD13  89 B1 3E 02 00 00         MOV dword ptr [ECX + 0x23e],ESI
005EBD19  3B D0                     CMP EDX,EAX
005EBD1B  5E                        POP ESI
005EBD1C  7F 06                     JG 0x005ebd24
005EBD1E  89 81 3E 02 00 00         MOV dword ptr [ECX + 0x23e],EAX
LAB_005ebd24:
005EBD24  39 81 3E 02 00 00         CMP dword ptr [ECX + 0x23e],EAX
005EBD2A  75 05                     JNZ 0x005ebd31
005EBD2C  B8 01 00 00 00            MOV EAX,0x1
LAB_005ebd31:
005EBD31  5D                        POP EBP
005EBD32  C2 04 00                  RET 0x4
