FUN_004be110:
004BE110  8A 81 3D 02 00 00         MOV AL,byte ptr [ECX + 0x23d]
004BE116  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE11C  50                        PUSH EAX
004BE11D  E8 95 68 F4 FF            CALL 0x004049b7
004BE122  25 FF 00 00 00            AND EAX,0xff
004BE127  C3                        RET
