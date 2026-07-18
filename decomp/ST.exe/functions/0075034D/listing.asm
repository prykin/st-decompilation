FUN_0075034d:
0075034D  56                        PUSH ESI
0075034E  8B F1                     MOV ESI,ECX
00750350  57                        PUSH EDI
00750351  8D 7E 08                  LEA EDI,[ESI + 0x8]
00750354  57                        PUSH EDI
00750355  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0075035B  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0075035F  8B CE                     MOV ECX,ESI
00750361  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
00750364  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
00750368  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
0075036B  C7 46 64 01 00 00 00      MOV dword ptr [ESI + 0x64],0x1
00750372  E8 10 FF FF FF            CALL 0x00750287
00750377  57                        PUSH EDI
00750378  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0075037E  5F                        POP EDI
0075037F  33 C0                     XOR EAX,EAX
00750381  5E                        POP ESI
00750382  C2 08 00                  RET 0x8
