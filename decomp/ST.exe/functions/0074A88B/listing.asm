FUN_0074a88b:
0074A88B  53                        PUSH EBX
0074A88C  56                        PUSH ESI
0074A88D  8B F1                     MOV ESI,ECX
0074A88F  57                        PUSH EDI
0074A890  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A896  57                        PUSH EDI
0074A897  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A89D  33 DB                     XOR EBX,EBX
0074A89F  39 5E 60                  CMP dword ptr [ESI + 0x60],EBX
0074A8A2  75 3C                     JNZ 0x0074a8e0
0074A8A4  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
0074A8A7  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
0074A8AA  74 34                     JZ 0x0074a8e0
0074A8AC  38 98 A1 00 00 00         CMP byte ptr [EAX + 0xa1],BL
0074A8B2  75 2C                     JNZ 0x0074a8e0
0074A8B4  39 5E 70                  CMP dword ptr [ESI + 0x70],EBX
0074A8B7  75 27                     JNZ 0x0074a8e0
0074A8B9  83 BE B0 00 00 00 01      CMP dword ptr [ESI + 0xb0],0x1
0074A8C0  75 1E                     JNZ 0x0074a8e0
0074A8C2  3B C3                     CMP EAX,EBX
0074A8C4  74 05                     JZ 0x0074a8cb
0074A8C6  83 C0 0C                  ADD EAX,0xc
0074A8C9  EB 02                     JMP 0x0074a8cd
LAB_0074a8cb:
0074A8CB  33 C0                     XOR EAX,EAX
LAB_0074a8cd:
0074A8CD  53                        PUSH EBX
0074A8CE  50                        PUSH EAX
0074A8CF  6A 05                     PUSH 0x5
0074A8D1  8B CE                     MOV ECX,ESI
0074A8D3  E8 2E CB FF FF            CALL 0x00747406
0074A8D8  53                        PUSH EBX
0074A8D9  8B CE                     MOV ECX,ESI
0074A8DB  E8 3D FF FF FF            CALL 0x0074a81d
LAB_0074a8e0:
0074A8E0  57                        PUSH EDI
0074A8E1  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A8E7  5F                        POP EDI
0074A8E8  5E                        POP ESI
0074A8E9  5B                        POP EBX
0074A8EA  C3                        RET
