FUN_00690ab0:
00690AB0  56                        PUSH ESI
00690AB1  8B F1                     MOV ESI,ECX
00690AB3  8B 86 89 00 00 00         MOV EAX,dword ptr [ESI + 0x89]
00690AB9  85 C0                     TEST EAX,EAX
00690ABB  74 16                     JZ 0x00690ad3
00690ABD  8B 8E 8D 00 00 00         MOV ECX,dword ptr [ESI + 0x8d]
00690AC3  03 C8                     ADD ECX,EAX
00690AC5  8B 86 2C 01 00 00         MOV EAX,dword ptr [ESI + 0x12c]
00690ACB  3B C1                     CMP EAX,ECX
00690ACD  0F 82 82 00 00 00         JC 0x00690b55
LAB_00690ad3:
00690AD3  8B 96 2C 01 00 00         MOV EDX,dword ptr [ESI + 0x12c]
00690AD9  6A FF                     PUSH -0x1
00690ADB  6A FF                     PUSH -0x1
00690ADD  6A FF                     PUSH -0x1
00690ADF  6A 00                     PUSH 0x0
00690AE1  6A 00                     PUSH 0x0
00690AE3  6A 00                     PUSH 0x0
00690AE5  68 DE 00 00 00            PUSH 0xde
00690AEA  89 96 8D 00 00 00         MOV dword ptr [ESI + 0x8d],EDX
00690AF0  E8 4B 29 D7 FF            CALL 0x00403440
00690AF5  6A FF                     PUSH -0x1
00690AF7  6A FF                     PUSH -0x1
00690AF9  6A FF                     PUSH -0x1
00690AFB  6A 00                     PUSH 0x0
00690AFD  6A 00                     PUSH 0x0
00690AFF  6A 00                     PUSH 0x0
00690B01  68 DD 00 00 00            PUSH 0xdd
00690B06  89 86 34 01 00 00         MOV dword ptr [ESI + 0x134],EAX
00690B0C  E8 2F 29 D7 FF            CALL 0x00403440
00690B11  6A FF                     PUSH -0x1
00690B13  6A FF                     PUSH -0x1
00690B15  6A FF                     PUSH -0x1
00690B17  6A 00                     PUSH 0x0
00690B19  6A 00                     PUSH 0x0
00690B1B  6A 00                     PUSH 0x0
00690B1D  68 E1 00 00 00            PUSH 0xe1
00690B22  89 86 38 01 00 00         MOV dword ptr [ESI + 0x138],EAX
00690B28  E8 13 29 D7 FF            CALL 0x00403440
00690B2D  83 C4 54                  ADD ESP,0x54
00690B30  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
00690B36  6A FF                     PUSH -0x1
00690B38  6A FF                     PUSH -0x1
00690B3A  6A FF                     PUSH -0x1
00690B3C  6A 00                     PUSH 0x0
00690B3E  6A 00                     PUSH 0x0
00690B40  6A 00                     PUSH 0x0
00690B42  68 E2 00 00 00            PUSH 0xe2
00690B47  E8 F4 28 D7 FF            CALL 0x00403440
00690B4C  83 C4 1C                  ADD ESP,0x1c
00690B4F  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
LAB_00690b55:
00690B55  5E                        POP ESI
00690B56  C3                        RET
