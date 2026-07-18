FUN_004cc900:
004CC900  56                        PUSH ESI
004CC901  8B F1                     MOV ESI,ECX
004CC903  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC909  85 C9                     TEST ECX,ECX
004CC90B  74 79                     JZ 0x004cc986
004CC90D  8B 86 44 04 00 00         MOV EAX,dword ptr [ESI + 0x444]
004CC913  85 C0                     TEST EAX,EAX
004CC915  74 6F                     JZ 0x004cc986
004CC917  8B 86 48 04 00 00         MOV EAX,dword ptr [ESI + 0x448]
004CC91D  85 C0                     TEST EAX,EAX
004CC91F  74 65                     JZ 0x004cc986
004CC921  6A 0E                     PUSH 0xe
004CC923  C7 86 48 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x448],0x0
004CC92D  E8 32 79 F3 FF            CALL 0x00404264
004CC932  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC938  E8 D2 73 F3 FF            CALL 0x00403d0f
004CC93D  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC943  E8 84 89 F3 FF            CALL 0x004052cc
004CC948  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CC94E  50                        PUSH EAX
004CC94F  E8 9C D9 21 00            CALL 0x006ea2f0
004CC954  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC95A  6A 0E                     PUSH 0xe
004CC95C  E8 29 80 F3 FF            CALL 0x0040498a
004CC961  C7 86 4C 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x44c],0xffffffff
004CC96B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CC970  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004CC976  C7 86 3C 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x43c],0x0
004CC980  89 8E 50 04 00 00         MOV dword ptr [ESI + 0x450],ECX
LAB_004cc986:
004CC986  33 C0                     XOR EAX,EAX
004CC988  5E                        POP ESI
004CC989  C3                        RET
