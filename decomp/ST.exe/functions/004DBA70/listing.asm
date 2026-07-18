FUN_004dba70:
004DBA70  55                        PUSH EBP
004DBA71  8B EC                     MOV EBP,ESP
004DBA73  83 EC 08                  SUB ESP,0x8
004DBA76  53                        PUSH EBX
004DBA77  56                        PUSH ESI
004DBA78  57                        PUSH EDI
004DBA79  8D B9 D0 04 00 00         LEA EDI,[ECX + 0x4d0]
004DBA7F  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
004DBA86  33 DB                     XOR EBX,EBX
LAB_004dba88:
004DBA88  8B 07                     MOV EAX,dword ptr [EDI]
004DBA8A  3B C3                     CMP EAX,EBX
004DBA8C  74 48                     JZ 0x004dbad6
004DBA8E  39 5F 18                  CMP dword ptr [EDI + 0x18],EBX
004DBA91  74 43                     JZ 0x004dbad6
004DBA93  8D 4D F8                  LEA ECX,[EBP + -0x8]
004DBA96  51                        PUSH ECX
004DBA97  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBA9D  50                        PUSH EAX
004DBA9E  E8 2D A8 20 00            CALL 0x006e62d0
004DBAA3  85 C0                     TEST EAX,EAX
004DBAA5  75 2D                     JNZ 0x004dbad4
004DBAA7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004DBAAA  8B 8E 1F 06 00 00         MOV ECX,dword ptr [ESI + 0x61f]
004DBAB0  89 9E C0 04 00 00         MOV dword ptr [ESI + 0x4c0],EBX
004DBAB6  3B CB                     CMP ECX,EBX
004DBAB8  74 1A                     JZ 0x004dbad4
004DBABA  E8 2F 8F F2 FF            CALL 0x004049ee
004DBABF  8B 96 1F 06 00 00         MOV EDX,dword ptr [ESI + 0x61f]
004DBAC5  52                        PUSH EDX
004DBAC6  E8 E5 27 25 00            CALL 0x0072e2b0
004DBACB  83 C4 04                  ADD ESP,0x4
004DBACE  89 9E 1F 06 00 00         MOV dword ptr [ESI + 0x61f],EBX
LAB_004dbad4:
004DBAD4  89 1F                     MOV dword ptr [EDI],EBX
LAB_004dbad6:
004DBAD6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004DBAD9  83 C7 04                  ADD EDI,0x4
004DBADC  48                        DEC EAX
004DBADD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DBAE0  75 A6                     JNZ 0x004dba88
004DBAE2  5F                        POP EDI
004DBAE3  5E                        POP ESI
004DBAE4  33 C0                     XOR EAX,EAX
004DBAE6  5B                        POP EBX
004DBAE7  8B E5                     MOV ESP,EBP
004DBAE9  5D                        POP EBP
004DBAEA  C3                        RET
