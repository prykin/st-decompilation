FUN_005ff430:
005FF430  55                        PUSH EBP
005FF431  8B EC                     MOV EBP,ESP
005FF433  53                        PUSH EBX
005FF434  56                        PUSH ESI
005FF435  8B F1                     MOV ESI,ECX
005FF437  57                        PUSH EDI
005FF438  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005FF43B  33 FF                     XOR EDI,EDI
005FF43D  81 F9 30 75 00 00         CMP ECX,0x7530
005FF443  0F 84 E0 00 00 00         JZ 0x005ff529
005FF449  8B 86 3F 02 00 00         MOV EAX,dword ptr [ESI + 0x23f]
005FF44F  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
005FF452  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005FF455  8B 86 3B 02 00 00         MOV EAX,dword ptr [ESI + 0x23b]
005FF45B  8D 1C D0                  LEA EBX,[EAX + EDX*0x8]
005FF45E  8B 96 3F 02 00 00         MOV EDX,dword ptr [ESI + 0x23f]
005FF464  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
005FF467  8B 8E 3B 02 00 00         MOV ECX,dword ptr [ESI + 0x23b]
005FF46D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005FF470  8B 54 C1 04               MOV EDX,dword ptr [ECX + EAX*0x8 + 0x4]
005FF474  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005FF47A  52                        PUSH EDX
005FF47B  E8 D2 4B E0 FF            CALL 0x00404052
005FF480  8A 4B 08                  MOV CL,byte ptr [EBX + 0x8]
005FF483  50                        PUSH EAX
005FF484  66 8B 03                  MOV AX,word ptr [EBX]
005FF487  50                        PUSH EAX
005FF488  51                        PUSH ECX
005FF489  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FF48F  E8 26 34 E0 FF            CALL 0x004028ba
005FF494  8B D8                     MOV EBX,EAX
005FF496  85 DB                     TEST EBX,EBX
005FF498  0F 84 FB 07 00 00         JZ 0x005ffc99
005FF49E  8D 55 1A                  LEA EDX,[EBP + 0x1a]
005FF4A1  8D 45 14                  LEA EAX,[EBP + 0x14]
005FF4A4  52                        PUSH EDX
005FF4A5  8D 4D 10                  LEA ECX,[EBP + 0x10]
005FF4A8  50                        PUSH EAX
005FF4A9  51                        PUSH ECX
005FF4AA  8B CB                     MOV ECX,EBX
005FF4AC  E8 32 3D E0 FF            CALL 0x004031e3
005FF4B1  8B 13                     MOV EDX,dword ptr [EBX]
005FF4B3  8B CB                     MOV ECX,EBX
005FF4B5  FF 52 78                  CALL dword ptr [EDX + 0x78]
005FF4B8  85 C0                     TEST EAX,EAX
005FF4BA  0F 8E D9 07 00 00         JLE 0x005ffc99
005FF4C0  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF4C3  33 D2                     XOR EDX,EDX
005FF4C5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF4CB  05 39 30 00 00            ADD EAX,0x3039
005FF4D0  B9 1F 00 00 00            MOV ECX,0x1f
005FF4D5  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF4D8  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FF4DB  C1 E8 10                  SHR EAX,0x10
005FF4DE  F7 F1                     DIV ECX
005FF4E0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF4E3  03 D7                     ADD EDX,EDI
005FF4E5  BF 01 00 00 00            MOV EDI,0x1
005FF4EA  66 89 10                  MOV word ptr [EAX],DX
005FF4ED  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF4F0  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF4F6  33 D2                     XOR EDX,EDX
005FF4F8  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF4FE  B9 1F 00 00 00            MOV ECX,0x1f
005FF503  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF506  C1 E8 10                  SHR EAX,0x10
005FF509  F7 F1                     DIV ECX
005FF50B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005FF50E  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
005FF511  03 D0                     ADD EDX,EAX
005FF513  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005FF516  66 89 10                  MOV word ptr [EAX],DX
005FF519  66 8B 55 1A               MOV DX,word ptr [EBP + 0x1a]
005FF51D  8B C7                     MOV EAX,EDI
005FF51F  5F                        POP EDI
005FF520  5E                        POP ESI
005FF521  66 89 11                  MOV word ptr [ECX],DX
005FF524  5B                        POP EBX
005FF525  5D                        POP EBP
005FF526  C2 20 00                  RET 0x20
LAB_005ff529:
005FF529  8B 86 2E 02 00 00         MOV EAX,dword ptr [ESI + 0x22e]
005FF52F  83 F8 05                  CMP EAX,0x5
005FF532  0F 8C 9B 05 00 00         JL 0x005ffad3
005FF538  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FF53B  0F 85 58 02 00 00         JNZ 0x005ff799
005FF541  83 F8 09                  CMP EAX,0x9
005FF544  0F 8D 89 05 00 00         JGE 0x005ffad3
005FF54A  83 F8 08                  CMP EAX,0x8
005FF54D  0F 87 80 05 00 00         JA 0x005ffad3
switchD_005ff553::switchD:
005FF553  FF 24 85 A4 FC 5F 00      JMP dword ptr [EAX*0x4 + 0x5ffca4]
switchD_005ff553::caseD_0:
005FF55A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF55D  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF564  66 89 01                  MOV word ptr [ECX],AX
005FF567  66 8B 96 1C 02 00 00      MOV DX,word ptr [ESI + 0x21c]
005FF56E  E9 C1 04 00 00            JMP 0x005ffa34
switchD_005ff553::caseD_1:
005FF573  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF576  33 D2                     XOR EDX,EDX
005FF578  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF57E  05 39 30 00 00            ADD EAX,0x3039
005FF583  B9 3D 00 00 00            MOV ECX,0x3d
005FF588  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF58B  C1 E8 10                  SHR EAX,0x10
005FF58E  F7 F1                     DIV ECX
005FF590  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FF597  81 C2 AB 00 00 00         ADD EDX,0xab
005FF59D  E9 27 03 00 00            JMP 0x005ff8c9
switchD_005ff553::caseD_2:
005FF5A2  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF5A5  B9 3D 00 00 00            MOV ECX,0x3d
005FF5AA  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF5B0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FF5B6  33 D2                     XOR EDX,EDX
005FF5B8  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF5BB  C1 E8 10                  SHR EAX,0x10
005FF5BE  F7 F1                     DIV ECX
005FF5C0  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF5C7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF5CA  66 2B C2                  SUB AX,DX
005FF5CD  2D AB 00 00 00            SUB EAX,0xab
005FF5D2  66 89 01                  MOV word ptr [ECX],AX
005FF5D5  66 8B 96 1C 02 00 00      MOV DX,word ptr [ESI + 0x21c]
005FF5DC  E9 53 04 00 00            JMP 0x005ffa34
switchD_005ff553::caseD_3:
005FF5E1  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
LAB_005ff5e8:
005FF5E8  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF5EB  66 89 01                  MOV word ptr [ECX],AX
005FF5EE  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF5F1  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF5F7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_005ff5fd:
005FF5FD  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF600  33 D2                     XOR EDX,EDX
005FF602  C1 E8 10                  SHR EAX,0x10
005FF605  B9 3D 00 00 00            MOV ECX,0x3d
005FF60A  F7 F1                     DIV ECX
005FF60C  66 03 96 1C 02 00 00      ADD DX,word ptr [ESI + 0x21c]
005FF613  81 C2 AB 00 00 00         ADD EDX,0xab
005FF619  E9 16 04 00 00            JMP 0x005ffa34
switchD_005ff553::caseD_4:
005FF61E  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
LAB_005ff625:
005FF625  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF628  66 89 01                  MOV word ptr [ECX],AX
005FF62B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF62E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF634  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_005ff63a:
005FF63A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF63D  33 D2                     XOR EDX,EDX
005FF63F  C1 E8 10                  SHR EAX,0x10
005FF642  B9 3D 00 00 00            MOV ECX,0x3d
005FF647  F7 F1                     DIV ECX
005FF649  66 8B 86 1C 02 00 00      MOV AX,word ptr [ESI + 0x21c]
005FF650  66 2B C2                  SUB AX,DX
005FF653  2D AB 00 00 00            SUB EAX,0xab
005FF658  E9 55 04 00 00            JMP 0x005ffab2
switchD_005ff553::caseD_5:
005FF65D  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF660  33 D2                     XOR EDX,EDX
005FF662  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF668  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF66E  B9 3D 00 00 00            MOV ECX,0x3d
005FF673  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF676  C1 E8 10                  SHR EAX,0x10
005FF679  F7 F1                     DIV ECX
005FF67B  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF682  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF685  66 2B C2                  SUB AX,DX
005FF688  83 E8 7E                  SUB EAX,0x7e
005FF68B  66 89 01                  MOV word ptr [ECX],AX
005FF68E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF691  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF697  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_005ff69d:
005FF69D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF6A0  33 D2                     XOR EDX,EDX
005FF6A2  C1 E8 10                  SHR EAX,0x10
005FF6A5  B9 3D 00 00 00            MOV ECX,0x3d
005FF6AA  F7 F1                     DIV ECX
005FF6AC  66 8B 86 1C 02 00 00      MOV AX,word ptr [ESI + 0x21c]
005FF6B3  66 2B C2                  SUB AX,DX
005FF6B6  83 E8 7E                  SUB EAX,0x7e
005FF6B9  E9 F4 03 00 00            JMP 0x005ffab2
switchD_005ff553::caseD_6:
005FF6BE  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF6C1  33 D2                     XOR EDX,EDX
005FF6C3  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF6C9  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF6CF  B9 3D 00 00 00            MOV ECX,0x3d
005FF6D4  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF6D7  C1 E8 10                  SHR EAX,0x10
005FF6DA  F7 F1                     DIV ECX
005FF6DC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF6DF  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FF6E6  83 C2 7E                  ADD EDX,0x7e
005FF6E9  66 89 10                  MOV word ptr [EAX],DX
005FF6EC  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF6EF  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF6F5  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF6FB  EB A0                     JMP 0x005ff69d
switchD_005ff553::caseD_7:
005FF6FD  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF700  33 D2                     XOR EDX,EDX
005FF702  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF708  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF70E  B9 3D 00 00 00            MOV ECX,0x3d
005FF713  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF716  C1 E8 10                  SHR EAX,0x10
005FF719  F7 F1                     DIV ECX
005FF71B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF71E  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FF725  83 C2 7E                  ADD EDX,0x7e
005FF728  66 89 10                  MOV word ptr [EAX],DX
005FF72B  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF72E  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF734  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_005ff73a:
005FF73A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF73D  33 D2                     XOR EDX,EDX
005FF73F  C1 E8 10                  SHR EAX,0x10
005FF742  B9 3D 00 00 00            MOV ECX,0x3d
005FF747  F7 F1                     DIV ECX
005FF749  66 03 96 1C 02 00 00      ADD DX,word ptr [ESI + 0x21c]
005FF750  83 C2 7E                  ADD EDX,0x7e
005FF753  E9 DC 02 00 00            JMP 0x005ffa34
switchD_005ff553::caseD_8:
005FF758  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF75B  33 D2                     XOR EDX,EDX
005FF75D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF763  05 39 30 00 00            ADD EAX,0x3039
005FF768  B9 3D 00 00 00            MOV ECX,0x3d
005FF76D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF770  C1 E8 10                  SHR EAX,0x10
005FF773  F7 F1                     DIV ECX
005FF775  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF77C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF77F  66 2B C2                  SUB AX,DX
005FF782  83 E8 7E                  SUB EAX,0x7e
005FF785  66 89 01                  MOV word ptr [ECX],AX
005FF788  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF78B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF791  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FF797  EB A1                     JMP 0x005ff73a
LAB_005ff799:
005FF799  83 F8 11                  CMP EAX,0x11
005FF79C  0F 8D 31 03 00 00         JGE 0x005ffad3
005FF7A2  83 F8 10                  CMP EAX,0x10
005FF7A5  0F 87 28 03 00 00         JA 0x005ffad3
switchD_005ff7ab::switchD:
005FF7AB  FF 24 85 C8 FC 5F 00      JMP dword ptr [EAX*0x4 + 0x5ffcc8]
switchD_005ff7ab::caseD_5:
005FF7B2  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF7B5  33 D2                     XOR EDX,EDX
005FF7B7  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF7BD  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF7C3  B9 3D 00 00 00            MOV ECX,0x3d
005FF7C8  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF7CB  C1 E8 10                  SHR EAX,0x10
005FF7CE  F7 F1                     DIV ECX
005FF7D0  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF7D7  66 2B C2                  SUB AX,DX
005FF7DA  2D AB 00 00 00            SUB EAX,0xab
005FF7DF  E9 41 FE FF FF            JMP 0x005ff625
switchD_005ff7ab::caseD_6:
005FF7E4  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF7E7  33 D2                     XOR EDX,EDX
005FF7E9  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF7EF  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF7F5  B9 3D 00 00 00            MOV ECX,0x3d
005FF7FA  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF7FD  C1 E8 10                  SHR EAX,0x10
005FF800  F7 F1                     DIV ECX
005FF802  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF805  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FF80C  81 C2 AB 00 00 00         ADD EDX,0xab
005FF812  66 89 10                  MOV word ptr [EAX],DX
005FF815  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF818  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF81E  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF824  E9 11 FE FF FF            JMP 0x005ff63a
switchD_005ff7ab::caseD_7:
005FF829  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF82C  33 D2                     XOR EDX,EDX
005FF82E  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF834  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF83A  B9 3D 00 00 00            MOV ECX,0x3d
005FF83F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF842  C1 E8 10                  SHR EAX,0x10
005FF845  F7 F1                     DIV ECX
005FF847  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF84A  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FF851  81 C2 AB 00 00 00         ADD EDX,0xab
005FF857  66 89 10                  MOV word ptr [EAX],DX
005FF85A  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF85D  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF863  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF869  E9 8F FD FF FF            JMP 0x005ff5fd
switchD_005ff7ab::caseD_8:
005FF86E  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF871  33 D2                     XOR EDX,EDX
005FF873  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF879  05 39 30 00 00            ADD EAX,0x3039
005FF87E  B9 3D 00 00 00            MOV ECX,0x3d
005FF883  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF886  C1 E8 10                  SHR EAX,0x10
005FF889  F7 F1                     DIV ECX
005FF88B  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF892  66 2B C2                  SUB AX,DX
005FF895  2D AB 00 00 00            SUB EAX,0xab
005FF89A  E9 49 FD FF FF            JMP 0x005ff5e8
switchD_005ff7ab::caseD_9:
005FF89F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF8A2  33 D2                     XOR EDX,EDX
005FF8A4  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF8AA  05 39 30 00 00            ADD EAX,0x3039
005FF8AF  B9 3D 00 00 00            MOV ECX,0x3d
005FF8B4  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF8B7  C1 E8 10                  SHR EAX,0x10
005FF8BA  F7 F1                     DIV ECX
005FF8BC  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FF8C3  81 C2 74 01 00 00         ADD EDX,0x174
LAB_005ff8c9:
005FF8C9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF8CC  BF 01 00 00 00            MOV EDI,0x1
005FF8D1  66 89 10                  MOV word ptr [EAX],DX
005FF8D4  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005FF8D7  66 8B 8E 1C 02 00 00      MOV CX,word ptr [ESI + 0x21c]
005FF8DE  66 89 0A                  MOV word ptr [EDX],CX
005FF8E1  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
005FF8E4  66 8B 86 1E 02 00 00      MOV AX,word ptr [ESI + 0x21e]
005FF8EB  66 89 01                  MOV word ptr [ECX],AX
005FF8EE  8B C7                     MOV EAX,EDI
005FF8F0  5F                        POP EDI
005FF8F1  5E                        POP ESI
005FF8F2  5B                        POP EBX
005FF8F3  5D                        POP EBP
005FF8F4  C2 20 00                  RET 0x20
switchD_005ff7ab::caseD_a:
005FF8F7  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF8FA  B9 3D 00 00 00            MOV ECX,0x3d
005FF8FF  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF905  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FF90B  33 D2                     XOR EDX,EDX
005FF90D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF910  C1 E8 10                  SHR EAX,0x10
005FF913  F7 F1                     DIV ECX
005FF915  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF91C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF91F  66 2B C2                  SUB AX,DX
005FF922  2D 74 01 00 00            SUB EAX,0x174
005FF927  66 89 01                  MOV word ptr [ECX],AX
005FF92A  66 8B 96 1C 02 00 00      MOV DX,word ptr [ESI + 0x21c]
005FF931  E9 FE 00 00 00            JMP 0x005ffa34
switchD_005ff7ab::caseD_b:
005FF936  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
LAB_005ff93d:
005FF93D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF940  66 89 01                  MOV word ptr [ECX],AX
005FF943  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF946  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF94C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FF952  E9 C1 00 00 00            JMP 0x005ffa18
switchD_005ff7ab::caseD_c:
005FF957  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
LAB_005ff95e:
005FF95E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FF961  66 89 01                  MOV word ptr [ECX],AX
005FF964  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FF967  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FF96D  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FF973  E9 1C 01 00 00            JMP 0x005ffa94
switchD_005ff7ab::caseD_d:
005FF978  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF97B  33 D2                     XOR EDX,EDX
005FF97D  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF983  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF989  B9 3D 00 00 00            MOV ECX,0x3d
005FF98E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF991  C1 E8 10                  SHR EAX,0x10
005FF994  F7 F1                     DIV ECX
005FF996  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF99D  66 2B C2                  SUB AX,DX
005FF9A0  2D 74 01 00 00            SUB EAX,0x174
005FF9A5  EB B7                     JMP 0x005ff95e
switchD_005ff7ab::caseD_e:
005FF9A7  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FF9AA  33 D2                     XOR EDX,EDX
005FF9AC  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FF9B2  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FF9B8  B9 3D 00 00 00            MOV ECX,0x3d
005FF9BD  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF9C0  C1 E8 10                  SHR EAX,0x10
005FF9C3  F7 F1                     DIV ECX
005FF9C5  66 8B 86 1A 02 00 00      MOV AX,word ptr [ESI + 0x21a]
005FF9CC  66 2B C2                  SUB AX,DX
005FF9CF  2D 74 01 00 00            SUB EAX,0x174
005FF9D4  E9 64 FF FF FF            JMP 0x005ff93d
switchD_005ff7ab::caseD_f:
005FF9D9  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FF9DC  33 D2                     XOR EDX,EDX
005FF9DE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FF9E4  05 39 30 00 00            ADD EAX,0x3039
005FF9E9  B9 3D 00 00 00            MOV ECX,0x3d
005FF9EE  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FF9F1  C1 E8 10                  SHR EAX,0x10
005FF9F4  F7 F1                     DIV ECX
005FF9F6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FF9F9  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FFA00  81 C2 74 01 00 00         ADD EDX,0x174
005FFA06  66 89 10                  MOV word ptr [EAX],DX
005FFA09  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFA0C  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFA12  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_005ffa18:
005FFA18  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFA1B  33 D2                     XOR EDX,EDX
005FFA1D  C1 E8 10                  SHR EAX,0x10
005FFA20  B9 3D 00 00 00            MOV ECX,0x3d
005FFA25  F7 F1                     DIV ECX
005FFA27  66 03 96 1C 02 00 00      ADD DX,word ptr [ESI + 0x21c]
005FFA2E  81 C2 74 01 00 00         ADD EDX,0x174
LAB_005ffa34:
005FFA34  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005FFA37  BF 01 00 00 00            MOV EDI,0x1
005FFA3C  66 89 10                  MOV word ptr [EAX],DX
005FFA3F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005FFA42  66 8B 8E 1E 02 00 00      MOV CX,word ptr [ESI + 0x21e]
005FFA49  8B C7                     MOV EAX,EDI
005FFA4B  5F                        POP EDI
005FFA4C  5E                        POP ESI
005FFA4D  66 89 0A                  MOV word ptr [EDX],CX
005FFA50  5B                        POP EBX
005FFA51  5D                        POP EBP
005FFA52  C2 20 00                  RET 0x20
switchD_005ff7ab::caseD_10:
005FFA55  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FFA58  33 D2                     XOR EDX,EDX
005FFA5A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FFA60  05 39 30 00 00            ADD EAX,0x3039
005FFA65  B9 3D 00 00 00            MOV ECX,0x3d
005FFA6A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFA6D  C1 E8 10                  SHR EAX,0x10
005FFA70  F7 F1                     DIV ECX
005FFA72  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FFA75  66 03 96 1A 02 00 00      ADD DX,word ptr [ESI + 0x21a]
005FFA7C  81 C2 74 01 00 00         ADD EDX,0x174
005FFA82  66 89 10                  MOV word ptr [EAX],DX
005FFA85  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFA88  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFA8E  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_005ffa94:
005FFA94  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFA97  33 D2                     XOR EDX,EDX
005FFA99  C1 E8 10                  SHR EAX,0x10
005FFA9C  B9 3D 00 00 00            MOV ECX,0x3d
005FFAA1  F7 F1                     DIV ECX
005FFAA3  66 8B 86 1C 02 00 00      MOV AX,word ptr [ESI + 0x21c]
005FFAAA  66 2B C2                  SUB AX,DX
005FFAAD  2D 74 01 00 00            SUB EAX,0x174
LAB_005ffab2:
005FFAB2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005FFAB5  BF 01 00 00 00            MOV EDI,0x1
005FFABA  66 89 01                  MOV word ptr [ECX],AX
005FFABD  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005FFAC0  66 8B 96 1E 02 00 00      MOV DX,word ptr [ESI + 0x21e]
005FFAC7  66 89 10                  MOV word ptr [EAX],DX
005FFACA  8B C7                     MOV EAX,EDI
005FFACC  5F                        POP EDI
005FFACD  5E                        POP ESI
005FFACE  5B                        POP EBX
005FFACF  5D                        POP EBP
005FFAD0  C2 20 00                  RET 0x20
switchD_005ff553::default:
005FFAD3  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
005FFAD7  66 85 C0                  TEST AX,AX
005FFADA  0F BF C8                  MOVSX ECX,AX
005FFADD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FFAE2  7C 11                     JL 0x005ffaf5
005FFAE4  F7 E9                     IMUL ECX
005FFAE6  C1 FA 06                  SAR EDX,0x6
005FFAE9  8B CA                     MOV ECX,EDX
005FFAEB  C1 E9 1F                  SHR ECX,0x1f
005FFAEE  03 D1                     ADD EDX,ECX
005FFAF0  0F BF C2                  MOVSX EAX,DX
005FFAF3  EB 10                     JMP 0x005ffb05
LAB_005ffaf5:
005FFAF5  F7 E9                     IMUL ECX
005FFAF7  C1 FA 06                  SAR EDX,0x6
005FFAFA  8B C2                     MOV EAX,EDX
005FFAFC  C1 E8 1F                  SHR EAX,0x1f
005FFAFF  03 D0                     ADD EDX,EAX
005FFB01  0F BF C2                  MOVSX EAX,DX
005FFB04  48                        DEC EAX
LAB_005ffb05:
005FFB05  83 F8 04                  CMP EAX,0x4
005FFB08  0F 87 8B 01 00 00         JA 0x005ffc99
switchD_005ffb0e::switchD:
005FFB0E  FF 24 85 0C FD 5F 00      JMP dword ptr [EAX*0x4 + 0x5ffd0c]
switchD_005ffb0e::caseD_0:
005FFB15  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFB18  33 D2                     XOR EDX,EDX
005FFB1A  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFB20  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FFB23  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FFB29  B9 65 00 00 00            MOV ECX,0x65
005FFB2E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFB31  C1 E8 10                  SHR EAX,0x10
005FFB34  F7 F1                     DIV ECX
005FFB36  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FFB39  03 D7                     ADD EDX,EDI
005FFB3B  66 89 10                  MOV word ptr [EAX],DX
005FFB3E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFB41  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFB47  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FFB4D  B9 65 00 00 00            MOV ECX,0x65
005FFB52  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFB55  C1 E8 10                  SHR EAX,0x10
005FFB58  33 D2                     XOR EDX,EDX
005FFB5A  E9 20 01 00 00            JMP 0x005ffc7f
switchD_005ffb0e::caseD_1:
005FFB5F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FFB62  B9 2E 01 00 00            MOV ECX,0x12e
005FFB67  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FFB6D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FFB70  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FFB76  33 D2                     XOR EDX,EDX
005FFB78  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFB7B  C1 E8 10                  SHR EAX,0x10
005FFB7E  F7 F1                     DIV ECX
005FFB80  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FFB83  03 D7                     ADD EDX,EDI
005FFB85  66 89 10                  MOV word ptr [EAX],DX
005FFB88  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFB8B  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFB91  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FFB97  B9 2E 01 00 00            MOV ECX,0x12e
005FFB9C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFB9F  C1 E8 10                  SHR EAX,0x10
005FFBA2  33 D2                     XOR EDX,EDX
005FFBA4  E9 D6 00 00 00            JMP 0x005ffc7f
switchD_005ffb0e::caseD_2:
005FFBA9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FFBAC  B9 F7 01 00 00            MOV ECX,0x1f7
005FFBB1  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FFBB7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FFBBA  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FFBC0  33 D2                     XOR EDX,EDX
005FFBC2  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFBC5  C1 E8 10                  SHR EAX,0x10
005FFBC8  F7 F1                     DIV ECX
005FFBCA  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FFBCD  03 D7                     ADD EDX,EDI
005FFBCF  66 89 10                  MOV word ptr [EAX],DX
005FFBD2  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFBD5  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFBDB  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FFBE1  B9 F7 01 00 00            MOV ECX,0x1f7
005FFBE6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFBE9  C1 E8 10                  SHR EAX,0x10
005FFBEC  33 D2                     XOR EDX,EDX
005FFBEE  E9 8C 00 00 00            JMP 0x005ffc7f
switchD_005ffb0e::caseD_3:
005FFBF3  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FFBF6  B9 C0 02 00 00            MOV ECX,0x2c0
005FFBFB  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FFC01  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FFC04  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FFC0A  33 D2                     XOR EDX,EDX
005FFC0C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFC0F  C1 E8 10                  SHR EAX,0x10
005FFC12  F7 F1                     DIV ECX
005FFC14  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FFC17  03 D7                     ADD EDX,EDI
005FFC19  66 89 10                  MOV word ptr [EAX],DX
005FFC1C  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFC1F  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFC25  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FFC2B  B9 C0 02 00 00            MOV ECX,0x2c0
005FFC30  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFC33  C1 E8 10                  SHR EAX,0x10
005FFC36  33 D2                     XOR EDX,EDX
005FFC38  EB 45                     JMP 0x005ffc7f
switchD_005ffb0e::caseD_4:
005FFC3A  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005FFC3D  B9 89 03 00 00            MOV ECX,0x389
005FFC42  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005FFC48  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FFC4B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005FFC51  33 D2                     XOR EDX,EDX
005FFC53  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFC56  C1 E8 10                  SHR EAX,0x10
005FFC59  F7 F1                     DIV ECX
005FFC5B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FFC5E  03 D7                     ADD EDX,EDI
005FFC60  66 89 10                  MOV word ptr [EAX],DX
005FFC63  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FFC66  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FFC6C  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FFC72  B9 89 03 00 00            MOV ECX,0x389
005FFC77  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FFC7A  C1 E8 10                  SHR EAX,0x10
005FFC7D  33 D2                     XOR EDX,EDX
LAB_005ffc7f:
005FFC7F  F7 F1                     DIV ECX
005FFC81  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005FFC84  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
005FFC87  BF 01 00 00 00            MOV EDI,0x1
005FFC8C  03 D0                     ADD EDX,EAX
005FFC8E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005FFC91  66 89 10                  MOV word ptr [EAX],DX
005FFC94  66 C7 01 00 00            MOV word ptr [ECX],0x0
switchD_005ffb0e::default:
005FFC99  8B C7                     MOV EAX,EDI
005FFC9B  5F                        POP EDI
005FFC9C  5E                        POP ESI
005FFC9D  5B                        POP EBX
005FFC9E  5D                        POP EBP
005FFC9F  C2 20 00                  RET 0x20
