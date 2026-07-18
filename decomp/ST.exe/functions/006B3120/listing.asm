FUN_006b3120:
006B3120  55                        PUSH EBP
006B3121  8B EC                     MOV EBP,ESP
006B3123  83 EC 20                  SUB ESP,0x20
006B3126  53                        PUSH EBX
006B3127  56                        PUSH ESI
006B3128  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B312B  33 DB                     XOR EBX,EBX
006B312D  57                        PUSH EDI
006B312E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006B3131  8B 86 CC 00 00 00         MOV EAX,dword ptr [ESI + 0xcc]
006B3137  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006B313A  3B C3                     CMP EAX,EBX
006B313C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006B313F  0F 84 9E 02 00 00         JZ 0x006b33e3
006B3145  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B3148  C7 87 B4 01 00 00 01 00 00 00  MOV dword ptr [EDI + 0x1b4],0x1
006B3152  8B 06                     MOV EAX,dword ptr [ESI]
006B3154  A9 00 40 00 60            TEST EAX,0x60004000
006B3159  75 0F                     JNZ 0x006b316a
006B315B  83 C9 FF                  OR ECX,0xffffffff
006B315E  0C 24                     OR AL,0x24
006B3160  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
006B3163  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
006B3166  89 06                     MOV dword ptr [ESI],EAX
006B3168  EB 38                     JMP 0x006b31a2
LAB_006b316a:
006B316A  0C 20                     OR AL,0x20
006B316C  8B C8                     MOV ECX,EAX
006B316E  89 06                     MOV dword ptr [ESI],EAX
006B3170  81 E1 01 00 00 40         AND ECX,0x40000001
006B3176  81 F9 01 00 00 40         CMP ECX,0x40000001
006B317C  75 14                     JNZ 0x006b3192
006B317E  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006B3181  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006B3184  3B D1                     CMP EDX,ECX
006B3186  75 0A                     JNZ 0x006b3192
006B3188  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
006B318B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006B318E  3B CA                     CMP ECX,EDX
006B3190  74 04                     JZ 0x006b3196
LAB_006b3192:
006B3192  0C 04                     OR AL,0x4
006B3194  89 06                     MOV dword ptr [ESI],EAX
LAB_006b3196:
006B3196  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006B3199  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006B319C  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
006B319F  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
LAB_006b31a2:
006B31A2  F7 06 00 00 00 04         TEST dword ptr [ESI],0x4000000
006B31A8  0F 84 AA 00 00 00         JZ 0x006b3258
006B31AE  39 9E D0 00 00 00         CMP dword ptr [ESI + 0xd0],EBX
006B31B4  0F 84 9E 00 00 00         JZ 0x006b3258
006B31BA  8B 96 C0 00 00 00         MOV EDX,dword ptr [ESI + 0xc0]
006B31C0  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006B31C6  0F AF C2                  IMUL EAX,EDX
006B31C9  3B D3                     CMP EDX,EBX
006B31CB  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006B31CE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006B31D1  8B 86 CC 00 00 00         MOV EAX,dword ptr [ESI + 0xcc]
006B31D7  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006B31DA  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B31DD  7E 79                     JLE 0x006b3258
LAB_006b31df:
006B31DF  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
006B31E5  8B 0C 99                  MOV ECX,dword ptr [ECX + EBX*0x4]
006B31E8  85 C9                     TEST ECX,ECX
006B31EA  7C 5F                     JL 0x006b324b
006B31EC  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
006B31F0  03 56 1C                  ADD EDX,dword ptr [ESI + 0x1c]
006B31F3  0F BF 00                  MOVSX EAX,word ptr [EAX]
006B31F6  52                        PUSH EDX
006B31F7  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006B31FA  03 D0                     ADD EDX,EAX
006B31FC  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006B3202  52                        PUSH EDX
006B3203  50                        PUSH EAX
006B3204  51                        PUSH ECX
006B3205  57                        PUSH EDI
006B3206  E8 35 04 00 00            CALL 0x006b3640
006B320B  85 C0                     TEST EAX,EAX
006B320D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B3210  0F 85 CD 01 00 00         JNZ 0x006b33e3
006B3216  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
006B321C  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
006B321F  52                        PUSH EDX
006B3220  57                        PUSH EDI
006B3221  E8 CA 01 00 00            CALL 0x006b33f0
006B3226  85 C0                     TEST EAX,EAX
006B3228  75 1B                     JNZ 0x006b3245
006B322A  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B3230  8B 0C 98                  MOV ECX,dword ptr [EAX + EBX*0x4]
006B3233  51                        PUSH ECX
006B3234  57                        PUSH EDI
006B3235  E8 F6 01 00 00            CALL 0x006b3430
006B323A  85 C0                     TEST EAX,EAX
006B323C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B323F  0F 85 9E 01 00 00         JNZ 0x006b33e3
LAB_006b3245:
006B3245  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B3248  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006b324b:
006B324B  83 C0 0A                  ADD EAX,0xa
006B324E  43                        INC EBX
006B324F  3B DA                     CMP EBX,EDX
006B3251  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B3254  7C 89                     JL 0x006b31df
006B3256  33 DB                     XOR EBX,EBX
LAB_006b3258:
006B3258  39 5E 30                  CMP dword ptr [ESI + 0x30],EBX
006B325B  0F 84 82 01 00 00         JZ 0x006b33e3
006B3261  39 5E 34                  CMP dword ptr [ESI + 0x34],EBX
006B3264  0F 84 79 01 00 00         JZ 0x006b33e3
006B326A  8B 0E                     MOV ECX,dword ptr [ESI]
006B326C  83 C9 02                  OR ECX,0x2
006B326F  8B C1                     MOV EAX,ECX
006B3271  89 0E                     MOV dword ptr [ESI],ECX
006B3273  F6 C4 42                  TEST AH,0x42
006B3276  0F 85 67 01 00 00         JNZ 0x006b33e3
006B327C  56                        PUSH ESI
006B327D  E8 CE C6 01 00            CALL 0x006cf950
006B3282  8B 17                     MOV EDX,dword ptr [EDI]
006B3284  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006B3287  25 00 11 00 00            AND EAX,0x1100
006B328C  3D 00 01 00 00            CMP EAX,0x100
006B3291  0F 84 4C 01 00 00         JZ 0x006b33e3
006B3297  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006B329A  33 C0                     XOR EAX,EAX
006B329C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B329F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B32A2  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B32A5  8B 06                     MOV EAX,dword ptr [ESI]
006B32A7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B32AA  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006B32AD  A9 00 00 00 60            TEST EAX,0x60000000
006B32B2  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006B32B5  74 0B                     JZ 0x006b32c2
006B32B7  8B 86 CC 00 00 00         MOV EAX,dword ptr [ESI + 0xcc]
006B32BD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B32C0  EB 18                     JMP 0x006b32da
LAB_006b32c2:
006B32C2  8B 8E CC 00 00 00         MOV ECX,dword ptr [ESI + 0xcc]
006B32C8  A9 00 00 00 C0            TEST EAX,0xc0000000
006B32CD  8B 19                     MOV EBX,dword ptr [ECX]
006B32CF  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006B32D2  74 06                     JZ 0x006b32da
006B32D4  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006B32D7  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006b32da:
006B32DA  F7 42 08 00 00 00 04      TEST dword ptr [EDX + 0x8],0x4000000
006B32E1  74 0D                     JZ 0x006b32f0
006B32E3  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B32E9  52                        PUSH EDX
006B32EA  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b32f0:
006B32F0  8B 07                     MOV EAX,dword ptr [EDI]
006B32F2  33 DB                     XOR EBX,EBX
006B32F4  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
006B32F7  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006B32FA  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
006B32FD  8B 07                     MOV EAX,dword ptr [EDI]
006B32FF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006B3302  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
006B3305  8B 06                     MOV EAX,dword ptr [ESI]
006B3307  A9 00 10 00 A0            TEST EAX,0xa0001000
006B330C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006B330F  75 39                     JNZ 0x006b334a
LAB_006b3311:
006B3311  8B 07                     MOV EAX,dword ptr [EDI]
006B3313  8D 4D F4                  LEA ECX,[EBP + -0xc]
006B3316  6A 00                     PUSH 0x0
006B3318  51                        PUSH ECX
006B3319  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
006B331C  8D 55 F8                  LEA EDX,[EBP + -0x8]
006B331F  52                        PUSH EDX
006B3320  51                        PUSH ECX
006B3321  E8 1A 8B 00 00            CALL 0x006bbe40
006B3326  85 C0                     TEST EAX,EAX
006B3328  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B332B  74 24                     JZ 0x006b3351
006B332D  3D C2 01 76 88            CMP EAX,0x887601c2
006B3332  75 19                     JNZ 0x006b334d
006B3334  8B 17                     MOV EDX,dword ptr [EDI]
006B3336  52                        PUSH EDX
006B3337  E8 04 B9 01 00            CALL 0x006cec40
006B333C  57                        PUSH EDI
006B333D  E8 1E BB 01 00            CALL 0x006cee60
006B3342  43                        INC EBX
006B3343  83 FB 02                  CMP EBX,0x2
006B3346  7C C9                     JL 0x006b3311
006B3348  EB 71                     JMP 0x006b33bb
LAB_006b334a:
006B334A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006b334d:
006B334D  85 C0                     TEST EAX,EAX
006B334F  75 55                     JNZ 0x006b33a6
LAB_006b3351:
006B3351  56                        PUSH ESI
006B3352  57                        PUSH EDI
006B3353  E8 B8 BA 01 00            CALL 0x006cee10
006B3358  8B 0E                     MOV ECX,dword ptr [ESI]
006B335A  6A 00                     PUSH 0x0
006B335C  81 E1 00 00 00 FF         AND ECX,0xff000000
006B3362  8D 55 E0                  LEA EDX,[EBP + -0x20]
006B3365  51                        PUSH ECX
006B3366  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006B3369  50                        PUSH EAX
006B336A  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006B336D  6A 00                     PUSH 0x0
006B336F  52                        PUSH EDX
006B3370  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B3373  50                        PUSH EAX
006B3374  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B3377  51                        PUSH ECX
006B3378  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B337B  52                        PUSH EDX
006B337C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B337F  50                        PUSH EAX
006B3380  56                        PUSH ESI
006B3381  51                        PUSH ECX
006B3382  52                        PUSH EDX
006B3383  57                        PUSH EDI
006B3384  E8 D7 BB 01 00            CALL 0x006cef60
006B3389  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B338C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B338F  85 C0                     TEST EAX,EAX
006B3391  74 10                     JZ 0x006b33a3
006B3393  8B 07                     MOV EAX,dword ptr [EDI]
006B3395  6A 00                     PUSH 0x0
006B3397  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
006B339A  50                        PUSH EAX
006B339B  8B 08                     MOV ECX,dword ptr [EAX]
006B339D  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
LAB_006b33a3:
006B33A3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006b33a6:
006B33A6  3D A0 00 76 88            CMP EAX,0x887600a0
006B33AB  74 07                     JZ 0x006b33b4
006B33AD  3D AE 01 76 88            CMP EAX,0x887601ae
006B33B2  75 07                     JNZ 0x006b33bb
LAB_006b33b4:
006B33B4  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006b33bb:
006B33BB  8B 07                     MOV EAX,dword ptr [EDI]
006B33BD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B33C0  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
006B33C3  89 50 44                  MOV dword ptr [EAX + 0x44],EDX
006B33C6  8B 07                     MOV EAX,dword ptr [EDI]
006B33C8  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
006B33CB  8B 3F                     MOV EDI,dword ptr [EDI]
006B33CD  F7 47 08 00 00 00 04      TEST dword ptr [EDI + 0x8],0x4000000
006B33D4  74 0D                     JZ 0x006b33e3
006B33D6  81 C7 F0 04 00 00         ADD EDI,0x4f0
006B33DC  57                        PUSH EDI
006B33DD  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b33e3:
006B33E3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B33E6  5F                        POP EDI
006B33E7  5E                        POP ESI
006B33E8  5B                        POP EBX
006B33E9  8B E5                     MOV ESP,EBP
006B33EB  5D                        POP EBP
006B33EC  C2 08 00                  RET 0x8
