CPanelTy::sub_004F1950:
004F1950  56                        PUSH ESI
004F1951  8B F1                     MOV ESI,ECX
004F1953  33 C0                     XOR EAX,EAX
004F1955  8A 86 5F 02 00 00         MOV AL,byte ptr [ESI + 0x25f]
004F195B  8B 8E 5B 02 00 00         MOV ECX,dword ptr [ESI + 0x25b]
004F1961  50                        PUSH EAX
004F1962  51                        PUSH ECX
004F1963  E8 E8 9C 21 00            CALL 0x0070b650
004F1968  8B 96 B4 01 00 00         MOV EDX,dword ptr [ESI + 0x1b4]
004F196E  50                        PUSH EAX
004F196F  6A 06                     PUSH 0x6
004F1971  6A 09                     PUSH 0x9
004F1973  6A 0B                     PUSH 0xb
004F1975  52                        PUSH EDX
004F1976  E8 AE 18 F1 FF            CALL 0x00403229
004F197B  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004F1981  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
004F1987  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
004F198D  83 C4 1C                  ADD ESP,0x1c
004F1990  50                        PUSH EAX
004F1991  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F1996  51                        PUSH ECX
004F1997  6A FF                     PUSH -0x1
004F1999  52                        PUSH EDX
004F199A  50                        PUSH EAX
004F199B  E8 A0 1C 1C 00            CALL 0x006b3640
004F19A0  5E                        POP ESI
004F19A1  C3                        RET
