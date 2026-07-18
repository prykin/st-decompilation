MainMenuTy::PaintMainMenu:
005B3160  55                        PUSH EBP
005B3161  8B EC                     MOV EBP,ESP
005B3163  83 EC 48                  SUB ESP,0x48
005B3166  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B316B  53                        PUSH EBX
005B316C  56                        PUSH ESI
005B316D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B3170  57                        PUSH EDI
005B3171  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B3174  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B3177  6A 00                     PUSH 0x0
005B3179  52                        PUSH EDX
005B317A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B317D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B3183  E8 68 A6 17 00            CALL 0x0072d7f0
005B3188  8B F0                     MOV ESI,EAX
005B318A  83 C4 08                  ADD ESP,0x8
005B318D  85 F6                     TEST ESI,ESI
005B318F  0F 85 C8 01 00 00         JNZ 0x005b335d
005B3195  A1 34 67 80 00            MOV EAX,[0x00806734]
005B319A  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005B31A0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B31A6  50                        PUSH EAX
005B31A7  51                        PUSH ECX
005B31A8  56                        PUSH ESI
005B31A9  56                        PUSH ESI
005B31AA  52                        PUSH EDX
005B31AB  E8 D0 2D 10 00            CALL 0x006b5f80
005B31B0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B31B5  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005B31B8  51                        PUSH ECX
005B31B9  6A 01                     PUSH 0x1
005B31BB  56                        PUSH ESI
005B31BC  56                        PUSH ESI
005B31BD  E8 76 05 E5 FF            CALL 0x00403738
005B31C2  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B31C5  33 C0                     XOR EAX,EAX
005B31C7  83 C4 10                  ADD ESP,0x10
005B31CA  8A 87 E3 1E 00 00         MOV AL,byte ptr [EDI + 0x1ee3]
005B31D0  2B C6                     SUB EAX,ESI
005B31D2  74 44                     JZ 0x005b3218
005B31D4  48                        DEC EAX
005B31D5  0F 85 E6 00 00 00         JNZ 0x005b32c1
005B31DB  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B31E1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B31E7  56                        PUSH ESI
005B31E8  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
005B31EB  50                        PUSH EAX
005B31EC  6A FF                     PUSH -0x1
005B31EE  6A FE                     PUSH -0x2
005B31F0  51                        PUSH ECX
005B31F1  68 B0 26 00 00            PUSH 0x26b0
005B31F6  E8 45 CF 0F 00            CALL 0x006b0140
005B31FB  50                        PUSH EAX
005B31FC  6A 18                     PUSH 0x18
005B31FE  68 4C 01 00 00            PUSH 0x14c
005B3203  6A 14                     PUSH 0x14
005B3205  68 E9 00 00 00            PUSH 0xe9
005B320A  56                        PUSH ESI
005B320B  E8 1D 1A E5 FF            CALL 0x00404c2d
005B3210  83 C4 28                  ADD ESP,0x28
005B3213  E9 A9 00 00 00            JMP 0x005b32c1
LAB_005b3218:
005B3218  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B321E  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B3224  6A 00                     PUSH 0x0
005B3226  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
005B3229  50                        PUSH EAX
005B322A  6A FF                     PUSH -0x1
005B322C  6A FE                     PUSH -0x2
005B322E  51                        PUSH ECX
005B322F  68 AC 26 00 00            PUSH 0x26ac
005B3234  E8 07 CF 0F 00            CALL 0x006b0140
005B3239  50                        PUSH EAX
005B323A  6A 18                     PUSH 0x18
005B323C  68 4C 01 00 00            PUSH 0x14c
005B3241  6A 14                     PUSH 0x14
005B3243  68 E9 00 00 00            PUSH 0xe9
005B3248  6A 00                     PUSH 0x0
005B324A  E8 DE 19 E5 FF            CALL 0x00404c2d
005B324F  A1 D5 7D 80 00            MOV EAX,[0x00807dd5]
005B3254  83 C4 28                  ADD ESP,0x28
005B3257  8B D0                     MOV EDX,EAX
005B3259  33 C9                     XOR ECX,ECX
005B325B  8A 0D D7 7D 80 00         MOV CL,byte ptr [0x00807dd7]
005B3261  81 E2 FF FF 00 00         AND EDX,0xffff
005B3267  52                        PUSH EDX
005B3268  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B326E  C1 E8 18                  SHR EAX,0x18
005B3271  51                        PUSH ECX
005B3272  50                        PUSH EAX
005B3273  52                        PUSH EDX
005B3274  68 29 23 00 00            PUSH 0x2329
005B3279  E8 C2 CE 0F 00            CALL 0x006b0140
005B327E  50                        PUSH EAX
005B327F  8B 87 5B 1A 00 00         MOV EAX,dword ptr [EDI + 0x1a5b]
005B3285  83 C0 3C                  ADD EAX,0x3c
005B3288  50                        PUSH EAX
005B3289  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005B328F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B3295  8B 87 5B 1A 00 00         MOV EAX,dword ptr [EDI + 0x1a5b]
005B329B  6A 00                     PUSH 0x0
005B329D  83 C0 3C                  ADD EAX,0x3c
005B32A0  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
005B32A3  52                        PUSH EDX
005B32A4  6A FF                     PUSH -0x1
005B32A6  6A FE                     PUSH -0x2
005B32A8  50                        PUSH EAX
005B32A9  6A 18                     PUSH 0x18
005B32AB  68 20 03 00 00            PUSH 0x320
005B32B0  68 40 02 00 00            PUSH 0x240
005B32B5  6A 00                     PUSH 0x0
005B32B7  6A 00                     PUSH 0x0
005B32B9  E8 6F 19 E5 FF            CALL 0x00404c2d
005B32BE  83 C4 3C                  ADD ESP,0x3c
LAB_005b32c1:
005B32C1  8D B7 A7 1A 00 00         LEA ESI,[EDI + 0x1aa7]
005B32C7  BB 0A 00 00 00            MOV EBX,0xa
LAB_005b32cc:
005B32CC  8B 06                     MOV EAX,dword ptr [ESI]
005B32CE  85 C0                     TEST EAX,EAX
005B32D0  74 06                     JZ 0x005b32d8
005B32D2  50                        PUSH EAX
005B32D3  E8 C8 17 11 00            CALL 0x006c4aa0
LAB_005b32d8:
005B32D8  83 C6 04                  ADD ESI,0x4
005B32DB  4B                        DEC EBX
005B32DC  75 EE                     JNZ 0x005b32cc
005B32DE  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B32E4  33 DB                     XOR EBX,EBX
005B32E6  84 C0                     TEST AL,AL
005B32E8  76 63                     JBE 0x005b334d
005B32EA  8D B7 FF 00 00 00         LEA ESI,[EDI + 0xff]
LAB_005b32f0:
005B32F0  8B 46 E8                  MOV EAX,dword ptr [ESI + -0x18]
005B32F3  83 F8 FF                  CMP EAX,-0x1
005B32F6  74 15                     JZ 0x005b330d
005B32F8  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005B32FB  8B 16                     MOV EDX,dword ptr [ESI]
005B32FD  51                        PUSH ECX
005B32FE  8B 4E EC                  MOV ECX,dword ptr [ESI + -0x14]
005B3301  52                        PUSH EDX
005B3302  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
005B3305  51                        PUSH ECX
005B3306  50                        PUSH EAX
005B3307  52                        PUSH EDX
005B3308  E8 23 04 10 00            CALL 0x006b3730
LAB_005b330d:
005B330D  80 7F 65 01               CMP byte ptr [EDI + 0x65],0x1
005B3311  75 27                     JNZ 0x005b333a
005B3313  8B 46 79                  MOV EAX,dword ptr [ESI + 0x79]
005B3316  83 F8 FF                  CMP EAX,-0x1
005B3319  74 1F                     JZ 0x005b333a
005B331B  8B 8E 95 00 00 00         MOV ECX,dword ptr [ESI + 0x95]
005B3321  8B 96 91 00 00 00         MOV EDX,dword ptr [ESI + 0x91]
005B3327  51                        PUSH ECX
005B3328  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
005B332B  52                        PUSH EDX
005B332C  8B 96 BD 00 00 00         MOV EDX,dword ptr [ESI + 0xbd]
005B3332  51                        PUSH ECX
005B3333  50                        PUSH EAX
005B3334  52                        PUSH EDX
005B3335  E8 F6 03 10 00            CALL 0x006b3730
LAB_005b333a:
005B333A  33 C0                     XOR EAX,EAX
005B333C  43                        INC EBX
005B333D  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B3343  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B3349  3B D8                     CMP EBX,EAX
005B334B  7C A3                     JL 0x005b32f0
LAB_005b334d:
005B334D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B3350  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B3356  5F                        POP EDI
005B3357  5E                        POP ESI
005B3358  5B                        POP EBX
005B3359  8B E5                     MOV ESP,EBP
005B335B  5D                        POP EBP
005B335C  C3                        RET
LAB_005b335d:
005B335D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B3360  68 60 C9 7C 00            PUSH 0x7cc960
005B3365  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B336A  56                        PUSH ESI
005B336B  6A 00                     PUSH 0x0
005B336D  6A 7E                     PUSH 0x7e
005B336F  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B3374  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B337A  E8 51 A1 0F 00            CALL 0x006ad4d0
005B337F  83 C4 18                  ADD ESP,0x18
005B3382  85 C0                     TEST EAX,EAX
005B3384  74 01                     JZ 0x005b3387
005B3386  CC                        INT3
LAB_005b3387:
005B3387  6A 7E                     PUSH 0x7e
005B3389  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B338E  6A 00                     PUSH 0x0
005B3390  56                        PUSH ESI
005B3391  E8 AA 2A 0F 00            CALL 0x006a5e40
005B3396  5F                        POP EDI
005B3397  5E                        POP ESI
005B3398  5B                        POP EBX
005B3399  8B E5                     MOV ESP,EBP
005B339B  5D                        POP EBP
005B339C  C3                        RET
