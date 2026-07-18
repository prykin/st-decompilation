FUN_006e6630:
006E6630  55                        PUSH EBP
006E6631  8B EC                     MOV EBP,ESP
006E6633  53                        PUSH EBX
006E6634  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E6637  56                        PUSH ESI
006E6638  8B F1                     MOV ESI,ECX
006E663A  57                        PUSH EDI
006E663B  3B 9E 1C 04 00 00         CMP EBX,dword ptr [ESI + 0x41c]
006E6641  7C 73                     JL 0x006e66b6
006E6643  8B 8E 20 04 00 00         MOV ECX,dword ptr [ESI + 0x420]
006E6649  8D 43 64                  LEA EAX,[EBX + 0x64]
006E664C  C1 E0 02                  SHL EAX,0x2
006E664F  50                        PUSH EAX
006E6650  51                        PUSH ECX
006E6651  E8 FA 68 FC FF            CALL 0x006acf50
006E6656  8B F8                     MOV EDI,EAX
006E6658  85 FF                     TEST EDI,EDI
006E665A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006E665D  75 21                     JNZ 0x006e6680
006E665F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006E6665  6A 79                     PUSH 0x79
006E6667  68 34 EC 7E 00            PUSH 0x7eec34
006E666C  52                        PUSH EDX
006E666D  6A FE                     PUSH -0x2
006E666F  E8 CC F7 FB FF            CALL 0x006a5e40
006E6674  5F                        POP EDI
006E6675  5E                        POP ESI
006E6676  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E667B  5B                        POP EBX
006E667C  5D                        POP EBP
006E667D  C2 10 00                  RET 0x10
LAB_006e6680:
006E6680  8B 96 1C 04 00 00         MOV EDX,dword ptr [ESI + 0x41c]
006E6686  8B C3                     MOV EAX,EBX
006E6688  2B C2                     SUB EAX,EDX
006E668A  8D 3C 97                  LEA EDI,[EDI + EDX*0x4]
006E668D  8D 0C 85 90 01 00 00      LEA ECX,[EAX*0x4 + 0x190]
006E6694  33 C0                     XOR EAX,EAX
006E6696  8B D1                     MOV EDX,ECX
006E6698  C1 E9 02                  SHR ECX,0x2
006E669B  F3 AB                     STOSD.REP ES:EDI
006E669D  8B CA                     MOV ECX,EDX
006E669F  83 E1 03                  AND ECX,0x3
006E66A2  F3 AA                     STOSB.REP ES:EDI
006E66A4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E66A7  89 86 20 04 00 00         MOV dword ptr [ESI + 0x420],EAX
006E66AD  8D 43 64                  LEA EAX,[EBX + 0x64]
006E66B0  89 86 1C 04 00 00         MOV dword ptr [ESI + 0x41c],EAX
LAB_006e66b6:
006E66B6  8B 8E 20 04 00 00         MOV ECX,dword ptr [ESI + 0x420]
006E66BC  8A 55 0C                  MOV DL,byte ptr [EBP + 0xc]
006E66BF  5F                        POP EDI
006E66C0  88 14 99                  MOV byte ptr [ECX + EBX*0x4],DL
006E66C3  8B 86 20 04 00 00         MOV EAX,dword ptr [ESI + 0x420]
006E66C9  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
006E66CC  88 4C 98 01               MOV byte ptr [EAX + EBX*0x4 + 0x1],CL
006E66D0  8B 96 20 04 00 00         MOV EDX,dword ptr [ESI + 0x420]
006E66D6  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
006E66D9  88 44 9A 02               MOV byte ptr [EDX + EBX*0x4 + 0x2],AL
006E66DD  8B 8E 20 04 00 00         MOV ECX,dword ptr [ESI + 0x420]
006E66E3  5E                        POP ESI
006E66E4  33 C0                     XOR EAX,EAX
006E66E6  C6 44 99 03 01            MOV byte ptr [ECX + EBX*0x4 + 0x3],0x1
006E66EB  5B                        POP EBX
006E66EC  5D                        POP EBP
006E66ED  C2 10 00                  RET 0x10
