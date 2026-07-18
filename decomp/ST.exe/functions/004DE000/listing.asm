FUN_004de000:
004DE000  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004DE003  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
004DE006  50                        PUSH EAX
004DE007  6A 03                     PUSH 0x3
004DE009  51                        PUSH ECX
004DE00A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DE010  E8 D6 71 F2 FF            CALL 0x004051eb
004DE015  33 C0                     XOR EAX,EAX
004DE017  C3                        RET
