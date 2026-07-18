FUN_0052bbe0:
0052BBE0  56                        PUSH ESI
0052BBE1  8B F1                     MOV ESI,ECX
0052BBE3  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0052BBE6  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
0052BBE9  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0052BBEC  50                        PUSH EAX
0052BBED  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
0052BBF0  51                        PUSH ECX
0052BBF1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052BBF7  52                        PUSH EDX
0052BBF8  50                        PUSH EAX
0052BBF9  51                        PUSH ECX
0052BBFA  E8 81 A3 18 00            CALL 0x006b5f80
0052BBFF  8B 56 7E                  MOV EDX,dword ptr [ESI + 0x7e]
0052BC02  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0052BC05  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0052BC08  52                        PUSH EDX
0052BC09  6A 01                     PUSH 0x1
0052BC0B  50                        PUSH EAX
0052BC0C  51                        PUSH ECX
0052BC0D  E8 26 7B ED FF            CALL 0x00403738
0052BC12  83 C4 10                  ADD ESP,0x10
0052BC15  5E                        POP ESI
0052BC16  C3                        RET
