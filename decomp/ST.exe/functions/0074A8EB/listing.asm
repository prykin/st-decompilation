FUN_0074a8eb:
0074A8EB  56                        PUSH ESI
0074A8EC  8B F1                     MOV ESI,ECX
0074A8EE  57                        PUSH EDI
0074A8EF  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A8F5  57                        PUSH EDI
0074A8F6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A8FC  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
0074A8FF  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074A903  75 0B                     JNZ 0x0074a910
0074A905  57                        PUSH EDI
0074A906  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A90C  33 C0                     XOR EAX,EAX
0074A90E  EB 46                     JMP 0x0074a956
LAB_0074a910:
0074A910  85 C0                     TEST EAX,EAX
0074A912  53                        PUSH EBX
0074A913  74 05                     JZ 0x0074a91a
0074A915  8D 58 0C                  LEA EBX,[EAX + 0xc]
0074A918  EB 02                     JMP 0x0074a91c
LAB_0074a91a:
0074A91A  33 DB                     XOR EBX,EBX
LAB_0074a91c:
0074A91C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0074A91F  83 C0 0C                  ADD EAX,0xc
0074A922  50                        PUSH EAX
0074A923  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074A926  6A 00                     PUSH 0x0
0074A928  53                        PUSH EBX
0074A929  6A 16                     PUSH 0x16
0074A92B  8B CE                     MOV ECX,ESI
0074A92D  E8 D4 CA FF FF            CALL 0x00747406
0074A932  8B 06                     MOV EAX,dword ptr [ESI]
0074A934  6A 01                     PUSH 0x1
0074A936  5B                        POP EBX
0074A937  8B CE                     MOV ECX,ESI
0074A939  89 5E 60                  MOV dword ptr [ESI + 0x60],EBX
0074A93C  FF 50 70                  CALL dword ptr [EAX + 0x70]
0074A93F  8B 76 78                  MOV ESI,dword ptr [ESI + 0x78]
0074A942  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0074A945  8D 46 0C                  LEA EAX,[ESI + 0xc]
0074A948  50                        PUSH EAX
0074A949  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074A94C  57                        PUSH EDI
0074A94D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A953  8B C3                     MOV EAX,EBX
0074A955  5B                        POP EBX
LAB_0074a956:
0074A956  5F                        POP EDI
0074A957  5E                        POP ESI
0074A958  C3                        RET
