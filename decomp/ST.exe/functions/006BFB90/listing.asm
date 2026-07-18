FUN_006bfb90:
006BFB90  55                        PUSH EBP
006BFB91  8B EC                     MOV EBP,ESP
006BFB93  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BFB96  56                        PUSH ESI
006BFB97  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BFB9A  57                        PUSH EDI
006BFB9B  6A 00                     PUSH 0x0
006BFB9D  6A 00                     PUSH 0x0
006BFB9F  50                        PUSH EAX
006BFBA0  56                        PUSH ESI
006BFBA1  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
006BFBA7  83 F8 FF                  CMP EAX,-0x1
006BFBAA  75 15                     JNZ 0x006bfbc1
LAB_006bfbac:
006BFBAC  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006BFBB2  85 C0                     TEST EAX,EAX
006BFBB4  75 2F                     JNZ 0x006bfbe5
006BFBB6  5F                        POP EDI
006BFBB7  B8 03 FF FF FF            MOV EAX,0xffffff03
006BFBBC  5E                        POP ESI
006BFBBD  5D                        POP EBP
006BFBBE  C2 10 00                  RET 0x10
LAB_006bfbc1:
006BFBC1  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BFBC4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BFBC7  8D 4D 0C                  LEA ECX,[EBP + 0xc]
006BFBCA  6A 00                     PUSH 0x0
006BFBCC  51                        PUSH ECX
006BFBCD  57                        PUSH EDI
006BFBCE  52                        PUSH EDX
006BFBCF  56                        PUSH ESI
006BFBD0  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
006BFBD6  85 C0                     TEST EAX,EAX
006BFBD8  74 D2                     JZ 0x006bfbac
006BFBDA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BFBDD  2B C7                     SUB EAX,EDI
006BFBDF  F7 D8                     NEG EAX
006BFBE1  1B C0                     SBB EAX,EAX
006BFBE3  24 F2                     AND AL,0xf2
LAB_006bfbe5:
006BFBE5  5F                        POP EDI
006BFBE6  5E                        POP ESI
006BFBE7  5D                        POP EBP
006BFBE8  C2 10 00                  RET 0x10
