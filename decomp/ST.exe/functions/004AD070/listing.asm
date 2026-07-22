STT3DSprC::sub_004AD070:
004AD070  55                        PUSH EBP
004AD071  8B EC                     MOV EBP,ESP
004AD073  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AD076  56                        PUSH ESI
004AD077  84 C0                     TEST AL,AL
004AD079  8B D1                     MOV EDX,ECX
004AD07B  7C 39                     JL 0x004ad0b6
004AD07D  3C 20                     CMP AL,0x20
004AD07F  7D 35                     JGE 0x004ad0b6
004AD081  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
004AD084  0F BE C8                  MOVSX ECX,AL
004AD087  B8 01 00 00 00            MOV EAX,0x1
004AD08C  D3 E0                     SHL EAX,CL
004AD08E  23 C6                     AND EAX,ESI
004AD090  F7 D8                     NEG EAX
004AD092  1B C0                     SBB EAX,EAX
004AD094  F7 D8                     NEG EAX
004AD096  85 C0                     TEST EAX,EAX
004AD098  74 1C                     JZ 0x004ad0b6
004AD09A  8B 72 20                  MOV ESI,dword ptr [EDX + 0x20]
004AD09D  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
004AD0A0  51                        PUSH ECX
004AD0A1  80 4C 86 0E 08            OR byte ptr [ESI + EAX*0x4 + 0xe],0x8
004AD0A6  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
004AD0A9  8D 44 86 0E               LEA EAX,[ESI + EAX*0x4 + 0xe]
004AD0AD  51                        PUSH ECX
004AD0AE  8B 4A 3C                  MOV ECX,dword ptr [EDX + 0x3c]
004AD0B1  E8 AA CD 23 00            CALL 0x006e9e60
LAB_004ad0b6:
004AD0B6  5E                        POP ESI
004AD0B7  5D                        POP EBP
004AD0B8  C2 04 00                  RET 0x4
