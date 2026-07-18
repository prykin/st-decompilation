FUN_004b6d20:
004B6D20  56                        PUSH ESI
004B6D21  8B F1                     MOV ESI,ECX
004B6D23  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6D29  6A 28                     PUSH 0x28
004B6D2B  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004B6D2E  50                        PUSH EAX
004B6D2F  E8 D2 D3 F4 FF            CALL 0x00404106
004B6D34  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004B6D37  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004B6D3A  33 D2                     XOR EDX,EDX
004B6D3C  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004B6D42  3B C2                     CMP EAX,EDX
004B6D44  75 0C                     JNZ 0x004b6d52
004B6D46  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6D4C  50                        PUSH EAX
004B6D4D  E8 3B DE F4 FF            CALL 0x00404b8d
LAB_004b6d52:
004B6D52  33 C0                     XOR EAX,EAX
004B6D54  5E                        POP ESI
004B6D55  C3                        RET
