FUN_0063f340:
0063F340  56                        PUSH ESI
0063F341  8B F1                     MOV ESI,ECX
0063F343  8B 86 47 03 00 00         MOV EAX,dword ptr [ESI + 0x347]
0063F349  85 C0                     TEST EAX,EAX
0063F34B  75 31                     JNZ 0x0063f37e
0063F34D  50                        PUSH EAX
0063F34E  50                        PUSH EAX
0063F34F  6A 01                     PUSH 0x1
0063F351  50                        PUSH EAX
0063F352  A1 74 67 80 00            MOV EAX,[0x00806774]
0063F357  6A FF                     PUSH -0x1
0063F359  68 50 1F 7D 00            PUSH 0x7d1f50
0063F35E  6A 1D                     PUSH 0x1d
0063F360  50                        PUSH EAX
0063F361  E8 8A A7 0C 00            CALL 0x00709af0
0063F366  89 86 47 03 00 00         MOV dword ptr [ESI + 0x347],EAX
0063F36C  8B 08                     MOV ECX,dword ptr [EAX]
0063F36E  83 C4 20                  ADD ESP,0x20
0063F371  83 E9 07                  SUB ECX,0x7
0063F374  85 C0                     TEST EAX,EAX
0063F376  89 8E 3E 03 00 00         MOV dword ptr [ESI + 0x33e],ECX
0063F37C  74 30                     JZ 0x0063f3ae
LAB_0063f37e:
0063F37E  8B 8E 3E 03 00 00         MOV ECX,dword ptr [ESI + 0x33e]
0063F384  85 C9                     TEST ECX,ECX
0063F386  7E 18                     JLE 0x0063f3a0
0063F388  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
0063F38B  49                        DEC ECX
0063F38C  8B 44 8A 04               MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0063F390  8B 10                     MOV EDX,dword ptr [EAX]
0063F392  89 8E 3E 03 00 00         MOV dword ptr [ESI + 0x33e],ECX
0063F398  89 96 42 03 00 00         MOV dword ptr [ESI + 0x342],EDX
0063F39E  5E                        POP ESI
0063F39F  C3                        RET
LAB_0063f3a0:
0063F3A0  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
0063F3A3  8B 0C 88                  MOV ECX,dword ptr [EAX + ECX*0x4]
0063F3A6  8B 11                     MOV EDX,dword ptr [ECX]
0063F3A8  89 96 42 03 00 00         MOV dword ptr [ESI + 0x342],EDX
LAB_0063f3ae:
0063F3AE  5E                        POP ESI
0063F3AF  C3                        RET
