FUN_00740f90:
00740F90  55                        PUSH EBP
00740F91  8B EC                     MOV EBP,ESP
00740F93  83 EC 0C                  SUB ESP,0xc
00740F96  C6 45 F4 00               MOV byte ptr [EBP + -0xc],0x0
00740F9A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740F9D  83 E0 08                  AND EAX,0x8
00740FA0  85 C0                     TEST EAX,EAX
00740FA2  74 09                     JZ 0x00740fad
00740FA4  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00740FA7  80 C9 20                  OR CL,0x20
00740FAA  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
LAB_00740fad:
00740FAD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00740FB0  81 E2 00 40 00 00         AND EDX,0x4000
00740FB6  85 D2                     TEST EDX,EDX
00740FB8  74 08                     JZ 0x00740fc2
00740FBA  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
00740FBD  0C 80                     OR AL,0x80
00740FBF  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
LAB_00740fc2:
00740FC2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00740FC5  81 E1 80 00 00 00         AND ECX,0x80
00740FCB  85 C9                     TEST ECX,ECX
00740FCD  74 09                     JZ 0x00740fd8
00740FCF  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00740FD2  80 CA 10                  OR DL,0x10
00740FD5  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
LAB_00740fd8:
00740FD8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740FDB  50                        PUSH EAX
00740FDC  FF 15 54 BC 85 00         CALL dword ptr [0x0085bc54]
00740FE2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00740FE5  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00740FE9  75 14                     JNZ 0x00740fff
00740FEB  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
00740FF1  50                        PUSH EAX
00740FF2  E8 F9 FB FF FF            CALL 0x00740bf0
00740FF7  83 C4 04                  ADD ESP,0x4
00740FFA  83 C8 FF                  OR EAX,0xffffffff
00740FFD  EB 7D                     JMP 0x0074107c
LAB_00740fff:
00740FFF  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
00741003  75 0B                     JNZ 0x00741010
00741005  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00741008  80 C9 40                  OR CL,0x40
0074100B  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
0074100E  EB 0F                     JMP 0x0074101f
LAB_00741010:
00741010  83 7D FC 03               CMP dword ptr [EBP + -0x4],0x3
00741014  75 09                     JNZ 0x0074101f
00741016  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00741019  80 CA 08                  OR DL,0x8
0074101C  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
LAB_0074101f:
0074101F  E8 5C FC FF FF            CALL 0x00740c80
00741024  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00741027  83 7D F8 FF               CMP dword ptr [EBP + -0x8],-0x1
0074102B  75 19                     JNZ 0x00741046
0074102D  C7 05 48 71 85 00 18 00 00 00  MOV dword ptr [0x00857148],0x18
00741037  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00741041  83 C8 FF                  OR EAX,0xffffffff
00741044  EB 36                     JMP 0x0074107c
LAB_00741046:
00741046  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741049  50                        PUSH EAX
0074104A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0074104D  51                        PUSH ECX
0074104E  E8 5D FD FF FF            CALL 0x00740db0
00741053  83 C4 08                  ADD ESP,0x8
00741056  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00741059  80 CA 01                  OR DL,0x1
0074105C  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0074105F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00741062  C1 F8 05                  SAR EAX,0x5
00741065  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00741068  83 E1 1F                  AND ECX,0x1f
0074106B  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
00741072  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
00741075  88 44 CA 04               MOV byte ptr [EDX + ECX*0x8 + 0x4],AL
00741079  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0074107c:
0074107C  8B E5                     MOV ESP,EBP
0074107E  5D                        POP EBP
0074107F  C3                        RET
