FUN_0074b86c:
0074B86C  56                        PUSH ESI
0074B86D  57                        PUSH EDI
0074B86E  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074B872  8D 77 08                  LEA ESI,[EDI + 0x8]
0074B875  56                        PUSH ESI
0074B876  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
0074B87C  85 C0                     TEST EAX,EAX
0074B87E  75 16                     JNZ 0x0074b896
0074B880  8B 06                     MOV EAX,dword ptr [ESI]
0074B882  40                        INC EAX
0074B883  85 FF                     TEST EDI,EDI
0074B885  89 06                     MOV dword ptr [ESI],EAX
0074B887  74 09                     JZ 0x0074b892
0074B889  8B 07                     MOV EAX,dword ptr [EDI]
0074B88B  6A 01                     PUSH 0x1
0074B88D  8B CF                     MOV ECX,EDI
0074B88F  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_0074b892:
0074B892  33 C0                     XOR EAX,EAX
0074B894  EB 0B                     JMP 0x0074b8a1
LAB_0074b896:
0074B896  8B 36                     MOV ESI,dword ptr [ESI]
0074B898  6A 01                     PUSH 0x1
0074B89A  58                        POP EAX
0074B89B  3B F0                     CMP ESI,EAX
0074B89D  76 02                     JBE 0x0074b8a1
0074B89F  8B C6                     MOV EAX,ESI
LAB_0074b8a1:
0074B8A1  5F                        POP EDI
0074B8A2  5E                        POP ESI
0074B8A3  C2 04 00                  RET 0x4
