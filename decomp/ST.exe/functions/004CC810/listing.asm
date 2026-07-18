FUN_004cc810:
004CC810  56                        PUSH ESI
004CC811  8B F1                     MOV ESI,ECX
004CC813  8B 86 48 04 00 00         MOV EAX,dword ptr [ESI + 0x448]
004CC819  85 C0                     TEST EAX,EAX
004CC81B  74 05                     JZ 0x004cc822
004CC81D  E8 46 8F F3 FF            CALL 0x00405768
LAB_004cc822:
004CC822  C7 86 44 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x444],0x0
004CC82C  33 C0                     XOR EAX,EAX
004CC82E  5E                        POP ESI
004CC82F  C3                        RET
