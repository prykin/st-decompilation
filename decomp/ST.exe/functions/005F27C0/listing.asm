FUN_005f27c0:
005F27C0  55                        PUSH EBP
005F27C1  8B EC                     MOV EBP,ESP
005F27C3  83 EC 68                  SUB ESP,0x68
005F27C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005F27CB  53                        PUSH EBX
005F27CC  56                        PUSH ESI
005F27CD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005F27D0  57                        PUSH EDI
005F27D1  8D 55 9C                  LEA EDX,[EBP + -0x64]
005F27D4  8D 4D 98                  LEA ECX,[EBP + -0x68]
005F27D7  6A 00                     PUSH 0x0
005F27D9  52                        PUSH EDX
005F27DA  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
005F27DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F27E3  E8 08 B0 13 00            CALL 0x0072d7f0
005F27E8  8B F0                     MOV ESI,EAX
005F27EA  83 C4 08                  ADD ESP,0x8
005F27ED  85 F6                     TEST ESI,ESI
005F27EF  0F 85 34 09 00 00         JNZ 0x005f3129
005F27F5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F27F8  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005F27FB  3D 0F 01 00 00            CMP EAX,0x10f
005F2800  0F 87 B4 08 00 00         JA 0x005f30ba
005F2806  0F 84 6C 08 00 00         JZ 0x005f3078
005F280C  2B C6                     SUB EAX,ESI
005F280E  0F 84 A1 01 00 00         JZ 0x005f29b5
005F2814  83 E8 02                  SUB EAX,0x2
005F2817  74 2C                     JZ 0x005f2845
005F2819  48                        DEC EAX
005F281A  0F 85 F5 08 00 00         JNZ 0x005f3115
005F2820  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F2823  8B CE                     MOV ECX,ESI
005F2825  E8 7A EE E0 FF            CALL 0x004016a4
005F282A  8B CE                     MOV ECX,ESI
005F282C  E8 D3 1F E1 FF            CALL 0x00404804
005F2831  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F2834  33 C0                     XOR EAX,EAX
005F2836  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F283C  5F                        POP EDI
005F283D  5E                        POP ESI
005F283E  5B                        POP EBX
005F283F  8B E5                     MOV ESP,EBP
005F2841  5D                        POP EBP
005F2842  C2 04 00                  RET 0x4
LAB_005f2845:
005F2845  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
005F2848  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
005F284C  0F 84 12 01 00 00         JZ 0x005f2964
005F2852  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005F2855  B9 0E 00 00 00            MOV ECX,0xe
005F285A  8D 7B 4D                  LEA EDI,[EBX + 0x4d]
005F285D  F3 A5                     MOVSD.REP ES:EDI,ESI
005F285F  66 A5                     MOVSW ES:EDI,ESI
005F2861  8B 7B 6D                  MOV EDI,dword ptr [EBX + 0x6d]
005F2864  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005F2867  8B F7                     MOV ESI,EDI
005F2869  2B F0                     SUB ESI,EAX
005F286B  8B C6                     MOV EAX,ESI
005F286D  99                        CDQ
005F286E  33 C2                     XOR EAX,EDX
005F2870  2B C2                     SUB EAX,EDX
005F2872  83 F8 04                  CMP EAX,0x4
005F2875  7D 63                     JGE 0x005f28da
005F2877  8B 4B 71                  MOV ECX,dword ptr [EBX + 0x71]
005F287A  8B 43 65                  MOV EAX,dword ptr [EBX + 0x65]
005F287D  2B C8                     SUB ECX,EAX
005F287F  8B C1                     MOV EAX,ECX
005F2881  99                        CDQ
005F2882  33 C2                     XOR EAX,EDX
005F2884  2B C2                     SUB EAX,EDX
005F2886  83 F8 04                  CMP EAX,0x4
005F2889  7D 4F                     JGE 0x005f28da
005F288B  8B 43 71                  MOV EAX,dword ptr [EBX + 0x71]
005F288E  8B 53 65                  MOV EDX,dword ptr [EBX + 0x65]
005F2891  3B C2                     CMP EAX,EDX
005F2893  74 1D                     JZ 0x005f28b2
005F2895  85 C9                     TEST ECX,ECX
005F2897  7E 0D                     JLE 0x005f28a6
005F2899  B9 01 00 00 00            MOV ECX,0x1
005F289E  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
005F28A1  89 43 71                  MOV dword ptr [EBX + 0x71],EAX
005F28A4  EB 34                     JMP 0x005f28da
LAB_005f28a6:
005F28A6  F7 D9                     NEG ECX
005F28A8  1B C9                     SBB ECX,ECX
005F28AA  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
005F28AD  89 43 71                  MOV dword ptr [EBX + 0x71],EAX
005F28B0  EB 28                     JMP 0x005f28da
LAB_005f28b2:
005F28B2  3B 7B 61                  CMP EDI,dword ptr [EBX + 0x61]
005F28B5  74 1D                     JZ 0x005f28d4
005F28B7  85 F6                     TEST ESI,ESI
005F28B9  7E 0D                     JLE 0x005f28c8
005F28BB  BE 01 00 00 00            MOV ESI,0x1
005F28C0  8D 0C B7                  LEA ECX,[EDI + ESI*0x4]
005F28C3  89 4B 6D                  MOV dword ptr [EBX + 0x6d],ECX
005F28C6  EB 12                     JMP 0x005f28da
LAB_005f28c8:
005F28C8  F7 DE                     NEG ESI
005F28CA  1B F6                     SBB ESI,ESI
005F28CC  8D 0C B7                  LEA ECX,[EDI + ESI*0x4]
005F28CF  89 4B 6D                  MOV dword ptr [EBX + 0x6d],ECX
005F28D2  EB 06                     JMP 0x005f28da
LAB_005f28d4:
005F28D4  83 C7 04                  ADD EDI,0x4
005F28D7  89 7B 6D                  MOV dword ptr [EBX + 0x6d],EDI
LAB_005f28da:
005F28DA  8B 15 54 87 80 00         MOV EDX,dword ptr [0x00808754]
005F28E0  8B CB                     MOV ECX,EBX
005F28E2  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
005F28E5  E8 11 FB E0 FF            CALL 0x004023fb
005F28EA  8B 43 75                  MOV EAX,dword ptr [EBX + 0x75]
005F28ED  8B 4B 71                  MOV ECX,dword ptr [EBX + 0x71]
005F28F0  8B 53 6D                  MOV EDX,dword ptr [EBX + 0x6d]
005F28F3  6A 00                     PUSH 0x0
005F28F5  50                        PUSH EAX
005F28F6  51                        PUSH ECX
005F28F7  52                        PUSH EDX
005F28F8  8B CB                     MOV ECX,EBX
005F28FA  C7 83 04 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x104],0x0
005F2904  E8 33 1E E1 FF            CALL 0x0040473c
005F2909  8B 43 65                  MOV EAX,dword ptr [EBX + 0x65]
005F290C  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
005F290F  68 89 04 00 00            PUSH 0x489
005F2914  50                        PUSH EAX
005F2915  51                        PUSH ECX
005F2916  8B CB                     MOV ECX,EBX
005F2918  E8 31 FD E0 FF            CALL 0x0040264e
005F291D  8B 53 69                  MOV EDX,dword ptr [EBX + 0x69]
005F2920  8B 43 65                  MOV EAX,dword ptr [EBX + 0x65]
005F2923  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
005F2926  52                        PUSH EDX
005F2927  50                        PUSH EAX
005F2928  51                        PUSH ECX
005F2929  8B CB                     MOV ECX,EBX
005F292B  E8 D6 03 E1 FF            CALL 0x00402d06
005F2930  84 C0                     TEST AL,AL
005F2932  88 83 03 01 00 00         MOV byte ptr [EBX + 0x103],AL
005F2938  74 0E                     JZ 0x005f2948
005F293A  8B 93 87 00 00 00         MOV EDX,dword ptr [EBX + 0x87]
005F2940  8B CB                     MOV ECX,EBX
005F2942  52                        PUSH EDX
005F2943  E8 72 2C E1 FF            CALL 0x004055ba
LAB_005f2948:
005F2948  A1 D4 66 7E 00            MOV EAX,[0x007e66d4]
005F294D  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F2950  89 43 7D                  MOV dword ptr [EBX + 0x7d],EAX
005F2953  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F2959  33 C0                     XOR EAX,EAX
005F295B  5F                        POP EDI
005F295C  5E                        POP ESI
005F295D  5B                        POP EBX
005F295E  8B E5                     MOV ESP,EBP
005F2960  5D                        POP EBP
005F2961  C2 04 00                  RET 0x4
LAB_005f2964:
005F2964  56                        PUSH ESI
005F2965  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F2968  8B CE                     MOV ECX,ESI
005F296A  E8 FD 24 E1 FF            CALL 0x00404e6c
005F296F  B9 0B 00 00 00            MOV ECX,0xb
005F2974  33 C0                     XOR EAX,EAX
005F2976  8D 7E 20                  LEA EDI,[ESI + 0x20]
005F2979  F3 AB                     STOSD.REP ES:EDI
005F297B  AA                        STOSB ES:EDI
005F297C  8A 86 03 01 00 00         MOV AL,byte ptr [ESI + 0x103]
005F2982  8B 8E 6D 01 00 00         MOV ECX,dword ptr [ESI + 0x16d]
005F2988  84 C0                     TEST AL,AL
005F298A  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
005F298D  0F 84 82 07 00 00         JZ 0x005f3115
005F2993  8B 96 87 00 00 00         MOV EDX,dword ptr [ESI + 0x87]
005F2999  8B CE                     MOV ECX,ESI
005F299B  52                        PUSH EDX
005F299C  E8 19 2C E1 FF            CALL 0x004055ba
005F29A1  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F29A4  33 C0                     XOR EAX,EAX
005F29A6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F29AC  5F                        POP EDI
005F29AD  5E                        POP ESI
005F29AE  5B                        POP EBX
005F29AF  8B E5                     MOV ESP,EBP
005F29B1  5D                        POP EBP
005F29B2  C2 04 00                  RET 0x4
LAB_005f29b5:
005F29B5  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F29B8  BB 05 00 00 00            MOV EBX,0x5
005F29BD  8B 86 04 01 00 00         MOV EAX,dword ptr [ESI + 0x104]
005F29C3  3B C3                     CMP EAX,EBX
005F29C5  0F 87 F9 05 00 00         JA 0x005f2fc4
switchD_005f29cb::switchD:
005F29CB  FF 24 85 78 31 5F 00      JMP dword ptr [EAX*0x4 + 0x5f3178]
switchD_005f29cb::caseD_0:
005F29D2  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F29D5  6A 00                     PUSH 0x0
005F29D7  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F29DA  50                        PUSH EAX
005F29DB  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F29DE  51                        PUSH ECX
005F29DF  52                        PUSH EDX
005F29E0  8B CE                     MOV ECX,ESI
005F29E2  E8 53 E8 E0 FF            CALL 0x0040123a
005F29E7  8B 8E 81 00 00 00         MOV ECX,dword ptr [ESI + 0x81]
005F29ED  8B 56 51                  MOV EDX,dword ptr [ESI + 0x51]
005F29F0  8B F8                     MOV EDI,EAX
005F29F2  66 8B 86 85 00 00 00      MOV AX,word ptr [ESI + 0x85]
005F29F9  6A 00                     PUSH 0x0
005F29FB  6A 00                     PUSH 0x0
005F29FD  68 B5 00 00 00            PUSH 0xb5
005F2A02  50                        PUSH EAX
005F2A03  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
005F2A09  51                        PUSH ECX
005F2A0A  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2A10  6A 1E                     PUSH 0x1e
005F2A12  52                        PUSH EDX
005F2A13  8B 96 93 00 00 00         MOV EDX,dword ptr [ESI + 0x93]
005F2A19  50                        PUSH EAX
005F2A1A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F2A1D  51                        PUSH ECX
005F2A1E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F2A21  52                        PUSH EDX
005F2A22  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F2A25  50                        PUSH EAX
005F2A26  51                        PUSH ECX
005F2A27  52                        PUSH EDX
005F2A28  8D 4E 20                  LEA ECX,[ESI + 0x20]
005F2A2B  E8 E6 1A E1 FF            CALL 0x00404516
005F2A30  85 C0                     TEST EAX,EAX
005F2A32  7E 14                     JLE 0x005f2a48
005F2A34  3B C3                     CMP EAX,EBX
005F2A36  0F 85 FE 00 00 00         JNZ 0x005f2b3a
005F2A3C  8B CE                     MOV ECX,ESI
005F2A3E  E8 86 EA E0 FF            CALL 0x004014c9
005F2A43  E9 81 05 00 00            JMP 0x005f2fc9
LAB_005f2a48:
005F2A48  83 FF FF                  CMP EDI,-0x1
005F2A4B  0F 84 D6 05 00 00         JZ 0x005f3027
005F2A51  85 FF                     TEST EDI,EDI
005F2A53  0F 84 ED 01 00 00         JZ 0x005f2c46
005F2A59  83 FF 01                  CMP EDI,0x1
005F2A5C  0F 85 62 05 00 00         JNZ 0x005f2fc4
005F2A62  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
005F2A68  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2A6E  8B 96 9B 00 00 00         MOV EDX,dword ptr [ESI + 0x9b]
005F2A74  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
005F2A7A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F2A7D  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
005F2A83  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F2A86  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
005F2A8C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F2A8F  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005F2A95  8B 46 75                  MOV EAX,dword ptr [ESI + 0x75]
005F2A98  89 8E 97 00 00 00         MOV dword ptr [ESI + 0x97],ECX
005F2A9E  8B 4E 71                  MOV ECX,dword ptr [ESI + 0x71]
005F2AA1  89 96 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDX
005F2AA7  8B 56 6D                  MOV EDX,dword ptr [ESI + 0x6d]
005F2AAA  57                        PUSH EDI
005F2AAB  50                        PUSH EAX
005F2AAC  51                        PUSH ECX
005F2AAD  52                        PUSH EDX
005F2AAE  8B CE                     MOV ECX,ESI
005F2AB0  E8 87 1C E1 FF            CALL 0x0040473c
005F2AB5  F7 D8                     NEG EAX
005F2AB7  1B C0                     SBB EAX,EAX
005F2AB9  24 FC                     AND AL,0xfc
005F2ABB  03 C3                     ADD EAX,EBX
005F2ABD  89 86 04 01 00 00         MOV dword ptr [ESI + 0x104],EAX
005F2AC3  E9 01 05 00 00            JMP 0x005f2fc9
switchD_005f29cb::caseD_1:
005F2AC8  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F2ACB  6A 01                     PUSH 0x1
005F2ACD  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F2AD0  50                        PUSH EAX
005F2AD1  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F2AD4  51                        PUSH ECX
005F2AD5  52                        PUSH EDX
005F2AD6  8B CE                     MOV ECX,ESI
005F2AD8  E8 5D E7 E0 FF            CALL 0x0040123a
005F2ADD  8B 8E 81 00 00 00         MOV ECX,dword ptr [ESI + 0x81]
005F2AE3  8B 56 51                  MOV EDX,dword ptr [ESI + 0x51]
005F2AE6  8B F8                     MOV EDI,EAX
005F2AE8  66 8B 86 85 00 00 00      MOV AX,word ptr [ESI + 0x85]
005F2AEF  6A 00                     PUSH 0x0
005F2AF1  6A 00                     PUSH 0x0
005F2AF3  68 B5 00 00 00            PUSH 0xb5
005F2AF8  50                        PUSH EAX
005F2AF9  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
005F2AFF  51                        PUSH ECX
005F2B00  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2B06  6A 1E                     PUSH 0x1e
005F2B08  52                        PUSH EDX
005F2B09  8B 96 93 00 00 00         MOV EDX,dword ptr [ESI + 0x93]
005F2B0F  50                        PUSH EAX
005F2B10  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F2B13  51                        PUSH ECX
005F2B14  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F2B17  52                        PUSH EDX
005F2B18  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F2B1B  50                        PUSH EAX
005F2B1C  51                        PUSH ECX
005F2B1D  52                        PUSH EDX
005F2B1E  8D 4E 20                  LEA ECX,[ESI + 0x20]
005F2B21  E8 F0 19 E1 FF            CALL 0x00404516
005F2B26  85 C0                     TEST EAX,EAX
005F2B28  7E 1D                     JLE 0x005f2b47
005F2B2A  3B C3                     CMP EAX,EBX
005F2B2C  75 0C                     JNZ 0x005f2b3a
switchD_005f29cb::caseD_5:
005F2B2E  8B CE                     MOV ECX,ESI
LAB_005f2b30:
005F2B30  E8 94 E9 E0 FF            CALL 0x004014c9
005F2B35  E9 8F 04 00 00            JMP 0x005f2fc9
LAB_005f2b3a:
005F2B3A  50                        PUSH EAX
005F2B3B  8B CE                     MOV ECX,ESI
005F2B3D  E8 04 21 E1 FF            CALL 0x00404c46
005F2B42  E9 82 04 00 00            JMP 0x005f2fc9
LAB_005f2b47:
005F2B47  83 FF FF                  CMP EDI,-0x1
005F2B4A  0F 84 D7 04 00 00         JZ 0x005f3027
005F2B50  85 FF                     TEST EDI,EDI
005F2B52  0F 84 EE 00 00 00         JZ 0x005f2c46
005F2B58  83 FF 01                  CMP EDI,0x1
005F2B5B  0F 85 63 04 00 00         JNZ 0x005f2fc4
005F2B61  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
005F2B67  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2B6D  8B 96 9B 00 00 00         MOV EDX,dword ptr [ESI + 0x9b]
005F2B73  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
005F2B79  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F2B7C  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
005F2B82  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F2B85  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
005F2B8B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F2B8E  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005F2B94  8B 46 75                  MOV EAX,dword ptr [ESI + 0x75]
005F2B97  89 8E 97 00 00 00         MOV dword ptr [ESI + 0x97],ECX
005F2B9D  8B 4E 71                  MOV ECX,dword ptr [ESI + 0x71]
005F2BA0  89 96 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDX
005F2BA6  8B 56 6D                  MOV EDX,dword ptr [ESI + 0x6d]
005F2BA9  6A 02                     PUSH 0x2
005F2BAB  50                        PUSH EAX
005F2BAC  51                        PUSH ECX
005F2BAD  52                        PUSH EDX
005F2BAE  8B CE                     MOV ECX,ESI
005F2BB0  E8 87 1B E1 FF            CALL 0x0040473c
005F2BB5  F7 D8                     NEG EAX
005F2BB7  1B C0                     SBB EAX,EAX
005F2BB9  24 FD                     AND AL,0xfd
005F2BBB  03 C3                     ADD EAX,EBX
005F2BBD  89 86 04 01 00 00         MOV dword ptr [ESI + 0x104],EAX
005F2BC3  E9 01 04 00 00            JMP 0x005f2fc9
switchD_005f29cb::caseD_2:
005F2BC8  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F2BCB  6A 02                     PUSH 0x2
005F2BCD  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F2BD0  50                        PUSH EAX
005F2BD1  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F2BD4  51                        PUSH ECX
005F2BD5  52                        PUSH EDX
005F2BD6  8B CE                     MOV ECX,ESI
005F2BD8  E8 5D E6 E0 FF            CALL 0x0040123a
005F2BDD  83 F8 FF                  CMP EAX,-0x1
005F2BE0  0F 84 41 04 00 00         JZ 0x005f3027
005F2BE6  85 C0                     TEST EAX,EAX
005F2BE8  74 5C                     JZ 0x005f2c46
005F2BEA  83 F8 01                  CMP EAX,0x1
005F2BED  0F 85 D1 03 00 00         JNZ 0x005f2fc4
005F2BF3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F2BF6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F2BF9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F2BFC  50                        PUSH EAX
005F2BFD  51                        PUSH ECX
005F2BFE  52                        PUSH EDX
005F2BFF  8B CE                     MOV ECX,ESI
005F2C01  E8 07 22 E1 FF            CALL 0x00404e0d
005F2C06  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
005F2C0C  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2C12  8B 96 93 00 00 00         MOV EDX,dword ptr [ESI + 0x93]
005F2C18  6A 03                     PUSH 0x3
005F2C1A  6A 1E                     PUSH 0x1e
005F2C1C  6A 04                     PUSH 0x4
005F2C1E  50                        PUSH EAX
005F2C1F  51                        PUSH ECX
005F2C20  52                        PUSH EDX
005F2C21  8B CE                     MOV ECX,ESI
005F2C23  C7 86 04 01 00 00 03 00 00 00  MOV dword ptr [ESI + 0x104],0x3
005F2C2D  E8 1A 29 E1 FF            CALL 0x0040554c
005F2C32  85 C0                     TEST EAX,EAX
005F2C34  0F 84 8F 03 00 00         JZ 0x005f2fc9
005F2C3A  C6 86 08 01 00 00 01      MOV byte ptr [ESI + 0x108],0x1
005F2C41  E9 83 03 00 00            JMP 0x005f2fc9
LAB_005f2c46:
005F2C46  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
005F2C4C  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2C52  8B 96 9B 00 00 00         MOV EDX,dword ptr [ESI + 0x9b]
005F2C58  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
005F2C5E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F2C61  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
005F2C67  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F2C6A  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
005F2C70  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F2C73  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005F2C79  89 8E 97 00 00 00         MOV dword ptr [ESI + 0x97],ECX
005F2C7F  89 96 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDX
005F2C85  E9 3F 03 00 00            JMP 0x005f2fc9
switchD_005f29cb::caseD_3:
005F2C8A  8B 8E 8F 00 00 00         MOV ECX,dword ptr [ESI + 0x8f]
005F2C90  85 C9                     TEST ECX,ECX
005F2C92  7D 17                     JGE 0x005f2cab
005F2C94  8A 86 08 01 00 00         MOV AL,byte ptr [ESI + 0x108]
005F2C9A  F6 D8                     NEG AL
005F2C9C  1B C0                     SBB EAX,EAX
005F2C9E  03 C3                     ADD EAX,EBX
005F2CA0  89 86 04 01 00 00         MOV dword ptr [ESI + 0x104],EAX
005F2CA6  E9 1E 03 00 00            JMP 0x005f2fc9
LAB_005f2cab:
005F2CAB  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
005F2CB1  83 F8 11                  CMP EAX,0x11
005F2CB4  7C 42                     JL 0x005f2cf8
005F2CB6  75 0E                     JNZ 0x005f2cc6
005F2CB8  6A 02                     PUSH 0x2
005F2CBA  51                        PUSH ECX
005F2CBB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2CC1  E8 EA 6F 0F 00            CALL 0x006e9cb0
LAB_005f2cc6:
005F2CC6  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
005F2CCC  8B 96 8F 00 00 00         MOV EDX,dword ptr [ESI + 0x8f]
005F2CD2  51                        PUSH ECX
005F2CD3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2CD9  6A 02                     PUSH 0x2
005F2CDB  52                        PUSH EDX
005F2CDC  E8 8F 75 0F 00            CALL 0x006ea270
005F2CE1  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
005F2CE7  8B 8E BC 00 00 00         MOV ECX,dword ptr [ESI + 0xbc]
005F2CED  3B C1                     CMP EAX,ECX
005F2CEF  7D 07                     JGE 0x005f2cf8
005F2CF1  40                        INC EAX
005F2CF2  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
LAB_005f2cf8:
005F2CF8  8A 86 BB 00 00 00         MOV AL,byte ptr [ESI + 0xbb]
005F2CFE  84 C0                     TEST AL,AL
005F2D00  74 48                     JZ 0x005f2d4a
005F2D02  8B 86 B7 00 00 00         MOV EAX,dword ptr [ESI + 0xb7]
005F2D08  8B 8E B3 00 00 00         MOV ECX,dword ptr [ESI + 0xb3]
005F2D0E  3B C1                     CMP EAX,ECX
005F2D10  75 1D                     JNZ 0x005f2d2f
005F2D12  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F2D18  C6 86 BB 00 00 00 00      MOV byte ptr [ESI + 0xbb],0x0
005F2D1F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2D25  6A 01                     PUSH 0x1
005F2D27  50                        PUSH EAX
005F2D28  E8 13 70 0F 00            CALL 0x006e9d40
005F2D2D  EB 1B                     JMP 0x005f2d4a
LAB_005f2d2f:
005F2D2F  8B 8E 8F 00 00 00         MOV ECX,dword ptr [ESI + 0x8f]
005F2D35  50                        PUSH EAX
005F2D36  6A 01                     PUSH 0x1
005F2D38  51                        PUSH ECX
005F2D39  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2D3F  E8 2C 75 0F 00            CALL 0x006ea270
005F2D44  FF 86 B7 00 00 00         INC dword ptr [ESI + 0xb7]
LAB_005f2d4a:
005F2D4A  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
005F2D50  8B 8E AF 00 00 00         MOV ECX,dword ptr [ESI + 0xaf]
005F2D56  3B C1                     CMP EAX,ECX
005F2D58  7D 17                     JGE 0x005f2d71
005F2D5A  8B 96 8F 00 00 00         MOV EDX,dword ptr [ESI + 0x8f]
005F2D60  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2D66  50                        PUSH EAX
005F2D67  6A 00                     PUSH 0x0
005F2D69  52                        PUSH EDX
005F2D6A  E8 01 75 0F 00            CALL 0x006ea270
005F2D6F  EB 1A                     JMP 0x005f2d8b
LAB_005f2d71:
005F2D71  75 1E                     JNZ 0x005f2d91
005F2D73  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F2D79  85 C0                     TEST EAX,EAX
005F2D7B  7C 0E                     JL 0x005f2d8b
005F2D7D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2D83  6A 00                     PUSH 0x0
005F2D85  50                        PUSH EAX
005F2D86  E8 B5 6F 0F 00            CALL 0x006e9d40
LAB_005f2d8b:
005F2D8B  FF 86 AB 00 00 00         INC dword ptr [ESI + 0xab]
LAB_005f2d91:
005F2D91  DB 86 9B 00 00 00         FILD dword ptr [ESI + 0x9b]
005F2D97  51                        PUSH ECX
005F2D98  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F2D9E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F2DA4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F2DAA  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F2DB0  D9 1C 24                  FSTP float ptr [ESP]
005F2DB3  DB 86 97 00 00 00         FILD dword ptr [ESI + 0x97]
005F2DB9  51                        PUSH ECX
005F2DBA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F2DC0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F2DC6  D9 1C 24                  FSTP float ptr [ESP]
005F2DC9  DB 86 93 00 00 00         FILD dword ptr [ESI + 0x93]
005F2DCF  51                        PUSH ECX
005F2DD0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2DD6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F2DDC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F2DE2  D9 1C 24                  FSTP float ptr [ESP]
005F2DE5  50                        PUSH EAX
005F2DE6  E8 75 7B 0F 00            CALL 0x006ea960
005F2DEB  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
005F2DF1  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
005F2DF7  3B C8                     CMP ECX,EAX
005F2DF9  75 20                     JNZ 0x005f2e1b
005F2DFB  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F2E01  85 C0                     TEST EAX,EAX
005F2E03  7C 0C                     JL 0x005f2e11
005F2E05  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2E0B  50                        PUSH EAX
005F2E0C  E8 4F 7D 0F 00            CALL 0x006eab60
LAB_005f2e11:
005F2E11  C7 86 04 01 00 00 04 00 00 00  MOV dword ptr [ESI + 0x104],0x4
LAB_005f2e1b:
005F2E1B  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005F2E21  85 FF                     TEST EDI,EDI
005F2E23  0F 84 83 01 00 00         JZ 0x005f2fac
005F2E29  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
005F2E2F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F2E34  85 C9                     TEST ECX,ECX
005F2E36  7C 14                     JL 0x005f2e4c
005F2E38  F7 E9                     IMUL ECX
005F2E3A  C1 FA 06                  SAR EDX,0x6
005F2E3D  8B C2                     MOV EAX,EDX
005F2E3F  C1 E8 1F                  SHR EAX,0x1f
005F2E42  03 D0                     ADD EDX,EAX
005F2E44  0F BF CA                  MOVSX ECX,DX
005F2E47  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005F2E4A  EB 13                     JMP 0x005f2e5f
LAB_005f2e4c:
005F2E4C  F7 E9                     IMUL ECX
005F2E4E  C1 FA 06                  SAR EDX,0x6
005F2E51  8B C2                     MOV EAX,EDX
005F2E53  C1 E8 1F                  SHR EAX,0x1f
005F2E56  03 D0                     ADD EDX,EAX
005F2E58  0F BF C2                  MOVSX EAX,DX
005F2E5B  48                        DEC EAX
005F2E5C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_005f2e5f:
005F2E5F  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F2E65  B8 79 19 8C 02            MOV EAX,0x28c1979
005F2E6A  85 C9                     TEST ECX,ECX
005F2E6C  7C 10                     JL 0x005f2e7e
005F2E6E  F7 E9                     IMUL ECX
005F2E70  D1 FA                     SAR EDX,0x1
005F2E72  8B CA                     MOV ECX,EDX
005F2E74  C1 E9 1F                  SHR ECX,0x1f
005F2E77  03 D1                     ADD EDX,ECX
005F2E79  0F BF DA                  MOVSX EBX,DX
005F2E7C  EB 0F                     JMP 0x005f2e8d
LAB_005f2e7e:
005F2E7E  F7 E9                     IMUL ECX
005F2E80  D1 FA                     SAR EDX,0x1
005F2E82  8B C2                     MOV EAX,EDX
005F2E84  C1 E8 1F                  SHR EAX,0x1f
005F2E87  03 D0                     ADD EDX,EAX
005F2E89  0F BF DA                  MOVSX EBX,DX
005F2E8C  4B                        DEC EBX
LAB_005f2e8d:
005F2E8D  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
005F2E93  B8 79 19 8C 02            MOV EAX,0x28c1979
005F2E98  85 C9                     TEST ECX,ECX
005F2E9A  7C 10                     JL 0x005f2eac
005F2E9C  F7 E9                     IMUL ECX
005F2E9E  D1 FA                     SAR EDX,0x1
005F2EA0  8B CA                     MOV ECX,EDX
005F2EA2  C1 E9 1F                  SHR ECX,0x1f
005F2EA5  03 D1                     ADD EDX,ECX
005F2EA7  0F BF C2                  MOVSX EAX,DX
005F2EAA  EB 0F                     JMP 0x005f2ebb
LAB_005f2eac:
005F2EAC  F7 E9                     IMUL ECX
005F2EAE  D1 FA                     SAR EDX,0x1
005F2EB0  8B C2                     MOV EAX,EDX
005F2EB2  C1 E8 1F                  SHR EAX,0x1f
005F2EB5  03 D0                     ADD EDX,EAX
005F2EB7  0F BF C2                  MOVSX EAX,DX
005F2EBA  48                        DEC EAX
LAB_005f2ebb:
005F2EBB  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005F2EC2  0F 84 96 00 00 00         JZ 0x005f2f5e
005F2EC8  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
005F2ECE  85 C9                     TEST ECX,ECX
005F2ED0  0F 84 88 00 00 00         JZ 0x005f2f5e
005F2ED6  8D 4D DC                  LEA ECX,[EBP + -0x24]
005F2ED9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F2EDC  51                        PUSH ECX
005F2EDD  52                        PUSH EDX
005F2EDE  53                        PUSH EBX
005F2EDF  50                        PUSH EAX
005F2EE0  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005F2EE6  8B CF                     MOV ECX,EDI
005F2EE8  50                        PUSH EAX
005F2EE9  E8 65 10 E1 FF            CALL 0x00403f53
005F2EEE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005F2EF1  85 C0                     TEST EAX,EAX
005F2EF3  7C 69                     JL 0x005f2f5e
005F2EF5  8B D8                     MOV EBX,EAX
005F2EF7  83 FB 05                  CMP EBX,0x5
005F2EFA  7D 62                     JGE 0x005f2f5e
005F2EFC  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005F2EFF  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005F2F02  85 C9                     TEST ECX,ECX
005F2F04  7C 1E                     JL 0x005f2f24
005F2F06  3B 4F 30                  CMP ECX,dword ptr [EDI + 0x30]
005F2F09  7D 19                     JGE 0x005f2f24
005F2F0B  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
005F2F12  03 C2                     ADD EAX,EDX
005F2F14  85 C0                     TEST EAX,EAX
005F2F16  7C 0C                     JL 0x005f2f24
005F2F18  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005F2F1B  7D 07                     JGE 0x005f2f24
005F2F1D  B8 01 00 00 00            MOV EAX,0x1
005F2F22  EB 02                     JMP 0x005f2f26
LAB_005f2f24:
005F2F24  33 C0                     XOR EAX,EAX
LAB_005f2f26:
005F2F26  85 C0                     TEST EAX,EAX
005F2F28  74 26                     JZ 0x005f2f50
005F2F2A  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
005F2F2D  85 C0                     TEST EAX,EAX
005F2F2F  74 1F                     JZ 0x005f2f50
005F2F31  8B 1C 9D D0 AE 79 00      MOV EBX,dword ptr [EBX*0x4 + 0x79aed0]
005F2F38  03 DA                     ADD EBX,EDX
005F2F3A  0F AF 5F 30               IMUL EBX,dword ptr [EDI + 0x30]
005F2F3E  03 D8                     ADD EBX,EAX
005F2F40  33 C0                     XOR EAX,EAX
005F2F42  8A 04 0B                  MOV AL,byte ptr [EBX + ECX*0x1]
005F2F45  33 C9                     XOR ECX,ECX
005F2F47  85 C0                     TEST EAX,EAX
005F2F49  0F 95 C1                  SETNZ CL
005F2F4C  8B C1                     MOV EAX,ECX
005F2F4E  EB 13                     JMP 0x005f2f63
LAB_005f2f50:
005F2F50  83 C8 FF                  OR EAX,0xffffffff
005F2F53  33 C9                     XOR ECX,ECX
005F2F55  85 C0                     TEST EAX,EAX
005F2F57  0F 95 C1                  SETNZ CL
005F2F5A  8B C1                     MOV EAX,ECX
005F2F5C  EB 05                     JMP 0x005f2f63
LAB_005f2f5e:
005F2F5E  B8 01 00 00 00            MOV EAX,0x1
LAB_005f2f63:
005F2F63  83 F8 01                  CMP EAX,0x1
005F2F66  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
005F2F6C  75 21                     JNZ 0x005f2f8f
005F2F6E  84 C0                     TEST AL,AL
005F2F70  75 3A                     JNZ 0x005f2fac
005F2F72  8B 96 8F 00 00 00         MOV EDX,dword ptr [ESI + 0x8f]
005F2F78  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2F7E  6A 00                     PUSH 0x0
005F2F80  52                        PUSH EDX
005F2F81  E8 1A 7B 0F 00            CALL 0x006eaaa0
005F2F86  C6 86 C4 00 00 00 01      MOV byte ptr [ESI + 0xc4],0x1
005F2F8D  EB 1D                     JMP 0x005f2fac
LAB_005f2f8f:
005F2F8F  84 C0                     TEST AL,AL
005F2F91  74 19                     JZ 0x005f2fac
005F2F93  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F2F99  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2F9F  50                        PUSH EAX
005F2FA0  E8 BB 7B 0F 00            CALL 0x006eab60
005F2FA5  C6 86 C4 00 00 00 00      MOV byte ptr [ESI + 0xc4],0x0
LAB_005f2fac:
005F2FAC  8A 86 08 01 00 00         MOV AL,byte ptr [ESI + 0x108]
005F2FB2  84 C0                     TEST AL,AL
005F2FB4  74 0E                     JZ 0x005f2fc4
005F2FB6  8B CE                     MOV ECX,ESI
005F2FB8  E8 07 EF E0 FF            CALL 0x00401ec4
005F2FBD  8B CE                     MOV ECX,ESI
005F2FBF  E8 8F 28 E1 FF            CALL 0x00405853
LAB_005f2fc4:
005F2FC4  BB 05 00 00 00            MOV EBX,0x5
switchD_005f29cb::default:
005F2FC9  8A 86 03 01 00 00         MOV AL,byte ptr [ESI + 0x103]
005F2FCF  84 C0                     TEST AL,AL
005F2FD1  74 6F                     JZ 0x005f3042
005F2FD3  8B 86 04 01 00 00         MOV EAX,dword ptr [ESI + 0x104]
005F2FD9  3B C3                     CMP EAX,EBX
005F2FDB  0F 84 34 01 00 00         JZ 0x005f3115
005F2FE1  83 F8 03                  CMP EAX,0x3
005F2FE4  0F 84 2B 01 00 00         JZ 0x005f3115
005F2FEA  83 F8 04                  CMP EAX,0x4
005F2FED  0F 84 22 01 00 00         JZ 0x005f3115
005F2FF3  8B CE                     MOV ECX,ESI
005F2FF5  E8 50 F5 E0 FF            CALL 0x0040254a
005F2FFA  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F2FFD  33 C0                     XOR EAX,EAX
005F2FFF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F3005  5F                        POP EDI
005F3006  5E                        POP ESI
005F3007  5B                        POP EBX
005F3008  8B E5                     MOV ESP,EBP
005F300A  5D                        POP EBP
005F300B  C2 04 00                  RET 0x4
switchD_005f29cb::caseD_4:
005F300E  8A 86 08 01 00 00         MOV AL,byte ptr [ESI + 0x108]
005F3014  8B CE                     MOV ECX,ESI
005F3016  84 C0                     TEST AL,AL
005F3018  0F 84 12 FB FF FF         JZ 0x005f2b30
005F301E  E8 A1 EE E0 FF            CALL 0x00401ec4
005F3023  85 C0                     TEST EAX,EAX
005F3025  75 08                     JNZ 0x005f302f
LAB_005f3027:
005F3027  89 9E 04 01 00 00         MOV dword ptr [ESI + 0x104],EBX
005F302D  EB 9A                     JMP 0x005f2fc9
LAB_005f302f:
005F302F  8A 86 03 01 00 00         MOV AL,byte ptr [ESI + 0x103]
005F3035  84 C0                     TEST AL,AL
005F3037  74 8B                     JZ 0x005f2fc4
005F3039  8B CE                     MOV ECX,ESI
005F303B  E8 13 28 E1 FF            CALL 0x00405853
005F3040  EB 87                     JMP 0x005f2fc9
LAB_005f3042:
005F3042  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
005F3048  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
005F304E  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
005F3054  51                        PUSH ECX
005F3055  52                        PUSH EDX
005F3056  50                        PUSH EAX
005F3057  8B CE                     MOV ECX,ESI
005F3059  E8 A8 FC E0 FF            CALL 0x00402d06
005F305E  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F3061  88 86 03 01 00 00         MOV byte ptr [ESI + 0x103],AL
005F3067  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F306D  33 C0                     XOR EAX,EAX
005F306F  5F                        POP EDI
005F3070  5E                        POP ESI
005F3071  5B                        POP EBX
005F3072  8B E5                     MOV ESP,EBP
005F3074  5D                        POP EBP
005F3075  C2 04 00                  RET 0x4
LAB_005f3078:
005F3078  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F307B  8D 4D E8                  LEA ECX,[EBP + -0x18]
005F307E  51                        PUSH ECX
005F307F  8B CE                     MOV ECX,ESI
005F3081  E8 B7 01 E1 FF            CALL 0x0040323d
005F3086  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005F3089  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F308F  52                        PUSH EDX
005F3090  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F3093  50                        PUSH EAX
005F3094  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F3097  50                        PUSH EAX
005F3098  E8 5C F5 E0 FF            CALL 0x004025f9
005F309D  8D 4D E4                  LEA ECX,[EBP + -0x1c]
005F30A0  51                        PUSH ECX
005F30A1  E8 BA 7F 0B 00            CALL 0x006ab060
005F30A6  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F30A9  33 C0                     XOR EAX,EAX
005F30AB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F30B1  5F                        POP EDI
005F30B2  5E                        POP ESI
005F30B3  5B                        POP EBX
005F30B4  8B E5                     MOV ESP,EBP
005F30B6  5D                        POP EBP
005F30B7  C2 04 00                  RET 0x4
LAB_005f30ba:
005F30BA  2D 12 01 00 00            SUB EAX,0x112
005F30BF  74 27                     JZ 0x005f30e8
005F30C1  48                        DEC EAX
005F30C2  75 51                     JNZ 0x005f3115
005F30C4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F30C7  8B 90 8F 00 00 00         MOV EDX,dword ptr [EAX + 0x8f]
005F30CD  85 D2                     TEST EDX,EDX
005F30CF  7C 44                     JL 0x005f3115
005F30D1  8B 88 04 01 00 00         MOV ECX,dword ptr [EAX + 0x104]
005F30D7  85 C9                     TEST ECX,ECX
005F30D9  74 05                     JZ 0x005f30e0
005F30DB  83 F9 02                  CMP ECX,0x2
005F30DE  75 35                     JNZ 0x005f3115
LAB_005f30e0:
005F30E0  50                        PUSH EAX
005F30E1  68 70 31 40 00            PUSH 0x403170
005F30E6  EB 1F                     JMP 0x005f3107
LAB_005f30e8:
005F30E8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F30EB  8B 90 8F 00 00 00         MOV EDX,dword ptr [EAX + 0x8f]
005F30F1  85 D2                     TEST EDX,EDX
005F30F3  7C 20                     JL 0x005f3115
005F30F5  8B 88 04 01 00 00         MOV ECX,dword ptr [EAX + 0x104]
005F30FB  85 C9                     TEST ECX,ECX
005F30FD  74 05                     JZ 0x005f3104
005F30FF  83 F9 02                  CMP ECX,0x2
005F3102  75 11                     JNZ 0x005f3115
LAB_005f3104:
005F3104  50                        PUSH EAX
005F3105  6A 00                     PUSH 0x0
LAB_005f3107:
005F3107  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F310D  6A 00                     PUSH 0x0
005F310F  52                        PUSH EDX
005F3110  E8 0B 64 0F 00            CALL 0x006e9520
LAB_005f3115:
005F3115  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005F3118  33 C0                     XOR EAX,EAX
005F311A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F3120  5F                        POP EDI
005F3121  5E                        POP ESI
005F3122  5B                        POP EBX
005F3123  8B E5                     MOV ESP,EBP
005F3125  5D                        POP EBP
005F3126  C2 04 00                  RET 0x4
LAB_005f3129:
005F3129  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
005F312C  68 BC E6 7C 00            PUSH 0x7ce6bc
005F3131  68 CC 4C 7A 00            PUSH 0x7a4ccc
005F3136  56                        PUSH ESI
005F3137  6A 00                     PUSH 0x0
005F3139  68 63 01 00 00            PUSH 0x163
005F313E  68 94 E6 7C 00            PUSH 0x7ce694
005F3143  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005F3148  E8 83 A3 0B 00            CALL 0x006ad4d0
005F314D  83 C4 18                  ADD ESP,0x18
005F3150  85 C0                     TEST EAX,EAX
005F3152  74 01                     JZ 0x005f3155
005F3154  CC                        INT3
LAB_005f3155:
005F3155  68 65 01 00 00            PUSH 0x165
005F315A  68 94 E6 7C 00            PUSH 0x7ce694
005F315F  6A 00                     PUSH 0x0
005F3161  56                        PUSH ESI
005F3162  E8 D9 2C 0B 00            CALL 0x006a5e40
005F3167  5F                        POP EDI
005F3168  5E                        POP ESI
005F3169  B8 FF FF 00 00            MOV EAX,0xffff
005F316E  5B                        POP EBX
005F316F  8B E5                     MOV ESP,EBP
005F3171  5D                        POP EBP
005F3172  C2 04 00                  RET 0x4
