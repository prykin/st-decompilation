MoneyTy::sub_0052B8F0:
0052B8F0  56                        PUSH ESI
0052B8F1  8B F1                     MOV ESI,ECX
0052B8F3  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0052B8F6  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0052B8F9  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0052B8FC  50                        PUSH EAX
0052B8FD  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0052B900  51                        PUSH ECX
0052B901  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052B907  52                        PUSH EDX
0052B908  50                        PUSH EAX
0052B909  51                        PUSH ECX
0052B90A  E8 71 A6 18 00            CALL 0x006b5f80
0052B90F  8B 56 76                  MOV EDX,dword ptr [ESI + 0x76]
0052B912  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0052B915  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0052B918  52                        PUSH EDX
0052B919  6A 01                     PUSH 0x1
0052B91B  50                        PUSH EAX
0052B91C  51                        PUSH ECX
0052B91D  E8 16 7E ED FF            CALL 0x00403738
0052B922  83 C4 10                  ADD ESP,0x10
0052B925  5E                        POP ESI
0052B926  C3                        RET
