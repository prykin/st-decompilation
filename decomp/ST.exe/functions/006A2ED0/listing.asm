FUN_006a2ed0:
006A2ED0  55                        PUSH EBP
006A2ED1  8B EC                     MOV EBP,ESP
006A2ED3  83 EC 14                  SUB ESP,0x14
006A2ED6  53                        PUSH EBX
006A2ED7  56                        PUSH ESI
006A2ED8  57                        PUSH EDI
006A2ED9  33 FF                     XOR EDI,EDI
006A2EDB  68 F2 04 00 00            PUSH 0x4f2
006A2EE0  C6 45 F4 E0               MOV byte ptr [EBP + -0xc],0xe0
006A2EE4  C6 45 F5 E2               MOV byte ptr [EBP + -0xb],0xe2
006A2EE8  C6 45 F6 E4               MOV byte ptr [EBP + -0xa],0xe4
006A2EEC  C6 45 F7 E6               MOV byte ptr [EBP + -0x9],0xe6
006A2EF0  C6 45 F8 E8               MOV byte ptr [EBP + -0x8],0xe8
006A2EF4  C6 45 F9 EA               MOV byte ptr [EBP + -0x7],0xea
006A2EF8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006A2EFB  E8 D0 D5 00 00            CALL 0x006b04d0
006A2F00  3B C7                     CMP EAX,EDI
006A2F02  0F 84 15 03 00 00         JZ 0x006a321d
006A2F08  8B C8                     MOV ECX,EAX
006A2F0A  E8 91 8D 03 00            CALL 0x006dbca0
006A2F0F  8B D8                     MOV EBX,EAX
006A2F11  3B DF                     CMP EBX,EDI
006A2F13  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006A2F16  75 17                     JNZ 0x006a2f2f
LAB_006a2f18:
006A2F18  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006A2F1D  68 CF 00 00 00            PUSH 0xcf
006A2F22  68 CC FA 7D 00            PUSH 0x7dfacc
006A2F27  50                        PUSH EAX
006A2F28  6A FE                     PUSH -0x2
006A2F2A  E8 11 2F 00 00            CALL 0x006a5e40
LAB_006a2f2f:
006A2F2F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A2F32  57                        PUSH EDI
006A2F33  68 97 EE 23 40            PUSH 0x4023ee97
006A2F38  68 40 35 5E 86            PUSH 0x865e3540
006A2F3D  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
006A2F41  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006A2F44  68 00 00 24 40            PUSH 0x40240000
006A2F49  DB 45 08                  FILD dword ptr [EBP + 0x8]
006A2F4C  57                        PUSH EDI
006A2F4D  83 EC 08                  SUB ESP,0x8
006A2F50  D8 0D 4C D8 79 00         FMUL float ptr [0x0079d84c]
006A2F56  F7 D8                     NEG EAX
006A2F58  0F BF 0E                  MOVSX ECX,word ptr [ESI]
006A2F5B  DD 1C 24                  FSTP double ptr [ESP]
006A2F5E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006A2F61  83 EC 08                  SUB ESP,0x8
006A2F64  DB 45 08                  FILD dword ptr [EBP + 0x8]
006A2F67  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006A2F6A  83 EC 08                  SUB ESP,0x8
006A2F6D  F7 D9                     NEG ECX
006A2F6F  D8 0D 4C D8 79 00         FMUL float ptr [0x0079d84c]
006A2F75  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006A2F78  83 EC 08                  SUB ESP,0x8
006A2F7B  8B CB                     MOV ECX,EBX
006A2F7D  DD 5C 24 10               FSTP double ptr [ESP + 0x10]
006A2F81  DB 45 EC                  FILD dword ptr [EBP + -0x14]
006A2F84  D8 0D 4C D8 79 00         FMUL float ptr [0x0079d84c]
006A2F8A  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
006A2F8E  DB 45 08                  FILD dword ptr [EBP + 0x8]
006A2F91  D8 0D 4C D8 79 00         FMUL float ptr [0x0079d84c]
006A2F97  DD 1C 24                  FSTP double ptr [ESP]
006A2F9A  68 8C 00 00 00            PUSH 0x8c
006A2F9F  68 8C 00 00 00            PUSH 0x8c
006A2FA4  57                        PUSH EDI
006A2FA5  57                        PUSH EDI
006A2FA6  57                        PUSH EDI
006A2FA7  E8 A4 90 03 00            CALL 0x006dc050
006A2FAC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A2FAF  66 8B 45 F8               MOV AX,word ptr [EBP + -0x8]
006A2FB3  8D 8B 38 04 00 00         LEA ECX,[EBX + 0x438]
006A2FB9  C7 83 28 01 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x128],0xe0
006A2FC3  C7 83 24 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x124],0x2
006A2FCD  89 11                     MOV dword ptr [ECX],EDX
006A2FCF  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006A2FD3  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
006A2FD9  33 C9                     XOR ECX,ECX
006A2FDB  3B C7                     CMP EAX,EDI
006A2FDD  7E 35                     JLE 0x006a3014
006A2FDF  8D 96 59 04 00 00         LEA EDX,[ESI + 0x459]
LAB_006a2fe5:
006A2FE5  8B 02                     MOV EAX,dword ptr [EDX]
006A2FE7  85 C0                     TEST EAX,EAX
006A2FE9  74 1B                     JZ 0x006a3006
006A2FEB  66 83 78 08 00            CMP word ptr [EAX + 0x8],0x0
006A2FF0  74 14                     JZ 0x006a3006
006A2FF2  8B BB 40 01 00 00         MOV EDI,dword ptr [EBX + 0x140]
006A2FF8  89 38                     MOV dword ptr [EAX],EDI
006A2FFA  89 83 40 01 00 00         MOV dword ptr [EBX + 0x140],EAX
006A3000  FF 83 3C 01 00 00         INC dword ptr [EBX + 0x13c]
LAB_006a3006:
006A3006  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
006A300C  41                        INC ECX
006A300D  83 C2 04                  ADD EDX,0x4
006A3010  3B C8                     CMP ECX,EAX
006A3012  7C D1                     JL 0x006a2fe5
LAB_006a3014:
006A3014  0F BF 4E 02               MOVSX ECX,word ptr [ESI + 0x2]
006A3018  0F BF 16                  MOVSX EDX,word ptr [ESI]
006A301B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006A301E  83 EC 08                  SUB ESP,0x8
006A3021  DB 45 08                  FILD dword ptr [EBP + 0x8]
006A3024  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006A3027  83 EC 08                  SUB ESP,0x8
006A302A  8B CB                     MOV ECX,EBX
006A302C  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
006A3032  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
006A3036  DB 45 08                  FILD dword ptr [EBP + 0x8]
006A3039  D8 0D F4 04 79 00         FMUL float ptr [0x007904f4]
006A303F  DD 1C 24                  FSTP double ptr [ESP]
006A3042  6A 08                     PUSH 0x8
006A3044  E8 C7 A5 03 00            CALL 0x006dd610
006A3049  8B CB                     MOV ECX,EBX
006A304B  E8 90 AB 03 00            CALL 0x006ddbe0
006A3050  8B CB                     MOV ECX,EBX
006A3052  E8 F9 AC 03 00            CALL 0x006ddd50
006A3057  68 79 4B 00 00            PUSH 0x4b79
006A305C  E8 AF 7B 00 00            CALL 0x006aac10
006A3061  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A3064  33 D2                     XOR EDX,EDX
006A3066  33 C0                     XOR EAX,EAX
LAB_006a3068:
006A3068  8B 73 28                  MOV ESI,dword ptr [EBX + 0x28]
006A306B  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
006A306E  0F AF F2                  IMUL ESI,EDX
006A3071  03 F7                     ADD ESI,EDI
006A3073  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006A3076  B9 22 00 00 00            MOV ECX,0x22
006A307B  03 F8                     ADD EDI,EAX
006A307D  F3 A5                     MOVSD.REP ES:EDI,ESI
006A307F  66 A5                     MOVSW ES:EDI,ESI
006A3081  05 8B 00 00 00            ADD EAX,0x8b
006A3086  42                        INC EDX
006A3087  3D 79 4B 00 00            CMP EAX,0x4b79
006A308C  A4                        MOVSB ES:EDI,ESI
006A308D  7C D9                     JL 0x006a3068
006A308F  A1 48 D8 79 00            MOV EAX,[0x0079d848]
006A3094  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A3097  6A 01                     PUSH 0x1
006A3099  6A 00                     PUSH 0x0
006A309B  50                        PUSH EAX
006A309C  6A 01                     PUSH 0x1
006A309E  E8 3D EC 04 00            CALL 0x006f1ce0
006A30A3  83 C0 28                  ADD EAX,0x28
006A30A6  6A 01                     PUSH 0x1
006A30A8  50                        PUSH EAX
006A30A9  68 00 01 00 00            PUSH 0x100
006A30AE  6A 08                     PUSH 0x8
006A30B0  68 8B 00 00 00            PUSH 0x8b
006A30B5  68 8B 00 00 00            PUSH 0x8b
006A30BA  E8 01 20 01 00            CALL 0x006b50c0
006A30BF  8B F0                     MOV ESI,EAX
006A30C1  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
006A30C4  85 DB                     TEST EBX,EBX
006A30C6  75 18                     JNZ 0x006a30e0
006A30C8  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
006A30CC  0F AF 5E 04               IMUL EBX,dword ptr [ESI + 0x4]
006A30D0  83 C3 1F                  ADD EBX,0x1f
006A30D3  C1 EB 03                  SHR EBX,0x3
006A30D6  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
006A30DC  0F AF 5E 08               IMUL EBX,dword ptr [ESI + 0x8]
LAB_006a30e0:
006A30E0  56                        PUSH ESI
006A30E1  E8 BA 1E 01 00            CALL 0x006b4fa0
006A30E6  8B CB                     MOV ECX,EBX
006A30E8  8B F8                     MOV EDI,EAX
006A30EA  8B D1                     MOV EDX,ECX
006A30EC  33 C0                     XOR EAX,EAX
006A30EE  C1 E9 02                  SHR ECX,0x2
006A30F1  F3 AB                     STOSD.REP ES:EDI
006A30F3  8B CA                     MOV ECX,EDX
006A30F5  56                        PUSH ESI
006A30F6  83 E1 03                  AND ECX,0x3
006A30F9  F3 AA                     STOSB.REP ES:EDI
006A30FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A30FE  BF 45 00 00 00            MOV EDI,0x45
006A3103  8B DF                     MOV EBX,EDI
006A3105  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006A3108  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006A310B  E8 90 1E 01 00            CALL 0x006b4fa0
006A3110  33 C9                     XOR ECX,ECX
006A3112  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006A3115  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
006A3119  C7 45 EC 46 00 00 00      MOV dword ptr [EBP + -0x14],0x46
006A3120  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
006A3124  83 C1 1F                  ADD ECX,0x1f
006A3127  C1 E9 03                  SHR ECX,0x3
006A312A  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006A3130  4A                        DEC EDX
006A3131  0F AF CA                  IMUL ECX,EDX
006A3134  03 C1                     ADD EAX,ECX
LAB_006a3136:
006A3136  3B FB                     CMP EDI,EBX
006A3138  7F 21                     JG 0x006a315b
006A313A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A313D  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
006A3140  2B C8                     SUB ECX,EAX
006A3142  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A3145  8B CB                     MOV ECX,EBX
006A3147  2B CF                     SUB ECX,EDI
006A3149  41                        INC ECX
LAB_006a314a:
006A314A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006A314D  42                        INC EDX
006A314E  49                        DEC ECX
006A314F  8A 5C 13 FF               MOV BL,byte ptr [EBX + EDX*0x1 + -0x1]
006A3153  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006A3156  75 F2                     JNZ 0x006a314a
006A3158  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006a315b:
006A315B  33 C9                     XOR ECX,ECX
006A315D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A3160  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
006A3164  81 C2 8B 00 00 00         ADD EDX,0x8b
006A316A  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
006A316E  83 C1 1F                  ADD ECX,0x1f
006A3171  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006A3174  C1 E9 03                  SHR ECX,0x3
006A3177  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006A317D  2B C1                     SUB EAX,ECX
006A317F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A3182  4F                        DEC EDI
006A3183  43                        INC EBX
006A3184  49                        DEC ECX
006A3185  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006A3188  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006A318B  75 A9                     JNZ 0x006a3136
006A318D  47                        INC EDI
006A318E  4B                        DEC EBX
006A318F  C7 45 EC 45 00 00 00      MOV dword ptr [EBP + -0x14],0x45
LAB_006a3196:
006A3196  47                        INC EDI
006A3197  4B                        DEC EBX
006A3198  3B FB                     CMP EDI,EBX
006A319A  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006A319D  7F 21                     JG 0x006a31c0
006A319F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A31A2  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
006A31A5  2B C8                     SUB ECX,EAX
006A31A7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A31AA  8B CB                     MOV ECX,EBX
006A31AC  2B CF                     SUB ECX,EDI
006A31AE  41                        INC ECX
LAB_006a31af:
006A31AF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006A31B2  42                        INC EDX
006A31B3  49                        DEC ECX
006A31B4  8A 5C 1A FF               MOV BL,byte ptr [EDX + EBX*0x1 + -0x1]
006A31B8  88 5A FF                  MOV byte ptr [EDX + -0x1],BL
006A31BB  75 F2                     JNZ 0x006a31af
006A31BD  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006a31c0:
006A31C0  33 D2                     XOR EDX,EDX
006A31C2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A31C5  66 8B 56 0E               MOV DX,word ptr [ESI + 0xe]
006A31C9  0F AF 56 04               IMUL EDX,dword ptr [ESI + 0x4]
006A31CD  83 C2 1F                  ADD EDX,0x1f
006A31D0  C1 EA 03                  SHR EDX,0x3
006A31D3  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
006A31D9  2B C2                     SUB EAX,EDX
006A31DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A31DE  81 C2 8B 00 00 00         ADD EDX,0x8b
006A31E4  49                        DEC ECX
006A31E5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006A31E8  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006A31EB  75 A9                     JNZ 0x006a3196
006A31ED  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006A31F0  85 FF                     TEST EDI,EDI
006A31F2  74 10                     JZ 0x006a3204
006A31F4  8B CF                     MOV ECX,EDI
006A31F6  E8 F5 8A 03 00            CALL 0x006dbcf0
006A31FB  57                        PUSH EDI
006A31FC  E8 AF B0 08 00            CALL 0x0072e2b0
006A3201  83 C4 04                  ADD ESP,0x4
LAB_006a3204:
006A3204  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A3207  85 C0                     TEST EAX,EAX
006A3209  74 09                     JZ 0x006a3214
006A320B  8D 45 FC                  LEA EAX,[EBP + -0x4]
006A320E  50                        PUSH EAX
006A320F  E8 4C 7E 00 00            CALL 0x006ab060
LAB_006a3214:
006A3214  8B C6                     MOV EAX,ESI
006A3216  5F                        POP EDI
006A3217  5E                        POP ESI
006A3218  5B                        POP EBX
006A3219  8B E5                     MOV ESP,EBP
006A321B  5D                        POP EBP
006A321C  C3                        RET
LAB_006a321d:
006A321D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006A3220  8B DF                     MOV EBX,EDI
006A3222  E9 F1 FC FF FF            JMP 0x006a2f18
