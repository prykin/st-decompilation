FUN_006b9910:
006B9910  55                        PUSH EBP
006B9911  8B EC                     MOV EBP,ESP
006B9913  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B9916  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B9919  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
006B991F  8B 08                     MOV ECX,dword ptr [EAX]
006B9921  85 C9                     TEST ECX,ECX
006B9923  75 06                     JNZ 0x006b992b
006B9925  89 10                     MOV dword ptr [EAX],EDX
006B9927  5D                        POP EBP
006B9928  C2 08 00                  RET 0x8
LAB_006b992b:
006B992B  8B 01                     MOV EAX,dword ptr [ECX]
006B992D  85 C0                     TEST EAX,EAX
006B992F  74 08                     JZ 0x006b9939
LAB_006b9931:
006B9931  8B C8                     MOV ECX,EAX
006B9933  8B 01                     MOV EAX,dword ptr [ECX]
006B9935  85 C0                     TEST EAX,EAX
006B9937  75 F8                     JNZ 0x006b9931
LAB_006b9939:
006B9939  89 11                     MOV dword ptr [ECX],EDX
006B993B  5D                        POP EBP
006B993C  C2 08 00                  RET 0x8
