FUN_004cbf70:
004CBF70  56                        PUSH ESI
004CBF71  8B F1                     MOV ESI,ECX
004CBF73  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBF79  85 C9                     TEST ECX,ECX
004CBF7B  74 1F                     JZ 0x004cbf9c
004CBF7D  6A 0E                     PUSH 0xe
004CBF7F  E8 E0 82 F3 FF            CALL 0x00404264
004CBF84  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBF8A  6A 0C                     PUSH 0xc
004CBF8C  E8 D3 82 F3 FF            CALL 0x00404264
004CBF91  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBF97  E8 73 7D F3 FF            CALL 0x00403d0f
LAB_004cbf9c:
004CBF9C  33 C0                     XOR EAX,EAX
004CBF9E  5E                        POP ESI
004CBF9F  C3                        RET
