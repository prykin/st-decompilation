FUN_004c5e30:
004C5E30  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004C5E36  85 C0                     TEST EAX,EAX
004C5E38  75 05                     JNZ 0x004c5e3f
004C5E3A  E8 4E F7 F3 FF            CALL 0x0040558d
LAB_004c5e3f:
004C5E3F  33 C0                     XOR EAX,EAX
004C5E41  C3                        RET
