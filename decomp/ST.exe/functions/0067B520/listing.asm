AiPlrClassTy::ExecTech:
0067B520  55                        PUSH EBP
0067B521  8B EC                     MOV EBP,ESP
0067B523  81 EC C4 00 00 00         SUB ESP,0xc4
0067B529  8B 81 95 06 00 00         MOV EAX,dword ptr [ECX + 0x695]
0067B52F  53                        PUSH EBX
0067B530  56                        PUSH ESI
0067B531  57                        PUSH EDI
0067B532  85 C0                     TEST EAX,EAX
0067B534  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0067B537  0F 84 EB 03 00 00         JZ 0x0067b928
0067B53D  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0067B542  85 C0                     TEST EAX,EAX
0067B544  0F 84 DE 03 00 00         JZ 0x0067b928
0067B54A  8B 81 6E 06 00 00         MOV EAX,dword ptr [ECX + 0x66e]
0067B550  85 C0                     TEST EAX,EAX
0067B552  74 16                     JZ 0x0067b56a
0067B554  8B 91 72 06 00 00         MOV EDX,dword ptr [ECX + 0x672]
0067B55A  03 D0                     ADD EDX,EAX
0067B55C  8B 81 FE 06 00 00         MOV EAX,dword ptr [ECX + 0x6fe]
0067B562  3B C2                     CMP EAX,EDX
0067B564  0F 82 BE 03 00 00         JC 0x0067b928
LAB_0067b56a:
0067B56A  8B 81 FE 06 00 00         MOV EAX,dword ptr [ECX + 0x6fe]
0067B570  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
0067B576  89 81 72 06 00 00         MOV dword ptr [ECX + 0x672],EAX
0067B57C  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0067B582  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
0067B588  6A 00                     PUSH 0x0
0067B58A  50                        PUSH EAX
0067B58B  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
0067B591  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067B597  E8 54 22 0B 00            CALL 0x0072d7f0
0067B59C  8B F0                     MOV ESI,EAX
0067B59E  83 C4 08                  ADD ESP,0x8
0067B5A1  85 F6                     TEST ESI,ESI
0067B5A3  0F 85 3E 03 00 00         JNZ 0x0067b8e7
0067B5A9  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0067B5AC  33 FF                     XOR EDI,EDI
0067B5AE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0067B5B1  8B 83 A1 06 00 00         MOV EAX,dword ptr [EBX + 0x6a1]
0067B5B7  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067B5BA  85 C9                     TEST ECX,ECX
0067B5BC  0F 8E 72 02 00 00         JLE 0x0067b834
0067B5C2  3B F9                     CMP EDI,ECX
LAB_0067b5c4:
0067B5C4  73 0D                     JNC 0x0067b5d3
0067B5C6  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0067B5C9  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0067B5CC  0F AF F7                  IMUL ESI,EDI
0067B5CF  03 F1                     ADD ESI,ECX
0067B5D1  EB 02                     JMP 0x0067b5d5
LAB_0067b5d3:
0067B5D3  33 F6                     XOR ESI,ESI
LAB_0067b5d5:
0067B5D5  0F BE 4E 07               MOVSX ECX,byte ptr [ESI + 0x7]
0067B5D9  83 F9 03                  CMP ECX,0x3
0067B5DC  0F 87 3A 02 00 00         JA 0x0067b81c
switchD_0067b5e2::switchD:
0067B5E2  FF 24 8D 30 B9 67 00      JMP dword ptr [ECX*0x4 + 0x67b930]
switchD_0067b5e2::caseD_0:
0067B5E9  0F BF 46 01               MOVSX EAX,word ptr [ESI + 0x1]
0067B5ED  8B 8B D7 05 00 00         MOV ECX,dword ptr [EBX + 0x5d7]
0067B5F3  50                        PUSH EAX
0067B5F4  0F BF 7E 03               MOVSX EDI,word ptr [ESI + 0x3]
0067B5F8  51                        PUSH ECX
0067B5F9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B5FF  E8 67 62 D8 FF            CALL 0x0040186b
0067B604  3B C7                     CMP EAX,EDI
0067B606  7C 09                     JL 0x0067b611
0067B608  C6 46 07 02               MOV byte ptr [ESI + 0x7],0x2
0067B60C  E9 0B 02 00 00            JMP 0x0067b81c
LAB_0067b611:
0067B611  0F BF 46 01               MOVSX EAX,word ptr [ESI + 0x1]
0067B615  8B 93 D7 05 00 00         MOV EDX,dword ptr [EBX + 0x5d7]
0067B61B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B621  50                        PUSH EAX
0067B622  52                        PUSH EDX
0067B623  E8 F7 67 D8 FF            CALL 0x00401e1f
0067B628  85 C0                     TEST EAX,EAX
0067B62A  0F 85 EC 01 00 00         JNZ 0x0067b81c
0067B630  0F BF 7E 01               MOVSX EDI,word ptr [ESI + 0x1]
0067B634  0F BF 46 03               MOVSX EAX,word ptr [ESI + 0x3]
0067B638  8B 8B D7 05 00 00         MOV ECX,dword ptr [EBX + 0x5d7]
0067B63E  57                        PUSH EDI
0067B63F  51                        PUSH ECX
0067B640  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B646  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0067B649  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067B64C  E8 FE 9B D8 FF            CALL 0x0040524f
0067B651  85 C0                     TEST EAX,EAX
0067B653  0F 84 82 00 00 00         JZ 0x0067b6db
0067B659  8B 93 D7 05 00 00         MOV EDX,dword ptr [EBX + 0x5d7]
0067B65F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B665  57                        PUSH EDI
0067B666  52                        PUSH EDX
0067B667  E8 2A 7D D8 FF            CALL 0x00403396
0067B66C  85 C0                     TEST EAX,EAX
0067B66E  74 6B                     JZ 0x0067b6db
0067B670  8B 83 D7 05 00 00         MOV EAX,dword ptr [EBX + 0x5d7]
0067B676  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B67C  57                        PUSH EDI
0067B67D  50                        PUSH EAX
0067B67E  E8 8A 9C D8 FF            CALL 0x0040530d
0067B683  8B 8B D7 05 00 00         MOV ECX,dword ptr [EBX + 0x5d7]
0067B689  57                        PUSH EDI
0067B68A  8B D0                     MOV EDX,EAX
0067B68C  51                        PUSH ECX
0067B68D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B693  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0067B696  E8 D0 61 D8 FF            CALL 0x0040186b
0067B69B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0067B69E  3B C2                     CMP EAX,EDX
0067B6A0  7D 39                     JGE 0x0067b6db
0067B6A2  8B 83 D7 05 00 00         MOV EAX,dword ptr [EBX + 0x5d7]
0067B6A8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B6AE  57                        PUSH EDI
0067B6AF  50                        PUSH EAX
0067B6B0  E8 B6 61 D8 FF            CALL 0x0040186b
0067B6B5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0067B6B8  49                        DEC ECX
0067B6B9  3B C1                     CMP EAX,ECX
0067B6BB  75 1E                     JNZ 0x0067b6db
0067B6BD  8B 93 D7 05 00 00         MOV EDX,dword ptr [EBX + 0x5d7]
0067B6C3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B6C9  57                        PUSH EDI
0067B6CA  52                        PUSH EDX
0067B6CB  E8 4F 67 D8 FF            CALL 0x00401e1f
0067B6D0  85 C0                     TEST EAX,EAX
0067B6D2  75 07                     JNZ 0x0067b6db
0067B6D4  B8 01 00 00 00            MOV EAX,0x1
0067B6D9  EB 02                     JMP 0x0067b6dd
LAB_0067b6db:
0067B6DB  33 C0                     XOR EAX,EAX
LAB_0067b6dd:
0067B6DD  85 C0                     TEST EAX,EAX
0067B6DF  0F 84 37 01 00 00         JZ 0x0067b81c
0067B6E5  8B 8B 95 06 00 00         MOV ECX,dword ptr [EBX + 0x695]
0067B6EB  33 D2                     XOR EDX,EDX
0067B6ED  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0067B6F0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067B6F3  85 C0                     TEST EAX,EAX
0067B6F5  0F 8E 21 01 00 00         JLE 0x0067b81c
LAB_0067b6fb:
0067B6FB  33 FF                     XOR EDI,EDI
0067B6FD  3B CF                     CMP ECX,EDI
0067B6FF  74 23                     JZ 0x0067b724
0067B701  3B D7                     CMP EDX,EDI
0067B703  7C 1F                     JL 0x0067b724
0067B705  3B D0                     CMP EDX,EAX
0067B707  7D 1B                     JGE 0x0067b724
0067B709  73 0B                     JNC 0x0067b716
0067B70B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067B70E  0F AF C2                  IMUL EAX,EDX
0067B711  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0067B714  EB 02                     JMP 0x0067b718
LAB_0067b716:
0067B716  33 C0                     XOR EAX,EAX
LAB_0067b718:
0067B718  39 78 04                  CMP dword ptr [EAX + 0x4],EDI
0067B71B  74 07                     JZ 0x0067b724
0067B71D  8B 00                     MOV EAX,dword ptr [EAX]
0067B71F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067B722  EB 03                     JMP 0x0067b727
LAB_0067b724:
0067B724  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0067b727:
0067B727  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0067B72A  74 40                     JZ 0x0067b76c
0067B72C  B9 0D 00 00 00            MOV ECX,0xd
0067B731  33 C0                     XOR EAX,EAX
0067B733  8D 7D B8                  LEA EDI,[EBP + -0x48]
0067B736  F3 AB                     STOSD.REP ES:EDI
0067B738  8B 8B FE 06 00 00         MOV ECX,dword ptr [EBX + 0x6fe]
0067B73E  8D 45 B8                  LEA EAX,[EBP + -0x48]
0067B741  85 C0                     TEST EAX,EAX
0067B743  C7 45 B8 73 00 00 00      MOV dword ptr [EBP + -0x48],0x73
0067B74A  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0067B74D  89 75 C2                  MOV dword ptr [EBP + -0x3e],ESI
0067B750  C6 45 C1 01               MOV byte ptr [EBP + -0x3f],0x1
0067B754  74 0F                     JZ 0x0067b765
0067B756  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067B759  51                        PUSH ECX
0067B75A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067B75D  E8 7F 59 D8 FF            CALL 0x004010e1
0067B762  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0067b765:
0067B765  8A 45 C0                  MOV AL,byte ptr [EBP + -0x40]
0067B768  84 C0                     TEST AL,AL
0067B76A  7F 1A                     JG 0x0067b786
LAB_0067b76c:
0067B76C  8B 8B 95 06 00 00         MOV ECX,dword ptr [EBX + 0x695]
0067B772  42                        INC EDX
0067B773  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0067B776  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067B779  3B D0                     CMP EDX,EAX
0067B77B  0F 8C 7A FF FF FF         JL 0x0067b6fb
0067B781  E9 96 00 00 00            JMP 0x0067b81c
LAB_0067b786:
0067B786  C6 46 07 01               MOV byte ptr [ESI + 0x7],0x1
0067B78A  66 8B 55 C6               MOV DX,word ptr [EBP + -0x3a]
0067B78E  66 89 56 08               MOV word ptr [ESI + 0x8],DX
0067B792  E9 85 00 00 00            JMP 0x0067b81c
switchD_0067b5e2::caseD_1:
0067B797  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B79D  33 FF                     XOR EDI,EDI
0067B79F  3B CF                     CMP ECX,EDI
0067B7A1  74 1E                     JZ 0x0067b7c1
0067B7A3  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0067B7A7  8A 93 D7 05 00 00         MOV DL,byte ptr [EBX + 0x5d7]
0067B7AD  6A 01                     PUSH 0x1
0067B7AF  50                        PUSH EAX
0067B7B0  52                        PUSH EDX
0067B7B1  E8 04 71 D8 FF            CALL 0x004028ba
0067B7B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B7BC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067B7BF  EB 03                     JMP 0x0067b7c4
LAB_0067b7c1:
0067B7C1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0067b7c4:
0067B7C4  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0067B7C7  74 3E                     JZ 0x0067b807
0067B7C9  0F BF 46 01               MOVSX EAX,word ptr [ESI + 0x1]
0067B7CD  0F BF 7E 03               MOVSX EDI,word ptr [ESI + 0x3]
0067B7D1  50                        PUSH EAX
0067B7D2  8B 83 D7 05 00 00         MOV EAX,dword ptr [EBX + 0x5d7]
0067B7D8  50                        PUSH EAX
0067B7D9  E8 8D 60 D8 FF            CALL 0x0040186b
0067B7DE  3B C7                     CMP EAX,EDI
0067B7E0  7C 06                     JL 0x0067b7e8
0067B7E2  C6 46 07 02               MOV byte ptr [ESI + 0x7],0x2
0067B7E6  EB 34                     JMP 0x0067b81c
LAB_0067b7e8:
0067B7E8  0F BF 4E 03               MOVSX ECX,word ptr [ESI + 0x3]
0067B7EC  0F BF 56 01               MOVSX EDX,word ptr [ESI + 0x1]
0067B7F0  51                        PUSH ECX
0067B7F1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067B7F4  52                        PUSH EDX
0067B7F5  E8 16 75 D8 FF            CALL 0x00402d10
0067B7FA  85 C0                     TEST EAX,EAX
0067B7FC  75 1E                     JNZ 0x0067b81c
0067B7FE  88 46 07                  MOV byte ptr [ESI + 0x7],AL
0067B801  66 89 46 08               MOV word ptr [ESI + 0x8],AX
0067B805  EB 15                     JMP 0x0067b81c
LAB_0067b807:
0067B807  C6 46 07 00               MOV byte ptr [ESI + 0x7],0x0
0067B80B  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
0067B80F  EB 0B                     JMP 0x0067b81c
switchD_0067b5e2::caseD_2:
0067B811  57                        PUSH EDI
0067B812  50                        PUSH EAX
0067B813  E8 58 54 03 00            CALL 0x006b0c70
0067B818  4F                        DEC EDI
0067B819  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
switchD_0067b5e2::default:
0067B81C  8B 83 A1 06 00 00         MOV EAX,dword ptr [EBX + 0x6a1]
0067B822  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0067B825  47                        INC EDI
0067B826  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067B829  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0067B82C  3B F9                     CMP EDI,ECX
0067B82E  0F 8C 90 FD FF FF         JL 0x0067b5c4
LAB_0067b834:
0067B834  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0067B839  85 C0                     TEST EAX,EAX
0067B83B  0F 84 93 00 00 00         JZ 0x0067b8d4
0067B841  80 BB 62 06 00 00 01      CMP byte ptr [EBX + 0x662],0x1
0067B848  0F 85 86 00 00 00         JNZ 0x0067b8d4
0067B84E  0F BF 83 60 06 00 00      MOVSX EAX,word ptr [EBX + 0x660]
0067B855  50                        PUSH EAX
0067B856  8B CB                     MOV ECX,EBX
0067B858  E8 0B 72 D8 FF            CALL 0x00402a68
0067B85D  66 8B 8B EC 05 00 00      MOV CX,word ptr [EBX + 0x5ec]
0067B864  66 83 E9 03               SUB CX,0x3
0067B868  66 F7 D9                  NEG CX
0067B86B  1B C9                     SBB ECX,ECX
0067B86D  83 E1 FC                  AND ECX,0xfffffffc
0067B870  83 C1 05                  ADD ECX,0x5
0067B873  3B C1                     CMP EAX,ECX
0067B875  7D 5D                     JGE 0x0067b8d4
0067B877  0F BF 8B 60 06 00 00      MOVSX ECX,word ptr [EBX + 0x660]
0067B87E  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0067B884  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
0067B88A  52                        PUSH EDX
0067B88B  8B 93 D7 05 00 00         MOV EDX,dword ptr [EBX + 0x5d7]
0067B891  50                        PUSH EAX
0067B892  51                        PUSH ECX
0067B893  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067B899  52                        PUSH EDX
0067B89A  E8 9C 99 D8 FF            CALL 0x0040523b
0067B89F  33 F6                     XOR ESI,ESI
LAB_0067b8a1:
0067B8A1  8B 84 35 3C FF FF FF      MOV EAX,dword ptr [EBP + ESI*0x1 + 0xffffff3c]
0067B8A8  85 C0                     TEST EAX,EAX
0067B8AA  74 28                     JZ 0x0067b8d4
0067B8AC  0F BF 8B 60 06 00 00      MOVSX ECX,word ptr [EBX + 0x660]
0067B8B3  0F BF 93 63 06 00 00      MOVSX EDX,word ptr [EBX + 0x663]
0067B8BA  51                        PUSH ECX
0067B8BB  8B 8C 35 58 FF FF FF      MOV ECX,dword ptr [EBP + ESI*0x1 + 0xffffff58]
0067B8C2  52                        PUSH EDX
0067B8C3  51                        PUSH ECX
0067B8C4  50                        PUSH EAX
0067B8C5  8B CB                     MOV ECX,EBX
0067B8C7  E8 6B 75 D8 FF            CALL 0x00402e37
0067B8CC  83 C6 04                  ADD ESI,0x4
0067B8CF  83 FE 1C                  CMP ESI,0x1c
0067B8D2  7C CD                     JL 0x0067b8a1
LAB_0067b8d4:
0067B8D4  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
0067B8DA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067B8E0  5F                        POP EDI
0067B8E1  5E                        POP ESI
0067B8E2  5B                        POP EBX
0067B8E3  8B E5                     MOV ESP,EBP
0067B8E5  5D                        POP EBP
0067B8E6  C3                        RET
LAB_0067b8e7:
0067B8E7  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
0067B8ED  68 10 2F 7D 00            PUSH 0x7d2f10
0067B8F2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067B8F7  56                        PUSH ESI
0067B8F8  6A 00                     PUSH 0x0
0067B8FA  68 0D 04 00 00            PUSH 0x40d
0067B8FF  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067B904  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067B909  E8 C2 1B 03 00            CALL 0x006ad4d0
0067B90E  83 C4 18                  ADD ESP,0x18
0067B911  85 C0                     TEST EAX,EAX
0067B913  74 01                     JZ 0x0067b916
0067B915  CC                        INT3
LAB_0067b916:
0067B916  68 0E 04 00 00            PUSH 0x40e
0067B91B  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067B920  6A 00                     PUSH 0x0
0067B922  56                        PUSH ESI
0067B923  E8 18 A5 02 00            CALL 0x006a5e40
LAB_0067b928:
0067B928  5F                        POP EDI
0067B929  5E                        POP ESI
0067B92A  5B                        POP EBX
0067B92B  8B E5                     MOV ESP,EBP
0067B92D  5D                        POP EBP
0067B92E  C3                        RET
