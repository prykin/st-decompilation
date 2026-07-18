FUN_0074aa28:
0074AA28  53                        PUSH EBX
0074AA29  55                        PUSH EBP
0074AA2A  56                        PUSH ESI
0074AA2B  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074AA2F  8B 2D 8C BB 85 00         MOV EBP,dword ptr [0x0085bb8c]
0074AA35  57                        PUSH EDI
0074AA36  8B BE CC 00 00 00         MOV EDI,dword ptr [ESI + 0xcc]
0074AA3C  83 C7 7C                  ADD EDI,0x7c
0074AA3F  57                        PUSH EDI
0074AA40  FF D5                     CALL EBP
0074AA42  8B 9E CC 00 00 00         MOV EBX,dword ptr [ESI + 0xcc]
0074AA48  81 C3 94 00 00 00         ADD EBX,0x94
0074AA4E  53                        PUSH EBX
0074AA4F  FF D5                     CALL EBP
0074AA51  56                        PUSH ESI
0074AA52  E8 EF DE FF FF            CALL 0x00748946
0074AA57  8B 8E CC 00 00 00         MOV ECX,dword ptr [ESI + 0xcc]
0074AA5D  8B 01                     MOV EAX,dword ptr [ECX]
0074AA5F  FF 90 84 00 00 00         CALL dword ptr [EAX + 0x84]
0074AA65  53                        PUSH EBX
0074AA66  8B 1D 90 BB 85 00         MOV EBX,dword ptr [0x0085bb90]
0074AA6C  FF D3                     CALL EBX
0074AA6E  8B 8E CC 00 00 00         MOV ECX,dword ptr [ESI + 0xcc]
0074AA74  8B 01                     MOV EAX,dword ptr [ECX]
0074AA76  FF 50 64                  CALL dword ptr [EAX + 0x64]
0074AA79  57                        PUSH EDI
0074AA7A  8B F0                     MOV ESI,EAX
0074AA7C  FF D3                     CALL EBX
0074AA7E  8B C6                     MOV EAX,ESI
0074AA80  5F                        POP EDI
0074AA81  5E                        POP ESI
0074AA82  5D                        POP EBP
0074AA83  5B                        POP EBX
0074AA84  C2 04 00                  RET 0x4
