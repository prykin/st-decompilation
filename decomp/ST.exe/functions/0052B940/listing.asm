FUN_0052b940:
0052B940  56                        PUSH ESI
0052B941  8B F1                     MOV ESI,ECX
0052B943  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
0052B946  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
0052B949  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0052B94C  50                        PUSH EAX
0052B94D  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0052B950  51                        PUSH ECX
0052B951  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052B957  52                        PUSH EDX
0052B958  50                        PUSH EAX
0052B959  51                        PUSH ECX
0052B95A  E8 21 A6 18 00            CALL 0x006b5f80
0052B95F  8B 56 7A                  MOV EDX,dword ptr [ESI + 0x7a]
0052B962  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0052B965  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0052B968  52                        PUSH EDX
0052B969  6A 01                     PUSH 0x1
0052B96B  50                        PUSH EAX
0052B96C  51                        PUSH ECX
0052B96D  E8 C6 7D ED FF            CALL 0x00403738
0052B972  83 C4 10                  ADD ESP,0x10
0052B975  5E                        POP ESI
0052B976  C3                        RET
