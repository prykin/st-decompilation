FUN_004e1310:
004E1310  56                        PUSH ESI
004E1311  8B F1                     MOV ESI,ECX
004E1313  8B 86 18 05 00 00         MOV EAX,dword ptr [ESI + 0x518]
004E1319  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E131C  50                        PUSH EAX
004E131D  51                        PUSH ECX
004E131E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1324  E8 CA 40 F2 FF            CALL 0x004053f3
004E1329  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E132F  8B 8E 18 05 00 00         MOV ECX,dword ptr [ESI + 0x518]
004E1335  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004E133B  8B 96 1C 05 00 00         MOV EDX,dword ptr [ESI + 0x51c]
004E1341  03 D1                     ADD EDX,ECX
004E1343  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E1346  89 96 1C 05 00 00         MOV dword ptr [ESI + 0x51c],EDX
004E134C  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004E134F  89 86 24 05 00 00         MOV dword ptr [ESI + 0x524],EAX
004E1355  33 C0                     XOR EAX,EAX
004E1357  C7 86 18 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x518],0x0
004E1361  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004E1367  3B C8                     CMP ECX,EAX
004E1369  75 0C                     JNZ 0x004e1377
004E136B  51                        PUSH ECX
004E136C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1372  E8 16 38 F2 FF            CALL 0x00404b8d
LAB_004e1377:
004E1377  33 C0                     XOR EAX,EAX
004E1379  5E                        POP ESI
004E137A  C3                        RET
