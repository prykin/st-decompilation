FUN_0074bde0:
0074BDE0  53                        PUSH EBX
0074BDE1  56                        PUSH ESI
0074BDE2  57                        PUSH EDI
0074BDE3  8B F1                     MOV ESI,ECX
0074BDE5  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074BDE9  8D 7E 5C                  LEA EDI,[ESI + 0x5c]
0074BDEC  57                        PUSH EDI
0074BDED  FF 74 24 1C               PUSH dword ptr [ESP + 0x1c]
0074BDF1  FF 74 24 1C               PUSH dword ptr [ESP + 0x1c]
0074BDF5  E8 E9 B0 FF FF            CALL 0x00746ee3
0074BDFA  33 DB                     XOR EBX,EBX
0074BDFC  57                        PUSH EDI
0074BDFD  8B 3D 88 BB 85 00         MOV EDI,dword ptr [0x0085bb88]
0074BE03  89 5E 50                  MOV dword ptr [ESI + 0x50],EBX
0074BE06  89 5E 54                  MOV dword ptr [ESI + 0x54],EBX
0074BE09  89 5E 58                  MOV dword ptr [ESI + 0x58],EBX
0074BE0C  FF D7                     CALL EDI
0074BE0E  8D 46 74                  LEA EAX,[ESI + 0x74]
0074BE11  50                        PUSH EAX
0074BE12  FF D7                     CALL EDI
0074BE14  89 9E 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EBX
0074BE1A  89 9E 90 00 00 00         MOV dword ptr [ESI + 0x90],EBX
0074BE20  8B C6                     MOV EAX,ESI
0074BE22  5F                        POP EDI
0074BE23  5E                        POP ESI
0074BE24  5B                        POP EBX
0074BE25  C2 0C 00                  RET 0xc
