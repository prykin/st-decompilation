FUN_004be1d0:
004BE1D0  56                        PUSH ESI
004BE1D1  8B F1                     MOV ESI,ECX
004BE1D3  E8 5E 57 F4 FF            CALL 0x00403936
004BE1D8  85 C0                     TEST EAX,EAX
004BE1DA  74 0B                     JZ 0x004be1e7
004BE1DC  83 BE AC 05 00 00 6C      CMP dword ptr [ESI + 0x5ac],0x6c
004BE1E3  75 02                     JNZ 0x004be1e7
004BE1E5  33 C0                     XOR EAX,EAX
LAB_004be1e7:
004BE1E7  5E                        POP ESI
004BE1E8  C3                        RET
