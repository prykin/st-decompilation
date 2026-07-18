FUN_00631450:
00631450  53                        PUSH EBX
00631451  57                        PUSH EDI
00631452  8B F9                     MOV EDI,ECX
00631454  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
00631457  85 C0                     TEST EAX,EAX
00631459  74 71                     JZ 0x006314cc
0063145B  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0063145E  4B                        DEC EBX
0063145F  78 6B                     JS 0x006314cc
00631461  56                        PUSH ESI
LAB_00631462:
00631462  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
00631465  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00631468  73 0D                     JNC 0x00631477
0063146A  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063146D  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00631470  0F AF F3                  IMUL ESI,EBX
00631473  03 F1                     ADD ESI,ECX
00631475  EB 02                     JMP 0x00631479
LAB_00631477:
00631477  33 F6                     XOR ESI,ESI
LAB_00631479:
00631479  0F BF 4E 06               MOVSX ECX,word ptr [ESI + 0x6]
0063147D  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00631480  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00631483  50                        PUSH EAX
00631484  51                        PUSH ECX
00631485  0F BF 46 04               MOVSX EAX,word ptr [ESI + 0x4]
00631489  0F BF 4E 02               MOVSX ECX,word ptr [ESI + 0x2]
0063148D  52                        PUSH EDX
0063148E  50                        PUSH EAX
0063148F  0F BF 16                  MOVSX EDX,word ptr [ESI]
00631492  51                        PUSH ECX
00631493  52                        PUSH EDX
00631494  8B CF                     MOV ECX,EDI
00631496  E8 BC 08 DD FF            CALL 0x00401d57
0063149B  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0063149E  8B 4F 4C                  MOV ECX,dword ptr [EDI + 0x4c]
006314A1  8B 57 40                  MOV EDX,dword ptr [EDI + 0x40]
006314A4  50                        PUSH EAX
006314A5  6A 01                     PUSH 0x1
006314A7  6A 00                     PUSH 0x0
006314A9  51                        PUSH ECX
006314AA  52                        PUSH EDX
006314AB  8B CF                     MOV ECX,EDI
006314AD  E8 ED 47 DD FF            CALL 0x00405c9f
006314B2  85 C0                     TEST EAX,EAX
006314B4  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006314B7  75 0A                     JNZ 0x006314c3
006314B9  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006314BC  53                        PUSH EBX
006314BD  50                        PUSH EAX
006314BE  E8 AD F7 07 00            CALL 0x006b0c70
LAB_006314c3:
006314C3  4B                        DEC EBX
006314C4  79 9C                     JNS 0x00631462
006314C6  5E                        POP ESI
006314C7  5F                        POP EDI
006314C8  33 C0                     XOR EAX,EAX
006314CA  5B                        POP EBX
006314CB  C3                        RET
LAB_006314cc:
006314CC  5F                        POP EDI
006314CD  33 C0                     XOR EAX,EAX
006314CF  5B                        POP EBX
006314D0  C3                        RET
