FUN_004e4670:
004E4670  56                        PUSH ESI
004E4671  8B F1                     MOV ESI,ECX
004E4673  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E4679  85 C0                     TEST EAX,EAX
004E467B  74 47                     JZ 0x004e46c4
004E467D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4683  50                        PUSH EAX
004E4684  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4687  50                        PUSH EAX
004E4688  E8 DE 17 F2 FF            CALL 0x00405e6b
004E468D  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E4690  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004E469A  51                        PUSH ECX
004E469B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E46A1  E8 50 E2 F1 FF            CALL 0x004028f6
004E46A6  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004E46A9  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E46AC  33 C0                     XOR EAX,EAX
004E46AE  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004E46B4  3B C8                     CMP ECX,EAX
004E46B6  75 0C                     JNZ 0x004e46c4
004E46B8  51                        PUSH ECX
004E46B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E46BF  E8 C9 04 F2 FF            CALL 0x00404b8d
LAB_004e46c4:
004E46C4  33 C0                     XOR EAX,EAX
004E46C6  5E                        POP ESI
004E46C7  C3                        RET
