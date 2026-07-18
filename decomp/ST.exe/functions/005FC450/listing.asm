FUN_005fc450:
005FC450  55                        PUSH EBP
005FC451  8B EC                     MOV EBP,ESP
005FC453  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FC456  56                        PUSH ESI
005FC457  8B B1 3E 02 00 00         MOV ESI,dword ptr [ECX + 0x23e]
005FC45D  33 C0                     XOR EAX,EAX
005FC45F  2B F2                     SUB ESI,EDX
005FC461  8B D6                     MOV EDX,ESI
005FC463  89 B1 3E 02 00 00         MOV dword ptr [ECX + 0x23e],ESI
005FC469  3B D0                     CMP EDX,EAX
005FC46B  5E                        POP ESI
005FC46C  7F 06                     JG 0x005fc474
005FC46E  89 81 3E 02 00 00         MOV dword ptr [ECX + 0x23e],EAX
LAB_005fc474:
005FC474  39 81 3E 02 00 00         CMP dword ptr [ECX + 0x23e],EAX
005FC47A  75 05                     JNZ 0x005fc481
005FC47C  B8 01 00 00 00            MOV EAX,0x1
LAB_005fc481:
005FC481  5D                        POP EBP
005FC482  C2 04 00                  RET 0x4
