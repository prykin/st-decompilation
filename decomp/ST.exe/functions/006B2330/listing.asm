FUN_006b2330:
006B2330  55                        PUSH EBP
006B2331  8B EC                     MOV EBP,ESP
006B2333  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B2336  56                        PUSH ESI
006B2337  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B233A  57                        PUSH EDI
006B233B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B233E  6A 01                     PUSH 0x1
006B2340  6A 00                     PUSH 0x0
006B2342  6A FF                     PUSH -0x1
006B2344  6A FF                     PUSH -0x1
006B2346  6A 00                     PUSH 0x0
006B2348  6A 00                     PUSH 0x0
006B234A  6A 00                     PUSH 0x0
006B234C  50                        PUSH EAX
006B234D  56                        PUSH ESI
006B234E  57                        PUSH EDI
006B234F  E8 FC F9 FF FF            CALL 0x006b1d50
006B2354  85 C0                     TEST EAX,EAX
006B2356  75 42                     JNZ 0x006b239a
006B2358  8B 0E                     MOV ECX,dword ptr [ESI]
006B235A  8B 97 B0 01 00 00         MOV EDX,dword ptr [EDI + 0x1b0]
006B2360  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
006B2363  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B2366  89 51 38                  MOV dword ptr [ECX + 0x38],EDX
006B2369  89 51 30                  MOV dword ptr [ECX + 0x30],EDX
006B236C  89 51 20                  MOV dword ptr [ECX + 0x20],EDX
006B236F  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
006B2372  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B2375  89 51 3C                  MOV dword ptr [ECX + 0x3c],EDX
006B2378  89 51 34                  MOV dword ptr [ECX + 0x34],EDX
006B237B  89 51 24                  MOV dword ptr [ECX + 0x24],EDX
006B237E  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
006B2381  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B2384  89 91 CC 00 00 00         MOV dword ptr [ECX + 0xcc],EDX
006B238A  8B 11                     MOV EDX,dword ptr [ECX]
006B238C  80 CE 40                  OR DH,0x40
006B238F  89 11                     MOV dword ptr [ECX],EDX
006B2391  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B2394  89 91 C0 00 00 00         MOV dword ptr [ECX + 0xc0],EDX
LAB_006b239a:
006B239A  5F                        POP EDI
006B239B  5E                        POP ESI
006B239C  5D                        POP EBP
006B239D  C2 1C 00                  RET 0x1c
