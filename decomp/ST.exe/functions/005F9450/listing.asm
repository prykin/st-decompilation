FUN_005f9450:
005F9450  56                        PUSH ESI
005F9451  8B F1                     MOV ESI,ECX
005F9453  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
005F9459  85 C9                     TEST ECX,ECX
005F945B  74 35                     JZ 0x005f9492
005F945D  80 BE 9E 02 00 00 01      CMP byte ptr [ESI + 0x29e],0x1
005F9464  75 2C                     JNZ 0x005f9492
005F9466  8B 86 89 02 00 00         MOV EAX,dword ptr [ESI + 0x289]
005F946C  8B 96 85 02 00 00         MOV EDX,dword ptr [ESI + 0x285]
005F9472  6A 00                     PUSH 0x0
005F9474  6A FF                     PUSH -0x1
005F9476  50                        PUSH EAX
005F9477  8B 86 81 02 00 00         MOV EAX,dword ptr [ESI + 0x281]
005F947D  52                        PUSH EDX
005F947E  8B 96 7D 02 00 00         MOV EDX,dword ptr [ESI + 0x27d]
005F9484  50                        PUSH EAX
005F9485  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
005F948B  52                        PUSH EDX
005F948C  50                        PUSH EAX
005F948D  E8 95 90 E0 FF            CALL 0x00402527
LAB_005f9492:
005F9492  C6 86 9E 02 00 00 00      MOV byte ptr [ESI + 0x29e],0x0
005F9499  5E                        POP ESI
005F949A  C3                        RET
