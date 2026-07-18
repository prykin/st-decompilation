FUN_005ee6e0:
005EE6E0  55                        PUSH EBP
005EE6E1  8B EC                     MOV EBP,ESP
005EE6E3  83 EC 34                  SUB ESP,0x34
005EE6E6  53                        PUSH EBX
005EE6E7  56                        PUSH ESI
005EE6E8  8B F1                     MOV ESI,ECX
005EE6EA  57                        PUSH EDI
005EE6EB  33 FF                     XOR EDI,EDI
005EE6ED  8B 86 3A 02 00 00         MOV EAX,dword ptr [ESI + 0x23a]
005EE6F3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005EE6F6  83 F8 08                  CMP EAX,0x8
005EE6F9  0F 87 F3 06 00 00         JA 0x005eedf2
switchD_005ee6ff::switchD:
005EE6FF  FF 24 85 FC ED 5E 00      JMP dword ptr [EAX*0x4 + 0x5eedfc]
switchD_005ee6ff::caseD_0:
005EE706  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005EE70B  8B 8E 8F 02 00 00         MOV ECX,dword ptr [ESI + 0x28f]
005EE711  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005EE717  3B C1                     CMP EAX,ECX
005EE719  0F 82 D3 06 00 00         JC 0x005eedf2
005EE71F  89 86 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EAX
005EE725  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005EE728  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005EE72E  33 D2                     XOR EDX,EDX
005EE730  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005EE736  B9 0B 00 00 00            MOV ECX,0xb
005EE73B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005EE73E  C1 E8 10                  SHR EAX,0x10
005EE741  F7 F1                     DIV ECX
005EE743  8B 8E BA 02 00 00         MOV ECX,dword ptr [ESI + 0x2ba]
005EE749  B8 1E 00 00 00            MOV EAX,0x1e
005EE74E  2B C2                     SUB EAX,EDX
005EE750  8B 96 7F 02 00 00         MOV EDX,dword ptr [ESI + 0x27f]
005EE756  50                        PUSH EAX
005EE757  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005EE75D  57                        PUSH EDI
005EE75E  83 EA 1E                  SUB EDX,0x1e
005EE761  51                        PUSH ECX
005EE762  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005EE768  52                        PUSH EDX
005EE769  50                        PUSH EAX
005EE76A  51                        PUSH ECX
005EE76B  8B CE                     MOV ECX,ESI
005EE76D  E8 54 58 E1 FF            CALL 0x00403fc6
005EE772  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
005EE778  B8 01 00 00 00            MOV EAX,0x1
005EE77D  0B C8                     OR ECX,EAX
005EE77F  89 86 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EAX
005EE785  89 8E 1C 03 00 00         MOV dword ptr [ESI + 0x31c],ECX
005EE78B  5F                        POP EDI
005EE78C  5E                        POP ESI
005EE78D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005EE790  5B                        POP EBX
005EE791  8B E5                     MOV ESP,EBP
005EE793  5D                        POP EBP
005EE794  C3                        RET
switchD_005ee6ff::caseD_7:
005EE795  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005EE79B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005EE7A2  84 C0                     TEST AL,AL
005EE7A4  0F 85 48 06 00 00         JNZ 0x005eedf2
005EE7AA  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EE7B0  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EE7B6  89 BE 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EDI
005EE7BC  83 C0 0A                  ADD EAX,0xa
005EE7BF  5F                        POP EDI
005EE7C0  89 86 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EAX
005EE7C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EE7C9  5E                        POP ESI
005EE7CA  5B                        POP EBX
005EE7CB  8B E5                     MOV ESP,EBP
005EE7CD  5D                        POP EBP
005EE7CE  C3                        RET
switchD_005ee6ff::caseD_1:
005EE7CF  8D 4D F0                  LEA ECX,[EBP + -0x10]
005EE7D2  8D 55 F4                  LEA EDX,[EBP + -0xc]
005EE7D5  51                        PUSH ECX
005EE7D6  8D 45 F8                  LEA EAX,[EBP + -0x8]
005EE7D9  52                        PUSH EDX
005EE7DA  50                        PUSH EAX
005EE7DB  8B CE                     MOV ECX,ESI
005EE7DD  E8 F1 6D E1 FF            CALL 0x004055d3
005EE7E2  85 C0                     TEST EAX,EAX
005EE7E4  BB 03 00 00 00            MOV EBX,0x3
005EE7E9  0F 84 BC 00 00 00         JZ 0x005ee8ab
005EE7EF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005EE7F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005EE7F5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005EE7F8  89 86 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EAX
005EE7FE  8A 86 17 03 00 00         MOV AL,byte ptr [ESI + 0x317]
005EE804  89 8E 77 02 00 00         MOV dword ptr [ESI + 0x277],ECX
005EE80A  84 C0                     TEST AL,AL
005EE80C  89 96 7B 02 00 00         MOV dword ptr [ESI + 0x27b],EDX
005EE812  0F 84 8C 00 00 00         JZ 0x005ee8a4
005EE818  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EE81E  84 99 E4 00 00 00         TEST byte ptr [ECX + 0xe4],BL
005EE824  75 7E                     JNZ 0x005ee8a4
005EE826  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
005EE82C  84 C0                     TEST AL,AL
005EE82E  75 74                     JNZ 0x005ee8a4
005EE830  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005EE836  84 C0                     TEST AL,AL
005EE838  75 6A                     JNZ 0x005ee8a4
005EE83A  8B CE                     MOV ECX,ESI
005EE83C  E8 7C 2E E1 FF            CALL 0x004016bd
005EE841  85 C0                     TEST EAX,EAX
005EE843  74 2B                     JZ 0x005ee870
005EE845  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
005EE84C  C6 86 4F 02 00 00 01      MOV byte ptr [ESI + 0x24f],0x1
005EE853  89 9E 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EBX
005EE859  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EE85F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EE865  83 C0 0A                  ADD EAX,0xa
005EE868  89 86 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EAX
005EE86E  EB 34                     JMP 0x005ee8a4
LAB_005ee870:
005EE870  8B CE                     MOV ECX,ESI
005EE872  E8 B2 67 E1 FF            CALL 0x00405029
005EE877  85 C0                     TEST EAX,EAX
005EE879  74 29                     JZ 0x005ee8a4
005EE87B  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
005EE882  C6 86 4F 02 00 00 01      MOV byte ptr [ESI + 0x24f],0x1
005EE889  89 9E 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EBX
005EE88F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EE895  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005EE89B  83 C2 0A                  ADD EDX,0xa
005EE89E  89 96 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EDX
LAB_005ee8a4:
005EE8A4  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005ee8ab:
005EE8AB  8B 86 3A 02 00 00         MOV EAX,dword ptr [ESI + 0x23a]
005EE8B1  83 F8 01                  CMP EAX,0x1
005EE8B4  0F 84 38 05 00 00         JZ 0x005eedf2
005EE8BA  3B C3                     CMP EAX,EBX
005EE8BC  0F 84 30 05 00 00         JZ 0x005eedf2
005EE8C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EE8C5  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
005EE8CC  5F                        POP EDI
005EE8CD  5E                        POP ESI
005EE8CE  5B                        POP EBX
005EE8CF  8B E5                     MOV ESP,EBP
005EE8D1  5D                        POP EBP
005EE8D2  C3                        RET
switchD_005ee6ff::caseD_3:
005EE8D3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005EE8D8  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005EE8DE  8B 86 8F 02 00 00         MOV EAX,dword ptr [ESI + 0x28f]
005EE8E4  3B C8                     CMP ECX,EAX
005EE8E6  0F 82 FD 00 00 00         JC 0x005ee9e9
005EE8EC  80 BE 50 02 00 00 02      CMP byte ptr [ESI + 0x250],0x2
005EE8F3  75 54                     JNZ 0x005ee949
005EE8F5  8B CE                     MOV ECX,ESI
005EE8F7  E8 02 33 E1 FF            CALL 0x00401bfe
005EE8FC  3B C7                     CMP EAX,EDI
005EE8FE  0F 8C D7 00 00 00         JL 0x005ee9db
005EE904  0F 8E DF 00 00 00         JLE 0x005ee9e9
005EE90A  83 F8 01                  CMP EAX,0x1
005EE90D  7E 24                     JLE 0x005ee933
005EE90F  C7 86 3A 02 00 00 08 00 00 00  MOV dword ptr [ESI + 0x23a],0x8
005EE919  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EE91F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EE925  83 C0 15                  ADD EAX,0x15
005EE928  89 86 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EAX
005EE92E  E9 B6 00 00 00            JMP 0x005ee9e9
LAB_005ee933:
005EE933  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
005EE93D  C6 86 50 02 00 00 03      MOV byte ptr [ESI + 0x250],0x3
005EE944  E9 A0 00 00 00            JMP 0x005ee9e9
LAB_005ee949:
005EE949  8D 4D EC                  LEA ECX,[EBP + -0x14]
005EE94C  8D 55 F0                  LEA EDX,[EBP + -0x10]
005EE94F  51                        PUSH ECX
005EE950  8D 45 F4                  LEA EAX,[EBP + -0xc]
005EE953  52                        PUSH EDX
005EE954  8D 4D F8                  LEA ECX,[EBP + -0x8]
005EE957  50                        PUSH EAX
005EE958  51                        PUSH ECX
005EE959  8B CE                     MOV ECX,ESI
005EE95B  E8 9D 56 E1 FF            CALL 0x00403ffd
005EE960  85 C0                     TEST EAX,EAX
005EE962  74 52                     JZ 0x005ee9b6
005EE964  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005EE967  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005EE96A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005EE96D  89 86 7B 02 00 00         MOV dword ptr [ESI + 0x27b],EAX
005EE973  8B 86 83 02 00 00         MOV EAX,dword ptr [ESI + 0x283]
005EE979  89 96 77 02 00 00         MOV dword ptr [ESI + 0x277],EDX
005EE97F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005EE982  3B C7                     CMP EAX,EDI
005EE984  89 8E 7F 02 00 00         MOV dword ptr [ESI + 0x27f],ECX
005EE98A  89 96 BA 02 00 00         MOV dword ptr [ESI + 0x2ba],EDX
005EE990  75 1B                     JNZ 0x005ee9ad
005EE992  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005EE998  84 C0                     TEST AL,AL
005EE99A  74 11                     JZ 0x005ee9ad
005EE99C  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
005EE9A2  84 C0                     TEST AL,AL
005EE9A4  74 07                     JZ 0x005ee9ad
005EE9A6  C6 86 50 02 00 00 02      MOV byte ptr [ESI + 0x250],0x2
LAB_005ee9ad:
005EE9AD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005EE9B4  EB 33                     JMP 0x005ee9e9
LAB_005ee9b6:
005EE9B6  8B 86 73 02 00 00         MOV EAX,dword ptr [ESI + 0x273]
005EE9BC  8B CE                     MOV ECX,ESI
005EE9BE  50                        PUSH EAX
005EE9BF  E8 5F 58 E1 FF            CALL 0x00404223
005EE9C4  85 C0                     TEST EAX,EAX
005EE9C6  74 0C                     JZ 0x005ee9d4
005EE9C8  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
005EE9D2  EB 07                     JMP 0x005ee9db
LAB_005ee9d4:
005EE9D4  8B CE                     MOV ECX,ESI
005EE9D6  E8 9C 59 E1 FF            CALL 0x00404377
LAB_005ee9db:
005EE9DB  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
005EE9E2  C6 86 4F 02 00 00 00      MOV byte ptr [ESI + 0x24f],0x0
LAB_005ee9e9:
005EE9E9  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
005EE9EF  84 C0                     TEST AL,AL
005EE9F1  0F 85 FB 03 00 00         JNZ 0x005eedf2
005EE9F7  83 BE 3A 02 00 00 06      CMP dword ptr [ESI + 0x23a],0x6
005EE9FE  0F 84 EE 03 00 00         JZ 0x005eedf2
005EEA04  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEA07  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
005EEA0E  C6 86 4F 02 00 00 00      MOV byte ptr [ESI + 0x24f],0x0
005EEA15  5F                        POP EDI
005EEA16  5E                        POP ESI
005EEA17  5B                        POP EBX
005EEA18  8B E5                     MOV ESP,EBP
005EEA1A  5D                        POP EBP
005EEA1B  C3                        RET
switchD_005ee6ff::caseD_2:
005EEA1C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EEA22  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
005EEA28  8B 8E 8F 02 00 00         MOV ECX,dword ptr [ESI + 0x28f]
005EEA2E  3B C1                     CMP EAX,ECX
005EEA30  0F 82 A7 00 00 00         JC 0x005eeadd
005EEA36  8D 55 EC                  LEA EDX,[EBP + -0x14]
005EEA39  8D 45 F0                  LEA EAX,[EBP + -0x10]
005EEA3C  52                        PUSH EDX
005EEA3D  8D 4D F4                  LEA ECX,[EBP + -0xc]
005EEA40  50                        PUSH EAX
005EEA41  8D 55 F8                  LEA EDX,[EBP + -0x8]
005EEA44  51                        PUSH ECX
005EEA45  52                        PUSH EDX
005EEA46  8B CE                     MOV ECX,ESI
005EEA48  E8 B0 55 E1 FF            CALL 0x00403ffd
005EEA4D  85 C0                     TEST EAX,EAX
005EEA4F  0F 84 9D 03 00 00         JZ 0x005eedf2
005EEA55  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005EEA58  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005EEA5B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005EEA5E  89 86 77 02 00 00         MOV dword ptr [ESI + 0x277],EAX
005EEA64  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005EEA67  89 8E 7B 02 00 00         MOV dword ptr [ESI + 0x27b],ECX
005EEA6D  89 86 BA 02 00 00         MOV dword ptr [ESI + 0x2ba],EAX
005EEA73  8B 86 83 02 00 00         MOV EAX,dword ptr [ESI + 0x283]
005EEA79  3B C7                     CMP EAX,EDI
005EEA7B  89 96 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EDX
005EEA81  75 49                     JNZ 0x005eeacc
005EEA83  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005EEA89  84 C0                     TEST AL,AL
005EEA8B  74 24                     JZ 0x005eeab1
005EEA8D  6A 01                     PUSH 0x1
005EEA8F  8B CE                     MOV ECX,ESI
005EEA91  E8 11 47 E1 FF            CALL 0x004031a7
005EEA96  C7 86 3A 02 00 00 07 00 00 00  MOV dword ptr [ESI + 0x23a],0x7
005EEAA0  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005EEAA7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEAAA  5F                        POP EDI
005EEAAB  5E                        POP ESI
005EEAAC  5B                        POP EBX
005EEAAD  8B E5                     MOV ESP,EBP
005EEAAF  5D                        POP EBP
005EEAB0  C3                        RET
LAB_005eeab1:
005EEAB1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EEAB7  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005EEABD  89 BE 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EDI
005EEAC3  83 C2 0A                  ADD EDX,0xa
005EEAC6  89 96 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EDX
LAB_005eeacc:
005EEACC  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005EEAD3  5F                        POP EDI
005EEAD4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEAD7  5E                        POP ESI
005EEAD8  5B                        POP EBX
005EEAD9  8B E5                     MOV ESP,EBP
005EEADB  5D                        POP EBP
005EEADC  C3                        RET
LAB_005eeadd:
005EEADD  41                        INC ECX
005EEADE  3B C1                     CMP EAX,ECX
005EEAE0  0F 85 0C 03 00 00         JNZ 0x005eedf2
005EEAE6  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005EEAEC  3B CF                     CMP ECX,EDI
005EEAEE  0F 84 FE 02 00 00         JZ 0x005eedf2
005EEAF4  8B B6 ED 01 00 00         MOV ESI,dword ptr [ESI + 0x1ed]
005EEAFA  3B F7                     CMP ESI,EDI
005EEAFC  0F 8C F0 02 00 00         JL 0x005eedf2
005EEB02  56                        PUSH ESI
005EEB03  E8 E8 B7 0F 00            CALL 0x006ea2f0
005EEB08  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEB0B  5F                        POP EDI
005EEB0C  5E                        POP ESI
005EEB0D  5B                        POP EBX
005EEB0E  8B E5                     MOV ESP,EBP
005EEB10  5D                        POP EBP
005EEB11  C3                        RET
switchD_005ee6ff::caseD_4:
005EEB12  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005EEB15  8D 4D CC                  LEA ECX,[EBP + -0x34]
005EEB18  51                        PUSH ECX
005EEB19  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EEB1F  C7 45 DC 29 01 00 00      MOV dword ptr [EBP + -0x24],0x129
005EEB26  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
005EEB2D  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005EEB30  E8 DB 6C 0F 00            CALL 0x006e5810
005EEB35  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEB38  5F                        POP EDI
005EEB39  5E                        POP ESI
005EEB3A  5B                        POP EBX
005EEB3B  8B E5                     MOV ESP,EBP
005EEB3D  5D                        POP EBP
005EEB3E  C3                        RET
switchD_005ee6ff::caseD_8:
005EEB3F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EEB45  8B 8E 8F 02 00 00         MOV ECX,dword ptr [ESI + 0x28f]
005EEB4B  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EEB51  3B C1                     CMP EAX,ECX
005EEB53  0F 82 99 02 00 00         JC 0x005eedf2
005EEB59  8B CE                     MOV ECX,ESI
005EEB5B  E8 DD 37 E1 FF            CALL 0x0040233d
005EEB60  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEB63  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
005EEB6D  5F                        POP EDI
005EEB6E  5E                        POP ESI
005EEB6F  5B                        POP EBX
005EEB70  8B E5                     MOV ESP,EBP
005EEB72  5D                        POP EBP
005EEB73  C3                        RET
switchD_005ee6ff::caseD_6:
005EEB74  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
005EEB77  0F BF 86 46 02 00 00      MOVSX EAX,word ptr [ESI + 0x246]
005EEB7E  0F BF 8E 44 02 00 00      MOVSX ECX,word ptr [ESI + 0x244]
005EEB85  0F BF 96 42 02 00 00      MOVSX EDX,word ptr [ESI + 0x242]
005EEB8C  53                        PUSH EBX
005EEB8D  56                        PUSH ESI
005EEB8E  57                        PUSH EDI
005EEB8F  50                        PUSH EAX
005EEB90  51                        PUSH ECX
005EEB91  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EEB97  52                        PUSH EDX
005EEB98  E8 24 63 E1 FF            CALL 0x00404ec1
005EEB9D  85 C0                     TEST EAX,EAX
005EEB9F  0F 85 4D 02 00 00         JNZ 0x005eedf2
005EEBA5  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005EEBAB  5F                        POP EDI
005EEBAC  FE C8                     DEC AL
005EEBAE  88 86 52 02 00 00         MOV byte ptr [ESI + 0x252],AL
005EEBB4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEBB7  5E                        POP ESI
005EEBB8  5B                        POP EBX
005EEBB9  8B E5                     MOV ESP,EBP
005EEBBB  5D                        POP EBP
005EEBBC  C3                        RET
switchD_005ee6ff::caseD_5:
005EEBBD  33 C0                     XOR EAX,EAX
005EEBBF  8A 86 15 03 00 00         MOV AL,byte ptr [ESI + 0x315]
005EEBC5  83 E8 03                  SUB EAX,0x3
005EEBC8  0F 84 FC 01 00 00         JZ 0x005eedca
005EEBCE  83 E8 02                  SUB EAX,0x2
005EEBD1  0F 84 E9 01 00 00         JZ 0x005eedc0
005EEBD7  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
005EEBDD  6A 08                     PUSH 0x8
005EEBDF  8B CB                     MOV ECX,EBX
005EEBE1  E8 C9 56 E1 FF            CALL 0x004042af
005EEBE6  8B F8                     MOV EDI,EAX
005EEBE8  83 FF 01                  CMP EDI,0x1
005EEBEB  75 1A                     JNZ 0x005eec07
005EEBED  6A 0F                     PUSH 0xf
005EEBEF  8B CB                     MOV ECX,EBX
005EEBF1  E8 6E 56 E1 FF            CALL 0x00404264
005EEBF6  6A 00                     PUSH 0x0
005EEBF8  8B CB                     MOV ECX,EBX
005EEBFA  E8 65 56 E1 FF            CALL 0x00404264
005EEBFF  57                        PUSH EDI
005EEC00  8B CB                     MOV ECX,EBX
005EEC02  E8 5D 56 E1 FF            CALL 0x00404264
LAB_005eec07:
005EEC07  33 C0                     XOR EAX,EAX
005EEC09  8A 86 DF 02 00 00         MOV AL,byte ptr [ESI + 0x2df]
005EEC0F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EEC12  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005EEC15  3B 3C 4D 52 DF 7C 00      CMP EDI,dword ptr [ECX*0x2 + 0x7cdf52]
005EEC1C  0F 85 05 01 00 00         JNZ 0x005eed27
005EEC22  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005EEC25  0F BF 86 46 02 00 00      MOVSX EAX,word ptr [ESI + 0x246]
005EEC2C  0F BF 8E 44 02 00 00      MOVSX ECX,word ptr [ESI + 0x244]
005EEC33  52                        PUSH EDX
005EEC34  56                        PUSH ESI
005EEC35  6A 00                     PUSH 0x0
005EEC37  50                        PUSH EAX
005EEC38  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005EEC3F  51                        PUSH ECX
005EEC40  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EEC46  50                        PUSH EAX
005EEC47  E8 75 62 E1 FF            CALL 0x00404ec1
005EEC4C  85 C0                     TEST EAX,EAX
005EEC4E  75 06                     JNZ 0x005eec56
005EEC50  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005eec56:
005EEC56  6A 0E                     PUSH 0xe
005EEC58  8B CB                     MOV ECX,EBX
005EEC5A  E8 05 56 E1 FF            CALL 0x00404264
005EEC5F  8A 86 15 03 00 00         MOV AL,byte ptr [ESI + 0x315]
005EEC65  3C 04                     CMP AL,0x4
005EEC67  74 04                     JZ 0x005eec6d
005EEC69  3C 02                     CMP AL,0x2
005EEC6B  75 30                     JNZ 0x005eec9d
LAB_005eec6d:
005EEC6D  6A 00                     PUSH 0x0
005EEC6F  6A FF                     PUSH -0x1
005EEC71  8B CB                     MOV ECX,EBX
005EEC73  E8 54 66 E1 FF            CALL 0x004052cc
005EEC78  8B 8E 31 02 00 00         MOV ECX,dword ptr [ESI + 0x231]
005EEC7E  50                        PUSH EAX
005EEC7F  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
005EEC83  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
005EEC87  50                        PUSH EAX
005EEC88  56                        PUSH ESI
005EEC89  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005EEC8D  51                        PUSH ECX
005EEC8E  52                        PUSH EDX
005EEC8F  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
005EEC93  50                        PUSH EAX
005EEC94  51                        PUSH ECX
005EEC95  E8 A4 35 E1 FF            CALL 0x0040223e
005EEC9A  83 C4 24                  ADD ESP,0x24
LAB_005eec9d:
005EEC9D  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
005EECA3  2D FD 00 00 00            SUB EAX,0xfd
005EECA8  74 34                     JZ 0x005eecde
005EECAA  48                        DEC EAX
005EECAB  75 6A                     JNZ 0x005eed17
005EECAD  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
005EECB2  85 C0                     TEST EAX,EAX
005EECB4  74 61                     JZ 0x005eed17
005EECB6  8B CE                     MOV ECX,ESI
005EECB8  E8 3D 2E E1 FF            CALL 0x00401afa
005EECBD  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
005EECC1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EECC7  33 D2                     XOR EDX,EDX
005EECC9  66 8B 96 0F 03 00 00      MOV DX,word ptr [ESI + 0x30f]
005EECD0  52                        PUSH EDX
005EECD1  56                        PUSH ESI
005EECD2  50                        PUSH EAX
005EECD3  E8 8C 32 E1 FF            CALL 0x00401f64
005EECD8  85 C0                     TEST EAX,EAX
005EECDA  74 3B                     JZ 0x005eed17
005EECDC  EB 2F                     JMP 0x005eed0d
LAB_005eecde:
005EECDE  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
005EECE3  85 C0                     TEST EAX,EAX
005EECE5  74 30                     JZ 0x005eed17
005EECE7  8B CE                     MOV ECX,ESI
005EECE9  E8 EC 39 E1 FF            CALL 0x004026da
005EECEE  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
005EECF2  33 C9                     XOR ECX,ECX
005EECF4  66 8B 8E 0F 03 00 00      MOV CX,word ptr [ESI + 0x30f]
005EECFB  51                        PUSH ECX
005EECFC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EED02  56                        PUSH ESI
005EED03  52                        PUSH EDX
005EED04  E8 54 4D E1 FF            CALL 0x00403a5d
005EED09  85 C0                     TEST EAX,EAX
005EED0B  74 0A                     JZ 0x005eed17
LAB_005eed0d:
005EED0D  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
LAB_005eed17:
005EED17  83 BE 3A 02 00 00 06      CMP dword ptr [ESI + 0x23a],0x6
005EED1E  74 07                     JZ 0x005eed27
005EED20  C6 86 E4 02 00 00 00      MOV byte ptr [ESI + 0x2e4],0x0
LAB_005eed27:
005EED27  33 C0                     XOR EAX,EAX
005EED29  8A 86 DF 02 00 00         MOV AL,byte ptr [ESI + 0x2df]
005EED2F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EED32  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EED35  3B 3C 45 56 DF 7C 00      CMP EDI,dword ptr [EAX*0x2 + 0x7cdf56]
005EED3C  75 07                     JNZ 0x005eed45
005EED3E  8B CB                     MOV ECX,EBX
005EED40  E8 4B 3D E1 FF            CALL 0x00402a90
LAB_005eed45:
005EED45  33 C0                     XOR EAX,EAX
005EED47  8A 86 DF 02 00 00         MOV AL,byte ptr [ESI + 0x2df]
005EED4D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EED50  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005EED53  3B 3C 4D 5A DF 7C 00      CMP EDI,dword ptr [ECX*0x2 + 0x7cdf5a]
005EED5A  75 16                     JNZ 0x005eed72
005EED5C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EED62  8B CB                     MOV ECX,EBX
005EED64  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EED6A  50                        PUSH EAX
005EED6B  6A 09                     PUSH 0x9
005EED6D  E8 CE 64 E1 FF            CALL 0x00405240
LAB_005eed72:
005EED72  33 C0                     XOR EAX,EAX
005EED74  8A 86 DF 02 00 00         MOV AL,byte ptr [ESI + 0x2df]
005EED7A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EED7D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EED80  D1 E0                     SHL EAX,0x1
005EED82  3B B8 5A DF 7C 00         CMP EDI,dword ptr [EAX + 0x7cdf5a]
005EED88  7E 14                     JLE 0x005eed9e
005EED8A  8B 88 4E DF 7C 00         MOV ECX,dword ptr [EAX + 0x7cdf4e]
005EED90  49                        DEC ECX
005EED91  3B F9                     CMP EDI,ECX
005EED93  75 09                     JNZ 0x005eed9e
005EED95  6A 08                     PUSH 0x8
005EED97  8B CB                     MOV ECX,EBX
005EED99  E8 C6 54 E1 FF            CALL 0x00404264
LAB_005eed9e:
005EED9E  6A 09                     PUSH 0x9
005EEDA0  8B CB                     MOV ECX,EBX
005EEDA2  E8 08 55 E1 FF            CALL 0x004042af
005EEDA7  33 C9                     XOR ECX,ECX
005EEDA9  8A 8E DF 02 00 00         MOV CL,byte ptr [ESI + 0x2df]
005EEDAF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005EEDB2  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
005EEDB5  3B 04 55 5E DF 7C 00      CMP EAX,dword ptr [EDX*0x2 + 0x7cdf5e]
005EEDBC  75 2B                     JNZ 0x005eede9
005EEDBE  EB 1F                     JMP 0x005eeddf
LAB_005eedc0:
005EEDC0  39 BE D2 02 00 00         CMP dword ptr [ESI + 0x2d2],EDI
005EEDC6  7D 21                     JGE 0x005eede9
005EEDC8  EB 15                     JMP 0x005eeddf
LAB_005eedca:
005EEDCA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005EEDCF  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005EEDD5  8B 86 E0 02 00 00         MOV EAX,dword ptr [ESI + 0x2e0]
005EEDDB  3B C8                     CMP ECX,EAX
005EEDDD  75 0A                     JNZ 0x005eede9
LAB_005eeddf:
005EEDDF  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
LAB_005eede9:
005EEDE9  6A 01                     PUSH 0x1
005EEDEB  8B CE                     MOV ECX,ESI
005EEDED  E8 1C 2D E1 FF            CALL 0x00401b0e
switchD_005ee6ff::default:
005EEDF2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EEDF5  5F                        POP EDI
005EEDF6  5E                        POP ESI
005EEDF7  5B                        POP EBX
005EEDF8  8B E5                     MOV ESP,EBP
005EEDFA  5D                        POP EBP
005EEDFB  C3                        RET
