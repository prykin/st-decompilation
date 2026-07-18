FUN_004c61e0:
004C61E0  56                        PUSH ESI
004C61E1  8B F1                     MOV ESI,ECX
004C61E3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004C61E6  85 C0                     TEST EAX,EAX
004C61E8  75 11                     JNZ 0x004c61fb
004C61EA  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004C61ED  E8 BE EF 21 00            CALL 0x006e51b0
004C61F2  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C61F5  50                        PUSH EAX
004C61F6  E8 AF D1 F3 FF            CALL 0x004033aa
LAB_004c61fb:
004C61FB  33 C0                     XOR EAX,EAX
004C61FD  5E                        POP ESI
004C61FE  C3                        RET
