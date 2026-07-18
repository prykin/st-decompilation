FUN_00532ce0:
00532CE0  56                        PUSH ESI
00532CE1  8B F1                     MOV ESI,ECX
00532CE3  80 BE A4 01 00 00 0E      CMP byte ptr [ESI + 0x1a4],0xe
00532CEA  75 36                     JNZ 0x00532d22
00532CEC  33 C0                     XOR EAX,EAX
00532CEE  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00532CF5  A0 4D 87 80 00            MOV AL,[0x0080874d]
00532CFA  6A 00                     PUSH 0x0
00532CFC  50                        PUSH EAX
00532CFD  E8 2A 25 ED FF            CALL 0x0040522c
00532D02  8B 96 C1 01 00 00         MOV EDX,dword ptr [ESI + 0x1c1]
00532D08  83 C4 08                  ADD ESP,0x8
00532D0B  F7 D8                     NEG EAX
00532D0D  8D 4E 18                  LEA ECX,[ESI + 0x18]
00532D10  1B C0                     SBB EAX,EAX
00532D12  51                        PUSH ECX
00532D13  F7 D8                     NEG EAX
00532D15  52                        PUSH EDX
00532D16  6A 02                     PUSH 0x2
00532D18  8B CE                     MOV ECX,ESI
00532D1A  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
00532D1D  E8 5E 33 1B 00            CALL 0x006e6080
LAB_00532d22:
00532D22  5E                        POP ESI
00532D23  C3                        RET
