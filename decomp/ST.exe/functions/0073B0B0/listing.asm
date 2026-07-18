FUN_0073b0b0:
0073B0B0  55                        PUSH EBP
0073B0B1  8B EC                     MOV EBP,ESP
0073B0B3  83 EC 7C                  SUB ESP,0x7c
0073B0B6  56                        PUSH ESI
0073B0B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B0BA  25 FF FF 00 00            AND EAX,0xffff
0073B0BF  25 FF 03 00 00            AND EAX,0x3ff
0073B0C4  25 FF FF 00 00            AND EAX,0xffff
0073B0C9  80 CC 04                  OR AH,0x4
0073B0CC  25 FF FF 00 00            AND EAX,0xffff
0073B0D1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073B0D4  6A 78                     PUSH 0x78
0073B0D6  8D 4D 84                  LEA ECX,[EBP + -0x7c]
0073B0D9  51                        PUSH ECX
0073B0DA  6A 01                     PUSH 0x1
0073B0DC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073B0DF  52                        PUSH EDX
0073B0E0  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073B0E6  85 C0                     TEST EAX,EAX
0073B0E8  75 04                     JNZ 0x0073b0ee
0073B0EA  33 C0                     XOR EAX,EAX
0073B0EC  EB 44                     JMP 0x0073b132
LAB_0073b0ee:
0073B0EE  8D 45 84                  LEA EAX,[EBP + -0x7c]
0073B0F1  50                        PUSH EAX
0073B0F2  E8 29 02 00 00            CALL 0x0073b320
0073B0F7  83 C4 04                  ADD ESP,0x4
0073B0FA  39 45 08                  CMP dword ptr [EBP + 0x8],EAX
0073B0FD  74 2E                     JZ 0x0073b12d
0073B0FF  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073B103  74 28                     JZ 0x0073b12d
0073B105  8B 0D 84 72 85 00         MOV ECX,dword ptr [0x00857284]
0073B10B  51                        PUSH ECX
0073B10C  E8 8F 02 00 00            CALL 0x0073b3a0
0073B111  83 C4 04                  ADD ESP,0x4
0073B114  8B F0                     MOV ESI,EAX
0073B116  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073B11C  52                        PUSH EDX
0073B11D  E8 EE BA FF FF            CALL 0x00736c10
0073B122  83 C4 04                  ADD ESP,0x4
0073B125  3B F0                     CMP ESI,EAX
0073B127  75 04                     JNZ 0x0073b12d
0073B129  33 C0                     XOR EAX,EAX
0073B12B  EB 05                     JMP 0x0073b132
LAB_0073b12d:
0073B12D  B8 01 00 00 00            MOV EAX,0x1
LAB_0073b132:
0073B132  5E                        POP ESI
0073B133  8B E5                     MOV ESP,EBP
0073B135  5D                        POP EBP
0073B136  C3                        RET
