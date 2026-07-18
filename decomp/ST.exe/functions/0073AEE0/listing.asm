FUN_0073aee0:
0073AEE0  55                        PUSH EBP
0073AEE1  8B EC                     MOV EBP,ESP
0073AEE3  83 EC 7C                  SUB ESP,0x7c
0073AEE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073AEE9  50                        PUSH EAX
0073AEEA  E8 31 04 00 00            CALL 0x0073b320
0073AEEF  83 C4 04                  ADD ESP,0x4
0073AEF2  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0073AEF5  6A 78                     PUSH 0x78
0073AEF7  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073AEFA  51                        PUSH ECX
0073AEFB  8B 15 78 72 85 00         MOV EDX,dword ptr [0x00857278]
0073AF01  F7 DA                     NEG EDX
0073AF03  1B D2                     SBB EDX,EDX
0073AF05  81 E2 05 F0 FF FF         AND EDX,0xfffff005
0073AF0B  81 C2 02 10 00 00         ADD EDX,0x1002
0073AF11  52                        PUSH EDX
0073AF12  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073AF15  50                        PUSH EAX
0073AF16  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073AF1C  85 C0                     TEST EAX,EAX
0073AF1E  75 11                     JNZ 0x0073af31
0073AF20  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
0073AF2A  B8 01 00 00 00            MOV EAX,0x1
0073AF2F  EB 55                     JMP 0x0073af86
LAB_0073af31:
0073AF31  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073AF34  51                        PUSH ECX
0073AF35  8B 15 88 72 85 00         MOV EDX,dword ptr [0x00857288]
0073AF3B  52                        PUSH EDX
0073AF3C  E8 DF 36 FF FF            CALL 0x0072e620
0073AF41  83 C4 08                  ADD ESP,0x8
0073AF44  85 C0                     TEST EAX,EAX
0073AF46  75 31                     JNZ 0x0073af79
0073AF48  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073AF4B  50                        PUSH EAX
0073AF4C  E8 0F 01 00 00            CALL 0x0073b060
0073AF51  83 C4 04                  ADD ESP,0x4
0073AF54  85 C0                     TEST EAX,EAX
0073AF56  74 21                     JZ 0x0073af79
0073AF58  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073AF5B  89 0D 90 72 85 00         MOV dword ptr [0x00857290],ECX
0073AF61  8B 15 90 72 85 00         MOV EDX,dword ptr [0x00857290]
0073AF67  89 15 74 72 85 00         MOV dword ptr [0x00857274],EDX
0073AF6D  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AF72  0C 04                     OR AL,0x4
0073AF74  A3 8C 72 85 00            MOV [0x0085728c],EAX
LAB_0073af79:
0073AF79  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AF7E  83 E0 04                  AND EAX,0x4
0073AF81  F7 D8                     NEG EAX
0073AF83  1B C0                     SBB EAX,EAX
0073AF85  40                        INC EAX
LAB_0073af86:
0073AF86  8B E5                     MOV ESP,EBP
0073AF88  5D                        POP EBP
0073AF89  C2 04 00                  RET 0x4
