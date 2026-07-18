FUN_004ad0e0:
004AD0E0  55                        PUSH EBP
004AD0E1  8B EC                     MOV EBP,ESP
004AD0E3  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AD0E6  56                        PUSH ESI
004AD0E7  84 C0                     TEST AL,AL
004AD0E9  8B D1                     MOV EDX,ECX
004AD0EB  7C 3B                     JL 0x004ad128
004AD0ED  3C 20                     CMP AL,0x20
004AD0EF  7D 37                     JGE 0x004ad128
004AD0F1  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
004AD0F4  0F BE C8                  MOVSX ECX,AL
004AD0F7  B8 01 00 00 00            MOV EAX,0x1
004AD0FC  D3 E0                     SHL EAX,CL
004AD0FE  23 C6                     AND EAX,ESI
004AD100  F7 D8                     NEG EAX
004AD102  1B C0                     SBB EAX,EAX
004AD104  F7 D8                     NEG EAX
004AD106  85 C0                     TEST EAX,EAX
004AD108  74 1E                     JZ 0x004ad128
004AD10A  8B 72 20                  MOV ESI,dword ptr [EDX + 0x20]
004AD10D  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
004AD110  51                        PUSH ECX
004AD111  66 81 64 86 0E F7 FF      AND word ptr [ESI + EAX*0x4 + 0xe],0xfff7
004AD118  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
004AD11B  8D 44 86 0E               LEA EAX,[ESI + EAX*0x4 + 0xe]
004AD11F  51                        PUSH ECX
004AD120  8B 4A 3C                  MOV ECX,dword ptr [EDX + 0x3c]
004AD123  E8 A8 CC 23 00            CALL 0x006e9dd0
LAB_004ad128:
004AD128  5E                        POP ESI
004AD129  5D                        POP EBP
004AD12A  C2 04 00                  RET 0x4
