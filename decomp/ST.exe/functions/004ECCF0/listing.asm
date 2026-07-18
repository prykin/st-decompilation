FUN_004eccf0:
004ECCF0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004ECCF5  56                        PUSH ESI
004ECCF6  8B F1                     MOV ESI,ECX
004ECCF8  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004ECCFE  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004ECD04  83 C1 19                  ADD ECX,0x19
004ECD07  3B C1                     CMP EAX,ECX
004ECD09  0F 82 84 00 00 00         JC 0x004ecd93
004ECD0F  89 86 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EAX
004ECD15  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004ECD1B  3D 88 13 00 00            CMP EAX,0x1388
004ECD20  7D 71                     JGE 0x004ecd93
004ECD22  6A 19                     PUSH 0x19
004ECD24  E8 A3 45 1C 00            CALL 0x006b12cc
004ECD29  83 C4 04                  ADD ESP,0x4
004ECD2C  50                        PUSH EAX
004ECD2D  68 94 11 00 00            PUSH 0x1194
004ECD32  E8 95 45 1C 00            CALL 0x006b12cc
004ECD37  83 C4 04                  ADD ESP,0x4
004ECD3A  50                        PUSH EAX
004ECD3B  E8 68 45 1C 00            CALL 0x006b12a8
004ECD40  83 C4 08                  ADD ESP,0x8
004ECD43  50                        PUSH EAX
004ECD44  68 88 13 00 00            PUSH 0x1388
004ECD49  E8 7E 45 1C 00            CALL 0x006b12cc
004ECD4E  83 C4 04                  ADD ESP,0x4
004ECD51  50                        PUSH EAX
004ECD52  E8 51 45 1C 00            CALL 0x006b12a8
004ECD57  50                        PUSH EAX
004ECD58  E8 23 45 1C 00            CALL 0x006b1280
004ECD5D  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004ECD63  83 C4 0C                  ADD ESP,0xc
004ECD66  03 C8                     ADD ECX,EAX
004ECD68  8B C1                     MOV EAX,ECX
004ECD6A  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004ECD70  3D 88 13 00 00            CMP EAX,0x1388
004ECD75  7C 1C                     JL 0x004ecd93
004ECD77  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004ECD7D  C7 86 D0 04 00 00 88 13 00 00  MOV dword ptr [ESI + 0x4d0],0x1388
004ECD87  83 F8 73                  CMP EAX,0x73
004ECD8A  75 07                     JNZ 0x004ecd93
004ECD8C  8B CE                     MOV ECX,ESI
004ECD8E  E8 B7 4D F1 FF            CALL 0x00401b4a
LAB_004ecd93:
004ECD93  33 C0                     XOR EAX,EAX
004ECD95  5E                        POP ESI
004ECD96  C3                        RET
