FUN_004e0220:
004E0220  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004E0226  85 C0                     TEST EAX,EAX
004E0228  75 05                     JNZ 0x004e022f
004E022A  E8 B9 5C F2 FF            CALL 0x00405ee8
LAB_004e022f:
004E022F  33 C0                     XOR EAX,EAX
004E0231  C3                        RET
