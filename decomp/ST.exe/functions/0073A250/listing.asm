FUN_0073a250:
0073A250  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0073A254  57                        PUSH EDI
0073A255  F7 C1 03 00 00 00         TEST ECX,0x3
0073A25B  74 0F                     JZ 0x0073a26c
LAB_0073a25d:
0073A25D  8A 01                     MOV AL,byte ptr [ECX]
0073A25F  41                        INC ECX
0073A260  84 C0                     TEST AL,AL
0073A262  74 3B                     JZ 0x0073a29f
0073A264  F7 C1 03 00 00 00         TEST ECX,0x3
0073A26A  75 F1                     JNZ 0x0073a25d
LAB_0073a26c:
0073A26C  8B 01                     MOV EAX,dword ptr [ECX]
0073A26E  BA FF FE FE 7E            MOV EDX,0x7efefeff
0073A273  03 D0                     ADD EDX,EAX
0073A275  83 F0 FF                  XOR EAX,0xffffffff
0073A278  33 C2                     XOR EAX,EDX
0073A27A  83 C1 04                  ADD ECX,0x4
0073A27D  A9 00 01 01 81            TEST EAX,0x81010100
0073A282  74 E8                     JZ 0x0073a26c
0073A284  8B 41 FC                  MOV EAX,dword ptr [ECX + -0x4]
0073A287  84 C0                     TEST AL,AL
0073A289  74 23                     JZ 0x0073a2ae
0073A28B  84 E4                     TEST AH,AH
0073A28D  74 1A                     JZ 0x0073a2a9
0073A28F  A9 00 00 FF 00            TEST EAX,0xff0000
0073A294  74 0E                     JZ 0x0073a2a4
0073A296  A9 00 00 00 FF            TEST EAX,0xff000000
0073A29B  74 02                     JZ 0x0073a29f
0073A29D  EB CD                     JMP 0x0073a26c
LAB_0073a29f:
0073A29F  8D 79 FF                  LEA EDI,[ECX + -0x1]
0073A2A2  EB 0D                     JMP 0x0073a2b1
LAB_0073a2a4:
0073A2A4  8D 79 FE                  LEA EDI,[ECX + -0x2]
0073A2A7  EB 08                     JMP 0x0073a2b1
LAB_0073a2a9:
0073A2A9  8D 79 FD                  LEA EDI,[ECX + -0x3]
0073A2AC  EB 03                     JMP 0x0073a2b1
LAB_0073a2ae:
0073A2AE  8D 79 FC                  LEA EDI,[ECX + -0x4]
LAB_0073a2b1:
0073A2B1  8B 4C 24 0C               MOV ECX,dword ptr [ESP + 0xc]
0073A2B5  F7 C1 03 00 00 00         TEST ECX,0x3
0073A2BB  74 19                     JZ 0x0073a2d6
LAB_0073a2bd:
0073A2BD  8A 11                     MOV DL,byte ptr [ECX]
0073A2BF  41                        INC ECX
0073A2C0  84 D2                     TEST DL,DL
0073A2C2  74 64                     JZ 0x0073a328
0073A2C4  88 17                     MOV byte ptr [EDI],DL
0073A2C6  47                        INC EDI
0073A2C7  F7 C1 03 00 00 00         TEST ECX,0x3
0073A2CD  75 EE                     JNZ 0x0073a2bd
0073A2CF  EB 05                     JMP 0x0073a2d6
LAB_0073a2d1:
0073A2D1  89 17                     MOV dword ptr [EDI],EDX
0073A2D3  83 C7 04                  ADD EDI,0x4
LAB_0073a2d6:
0073A2D6  BA FF FE FE 7E            MOV EDX,0x7efefeff
0073A2DB  8B 01                     MOV EAX,dword ptr [ECX]
0073A2DD  03 D0                     ADD EDX,EAX
0073A2DF  83 F0 FF                  XOR EAX,0xffffffff
0073A2E2  33 C2                     XOR EAX,EDX
0073A2E4  8B 11                     MOV EDX,dword ptr [ECX]
0073A2E6  83 C1 04                  ADD ECX,0x4
0073A2E9  A9 00 01 01 81            TEST EAX,0x81010100
0073A2EE  74 E1                     JZ 0x0073a2d1
0073A2F0  84 D2                     TEST DL,DL
0073A2F2  74 34                     JZ 0x0073a328
0073A2F4  84 F6                     TEST DH,DH
0073A2F6  74 27                     JZ 0x0073a31f
0073A2F8  F7 C2 00 00 FF 00         TEST EDX,0xff0000
0073A2FE  74 12                     JZ 0x0073a312
0073A300  F7 C2 00 00 00 FF         TEST EDX,0xff000000
0073A306  74 02                     JZ 0x0073a30a
0073A308  EB C7                     JMP 0x0073a2d1
LAB_0073a30a:
0073A30A  89 17                     MOV dword ptr [EDI],EDX
0073A30C  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0073A310  5F                        POP EDI
0073A311  C3                        RET
LAB_0073a312:
0073A312  66 89 17                  MOV word ptr [EDI],DX
0073A315  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0073A319  C6 47 02 00               MOV byte ptr [EDI + 0x2],0x0
0073A31D  5F                        POP EDI
0073A31E  C3                        RET
LAB_0073a31f:
0073A31F  66 89 17                  MOV word ptr [EDI],DX
0073A322  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0073A326  5F                        POP EDI
0073A327  C3                        RET
LAB_0073a328:
0073A328  88 17                     MOV byte ptr [EDI],DL
0073A32A  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0073A32E  5F                        POP EDI
0073A32F  C3                        RET
