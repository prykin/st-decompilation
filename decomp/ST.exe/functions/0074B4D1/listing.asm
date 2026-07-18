FUN_0074b4d1:
0074B4D1  57                        PUSH EDI
0074B4D2  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074B4D6  85 FF                     TEST EDI,EDI
0074B4D8  75 07                     JNZ 0x0074b4e1
0074B4DA  B8 03 40 00 80            MOV EAX,0x80004003
0074B4DF  EB 49                     JMP 0x0074b52a
LAB_0074b4e1:
0074B4E1  56                        PUSH ESI
0074B4E2  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074B4E6  53                        PUSH EBX
0074B4E7  8D 5E B4                  LEA EBX,[ESI + -0x4c]
0074B4EA  53                        PUSH EBX
0074B4EB  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074B4F1  83 7E 9C 00               CMP dword ptr [ESI + -0x64],0x0
0074B4F5  74 0B                     JZ 0x0074b502
0074B4F7  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0074B4FD  2B 46 78                  SUB EAX,dword ptr [ESI + 0x78]
0074B500  EB 03                     JMP 0x0074b505
LAB_0074b502:
0074B502  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
LAB_0074b505:
0074B505  85 C0                     TEST EAX,EAX
0074B507  7F 05                     JG 0x0074b50e
0074B509  83 27 00                  AND dword ptr [EDI],0x0
0074B50C  EB 11                     JMP 0x0074b51f
LAB_0074b50e:
0074B50E  50                        PUSH EAX
0074B50F  FF 76 44                  PUSH dword ptr [ESI + 0x44]
0074B512  68 A0 86 01 00            PUSH 0x186a0
0074B517  FF 15 14 BD 85 00         CALL dword ptr [0x0085bd14]
0074B51D  89 07                     MOV dword ptr [EDI],EAX
LAB_0074b51f:
0074B51F  53                        PUSH EBX
0074B520  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074B526  5B                        POP EBX
0074B527  33 C0                     XOR EAX,EAX
0074B529  5E                        POP ESI
LAB_0074b52a:
0074B52A  5F                        POP EDI
0074B52B  C2 08 00                  RET 0x8
