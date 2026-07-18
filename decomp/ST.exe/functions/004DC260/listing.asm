FUN_004dc260:
004DC260  56                        PUSH ESI
004DC261  8B F1                     MOV ESI,ECX
004DC263  57                        PUSH EDI
004DC264  6A 0E                     PUSH 0xe
004DC266  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DC26C  E8 3E 80 F2 FF            CALL 0x004042af
004DC271  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DC277  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DC27D  75 43                     JNZ 0x004dc2c2
004DC27F  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DC285  83 E8 02                  SUB EAX,0x2
004DC288  74 1B                     JZ 0x004dc2a5
004DC28A  48                        DEC EAX
004DC28B  75 35                     JNZ 0x004dc2c2
004DC28D  33 FF                     XOR EDI,EDI
004DC28F  8B CE                     MOV ECX,ESI
004DC291  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004DC297  57                        PUSH EDI
004DC298  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004DC29E  E8 54 6A F2 FF            CALL 0x00402cf7
004DC2A3  EB 1F                     JMP 0x004dc2c4
LAB_004dc2a5:
004DC2A5  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004DC2AF  6A 00                     PUSH 0x0
004DC2B1  8B CE                     MOV ECX,ESI
004DC2B3  C7 86 61 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x261],0x1
004DC2BD  E8 35 6A F2 FF            CALL 0x00402cf7
LAB_004dc2c2:
004DC2C2  33 FF                     XOR EDI,EDI
LAB_004dc2c4:
004DC2C4  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DC2CA  3B C7                     CMP EAX,EDI
004DC2CC  0F 85 BB 00 00 00         JNZ 0x004dc38d
004DC2D2  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DC2D8  8B 8E D8 04 00 00         MOV ECX,dword ptr [ESI + 0x4d8]
004DC2DE  83 C1 0F                  ADD ECX,0xf
004DC2E1  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004DC2E7  3B C1                     CMP EAX,ECX
004DC2E9  72 2E                     JC 0x004dc319
004DC2EB  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004DC2F1  81 F9 C8 00 00 00         CMP ECX,0xc8
004DC2F7  7D 20                     JGE 0x004dc319
004DC2F9  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004DC2FF  8D 41 02                  LEA EAX,[ECX + 0x2]
004DC302  3D C8 00 00 00            CMP EAX,0xc8
004DC307  89 86 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EAX
004DC30D  7C 0A                     JL 0x004dc319
004DC30F  C7 86 D4 04 00 00 C8 00 00 00  MOV dword ptr [ESI + 0x4d4],0xc8
LAB_004dc319:
004DC319  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004DC31F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DC325  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DC328  6A 00                     PUSH 0x0
004DC32A  8B BA E4 00 00 00         MOV EDI,dword ptr [EDX + 0xe4]
004DC330  50                        PUSH EAX
004DC331  51                        PUSH ECX
004DC332  E8 D2 7F F2 FF            CALL 0x00404309
004DC337  8B 96 71 02 00 00         MOV EDX,dword ptr [ESI + 0x271]
004DC33D  83 C4 0C                  ADD ESP,0xc
004DC340  03 C2                     ADD EAX,EDX
004DC342  3B F8                     CMP EDI,EAX
004DC344  0F 82 A4 00 00 00         JC 0x004dc3ee
004DC34A  81 BE D4 04 00 00 C8 00 00 00  CMP dword ptr [ESI + 0x4d4],0xc8
004DC354  0F 8C 94 00 00 00         JL 0x004dc3ee
004DC35A  6A 00                     PUSH 0x0
004DC35C  6A 00                     PUSH 0x0
004DC35E  8B CE                     MOV ECX,ESI
004DC360  89 BE 71 02 00 00         MOV dword ptr [ESI + 0x271],EDI
004DC366  E8 31 60 F2 FF            CALL 0x0040239c
004DC36B  8B 86 8D 02 00 00         MOV EAX,dword ptr [ESI + 0x28d]
004DC371  85 C0                     TEST EAX,EAX
004DC373  74 79                     JZ 0x004dc3ee
004DC375  6A 00                     PUSH 0x0
004DC377  8B CE                     MOV ECX,ESI
004DC379  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
004DC383  E8 6F 69 F2 FF            CALL 0x00402cf7
004DC388  5F                        POP EDI
004DC389  33 C0                     XOR EAX,EAX
004DC38B  5E                        POP ESI
004DC38C  C3                        RET
LAB_004dc38d:
004DC38D  83 F8 01                  CMP EAX,0x1
004DC390  75 5C                     JNZ 0x004dc3ee
004DC392  39 BE D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EDI
004DC398  7F 23                     JG 0x004dc3bd
004DC39A  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004DC3A4  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004DC3AA  57                        PUSH EDI
004DC3AB  8B CE                     MOV ECX,ESI
004DC3AD  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004DC3B3  E8 3F 69 F2 FF            CALL 0x00402cf7
004DC3B8  5F                        POP EDI
004DC3B9  33 C0                     XOR EAX,EAX
004DC3BB  5E                        POP ESI
004DC3BC  C3                        RET
LAB_004dc3bd:
004DC3BD  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DC3C2  8B 96 95 02 00 00         MOV EDX,dword ptr [ESI + 0x295]
004DC3C8  81 C2 65 04 00 00         ADD EDX,0x465
004DC3CE  39 90 E4 00 00 00         CMP dword ptr [EAX + 0xe4],EDX
004DC3D4  72 18                     JC 0x004dc3ee
004DC3D6  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004DC3E0  57                        PUSH EDI
004DC3E1  8B CE                     MOV ECX,ESI
004DC3E3  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004DC3E9  E8 09 69 F2 FF            CALL 0x00402cf7
LAB_004dc3ee:
004DC3EE  5F                        POP EDI
004DC3EF  33 C0                     XOR EAX,EAX
004DC3F1  5E                        POP ESI
004DC3F2  C3                        RET
