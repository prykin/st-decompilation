FUN_005db2a0:
005DB2A0  A1 80 67 80 00            MOV EAX,[0x00806780]
005DB2A5  56                        PUSH ESI
005DB2A6  57                        PUSH EDI
005DB2A7  8B F1                     MOV ESI,ECX
005DB2A9  50                        PUSH EAX
005DB2AA  E8 55 90 E2 FF            CALL 0x00404304
005DB2AF  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
005DB2B2  8D 46 2C                  LEA EAX,[ESI + 0x2c]
005DB2B5  33 FF                     XOR EDI,EDI
005DB2B7  83 C4 04                  ADD ESP,0x4
005DB2BA  3B CF                     CMP ECX,EDI
005DB2BC  74 0C                     JZ 0x005db2ca
005DB2BE  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005DB2C4  50                        PUSH EAX
005DB2C5  E8 16 6E 11 00            CALL 0x006f20e0
LAB_005db2ca:
005DB2CA  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
005DB2CD  3B C7                     CMP EAX,EDI
005DB2CF  74 0C                     JZ 0x005db2dd
005DB2D1  50                        PUSH EAX
005DB2D2  E8 89 52 13 00            CALL 0x00710560
005DB2D7  83 C4 04                  ADD ESP,0x4
005DB2DA  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
LAB_005db2dd:
005DB2DD  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
005DB2E0  3B C7                     CMP EAX,EDI
005DB2E2  74 0C                     JZ 0x005db2f0
005DB2E4  50                        PUSH EAX
005DB2E5  E8 76 52 13 00            CALL 0x00710560
005DB2EA  83 C4 04                  ADD ESP,0x4
005DB2ED  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
LAB_005db2f0:
005DB2F0  53                        PUSH EBX
005DB2F1  8D BE 44 02 00 00         LEA EDI,[ESI + 0x244]
005DB2F7  BB 06 00 00 00            MOV EBX,0x6
LAB_005db2fc:
005DB2FC  57                        PUSH EDI
005DB2FD  E8 CE FE 12 00            CALL 0x0070b1d0
005DB302  83 C4 04                  ADD ESP,0x4
005DB305  83 C7 04                  ADD EDI,0x4
005DB308  4B                        DEC EBX
005DB309  75 F1                     JNZ 0x005db2fc
005DB30B  8D 8E 8D 03 00 00         LEA ECX,[ESI + 0x38d]
005DB311  E8 9A A7 13 00            CALL 0x00715ab0
005DB316  8D 8E 1E 04 00 00         LEA ECX,[ESI + 0x41e]
005DB31C  E8 8F A7 13 00            CALL 0x00715ab0
005DB321  8D 8E AF 04 00 00         LEA ECX,[ESI + 0x4af]
005DB327  E8 84 A7 13 00            CALL 0x00715ab0
005DB32C  8B 86 EC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ec]
005DB332  33 FF                     XOR EDI,EDI
005DB334  83 CB FF                  OR EBX,0xffffffff
005DB337  3B C7                     CMP EAX,EDI
005DB339  7C 13                     JL 0x005db34e
005DB33B  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DB341  50                        PUSH EAX
005DB342  51                        PUSH ECX
005DB343  E8 68 88 0D 00            CALL 0x006b3bb0
005DB348  89 9E EC 02 00 00         MOV dword ptr [ESI + 0x2ec],EBX
LAB_005db34e:
005DB34E  8B 8E F0 02 00 00         MOV ECX,dword ptr [ESI + 0x2f0]
005DB354  8D 86 F0 02 00 00         LEA EAX,[ESI + 0x2f0]
005DB35A  3B CF                     CMP ECX,EDI
005DB35C  74 06                     JZ 0x005db364
005DB35E  50                        PUSH EAX
005DB35F  E8 FC FC 0C 00            CALL 0x006ab060
LAB_005db364:
005DB364  8B 8E F4 02 00 00         MOV ECX,dword ptr [ESI + 0x2f4]
005DB36A  8D 86 F4 02 00 00         LEA EAX,[ESI + 0x2f4]
005DB370  3B CF                     CMP ECX,EDI
005DB372  74 06                     JZ 0x005db37a
005DB374  50                        PUSH EAX
005DB375  E8 E6 FC 0C 00            CALL 0x006ab060
LAB_005db37a:
005DB37A  8D 8E F8 02 00 00         LEA ECX,[ESI + 0x2f8]
005DB380  E8 2B A7 13 00            CALL 0x00715ab0
005DB385  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DB38B  3B C7                     CMP EAX,EDI
005DB38D  74 06                     JZ 0x005db395
005DB38F  50                        PUSH EAX
005DB390  E8 DB A1 0D 00            CALL 0x006b5570
LAB_005db395:
005DB395  8B 86 40 05 00 00         MOV EAX,dword ptr [ESI + 0x540]
005DB39B  89 BE 48 05 00 00         MOV dword ptr [ESI + 0x548],EDI
005DB3A1  3B C7                     CMP EAX,EDI
005DB3A3  7C 13                     JL 0x005db3b8
005DB3A5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DB3AB  50                        PUSH EAX
005DB3AC  52                        PUSH EDX
005DB3AD  E8 FE 87 0D 00            CALL 0x006b3bb0
005DB3B2  89 9E 40 05 00 00         MOV dword ptr [ESI + 0x540],EBX
LAB_005db3b8:
005DB3B8  8B 8E 44 05 00 00         MOV ECX,dword ptr [ESI + 0x544]
005DB3BE  8D 86 44 05 00 00         LEA EAX,[ESI + 0x544]
005DB3C4  3B CF                     CMP ECX,EDI
005DB3C6  74 06                     JZ 0x005db3ce
005DB3C8  50                        PUSH EAX
005DB3C9  E8 92 FC 0C 00            CALL 0x006ab060
LAB_005db3ce:
005DB3CE  8B 8E 7E 06 00 00         MOV ECX,dword ptr [ESI + 0x67e]
005DB3D4  8D 86 7E 06 00 00         LEA EAX,[ESI + 0x67e]
005DB3DA  3B CF                     CMP ECX,EDI
005DB3DC  74 06                     JZ 0x005db3e4
005DB3DE  50                        PUSH EAX
005DB3DF  E8 7C FC 0C 00            CALL 0x006ab060
LAB_005db3e4:
005DB3E4  8D 8E 5C 05 00 00         LEA ECX,[ESI + 0x55c]
005DB3EA  E8 C1 A6 13 00            CALL 0x00715ab0
005DB3EF  8D 8E ED 05 00 00         LEA ECX,[ESI + 0x5ed]
005DB3F5  E8 B6 A6 13 00            CALL 0x00715ab0
005DB3FA  8B 86 58 05 00 00         MOV EAX,dword ptr [ESI + 0x558]
005DB400  3B C7                     CMP EAX,EDI
005DB402  7C 12                     JL 0x005db416
005DB404  50                        PUSH EAX
005DB405  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DB40A  50                        PUSH EAX
005DB40B  E8 A0 87 0D 00            CALL 0x006b3bb0
005DB410  89 9E 58 05 00 00         MOV dword ptr [ESI + 0x558],EBX
LAB_005db416:
005DB416  8B 8E 82 06 00 00         MOV ECX,dword ptr [ESI + 0x682]
005DB41C  8D 86 82 06 00 00         LEA EAX,[ESI + 0x682]
005DB422  3B CF                     CMP ECX,EDI
005DB424  74 06                     JZ 0x005db42c
005DB426  50                        PUSH EAX
005DB427  E8 34 FC 0C 00            CALL 0x006ab060
LAB_005db42c:
005DB42C  8B 86 54 05 00 00         MOV EAX,dword ptr [ESI + 0x554]
005DB432  3B C7                     CMP EAX,EDI
005DB434  7C 13                     JL 0x005db449
005DB436  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DB43C  50                        PUSH EAX
005DB43D  51                        PUSH ECX
005DB43E  E8 6D 87 0D 00            CALL 0x006b3bb0
005DB443  89 9E 54 05 00 00         MOV dword ptr [ESI + 0x554],EBX
LAB_005db449:
005DB449  8B 86 86 06 00 00         MOV EAX,dword ptr [ESI + 0x686]
005DB44F  5B                        POP EBX
005DB450  3B C7                     CMP EAX,EDI
005DB452  74 06                     JZ 0x005db45a
005DB454  50                        PUSH EAX
005DB455  E8 16 A1 0D 00            CALL 0x006b5570
LAB_005db45a:
005DB45A  89 BE 86 06 00 00         MOV dword ptr [ESI + 0x686],EDI
005DB460  5F                        POP EDI
005DB461  5E                        POP ESI
005DB462  C3                        RET
