FUN_0048a840:
0048A840  56                        PUSH ESI
0048A841  8B F1                     MOV ESI,ECX
0048A843  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0048A849  8B 0C 85 18 8B 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7a8b18]
0048A850  89 8E 9A 07 00 00         MOV dword ptr [ESI + 0x79a],ECX
0048A856  8B 0C 85 B8 8B 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7a8bb8]
0048A85D  89 8E 9E 07 00 00         MOV dword ptr [ESI + 0x79e],ECX
0048A863  89 8E A2 07 00 00         MOV dword ptr [ESI + 0x7a2],ECX
0048A869  8B 0C 85 58 8C 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7a8c58]
0048A870  89 8E AA 07 00 00         MOV dword ptr [ESI + 0x7aa],ECX
0048A876  89 8E A6 07 00 00         MOV dword ptr [ESI + 0x7a6],ECX
0048A87C  03 C9                     ADD ECX,ECX
0048A87E  89 8E B2 07 00 00         MOV dword ptr [ESI + 0x7b2],ECX
0048A884  0F AF 8E 9E 07 00 00      IMUL ECX,dword ptr [ESI + 0x79e]
0048A88B  89 8E AE 07 00 00         MOV dword ptr [ESI + 0x7ae],ECX
0048A891  8B 14 85 F8 8C 7A 00      MOV EDX,dword ptr [EAX*0x4 + 0x7a8cf8]
0048A898  89 96 B6 07 00 00         MOV dword ptr [ESI + 0x7b6],EDX
0048A89E  8B 0C 85 98 8D 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7a8d98]
0048A8A5  83 F8 21                  CMP EAX,0x21
0048A8A8  89 8E BA 07 00 00         MOV dword ptr [ESI + 0x7ba],ECX
0048A8AE  89 8E BE 07 00 00         MOV dword ptr [ESI + 0x7be],ECX
0048A8B4  75 1B                     JNZ 0x0048a8d1
0048A8B6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0048A8B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048A8BF  6A 74                     PUSH 0x74
0048A8C1  50                        PUSH EAX
0048A8C2  E8 A4 6F F7 FF            CALL 0x0040186b
0048A8C7  85 C0                     TEST EAX,EAX
0048A8C9  75 06                     JNZ 0x0048a8d1
0048A8CB  89 86 BE 07 00 00         MOV dword ptr [ESI + 0x7be],EAX
LAB_0048a8d1:
0048A8D1  5E                        POP ESI
0048A8D2  C3                        RET
