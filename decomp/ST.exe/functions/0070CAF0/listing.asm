FUN_0070caf0:
0070CAF0  55                        PUSH EBP
0070CAF1  8B EC                     MOV EBP,ESP
0070CAF3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070CAF6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0070CAF9  8D 45 10                  LEA EAX,[EBP + 0x10]
0070CAFC  50                        PUSH EAX
0070CAFD  51                        PUSH ECX
0070CAFE  52                        PUSH EDX
0070CAFF  E8 DC FE FF FF            CALL 0x0070c9e0
0070CB04  83 C4 0C                  ADD ESP,0xc
0070CB07  85 C0                     TEST EAX,EAX
0070CB09  75 02                     JNZ 0x0070cb0d
0070CB0B  5D                        POP EBP
0070CB0C  C3                        RET
LAB_0070cb0d:
0070CB0D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070CB10  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070CB13  89 11                     MOV dword ptr [ECX],EDX
0070CB15  5D                        POP EBP
0070CB16  C3                        RET
