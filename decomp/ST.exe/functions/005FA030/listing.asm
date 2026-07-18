FUN_005fa030:
005FA030  56                        PUSH ESI
005FA031  8B F1                     MOV ESI,ECX
005FA033  E8 52 9F E0 FF            CALL 0x00403f8a
005FA038  8B CE                     MOV ECX,ESI
005FA03A  E8 38 9E E0 FF            CALL 0x00403e77
005FA03F  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005FA045  8D 86 E6 02 00 00         LEA EAX,[ESI + 0x2e6]
005FA04B  85 C9                     TEST ECX,ECX
005FA04D  5E                        POP ESI
005FA04E  74 06                     JZ 0x005fa056
005FA050  50                        PUSH EAX
005FA051  E8 0A 10 0B 00            CALL 0x006ab060
LAB_005fa056:
005FA056  C3                        RET
