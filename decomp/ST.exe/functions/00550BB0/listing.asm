FUN_00550bb0:
00550BB0  55                        PUSH EBP
00550BB1  8B EC                     MOV EBP,ESP
00550BB3  83 EC 4C                  SUB ESP,0x4c
00550BB6  A0 7E 87 80 00            MOV AL,[0x0080877e]
00550BBB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00550BBE  84 C0                     TEST AL,AL
00550BC0  0F 85 87 00 00 00         JNZ 0x00550c4d
00550BC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00550BCB  8D 55 B8                  LEA EDX,[EBP + -0x48]
00550BCE  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00550BD1  6A 00                     PUSH 0x0
00550BD3  52                        PUSH EDX
00550BD4  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00550BD7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00550BDD  E8 0E CC 1D 00            CALL 0x0072d7f0
00550BE2  83 C4 08                  ADD ESP,0x8
00550BE5  85 C0                     TEST EAX,EAX
00550BE7  75 5B                     JNZ 0x00550c44
00550BE9  A1 64 17 81 00            MOV EAX,[0x00811764]
00550BEE  6A 01                     PUSH 0x1
00550BF0  50                        PUSH EAX
00550BF1  E8 0A 59 16 00            CALL 0x006b6500
00550BF6  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
00550BFC  6A FF                     PUSH -0x1
00550BFE  6A 00                     PUSH 0x0
00550C00  8D 4D FF                  LEA ECX,[EBP + -0x1]
00550C03  6A 01                     PUSH 0x1
00550C05  51                        PUSH ECX
00550C06  6A 42                     PUSH 0x42
00550C08  6A 01                     PUSH 0x1
00550C0A  52                        PUSH EDX
00550C0B  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00550C0F  E8 4C 47 1C 00            CALL 0x00715360
00550C14  83 C4 1C                  ADD ESP,0x1c
00550C17  85 C0                     TEST EAX,EAX
00550C19  75 0A                     JNZ 0x00550c25
00550C1B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00550C1E  C7 40 59 01 00 00 00      MOV dword ptr [EAX + 0x59],0x1
LAB_00550c25:
00550C25  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
00550C2B  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
00550C31  51                        PUSH ECX
00550C32  52                        PUSH EDX
00550C33  E8 C8 58 16 00            CALL 0x006b6500
00550C38  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00550C3B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00550C40  8B E5                     MOV ESP,EBP
00550C42  5D                        POP EBP
00550C43  C3                        RET
LAB_00550c44:
00550C44  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00550C47  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_00550c4d:
00550C4D  8B E5                     MOV ESP,EBP
00550C4F  5D                        POP EBP
00550C50  C3                        RET
