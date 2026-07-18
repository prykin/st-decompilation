FUN_0073a9c0:
0073A9C0  55                        PUSH EBP
0073A9C1  8B EC                     MOV EBP,ESP
0073A9C3  83 EC 7C                  SUB ESP,0x7c
0073A9C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A9C9  50                        PUSH EAX
0073A9CA  E8 51 09 00 00            CALL 0x0073b320
0073A9CF  83 C4 04                  ADD ESP,0x4
0073A9D2  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0073A9D5  6A 78                     PUSH 0x78
0073A9D7  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073A9DA  51                        PUSH ECX
0073A9DB  8B 15 78 72 85 00         MOV EDX,dword ptr [0x00857278]
0073A9E1  F7 DA                     NEG EDX
0073A9E3  1B D2                     SBB EDX,EDX
0073A9E5  81 E2 05 F0 FF FF         AND EDX,0xfffff005
0073A9EB  81 C2 02 10 00 00         ADD EDX,0x1002
0073A9F1  52                        PUSH EDX
0073A9F2  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073A9F5  50                        PUSH EAX
0073A9F6  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073A9FC  85 C0                     TEST EAX,EAX
0073A9FE  75 14                     JNZ 0x0073aa14
0073AA00  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
0073AA0A  B8 01 00 00 00            MOV EAX,0x1
0073AA0F  E9 CA 02 00 00            JMP 0x0073acde
LAB_0073aa14:
0073AA14  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073AA17  51                        PUSH ECX
0073AA18  8B 15 88 72 85 00         MOV EDX,dword ptr [0x00857288]
0073AA1E  52                        PUSH EDX
0073AA1F  E8 FC 3B FF FF            CALL 0x0072e620
0073AA24  83 C4 08                  ADD ESP,0x8
0073AA27  85 C0                     TEST EAX,EAX
0073AA29  0F 85 20 01 00 00         JNZ 0x0073ab4f
0073AA2F  6A 78                     PUSH 0x78
0073AA31  8D 45 88                  LEA EAX,[EBP + -0x78]
0073AA34  50                        PUSH EAX
0073AA35  8B 0D 80 72 85 00         MOV ECX,dword ptr [0x00857280]
0073AA3B  F7 D9                     NEG ECX
0073AA3D  1B C9                     SBB ECX,ECX
0073AA3F  81 E1 02 F0 FF FF         AND ECX,0xfffff002
0073AA45  81 C1 01 10 00 00         ADD ECX,0x1001
0073AA4B  51                        PUSH ECX
0073AA4C  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0073AA4F  52                        PUSH EDX
0073AA50  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073AA56  85 C0                     TEST EAX,EAX
0073AA58  75 14                     JNZ 0x0073aa6e
0073AA5A  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
0073AA64  B8 01 00 00 00            MOV EAX,0x1
0073AA69  E9 70 02 00 00            JMP 0x0073acde
LAB_0073aa6e:
0073AA6E  8D 45 88                  LEA EAX,[EBP + -0x78]
0073AA71  50                        PUSH EAX
0073AA72  8B 0D 84 72 85 00         MOV ECX,dword ptr [0x00857284]
0073AA78  51                        PUSH ECX
0073AA79  E8 A2 3B FF FF            CALL 0x0072e620
0073AA7E  83 C4 08                  ADD ESP,0x8
0073AA81  85 C0                     TEST EAX,EAX
0073AA83  75 2B                     JNZ 0x0073aab0
0073AA85  8B 15 8C 72 85 00         MOV EDX,dword ptr [0x0085728c]
0073AA8B  81 CA 04 03 00 00         OR EDX,0x304
0073AA91  89 15 8C 72 85 00         MOV dword ptr [0x0085728c],EDX
0073AA97  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073AA9A  A3 90 72 85 00            MOV [0x00857290],EAX
0073AA9F  8B 0D 90 72 85 00         MOV ECX,dword ptr [0x00857290]
0073AAA5  89 0D 74 72 85 00         MOV dword ptr [0x00857274],ECX
0073AAAB  E9 9F 00 00 00            JMP 0x0073ab4f
LAB_0073aab0:
0073AAB0  8B 15 8C 72 85 00         MOV EDX,dword ptr [0x0085728c]
0073AAB6  83 E2 02                  AND EDX,0x2
0073AAB9  85 D2                     TEST EDX,EDX
0073AABB  0F 85 8E 00 00 00         JNZ 0x0073ab4f
0073AAC1  83 3D 7C 72 85 00 00      CMP dword ptr [0x0085727c],0x0
0073AAC8  74 53                     JZ 0x0073ab1d
0073AACA  A1 7C 72 85 00            MOV EAX,[0x0085727c]
0073AACF  50                        PUSH EAX
0073AAD0  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073AAD3  51                        PUSH ECX
0073AAD4  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073AADA  52                        PUSH EDX
0073AADB  E8 C0 81 00 00            CALL 0x00742ca0
0073AAE0  83 C4 0C                  ADD ESP,0xc
0073AAE3  85 C0                     TEST EAX,EAX
0073AAE5  75 36                     JNZ 0x0073ab1d
0073AAE7  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AAEC  0C 02                     OR AL,0x2
0073AAEE  A3 8C 72 85 00            MOV [0x0085728c],EAX
0073AAF3  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073AAF6  89 0D 90 72 85 00         MOV dword ptr [0x00857290],ECX
0073AAFC  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073AB02  52                        PUSH EDX
0073AB03  E8 08 C1 FF FF            CALL 0x00736c10
0073AB08  83 C4 04                  ADD ESP,0x4
0073AB0B  3B 05 7C 72 85 00         CMP EAX,dword ptr [0x0085727c]
0073AB11  75 08                     JNZ 0x0073ab1b
0073AB13  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073AB16  A3 74 72 85 00            MOV [0x00857274],EAX
LAB_0073ab1b:
0073AB1B  EB 32                     JMP 0x0073ab4f
LAB_0073ab1d:
0073AB1D  8B 0D 8C 72 85 00         MOV ECX,dword ptr [0x0085728c]
0073AB23  83 E1 01                  AND ECX,0x1
0073AB26  85 C9                     TEST ECX,ECX
0073AB28  75 25                     JNZ 0x0073ab4f
0073AB2A  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0073AB2D  52                        PUSH EDX
0073AB2E  E8 2D 05 00 00            CALL 0x0073b060
0073AB33  83 C4 04                  ADD ESP,0x4
0073AB36  85 C0                     TEST EAX,EAX
0073AB38  74 15                     JZ 0x0073ab4f
0073AB3A  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AB3F  0C 01                     OR AL,0x1
0073AB41  A3 8C 72 85 00            MOV [0x0085728c],EAX
0073AB46  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073AB49  89 0D 90 72 85 00         MOV dword ptr [0x00857290],ECX
LAB_0073ab4f:
0073AB4F  8B 15 8C 72 85 00         MOV EDX,dword ptr [0x0085728c]
0073AB55  81 E2 00 03 00 00         AND EDX,0x300
0073AB5B  81 FA 00 03 00 00         CMP EDX,0x300
0073AB61  0F 84 6A 01 00 00         JZ 0x0073acd1
0073AB67  6A 78                     PUSH 0x78
0073AB69  8D 45 88                  LEA EAX,[EBP + -0x78]
0073AB6C  50                        PUSH EAX
0073AB6D  8B 0D 80 72 85 00         MOV ECX,dword ptr [0x00857280]
0073AB73  F7 D9                     NEG ECX
0073AB75  1B C9                     SBB ECX,ECX
0073AB77  81 E1 02 F0 FF FF         AND ECX,0xfffff002
0073AB7D  81 C1 01 10 00 00         ADD ECX,0x1001
0073AB83  51                        PUSH ECX
0073AB84  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0073AB87  52                        PUSH EDX
0073AB88  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073AB8E  85 C0                     TEST EAX,EAX
0073AB90  75 14                     JNZ 0x0073aba6
0073AB92  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
0073AB9C  B8 01 00 00 00            MOV EAX,0x1
0073ABA1  E9 38 01 00 00            JMP 0x0073acde
LAB_0073aba6:
0073ABA6  8D 45 88                  LEA EAX,[EBP + -0x78]
0073ABA9  50                        PUSH EAX
0073ABAA  8B 0D 84 72 85 00         MOV ECX,dword ptr [0x00857284]
0073ABB0  51                        PUSH ECX
0073ABB1  E8 6A 3A FF FF            CALL 0x0072e620
0073ABB6  83 C4 08                  ADD ESP,0x8
0073ABB9  85 C0                     TEST EAX,EAX
0073ABBB  0F 85 AF 00 00 00         JNZ 0x0073ac70
0073ABC1  8B 15 8C 72 85 00         MOV EDX,dword ptr [0x0085728c]
0073ABC7  80 CE 02                  OR DH,0x2
0073ABCA  89 15 8C 72 85 00         MOV dword ptr [0x0085728c],EDX
0073ABD0  83 3D 80 72 85 00 00      CMP dword ptr [0x00857280],0x0
0073ABD7  74 21                     JZ 0x0073abfa
0073ABD9  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073ABDE  80 CC 01                  OR AH,0x1
0073ABE1  A3 8C 72 85 00            MOV [0x0085728c],EAX
0073ABE6  83 3D 74 72 85 00 00      CMP dword ptr [0x00857274],0x0
0073ABED  75 09                     JNZ 0x0073abf8
0073ABEF  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073ABF2  89 0D 74 72 85 00         MOV dword ptr [0x00857274],ECX
LAB_0073abf8:
0073ABF8  EB 74                     JMP 0x0073ac6e
LAB_0073abfa:
0073ABFA  83 3D 7C 72 85 00 00      CMP dword ptr [0x0085727c],0x0
0073AC01  74 4C                     JZ 0x0073ac4f
0073AC03  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073AC09  52                        PUSH EDX
0073AC0A  E8 01 C0 FF FF            CALL 0x00736c10
0073AC0F  83 C4 04                  ADD ESP,0x4
0073AC12  3B 05 7C 72 85 00         CMP EAX,dword ptr [0x0085727c]
0073AC18  75 35                     JNZ 0x0073ac4f
0073AC1A  6A 01                     PUSH 0x1
0073AC1C  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073AC1F  50                        PUSH EAX
0073AC20  E8 8B 04 00 00            CALL 0x0073b0b0
0073AC25  83 C4 08                  ADD ESP,0x8
0073AC28  85 C0                     TEST EAX,EAX
0073AC2A  74 21                     JZ 0x0073ac4d
0073AC2C  8B 0D 8C 72 85 00         MOV ECX,dword ptr [0x0085728c]
0073AC32  80 CD 01                  OR CH,0x1
0073AC35  89 0D 8C 72 85 00         MOV dword ptr [0x0085728c],ECX
0073AC3B  83 3D 74 72 85 00 00      CMP dword ptr [0x00857274],0x0
0073AC42  75 09                     JNZ 0x0073ac4d
0073AC44  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0073AC47  89 15 74 72 85 00         MOV dword ptr [0x00857274],EDX
LAB_0073ac4d:
0073AC4D  EB 1F                     JMP 0x0073ac6e
LAB_0073ac4f:
0073AC4F  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AC54  80 CC 01                  OR AH,0x1
0073AC57  A3 8C 72 85 00            MOV [0x0085728c],EAX
0073AC5C  83 3D 74 72 85 00 00      CMP dword ptr [0x00857274],0x0
0073AC63  75 09                     JNZ 0x0073ac6e
0073AC65  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073AC68  89 0D 74 72 85 00         MOV dword ptr [0x00857274],ECX
LAB_0073ac6e:
0073AC6E  EB 61                     JMP 0x0073acd1
LAB_0073ac70:
0073AC70  83 3D 80 72 85 00 00      CMP dword ptr [0x00857280],0x0
0073AC77  75 58                     JNZ 0x0073acd1
0073AC79  83 3D 7C 72 85 00 00      CMP dword ptr [0x0085727c],0x0
0073AC80  74 4F                     JZ 0x0073acd1
0073AC82  8B 15 7C 72 85 00         MOV EDX,dword ptr [0x0085727c]
0073AC88  52                        PUSH EDX
0073AC89  8D 45 88                  LEA EAX,[EBP + -0x78]
0073AC8C  50                        PUSH EAX
0073AC8D  8B 0D 84 72 85 00         MOV ECX,dword ptr [0x00857284]
0073AC93  51                        PUSH ECX
0073AC94  E8 07 80 00 00            CALL 0x00742ca0
0073AC99  83 C4 0C                  ADD ESP,0xc
0073AC9C  85 C0                     TEST EAX,EAX
0073AC9E  75 31                     JNZ 0x0073acd1
0073ACA0  6A 00                     PUSH 0x0
0073ACA2  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0073ACA5  52                        PUSH EDX
0073ACA6  E8 05 04 00 00            CALL 0x0073b0b0
0073ACAB  83 C4 08                  ADD ESP,0x8
0073ACAE  85 C0                     TEST EAX,EAX
0073ACB0  74 1F                     JZ 0x0073acd1
0073ACB2  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073ACB7  80 CC 01                  OR AH,0x1
0073ACBA  A3 8C 72 85 00            MOV [0x0085728c],EAX
0073ACBF  83 3D 74 72 85 00 00      CMP dword ptr [0x00857274],0x0
0073ACC6  75 09                     JNZ 0x0073acd1
0073ACC8  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073ACCB  89 0D 74 72 85 00         MOV dword ptr [0x00857274],ECX
LAB_0073acd1:
0073ACD1  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073ACD6  83 E0 04                  AND EAX,0x4
0073ACD9  F7 D8                     NEG EAX
0073ACDB  1B C0                     SBB EAX,EAX
0073ACDD  40                        INC EAX
LAB_0073acde:
0073ACDE  8B E5                     MOV ESP,EBP
0073ACE0  5D                        POP EBP
0073ACE1  C2 04 00                  RET 0x4
