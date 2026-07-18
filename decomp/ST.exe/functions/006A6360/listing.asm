FUN_006a6360:
006A6360  55                        PUSH EBP
006A6361  8B EC                     MOV EBP,ESP
006A6363  51                        PUSH ECX
006A6364  53                        PUSH EBX
006A6365  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A6368  56                        PUSH ESI
006A6369  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A636C  57                        PUSH EDI
006A636D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A6370  C7 45 FC FE 0F 00 00      MOV dword ptr [EBP + -0x4],0xffe
switchD_006a63e5::caseD_1:
006A6377  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A637A  3B F0                     CMP ESI,EAX
006A637C  75 0E                     JNZ 0x006a638c
006A637E  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
006A6381  75 09                     JNZ 0x006a638c
006A6383  3B 5D 1C                  CMP EBX,dword ptr [EBP + 0x1c]
006A6386  0F 84 A2 00 00 00         JZ 0x006a642e
LAB_006a638c:
006A638C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A638F  8D 4D 10                  LEA ECX,[EBP + 0x10]
006A6392  51                        PUSH ECX
006A6393  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A6396  52                        PUSH EDX
006A6397  51                        PUSH ECX
006A6398  50                        PUSH EAX
006A6399  53                        PUSH EBX
006A639A  57                        PUSH EDI
006A639B  56                        PUSH ESI
006A639C  E8 7F FB FF FF            CALL 0x006a5f20
006A63A1  83 F8 1A                  CMP EAX,0x1a
006A63A4  0F 8D 87 00 00 00         JGE 0x006a6431
006A63AA  0F BF 14 C5 76 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed576]
006A63B2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A63B5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A63B8  F6 C6 40                  TEST DH,0x40
006A63BB  74 04                     JZ 0x006a63c1
006A63BD  2B D9                     SUB EBX,ECX
006A63BF  EB 07                     JMP 0x006a63c8
LAB_006a63c1:
006A63C1  F6 C6 20                  TEST DH,0x20
006A63C4  74 02                     JZ 0x006a63c8
006A63C6  03 D9                     ADD EBX,ECX
LAB_006a63c8:
006A63C8  80 E6 9F                  AND DH,0x9f
006A63CB  81 FA B4 00 00 00         CMP EDX,0xb4
006A63D1  7F 33                     JG 0x006a6406
006A63D3  74 2A                     JZ 0x006a63ff
006A63D5  81 FA 87 00 00 00         CMP EDX,0x87
006A63DB  77 9A                     JA 0x006a6377
006A63DD  33 C0                     XOR EAX,EAX
006A63DF  8A 82 50 64 6A 00         MOV AL,byte ptr [EDX + 0x6a6450]
switchD_006a63e5::switchD:
006A63E5  FF 24 85 3C 64 6A 00      JMP dword ptr [EAX*0x4 + 0x6a643c]
switchD_006a63e5::caseD_0:
006A63EC  03 F1                     ADD ESI,ECX
006A63EE  EB 87                     JMP 0x006a6377
switchD_006a63e5::caseD_2d:
006A63F0  03 F1                     ADD ESI,ECX
switchD_006a63e5::caseD_5a:
006A63F2  2B F9                     SUB EDI,ECX
006A63F4  EB 81                     JMP 0x006a6377
switchD_006a63e5::caseD_87:
006A63F6  2B F1                     SUB ESI,ECX
006A63F8  2B F9                     SUB EDI,ECX
006A63FA  E9 78 FF FF FF            JMP 0x006a6377
LAB_006a63ff:
006A63FF  2B F1                     SUB ESI,ECX
006A6401  E9 71 FF FF FF            JMP 0x006a6377
LAB_006a6406:
006A6406  81 EA E1 00 00 00         SUB EDX,0xe1
006A640C  74 17                     JZ 0x006a6425
006A640E  83 EA 2D                  SUB EDX,0x2d
006A6411  74 0B                     JZ 0x006a641e
006A6413  83 EA 2D                  SUB EDX,0x2d
006A6416  0F 85 5B FF FF FF         JNZ 0x006a6377
006A641C  03 F1                     ADD ESI,ECX
LAB_006a641e:
006A641E  03 F9                     ADD EDI,ECX
006A6420  E9 52 FF FF FF            JMP 0x006a6377
LAB_006a6425:
006A6425  2B F1                     SUB ESI,ECX
006A6427  03 F9                     ADD EDI,ECX
006A6429  E9 49 FF FF FF            JMP 0x006a6377
LAB_006a642e:
006A642E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006a6431:
006A6431  5F                        POP EDI
006A6432  5E                        POP ESI
006A6433  5B                        POP EBX
006A6434  8B E5                     MOV ESP,EBP
006A6436  5D                        POP EBP
006A6437  C2 18 00                  RET 0x18
