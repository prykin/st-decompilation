FSGSTy::SetChannelList:
005A2FF0  55                        PUSH EBP
005A2FF1  8B EC                     MOV EBP,ESP
005A2FF3  83 EC 4C                  SUB ESP,0x4c
005A2FF6  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A2FFC  53                        PUSH EBX
005A2FFD  56                        PUSH ESI
005A2FFE  3C 06                     CMP AL,0x6
005A3000  57                        PUSH EDI
005A3001  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005A3004  0F 85 2E 02 00 00         JNZ 0x005a3238
005A300A  8A 81 60 1A 00 00         MOV AL,byte ptr [ECX + 0x1a60]
005A3010  84 C0                     TEST AL,AL
005A3012  0F 84 20 02 00 00         JZ 0x005a3238
005A3018  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A301D  8D 55 B8                  LEA EDX,[EBP + -0x48]
005A3020  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005A3023  6A 00                     PUSH 0x0
005A3025  52                        PUSH EDX
005A3026  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005A3029  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A302F  E8 BC A7 18 00            CALL 0x0072d7f0
005A3034  8B F0                     MOV ESI,EAX
005A3036  83 C4 08                  ADD ESP,0x8
005A3039  85 F6                     TEST ESI,ESI
005A303B  0F 85 B8 01 00 00         JNZ 0x005a31f9
005A3041  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A3047  85 F6                     TEST ESI,ESI
005A3049  74 4D                     JZ 0x005a3098
005A304B  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A3051  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A3057  50                        PUSH EAX
005A3058  51                        PUSH ECX
005A3059  6A 00                     PUSH 0x0
005A305B  8B CE                     MOV ECX,ESI
005A305D  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A3064  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A306D  E8 0C 20 E6 FF            CALL 0x0040507e
005A3072  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A3078  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A307E  52                        PUSH EDX
005A307F  50                        PUSH EAX
005A3080  8B CE                     MOV ECX,ESI
005A3082  E8 97 F3 E5 FF            CALL 0x0040241e
005A3087  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A308E  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a3098:
005A3098  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005A309B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005A309E  85 DB                     TEST EBX,EBX
005A30A0  8B 8E AA 1E 00 00         MOV ECX,dword ptr [ESI + 0x1eaa]
005A30A6  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
005A30AD  76 16                     JBE 0x005a30c5
005A30AF  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_005a30b2:
005A30B2  8B 96 AA 1E 00 00         MOV EDX,dword ptr [ESI + 0x1eaa]
005A30B8  57                        PUSH EDI
005A30B9  52                        PUSH EDX
005A30BA  E8 01 B1 10 00            CALL 0x006ae1c0
005A30BF  83 C7 68                  ADD EDI,0x68
005A30C2  4B                        DEC EBX
005A30C3  75 ED                     JNZ 0x005a30b2
LAB_005a30c5:
005A30C5  8B 86 AA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eaa]
005A30CB  33 FF                     XOR EDI,EDI
005A30CD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005A30D0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005A30D3  8D 51 FF                  LEA EDX,[ECX + -0x1]
005A30D6  85 D2                     TEST EDX,EDX
005A30D8  76 5C                     JBE 0x005a3136
LAB_005a30da:
005A30DA  3B F9                     CMP EDI,ECX
005A30DC  73 0D                     JNC 0x005a30eb
005A30DE  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005A30E1  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
005A30E4  0F AF D7                  IMUL EDX,EDI
005A30E7  03 D3                     ADD EDX,EBX
005A30E9  EB 02                     JMP 0x005a30ed
LAB_005a30eb:
005A30EB  33 D2                     XOR EDX,EDX
LAB_005a30ed:
005A30ED  8D 5F 01                  LEA EBX,[EDI + 0x1]
005A30F0  3B D9                     CMP EBX,ECX
005A30F2  73 0B                     JNC 0x005a30ff
005A30F4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A30F7  0F AF CB                  IMUL ECX,EBX
005A30FA  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
005A30FD  EB 02                     JMP 0x005a3101
LAB_005a30ff:
005A30FF  33 C9                     XOR ECX,ECX
LAB_005a3101:
005A3101  51                        PUSH ECX
005A3102  52                        PUSH EDX
005A3103  E8 18 B5 18 00            CALL 0x0072e620
005A3108  83 C4 08                  ADD ESP,0x8
005A310B  85 C0                     TEST EAX,EAX
005A310D  7E 15                     JLE 0x005a3124
005A310F  8B 86 AA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eaa]
005A3115  53                        PUSH EBX
005A3116  57                        PUSH EDI
005A3117  50                        PUSH EAX
005A3118  E8 B3 DB 10 00            CALL 0x006b0cd0
005A311D  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005a3124:
005A3124  8B 86 AA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eaa]
005A312A  8B FB                     MOV EDI,EBX
005A312C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005A312F  8D 51 FF                  LEA EDX,[ECX + -0x1]
005A3132  3B FA                     CMP EDI,EDX
005A3134  72 A4                     JC 0x005a30da
LAB_005a3136:
005A3136  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A3139  85 C0                     TEST EAX,EAX
005A313B  75 88                     JNZ 0x005a30c5
005A313D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A3142  68 F3 00 00 00            PUSH 0xf3
005A3147  68 24 01 00 00            PUSH 0x124
005A314C  6A 5E                     PUSH 0x5e
005A314E  68 E9 01 00 00            PUSH 0x1e9
005A3153  50                        PUSH EAX
005A3154  E8 27 2E 11 00            CALL 0x006b5f80
005A3159  8B 8E 9A 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e9a]
005A315F  51                        PUSH ECX
005A3160  6A 01                     PUSH 0x1
005A3162  68 F3 00 00 00            PUSH 0xf3
005A3167  68 24 01 00 00            PUSH 0x124
005A316C  6A 00                     PUSH 0x0
005A316E  6A 00                     PUSH 0x0
005A3170  6A 5E                     PUSH 0x5e
005A3172  68 E9 01 00 00            PUSH 0x1e9
005A3177  E8 1C F1 E5 FF            CALL 0x00402298
005A317C  8B 96 AA 1E 00 00         MOV EDX,dword ptr [ESI + 0x1eaa]
005A3182  8B 8E 20 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b20]
005A3188  83 C4 20                  ADD ESP,0x20
005A318B  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005A318E  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005A3195  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A3198  57                        PUSH EDI
005A3199  51                        PUSH ECX
005A319A  6A 02                     PUSH 0x2
005A319C  8B CE                     MOV ECX,ESI
005A319E  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005A31A1  66 C7 46 35 01 00         MOV word ptr [ESI + 0x35],0x1
005A31A7  E8 D4 2E 14 00            CALL 0x006e6080
005A31AC  8B 96 AA 1E 00 00         MOV EDX,dword ptr [ESI + 0x1eaa]
005A31B2  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005A31B9  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A31BC  85 C0                     TEST EAX,EAX
005A31BE  74 11                     JZ 0x005a31d1
005A31C0  8B 86 6B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a6b]
005A31C6  85 C0                     TEST EAX,EAX
005A31C8  74 07                     JZ 0x005a31d1
005A31CA  B8 01 00 00 00            MOV EAX,0x1
005A31CF  EB 02                     JMP 0x005a31d3
LAB_005a31d1:
005A31D1  33 C0                     XOR EAX,EAX
LAB_005a31d3:
005A31D3  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005A31D6  8B 86 20 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b20]
005A31DC  57                        PUSH EDI
005A31DD  50                        PUSH EAX
005A31DE  6A 02                     PUSH 0x2
005A31E0  8B CE                     MOV ECX,ESI
005A31E2  E8 99 2E 14 00            CALL 0x006e6080
005A31E7  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005A31EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A31F0  5F                        POP EDI
005A31F1  5E                        POP ESI
005A31F2  5B                        POP EBX
005A31F3  8B E5                     MOV ESP,EBP
005A31F5  5D                        POP EBP
005A31F6  C2 08 00                  RET 0x8
LAB_005a31f9:
005A31F9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005A31FC  68 38 C5 7C 00            PUSH 0x7cc538
005A3201  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A3206  56                        PUSH ESI
005A3207  6A 00                     PUSH 0x0
005A3209  68 9D 0A 00 00            PUSH 0xa9d
005A320E  68 70 BF 7C 00            PUSH 0x7cbf70
005A3213  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A3219  E8 B2 A2 10 00            CALL 0x006ad4d0
005A321E  83 C4 18                  ADD ESP,0x18
005A3221  85 C0                     TEST EAX,EAX
005A3223  74 01                     JZ 0x005a3226
005A3225  CC                        INT3
LAB_005a3226:
005A3226  68 9D 0A 00 00            PUSH 0xa9d
005A322B  68 70 BF 7C 00            PUSH 0x7cbf70
005A3230  6A 00                     PUSH 0x0
005A3232  56                        PUSH ESI
005A3233  E8 08 2C 10 00            CALL 0x006a5e40
LAB_005a3238:
005A3238  5F                        POP EDI
005A3239  5E                        POP ESI
005A323A  5B                        POP EBX
005A323B  8B E5                     MOV ESP,EBP
005A323D  5D                        POP EBP
005A323E  C2 08 00                  RET 0x8
