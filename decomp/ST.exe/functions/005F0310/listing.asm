FUN_005f0310:
005F0310  56                        PUSH ESI
005F0311  8B F1                     MOV ESI,ECX
005F0313  83 BE 21 03 00 00 15      CMP dword ptr [ESI + 0x321],0x15
005F031A  75 30                     JNZ 0x005f034c
005F031C  F6 86 1C 03 00 00 01      TEST byte ptr [ESI + 0x31c],0x1
005F0323  74 27                     JZ 0x005f034c
005F0325  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005F032B  84 C0                     TEST AL,AL
005F032D  75 1D                     JNZ 0x005f034c
005F032F  6A 00                     PUSH 0x0
005F0331  33 C0                     XOR EAX,EAX
005F0333  8A 86 25 03 00 00         MOV AL,byte ptr [ESI + 0x325]
005F0339  6A FF                     PUSH -0x1
005F033B  6A FF                     PUSH -0x1
005F033D  6A FF                     PUSH -0x1
005F033F  50                        PUSH EAX
005F0340  E8 AD 2E E1 FF            CALL 0x004031f2
005F0345  C6 86 20 03 00 00 00      MOV byte ptr [ESI + 0x320],0x0
LAB_005f034c:
005F034C  5E                        POP ESI
005F034D  C3                        RET
