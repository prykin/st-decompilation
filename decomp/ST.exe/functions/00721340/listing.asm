FUN_00721340:
00721340  55                        PUSH EBP
00721341  8B EC                     MOV EBP,ESP
00721343  83 EC 0C                  SUB ESP,0xc
00721346  56                        PUSH ESI
00721347  8B F1                     MOV ESI,ECX
00721349  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
0072134F  85 C0                     TEST EAX,EAX
00721351  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00721354  0F 84 B7 01 00 00         JZ 0x00721511
0072135A  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072135D  85 D2                     TEST EDX,EDX
0072135F  0F 84 AC 01 00 00         JZ 0x00721511
00721365  8B 8E 44 01 00 00         MOV ECX,dword ptr [ESI + 0x144]
0072136B  53                        PUSH EBX
0072136C  57                        PUSH EDI
0072136D  8B BE 0C 02 00 00         MOV EDI,dword ptr [ESI + 0x20c]
00721373  03 CF                     ADD ECX,EDI
00721375  3B CA                     CMP ECX,EDX
00721377  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072137A  7D 0B                     JGE 0x00721387
0072137C  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0072137F  8B 14 8A                  MOV EDX,dword ptr [EDX + ECX*0x4]
00721382  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00721385  EB 0A                     JMP 0x00721391
LAB_00721387:
00721387  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0072138E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00721391:
00721391  8B FA                     MOV EDI,EDX
00721393  83 C9 FF                  OR ECX,0xffffffff
00721396  33 C0                     XOR EAX,EAX
00721398  F2 AE                     SCASB.REPNE ES:EDI
0072139A  8B 86 10 02 00 00         MOV EAX,dword ptr [ESI + 0x210]
007213A0  F7 D1                     NOT ECX
007213A2  49                        DEC ECX
007213A3  8B D9                     MOV EBX,ECX
007213A5  8B 8E 48 01 00 00         MOV ECX,dword ptr [ESI + 0x148]
007213AB  03 C1                     ADD EAX,ECX
007213AD  3B C3                     CMP EAX,EBX
007213AF  0F 83 37 01 00 00         JNC 0x007214ec
007213B5  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
007213B8  83 C9 FF                  OR ECX,0xffffffff
007213BB  33 C0                     XOR EAX,EAX
007213BD  F2 AE                     SCASB.REPNE ES:EDI
007213BF  F7 D1                     NOT ECX
007213C1  51                        PUSH ECX
007213C2  E8 49 98 F8 FF            CALL 0x006aac10
007213C7  85 C0                     TEST EAX,EAX
007213C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007213CC  75 0E                     JNZ 0x007213dc
007213CE  BF FE FF FF FF            MOV EDI,0xfffffffe
007213D3  8B C7                     MOV EAX,EDI
007213D5  5F                        POP EDI
007213D6  5B                        POP EBX
007213D7  5E                        POP ESI
007213D8  8B E5                     MOV ESP,EBP
007213DA  5D                        POP EBP
007213DB  C3                        RET
LAB_007213dc:
007213DC  8B 96 48 01 00 00         MOV EDX,dword ptr [ESI + 0x148]
007213E2  8B 8E 10 02 00 00         MOV ECX,dword ptr [ESI + 0x210]
007213E8  2B DA                     SUB EBX,EDX
007213EA  03 D1                     ADD EDX,ECX
007213EC  2B D9                     SUB EBX,ECX
007213EE  53                        PUSH EBX
007213EF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007213F2  03 D3                     ADD EDX,EBX
007213F4  52                        PUSH EDX
007213F5  50                        PUSH EAX
007213F6  E8 45 CF 00 00            CALL 0x0072e340
007213FB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007213FE  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
00721404  8B 8E 0C 02 00 00         MOV ECX,dword ptr [ESI + 0x20c]
0072140A  83 C4 0C                  ADD ESP,0xc
0072140D  52                        PUSH EDX
0072140E  8D 54 08 01               LEA EDX,[EAX + ECX*0x1 + 0x1]
00721412  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721418  52                        PUSH EDX
00721419  50                        PUSH EAX
0072141A  E8 31 19 03 00            CALL 0x00752d50
0072141F  8B F8                     MOV EDI,EAX
00721421  85 FF                     TEST EDI,EDI
00721423  0F 8C DF 00 00 00         JL 0x00721508
00721429  8D 4D FC                  LEA ECX,[EBP + -0x4]
0072142C  51                        PUSH ECX
0072142D  E8 2E 9C F8 FF            CALL 0x006ab060
00721432  8B 96 10 02 00 00         MOV EDX,dword ptr [ESI + 0x210]
00721438  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
0072143E  03 D0                     ADD EDX,EAX
00721440  74 78                     JZ 0x007214ba
00721442  8B FB                     MOV EDI,EBX
00721444  83 C9 FF                  OR ECX,0xffffffff
00721447  33 C0                     XOR EAX,EAX
00721449  F2 AE                     SCASB.REPNE ES:EDI
0072144B  F7 D1                     NOT ECX
0072144D  51                        PUSH ECX
0072144E  E8 BD 97 F8 FF            CALL 0x006aac10
00721453  85 C0                     TEST EAX,EAX
00721455  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00721458  75 0E                     JNZ 0x00721468
0072145A  BF FE FF FF FF            MOV EDI,0xfffffffe
0072145F  8B C7                     MOV EAX,EDI
00721461  5F                        POP EDI
00721462  5B                        POP EBX
00721463  5E                        POP ESI
00721464  8B E5                     MOV ESP,EBP
00721466  5D                        POP EBP
00721467  C3                        RET
LAB_00721468:
00721468  8B 8E 10 02 00 00         MOV ECX,dword ptr [ESI + 0x210]
0072146E  8B BE 48 01 00 00         MOV EDI,dword ptr [ESI + 0x148]
00721474  03 CF                     ADD ECX,EDI
00721476  51                        PUSH ECX
00721477  53                        PUSH EBX
00721478  50                        PUSH EAX
00721479  E8 C2 CE 00 00            CALL 0x0072e340
0072147E  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
00721484  8B 9E 0C 02 00 00         MOV EBX,dword ptr [ESI + 0x20c]
0072148A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072148D  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
00721493  83 C4 0C                  ADD ESP,0xc
00721496  03 C3                     ADD EAX,EBX
00721498  52                        PUSH EDX
00721499  50                        PUSH EAX
0072149A  51                        PUSH ECX
0072149B  E8 80 4B F9 FF            CALL 0x006b6020
007214A0  8B F8                     MOV EDI,EAX
007214A2  85 FF                     TEST EDI,EDI
007214A4  7C 62                     JL 0x00721508
007214A6  8D 55 FC                  LEA EDX,[EBP + -0x4]
007214A9  33 FF                     XOR EDI,EDI
007214AB  52                        PUSH EDX
007214AC  E8 AF 9B F8 FF            CALL 0x006ab060
007214B1  8B C7                     MOV EAX,EDI
007214B3  5F                        POP EDI
007214B4  5B                        POP EBX
007214B5  5E                        POP ESI
007214B6  8B E5                     MOV ESP,EBP
007214B8  5D                        POP EBP
007214B9  C3                        RET
LAB_007214ba:
007214BA  8B 8E 44 01 00 00         MOV ECX,dword ptr [ESI + 0x144]
007214C0  8B BE 0C 02 00 00         MOV EDI,dword ptr [ESI + 0x20c]
007214C6  A1 04 0B 7F 00            MOV EAX,[0x007f0b04]
007214CB  8B 96 38 01 00 00         MOV EDX,dword ptr [ESI + 0x138]
007214D1  03 CF                     ADD ECX,EDI
007214D3  50                        PUSH EAX
007214D4  51                        PUSH ECX
007214D5  52                        PUSH EDX
007214D6  E8 45 4B F9 FF            CALL 0x006b6020
007214DB  8B F8                     MOV EDI,EAX
007214DD  85 FF                     TEST EDI,EDI
007214DF  7C 27                     JL 0x00721508
007214E1  33 FF                     XOR EDI,EDI
007214E3  8B C7                     MOV EAX,EDI
007214E5  5F                        POP EDI
007214E6  5B                        POP EBX
007214E7  5E                        POP ESI
007214E8  8B E5                     MOV ESP,EBP
007214EA  5D                        POP EBP
007214EB  C3                        RET
LAB_007214ec:
007214EC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007214EF  A1 04 0B 7F 00            MOV EAX,[0x007f0b04]
007214F4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007214F7  41                        INC ECX
007214F8  50                        PUSH EAX
007214F9  51                        PUSH ECX
007214FA  52                        PUSH EDX
007214FB  E8 50 18 03 00            CALL 0x00752d50
00721500  8B F8                     MOV EDI,EAX
00721502  85 FF                     TEST EDI,EDI
00721504  7C 02                     JL 0x00721508
00721506  33 FF                     XOR EDI,EDI
LAB_00721508:
00721508  8B C7                     MOV EAX,EDI
0072150A  5F                        POP EDI
0072150B  5B                        POP EBX
0072150C  5E                        POP ESI
0072150D  8B E5                     MOV ESP,EBP
0072150F  5D                        POP EBP
00721510  C3                        RET
LAB_00721511:
00721511  33 C0                     XOR EAX,EAX
00721513  5E                        POP ESI
00721514  8B E5                     MOV ESP,EBP
00721516  5D                        POP EBP
00721517  C3                        RET
