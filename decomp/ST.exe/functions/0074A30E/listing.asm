FUN_0074a30e:
0074A30E  56                        PUSH ESI
0074A30F  57                        PUSH EDI
0074A310  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074A314  8B F1                     MOV ESI,ECX
0074A316  85 FF                     TEST EDI,EDI
0074A318  74 06                     JZ 0x0074a320
0074A31A  83 7E 64 00               CMP dword ptr [ESI + 0x64],0x0
0074A31E  75 05                     JNZ 0x0074a325
LAB_0074a320:
0074A320  6A 01                     PUSH 0x1
0074A322  58                        POP EAX
0074A323  EB 1D                     JMP 0x0074a342
LAB_0074a325:
0074A325  8B 06                     MOV EAX,dword ptr [ESI]
0074A327  57                        PUSH EDI
0074A328  8B CE                     MOV ECX,ESI
0074A32A  FF 50 38                  CALL dword ptr [EAX + 0x38]
0074A32D  8B 06                     MOV EAX,dword ptr [ESI]
0074A32F  57                        PUSH EDI
0074A330  8B CE                     MOV ECX,ESI
0074A332  FF 90 AC 00 00 00         CALL dword ptr [EAX + 0xac]
0074A338  8B 06                     MOV EAX,dword ptr [ESI]
0074A33A  57                        PUSH EDI
0074A33B  8B CE                     MOV ECX,ESI
0074A33D  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0074A340  33 C0                     XOR EAX,EAX
LAB_0074a342:
0074A342  5F                        POP EDI
0074A343  5E                        POP ESI
0074A344  C2 04 00                  RET 0x4
