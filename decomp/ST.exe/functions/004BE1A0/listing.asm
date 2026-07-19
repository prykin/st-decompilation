FUN_004be1a0:
004BE1A0  F6 81 D1 01 00 00 02      TEST byte ptr [ECX + 0x1d1],0x2
004BE1A7  75 12                     JNZ 0x004be1bb
004BE1A9  8B 01                     MOV EAX,dword ptr [ECX]
004BE1AB  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004BE1B1  85 C0                     TEST EAX,EAX
004BE1B3  74 06                     JZ 0x004be1bb
004BE1B5  B8 01 00 00 00            MOV EAX,0x1
004BE1BA  C3                        RET
LAB_004be1bb:
004BE1BB  33 C0                     XOR EAX,EAX
004BE1BD  C3                        RET
