CBaseRenderer::BeginFlush:
0074A143  56                        PUSH ESI
0074A144  8B F1                     MOV ESI,ECX
0074A146  83 7E 14 01               CMP dword ptr [ESI + 0x14],0x1
0074A14A  75 09                     JNZ 0x0074a155
0074A14C  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
0074A14F  FF 15 98 BC 85 00         CALL dword ptr [0x0085bc98]
LAB_0074a155:
0074A155  8B 06                     MOV EAX,dword ptr [ESI]
0074A157  6A 00                     PUSH 0x0
0074A159  8B CE                     MOV ECX,ESI
0074A15B  FF 50 28                  CALL dword ptr [EAX + 0x28]
0074A15E  8B 06                     MOV EAX,dword ptr [ESI]
0074A160  8B CE                     MOV ECX,ESI
0074A162  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0074A165  8B 06                     MOV EAX,dword ptr [ESI]
0074A167  8B CE                     MOV ECX,ESI
0074A169  FF 50 70                  CALL dword ptr [EAX + 0x70]
0074A16C  8B CE                     MOV ECX,ESI
0074A16E  E8 EC FB FF FF            CALL 0x00749d5f
0074A173  33 C0                     XOR EAX,EAX
0074A175  5E                        POP ESI
0074A176  C3                        RET
