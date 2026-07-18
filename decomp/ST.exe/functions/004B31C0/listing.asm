FUN_004b31c0:
004B31C0  55                        PUSH EBP
004B31C1  8B EC                     MOV EBP,ESP
004B31C3  83 EC 08                  SUB ESP,0x8
004B31C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B31CC  53                        PUSH EBX
004B31CD  56                        PUSH ESI
004B31CE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004B31D1  57                        PUSH EDI
004B31D2  33 DB                     XOR EBX,EBX
004B31D4  56                        PUSH ESI
004B31D5  33 FF                     XOR EDI,EDI
004B31D7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004B31DA  E8 36 F6 F4 FF            CALL 0x00402815
004B31DF  85 C0                     TEST EAX,EAX
004B31E1  0F 84 5C 01 00 00         JZ 0x004b3343
004B31E7  A1 70 A1 7F 00            MOV EAX,[0x007fa170]
004B31EC  85 C0                     TEST EAX,EAX
004B31EE  0F 84 98 00 00 00         JZ 0x004b328c
004B31F4  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
004B31F7  8B 0D 70 A1 7F 00         MOV ECX,dword ptr [0x007fa170]
004B31FD  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B3200  E8 8B DF 1F 00            CALL 0x006b1190
004B3205  85 C0                     TEST EAX,EAX
004B3207  7C 5B                     JL 0x004b3264
004B3209  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004B320C  BB 03 00 00 00            MOV EBX,0x3
LAB_004b3211:
004B3211  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004B3214  85 C0                     TEST EAX,EAX
004B3216  74 37                     JZ 0x004b324f
004B3218  39 70 24                  CMP dword ptr [EAX + 0x24],ESI
004B321B  75 32                     JNZ 0x004b324f
004B321D  85 FF                     TEST EDI,EDI
004B321F  74 05                     JZ 0x004b3226
004B3221  39 78 18                  CMP dword ptr [EAX + 0x18],EDI
004B3224  74 29                     JZ 0x004b324f
LAB_004b3226:
004B3226  39 98 EC 02 00 00         CMP dword ptr [EAX + 0x2ec],EBX
004B322C  74 1E                     JZ 0x004b324c
004B322E  8B 88 A0 02 00 00         MOV ECX,dword ptr [EAX + 0x2a0]
004B3234  85 C9                     TEST ECX,ECX
004B3236  75 14                     JNZ 0x004b324c
004B3238  8B 88 E0 02 00 00         MOV ECX,dword ptr [EAX + 0x2e0]
004B323E  85 C9                     TEST ECX,ECX
004B3240  75 0A                     JNZ 0x004b324c
004B3242  8B 88 DC 02 00 00         MOV ECX,dword ptr [EAX + 0x2dc]
004B3248  85 C9                     TEST ECX,ECX
004B324A  74 03                     JZ 0x004b324f
LAB_004b324c:
004B324C  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_004b324f:
004B324F  8B 0D 70 A1 7F 00         MOV ECX,dword ptr [0x007fa170]
004B3255  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B3258  E8 33 DF 1F 00            CALL 0x006b1190
004B325D  85 C0                     TEST EAX,EAX
004B325F  7D B0                     JGE 0x004b3211
004B3261  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b3264:
004B3264  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004B3267  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004B326A  33 C0                     XOR EAX,EAX
004B326C  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004B326F  8B 0D 97 8A 80 00         MOV ECX,dword ptr [0x00808a97]
004B3275  C1 E2 04                  SHL EDX,0x4
004B3278  03 D6                     ADD EDX,ESI
004B327A  66 8B 04 55 2D 4E 7F 00   MOV AX,word ptr [EDX*0x2 + 0x7f4e2d]
004B3282  03 C3                     ADD EAX,EBX
004B3284  3B C1                     CMP EAX,ECX
004B3286  0F 83 C0 00 00 00         JNC 0x004b334c
LAB_004b328c:
004B328C  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004B328F  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004B3292  8D 3C 56                  LEA EDI,[ESI + EDX*0x2]
004B3295  C1 E7 04                  SHL EDI,0x4
004B3298  03 FE                     ADD EDI,ESI
004B329A  D1 E7                     SHL EDI,0x1
004B329C  8B 8F 29 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e29]
004B32A2  85 C9                     TEST ECX,ECX
004B32A4  0F 84 8D 00 00 00         JZ 0x004b3337
004B32AA  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B32AD  33 F6                     XOR ESI,ESI
004B32AF  85 C0                     TEST EAX,EAX
004B32B1  76 70                     JBE 0x004b3323
LAB_004b32b3:
004B32B3  8D 45 08                  LEA EAX,[EBP + 0x8]
004B32B6  8B D6                     MOV EDX,ESI
004B32B8  50                        PUSH EAX
004B32B9  E8 B2 99 1F 00            CALL 0x006acc70
004B32BE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B32C1  85 C9                     TEST ECX,ECX
004B32C3  74 52                     JZ 0x004b3317
004B32C5  8B 11                     MOV EDX,dword ptr [ECX]
004B32C7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B32CA  83 F8 32                  CMP EAX,0x32
004B32CD  74 27                     JZ 0x004b32f6
004B32CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B32D2  8B 01                     MOV EAX,dword ptr [ECX]
004B32D4  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B32D7  83 F8 40                  CMP EAX,0x40
004B32DA  74 1A                     JZ 0x004b32f6
004B32DC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B32DF  8B 11                     MOV EDX,dword ptr [ECX]
004B32E1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B32E4  83 F8 49                  CMP EAX,0x49
004B32E7  74 0D                     JZ 0x004b32f6
004B32E9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B32EC  8B 01                     MOV EAX,dword ptr [ECX]
004B32EE  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B32F1  83 F8 5C                  CMP EAX,0x5c
004B32F4  75 21                     JNZ 0x004b3317
LAB_004b32f6:
004B32F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B32F9  83 B8 61 03 00 00 01      CMP dword ptr [EAX + 0x361],0x1
004B3300  75 15                     JNZ 0x004b3317
004B3302  8B 80 D0 04 00 00         MOV EAX,dword ptr [EAX + 0x4d0]
004B3308  85 C0                     TEST EAX,EAX
004B330A  74 0B                     JZ 0x004b3317
004B330C  83 F8 01                  CMP EAX,0x1
004B330F  74 06                     JZ 0x004b3317
004B3311  83 F8 02                  CMP EAX,0x2
004B3314  74 01                     JZ 0x004b3317
004B3316  43                        INC EBX
LAB_004b3317:
004B3317  8B 8F 29 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e29]
004B331D  46                        INC ESI
004B331E  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004B3321  72 90                     JC 0x004b32b3
LAB_004b3323:
004B3323  A1 97 8A 80 00            MOV EAX,[0x00808a97]
004B3328  33 C9                     XOR ECX,ECX
004B332A  66 8B 8F 2D 4E 7F 00      MOV CX,word ptr [EDI + 0x7f4e2d]
004B3331  03 CB                     ADD ECX,EBX
004B3333  3B C8                     CMP ECX,EAX
004B3335  73 15                     JNC 0x004b334c
LAB_004b3337:
004B3337  5F                        POP EDI
004B3338  5E                        POP ESI
004B3339  B8 01 00 00 00            MOV EAX,0x1
004B333E  5B                        POP EBX
004B333F  8B E5                     MOV ESP,EBP
004B3341  5D                        POP EBP
004B3342  C3                        RET
LAB_004b3343:
004B3343  8B C7                     MOV EAX,EDI
004B3345  5F                        POP EDI
004B3346  5E                        POP ESI
004B3347  5B                        POP EBX
004B3348  8B E5                     MOV ESP,EBP
004B334A  5D                        POP EBP
004B334B  C3                        RET
LAB_004b334c:
004B334C  5F                        POP EDI
004B334D  5E                        POP ESI
004B334E  33 C0                     XOR EAX,EAX
004B3350  5B                        POP EBX
004B3351  8B E5                     MOV ESP,EBP
004B3353  5D                        POP EBP
004B3354  C3                        RET
