FUN_007491c3:
007491C3  53                        PUSH EBX
007491C4  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
007491C8  85 DB                     TEST EBX,EBX
007491CA  75 07                     JNZ 0x007491d3
007491CC  B8 03 40 00 80            MOV EAX,0x80004003
007491D1  EB 3B                     JMP 0x0074920e
LAB_007491d3:
007491D3  57                        PUSH EDI
007491D4  56                        PUSH ESI
007491D5  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
007491D9  8D 7E F4                  LEA EDI,[ESI + -0xc]
007491DC  8D 46 04                  LEA EAX,[ESI + 0x4]
007491DF  F7 DF                     NEG EDI
007491E1  1B FF                     SBB EDI,EDI
007491E3  23 F8                     AND EDI,EAX
007491E5  57                        PUSH EDI
007491E6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007491EC  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
007491EF  57                        PUSH EDI
007491F0  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
007491F3  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
007491F6  89 03                     MOV dword ptr [EBX],EAX
007491F8  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
007491FB  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
007491FE  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00749201  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
00749204  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074920A  5E                        POP ESI
0074920B  33 C0                     XOR EAX,EAX
0074920D  5F                        POP EDI
LAB_0074920e:
0074920E  5B                        POP EBX
0074920F  C2 08 00                  RET 0x8
