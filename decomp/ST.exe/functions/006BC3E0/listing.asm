FUN_006bc3e0:
006BC3E0  55                        PUSH EBP
006BC3E1  8B EC                     MOV EBP,ESP
006BC3E3  56                        PUSH ESI
006BC3E4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BC3E7  85 F6                     TEST ESI,ESI
006BC3E9  75 15                     JNZ 0x006bc400
006BC3EB  68 04 04 00 00            PUSH 0x404
006BC3F0  E8 7B E8 FE FF            CALL 0x006aac70
006BC3F5  8B F0                     MOV ESI,EAX
006BC3F7  85 F6                     TEST ESI,ESI
006BC3F9  75 05                     JNZ 0x006bc400
006BC3FB  5E                        POP ESI
006BC3FC  5D                        POP EBP
006BC3FD  C2 0C 00                  RET 0xc
LAB_006bc400:
006BC400  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006BC403  8D 45 0C                  LEA EAX,[EBP + 0xc]
006BC406  8D 4E 04                  LEA ECX,[ESI + 0x4]
006BC409  50                        PUSH EAX
006BC40A  51                        PUSH ECX
006BC40B  52                        PUSH EDX
006BC40C  E8 4F FF FF FF            CALL 0x006bc360
006BC411  66 C7 06 00 03            MOV word ptr [ESI],0x300
006BC416  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
006BC41A  66 89 46 02               MOV word ptr [ESI + 0x2],AX
006BC41E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BC421  85 C0                     TEST EAX,EAX
006BC423  74 05                     JZ 0x006bc42a
006BC425  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BC428  89 08                     MOV dword ptr [EAX],ECX
LAB_006bc42a:
006BC42A  8B C6                     MOV EAX,ESI
006BC42C  5E                        POP ESI
006BC42D  5D                        POP EBP
006BC42E  C2 0C 00                  RET 0xc
