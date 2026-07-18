FUN_006a0150:
006A0150  56                        PUSH ESI
006A0151  8B F1                     MOV ESI,ECX
006A0153  57                        PUSH EDI
006A0154  6A 20                     PUSH 0x20
006A0156  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
006A015C  8B 8E 34 02 00 00         MOV ECX,dword ptr [ESI + 0x234]
006A0162  8B 96 2C 02 00 00         MOV EDX,dword ptr [ESI + 0x22c]
006A0168  50                        PUSH EAX
006A0169  8B 86 28 02 00 00         MOV EAX,dword ptr [ESI + 0x228]
006A016F  51                        PUSH ECX
006A0170  52                        PUSH EDX
006A0171  50                        PUSH EAX
006A0172  BF 01 00 00 00            MOV EDI,0x1
006A0177  E8 D4 FA 04 00            CALL 0x006efc50
006A017C  50                        PUSH EAX
006A017D  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006A0180  E8 9B 04 05 00            CALL 0x006f0620
006A0185  50                        PUSH EAX
006A0186  57                        PUSH EDI
006A0187  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006A018A  E8 23 1B D6 FF            CALL 0x00401cb2
006A018F  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006A0192  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006A0195  51                        PUSH ECX
006A0196  52                        PUSH EDX
006A0197  E8 64 0A 05 00            CALL 0x006f0c00
006A019C  83 C4 28                  ADD ESP,0x28
006A019F  85 C0                     TEST EAX,EAX
006A01A1  74 05                     JZ 0x006a01a8
006A01A3  5F                        POP EDI
006A01A4  33 C0                     XOR EAX,EAX
006A01A6  5E                        POP ESI
006A01A7  C3                        RET
LAB_006a01a8:
006A01A8  8B C7                     MOV EAX,EDI
006A01AA  5F                        POP EDI
006A01AB  5E                        POP ESI
006A01AC  C3                        RET
