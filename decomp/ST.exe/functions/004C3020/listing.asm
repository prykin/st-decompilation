FUN_004c3020:
004C3020  56                        PUSH ESI
004C3021  8B F1                     MOV ESI,ECX
004C3023  57                        PUSH EDI
004C3024  33 FF                     XOR EDI,EDI
004C3026  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C302C  8B 0C 85 FC 42 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7942fc]
004C3033  89 8E 19 02 00 00         MOV dword ptr [ESI + 0x219],ECX
004C3039  C7 86 5D 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x25d],0x1
004C3043  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004C3049  8B 04 95 78 27 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x792778]
004C3050  33 D2                     XOR EDX,EDX
004C3052  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004C3058  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C305E  39 3C CD 80 28 79 00      CMP dword ptr [ECX*0x8 + 0x792880],EDI
004C3065  0F 95 C2                  SETNZ DL
004C3068  89 96 65 02 00 00         MOV dword ptr [ESI + 0x265],EDX
004C306E  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C3074  33 C9                     XOR ECX,ECX
004C3076  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C3079  81 3C C5 A0 2C 79 00 9A 00 00 00  CMP dword ptr [EAX*0x8 + 0x792ca0],0x9a
004C3084  0F 94 C1                  SETZ CL
004C3087  89 8E 69 02 00 00         MOV dword ptr [ESI + 0x269],ECX
004C308D  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C3093  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C3096  33 C0                     XOR EAX,EAX
004C3098  81 3C D5 A0 2C 79 00 B0 00 00 00  CMP dword ptr [EDX*0x8 + 0x792ca0],0xb0
004C30A3  0F 95 C0                  SETNZ AL
004C30A6  48                        DEC EAX
004C30A7  83 E0 04                  AND EAX,0x4
004C30AA  89 86 79 02 00 00         MOV dword ptr [ESI + 0x279],EAX
004C30B0  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C30B6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004C30B9  8B 14 CD A0 2C 79 00      MOV EDX,dword ptr [ECX*0x8 + 0x792ca0]
004C30C0  81 EA B0 00 00 00         SUB EDX,0xb0
004C30C6  F7 DA                     NEG EDX
004C30C8  1B D2                     SBB EDX,EDX
004C30CA  83 E2 10                  AND EDX,0x10
004C30CD  83 C2 08                  ADD EDX,0x8
004C30D0  89 96 7D 02 00 00         MOV dword ptr [ESI + 0x27d],EDX
004C30D6  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004C30DC  83 E8 66                  SUB EAX,0x66
004C30DF  F7 D8                     NEG EAX
004C30E1  1B C0                     SBB EAX,EAX
004C30E3  24 FD                     AND AL,0xfd
004C30E5  83 C0 06                  ADD EAX,0x6
004C30E8  89 86 81 02 00 00         MOV dword ptr [ESI + 0x281],EAX
004C30EE  89 BE 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDI
004C30F4  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C30FA  39 3C 85 78 27 79 00      CMP dword ptr [EAX*0x4 + 0x792778],EDI
004C3101  74 35                     JZ 0x004c3138
004C3103  39 3C C5 80 28 79 00      CMP dword ptr [EAX*0x8 + 0x792880],EDI
004C310A  74 2C                     JZ 0x004c3138
004C310C  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C310F  57                        PUSH EDI
004C3110  50                        PUSH EAX
004C3111  51                        PUSH ECX
004C3112  E8 F2 11 F4 FF            CALL 0x00404309
004C3117  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C311A  8B C8                     MOV ECX,EAX
004C311C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004C3122  83 C4 0C                  ADD ESP,0xc
004C3125  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004C312B  33 D2                     XOR EDX,EDX
004C312D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C3130  C1 E8 10                  SHR EAX,0x10
004C3133  41                        INC ECX
004C3134  F7 F1                     DIV ECX
004C3136  EB 0B                     JMP 0x004c3143
LAB_004c3138:
004C3138  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C313D  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
LAB_004c3143:
004C3143  89 96 71 02 00 00         MOV dword ptr [ESI + 0x271],EDX
004C3149  89 BE 85 02 00 00         MOV dword ptr [ESI + 0x285],EDI
004C314F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C3152  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C3158  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004C315E  8B 04 8D 40 20 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x792040]
004C3165  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C3168  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004C316E  D1 E1                     SHL ECX,0x1
004C3170  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C3173  33 D2                     XOR EDX,EDX
004C3175  C1 E8 10                  SHR EAX,0x10
004C3178  41                        INC ECX
004C3179  F7 F1                     DIV ECX
004C317B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C3180  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C3186  89 BE 8D 02 00 00         MOV dword ptr [ESI + 0x28d],EDI
004C318C  89 BE 91 02 00 00         MOV dword ptr [ESI + 0x291],EDI
004C3192  03 D1                     ADD EDX,ECX
004C3194  89 96 89 02 00 00         MOV dword ptr [ESI + 0x289],EDX
004C319A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C31A0  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C31A6  89 BE B1 02 00 00         MOV dword ptr [ESI + 0x2b1],EDI
004C31AC  89 96 95 02 00 00         MOV dword ptr [ESI + 0x295],EDX
004C31B2  89 BE B5 02 00 00         MOV dword ptr [ESI + 0x2b5],EDI
004C31B8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C31BB  33 D2                     XOR EDX,EDX
004C31BD  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004C31C3  05 39 30 00 00            ADD EAX,0x3039
004C31C8  B9 4C 00 00 00            MOV ECX,0x4c
004C31CD  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C31D0  C1 E8 10                  SHR EAX,0x10
004C31D3  F7 F1                     DIV ECX
004C31D5  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
004C31DB  83 C2 19                  ADD EDX,0x19
004C31DE  3B C7                     CMP EAX,EDI
004C31E0  89 96 B9 02 00 00         MOV dword ptr [ESI + 0x2b9],EDX
004C31E6  75 14                     JNZ 0x004c31fc
004C31E8  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004C31EE  83 F8 6A                  CMP EAX,0x6a
004C31F1  74 09                     JZ 0x004c31fc
004C31F3  83 F8 68                  CMP EAX,0x68
004C31F6  74 04                     JZ 0x004c31fc
004C31F8  33 C0                     XOR EAX,EAX
004C31FA  EB 05                     JMP 0x004c3201
LAB_004c31fc:
004C31FC  B8 01 00 00 00            MOV EAX,0x1
LAB_004c3201:
004C3201  89 86 99 02 00 00         MOV dword ptr [ESI + 0x299],EAX
004C3207  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C320D  C1 E0 03                  SHL EAX,0x3
004C3210  8B 90 00 18 79 00         MOV EDX,dword ptr [EAX + 0x791800]
004C3216  89 96 A1 02 00 00         MOV dword ptr [ESI + 0x2a1],EDX
004C321C  8B 88 28 3E 79 00         MOV ECX,dword ptr [EAX + 0x793e28]
004C3222  3B CF                     CMP ECX,EDI
004C3224  74 0C                     JZ 0x004c3232
004C3226  8B 80 38 40 79 00         MOV EAX,dword ptr [EAX + 0x794038]
004C322C  89 86 C5 02 00 00         MOV dword ptr [ESI + 0x2c5],EAX
LAB_004c3232:
004C3232  83 BE AC 05 00 00 47      CMP dword ptr [ESI + 0x5ac],0x47
004C3239  0F 85 50 01 00 00         JNZ 0x004c338f
004C323F  C7 86 5D 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x25d],0x2
004C3249  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C324F  33 D2                     XOR EDX,EDX
004C3251  6A 01                     PUSH 0x1
004C3253  8B 0C 85 78 27 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x792778]
004C325A  50                        PUSH EAX
004C325B  89 8E E1 02 00 00         MOV dword ptr [ESI + 0x2e1],ECX
004C3261  8B 0C C5 84 28 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x792884]
004C3268  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C326B  3B CF                     CMP ECX,EDI
004C326D  0F 95 C2                  SETNZ DL
004C3270  50                        PUSH EAX
004C3271  89 96 E5 02 00 00         MOV dword ptr [ESI + 0x2e5],EDX
004C3277  C7 86 E9 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2e9],0x1
004C3281  89 BE F5 02 00 00         MOV dword ptr [ESI + 0x2f5],EDI
004C3287  C7 86 F9 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x2f9],0x6
004C3291  C7 86 FD 02 00 00 18 00 00 00  MOV dword ptr [ESI + 0x2fd],0x18
004C329B  C7 86 01 03 00 00 03 00 00 00  MOV dword ptr [ESI + 0x301],0x3
004C32A5  89 BE ED 02 00 00         MOV dword ptr [ESI + 0x2ed],EDI
004C32AB  E8 59 10 F4 FF            CALL 0x00404309
004C32B0  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C32B3  8B C8                     MOV ECX,EAX
004C32B5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004C32BB  83 C4 0C                  ADD ESP,0xc
004C32BE  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004C32C4  33 D2                     XOR EDX,EDX
004C32C6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C32C9  89 BE 05 03 00 00         MOV dword ptr [ESI + 0x305],EDI
004C32CF  C1 E8 10                  SHR EAX,0x10
004C32D2  41                        INC ECX
004C32D3  F7 F1                     DIV ECX
004C32D5  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C32DB  89 96 F1 02 00 00         MOV dword ptr [ESI + 0x2f1],EDX
004C32E1  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C32E4  8B 04 85 40 20 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x792040]
004C32EB  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004C32F1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C32F4  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004C32FA  D1 E1                     SHL ECX,0x1
004C32FC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C32FF  33 D2                     XOR EDX,EDX
004C3301  C1 E8 10                  SHR EAX,0x10
004C3304  41                        INC ECX
004C3305  F7 F1                     DIV ECX
004C3307  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C330C  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C3312  89 BE 0D 03 00 00         MOV dword ptr [ESI + 0x30d],EDI
004C3318  89 BE 11 03 00 00         MOV dword ptr [ESI + 0x311],EDI
004C331E  03 D1                     ADD EDX,ECX
004C3320  89 96 09 03 00 00         MOV dword ptr [ESI + 0x309],EDX
004C3326  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C332C  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C3332  89 BE 31 03 00 00         MOV dword ptr [ESI + 0x331],EDI
004C3338  89 96 15 03 00 00         MOV dword ptr [ESI + 0x315],EDX
004C333E  89 BE 35 03 00 00         MOV dword ptr [ESI + 0x335],EDI
004C3344  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C3347  33 D2                     XOR EDX,EDX
004C3349  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004C334F  05 39 30 00 00            ADD EAX,0x3039
004C3354  B9 4C 00 00 00            MOV ECX,0x4c
004C3359  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C335C  89 BE 41 03 00 00         MOV dword ptr [ESI + 0x341],EDI
004C3362  C1 E8 10                  SHR EAX,0x10
004C3365  F7 F1                     DIV ECX
004C3367  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C336D  C1 E0 03                  SHL EAX,0x3
004C3370  83 C2 19                  ADD EDX,0x19
004C3373  89 96 39 03 00 00         MOV dword ptr [ESI + 0x339],EDX
004C3379  8B 88 2C 3E 79 00         MOV ECX,dword ptr [EAX + 0x793e2c]
004C337F  3B CF                     CMP ECX,EDI
004C3381  74 0C                     JZ 0x004c338f
004C3383  8B 90 3C 40 79 00         MOV EDX,dword ptr [EAX + 0x79403c]
004C3389  89 96 45 03 00 00         MOV dword ptr [ESI + 0x345],EDX
LAB_004c338f:
004C338F  5F                        POP EDI
004C3390  33 C0                     XOR EAX,EAX
004C3392  5E                        POP ESI
004C3393  C3                        RET
