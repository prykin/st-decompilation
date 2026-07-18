FUN_004ecc70:
004ECC70  56                        PUSH ESI
004ECC71  8B F1                     MOV ESI,ECX
004ECC73  83 BE AC 05 00 00 6F      CMP dword ptr [ESI + 0x5ac],0x6f
004ECC7A  75 07                     JNZ 0x004ecc83
004ECC7C  6A 08                     PUSH 0x8
004ECC7E  E8 0F 75 F1 FF            CALL 0x00404192
LAB_004ecc83:
004ECC83  C7 86 D0 04 00 00 88 13 00 00  MOV dword ptr [ESI + 0x4d0],0x1388
004ECC8D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004ECC92  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004ECC98  33 C0                     XOR EAX,EAX
004ECC9A  89 8E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],ECX
004ECCA0  5E                        POP ESI
004ECCA1  C3                        RET
