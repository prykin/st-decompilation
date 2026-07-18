FUN_004c2e20:
004C2E20  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004C2E26  85 C0                     TEST EAX,EAX
004C2E28  75 16                     JNZ 0x004c2e40
004C2E2A  8B 81 35 02 00 00         MOV EAX,dword ptr [ECX + 0x235]
004C2E30  8B 14 85 9C 4E 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x794e9c]
004C2E37  85 D2                     TEST EDX,EDX
004C2E39  74 05                     JZ 0x004c2e40
004C2E3B  E8 0A ED F3 FF            CALL 0x00401b4a
LAB_004c2e40:
004C2E40  33 C0                     XOR EAX,EAX
004C2E42  C3                        RET
