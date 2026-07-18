FUN_004c7230:
004C7230  8D 81 07 06 00 00         LEA EAX,[ECX + 0x607]
004C7236  8B 89 07 06 00 00         MOV ECX,dword ptr [ECX + 0x607]
004C723C  85 C9                     TEST ECX,ECX
004C723E  74 06                     JZ 0x004c7246
004C7240  50                        PUSH EAX
004C7241  E8 1A 3E 1E 00            CALL 0x006ab060
LAB_004c7246:
004C7246  C3                        RET
