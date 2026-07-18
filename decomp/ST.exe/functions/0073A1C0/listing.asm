FUN_0073a1c0:
0073A1C0  55                        PUSH EBP
0073A1C1  8B EC                     MOV EBP,ESP
0073A1C3  56                        PUSH ESI
0073A1C4  33 C0                     XOR EAX,EAX
0073A1C6  50                        PUSH EAX
0073A1C7  50                        PUSH EAX
0073A1C8  50                        PUSH EAX
0073A1C9  50                        PUSH EAX
0073A1CA  50                        PUSH EAX
0073A1CB  50                        PUSH EAX
0073A1CC  50                        PUSH EAX
0073A1CD  50                        PUSH EAX
0073A1CE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073A1D1  8D 49 00                  LEA ECX,[ECX]
LAB_0073a1d4:
0073A1D4  8A 02                     MOV AL,byte ptr [EDX]
0073A1D6  0A C0                     OR AL,AL
0073A1D8  74 07                     JZ 0x0073a1e1
0073A1DA  42                        INC EDX
0073A1DB  0F AB 04 24               BTS [ESP],EAX
0073A1DF  EB F3                     JMP 0x0073a1d4
LAB_0073a1e1:
0073A1E1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0073A1E4  83 C9 FF                  OR ECX,0xffffffff
0073A1E7  90                        NOP
LAB_0073a1e8:
0073A1E8  41                        INC ECX
0073A1E9  8A 06                     MOV AL,byte ptr [ESI]
0073A1EB  0A C0                     OR AL,AL
0073A1ED  74 07                     JZ 0x0073a1f6
0073A1EF  46                        INC ESI
0073A1F0  0F A3 04 24               BT [ESP],EAX
0073A1F4  73 F2                     JNC 0x0073a1e8
LAB_0073a1f6:
0073A1F6  8B C1                     MOV EAX,ECX
0073A1F8  83 C4 20                  ADD ESP,0x20
0073A1FB  5E                        POP ESI
0073A1FC  C9                        LEAVE
0073A1FD  C3                        RET
