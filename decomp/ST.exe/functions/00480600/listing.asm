FUN_00480600:
00480600  55                        PUSH EBP
00480601  8B EC                     MOV EBP,ESP
00480603  83 EC 1C                  SUB ESP,0x1c
00480606  53                        PUSH EBX
00480607  56                        PUSH ESI
00480608  57                        PUSH EDI
00480609  8B F1                     MOV ESI,ECX
0048060B  E8 2C 14 F8 FF            CALL 0x00401a3c
00480610  83 F8 01                  CMP EAX,0x1
00480613  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00480619  75 19                     JNZ 0x00480634
0048061B  6A 01                     PUSH 0x1
0048061D  8B CF                     MOV ECX,EDI
0048061F  E8 A8 4C F8 FF            CALL 0x004052cc
00480624  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0048062A  50                        PUSH EAX
0048062B  E8 C0 A5 26 00            CALL 0x006eabf0
00480630  6A 01                     PUSH 0x1
00480632  EB 5B                     JMP 0x0048068f
LAB_00480634:
00480634  6A 00                     PUSH 0x0
00480636  8B CF                     MOV ECX,EDI
00480638  E8 8F 4C F8 FF            CALL 0x004052cc
0048063D  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00480643  50                        PUSH EAX
00480644  E8 A7 A5 26 00            CALL 0x006eabf0
00480649  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0048064C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00480652  6A 24                     PUSH 0x24
00480654  50                        PUSH EAX
00480655  E8 11 12 F8 FF            CALL 0x0040186b
0048065A  85 C0                     TEST EAX,EAX
0048065C  7E 29                     JLE 0x00480687
0048065E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00480664  8B 8E 7E 07 00 00         MOV ECX,dword ptr [ESI + 0x77e]
0048066A  8B 86 7A 07 00 00         MOV EAX,dword ptr [ESI + 0x77a]
00480670  8B 9A E4 00 00 00         MOV EBX,dword ptr [EDX + 0xe4]
00480676  33 D2                     XOR EDX,EDX
00480678  03 C3                     ADD EAX,EBX
0048067A  8D 1C 09                  LEA EBX,[ECX + ECX*0x1]
0048067D  F7 F3                     DIV EBX
0048067F  3B D1                     CMP EDX,ECX
00480681  76 04                     JBE 0x00480687
00480683  6A 00                     PUSH 0x0
00480685  EB 08                     JMP 0x0048068f
LAB_00480687:
00480687  8B CE                     MOV ECX,ESI
00480689  E8 4A 4A F8 FF            CALL 0x004050d8
0048068E  50                        PUSH EAX
LAB_0048068f:
0048068F  8B CF                     MOV ECX,EDI
00480691  E8 36 4C F8 FF            CALL 0x004052cc
00480696  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0048069C  50                        PUSH EAX
0048069D  E8 CE 61 26 00            CALL 0x006e6870
004806A2  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
004806A8  83 C0 F7                  ADD EAX,-0x9
004806AB  83 F8 1C                  CMP EAX,0x1c
004806AE  0F 87 6B 08 00 00         JA 0x00480f1f
004806B4  33 C9                     XOR ECX,ECX
004806B6  8A 88 E4 11 48 00         MOV CL,byte ptr [EAX + 0x4811e4]
switchD_004806bc::switchD:
004806BC  FF 24 8D D0 11 48 00      JMP dword ptr [ECX*0x4 + 0x4811d0]
switchD_004806bc::caseD_15:
004806C3  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
004806C7  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
004806CC  F7 E9                     IMUL ECX
004806CE  03 D1                     ADD EDX,ECX
004806D0  B9 A0 00 00 00            MOV ECX,0xa0
004806D5  C1 FA 05                  SAR EDX,0x5
004806D8  8B C2                     MOV EAX,EDX
004806DA  C1 E8 1F                  SHR EAX,0x1f
004806DD  03 D0                     ADD EDX,EAX
004806DF  B8 08 00 00 00            MOV EAX,0x8
004806E4  2B C2                     SUB EAX,EDX
004806E6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004806E9  C1 E0 02                  SHL EAX,0x2
004806EC  99                        CDQ
004806ED  F7 F9                     IDIV ECX
004806EF  B8 04 00 00 00            MOV EAX,0x4
004806F4  8B DA                     MOV EBX,EDX
004806F6  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
004806FC  2B C2                     SUB EAX,EDX
004806FE  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00480701  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00480704  C1 E0 03                  SHL EAX,0x3
00480707  99                        CDQ
00480708  F7 F9                     IDIV ECX
0048070A  8B 8E 22 08 00 00         MOV ECX,dword ptr [ESI + 0x822]
00480710  03 DA                     ADD EBX,EDX
00480712  41                        INC ECX
00480713  8B C1                     MOV EAX,ECX
00480715  89 8E 22 08 00 00         MOV dword ptr [ESI + 0x822],ECX
0048071B  83 F8 14                  CMP EAX,0x14
0048071E  75 0A                     JNZ 0x0048072a
00480720  C7 86 22 08 00 00 00 00 00 00  MOV dword ptr [ESI + 0x822],0x0
LAB_0048072a:
0048072A  8B 96 22 08 00 00         MOV EDX,dword ptr [ESI + 0x822]
00480730  6A 0E                     PUSH 0xe
00480732  03 D3                     ADD EDX,EBX
00480734  8B CF                     MOV ECX,EDI
00480736  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00480739  E8 71 3B F8 FF            CALL 0x004042af
0048073E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00480741  3B C8                     CMP ECX,EAX
00480743  0F 84 79 0A 00 00         JZ 0x004811c2
00480749  8B C1                     MOV EAX,ECX
0048074B  8B CF                     MOV ECX,EDI
0048074D  50                        PUSH EAX
0048074E  6A 0E                     PUSH 0xe
00480750  E8 0F 09 F8 FF            CALL 0x00401064
00480755  8B 8E 22 08 00 00         MOV ECX,dword ptr [ESI + 0x822]
0048075B  03 CB                     ADD ECX,EBX
0048075D  51                        PUSH ECX
0048075E  6A 0C                     PUSH 0xc
00480760  8B CF                     MOV ECX,EDI
00480762  E8 FD 08 F8 FF            CALL 0x00401064
00480767  6A 0E                     PUSH 0xe
00480769  8B CF                     MOV ECX,EDI
0048076B  E8 4C 29 F8 FF            CALL 0x004030bc
00480770  85 C0                     TEST EAX,EAX
00480772  74 0A                     JZ 0x0048077e
00480774  83 C8 FF                  OR EAX,0xffffffff
00480777  5F                        POP EDI
00480778  5E                        POP ESI
00480779  5B                        POP EBX
0048077A  8B E5                     MOV ESP,EBP
0048077C  5D                        POP EBP
0048077D  C3                        RET
LAB_0048077e:
0048077E  6A 0C                     PUSH 0xc
00480780  8B CF                     MOV ECX,EDI
00480782  E8 35 29 F8 FF            CALL 0x004030bc
00480787  85 C0                     TEST EAX,EAX
00480789  74 0A                     JZ 0x00480795
0048078B  83 C8 FF                  OR EAX,0xffffffff
0048078E  5F                        POP EDI
0048078F  5E                        POP ESI
00480790  5B                        POP EBX
00480791  8B E5                     MOV ESP,EBP
00480793  5D                        POP EBP
00480794  C3                        RET
LAB_00480795:
00480795  8B 96 22 08 00 00         MOV EDX,dword ptr [ESI + 0x822]
0048079B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0048079E  03 D0                     ADD EDX,EAX
004807A0  8B CF                     MOV ECX,EDI
004807A2  52                        PUSH EDX
004807A3  6A 0E                     PUSH 0xe
004807A5  E8 54 4B F8 FF            CALL 0x004052fe
004807AA  85 C0                     TEST EAX,EAX
004807AC  0F 84 10 0A 00 00         JZ 0x004811c2
004807B2  83 C8 FF                  OR EAX,0xffffffff
004807B5  5F                        POP EDI
004807B6  5E                        POP ESI
004807B7  5B                        POP EBX
004807B8  8B E5                     MOV ESP,EBP
004807BA  5D                        POP EBP
004807BB  C3                        RET
switchD_004806bc::caseD_9:
004807BC  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
004807C0  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
004807C5  F7 E9                     IMUL ECX
004807C7  03 D1                     ADD EDX,ECX
004807C9  B9 78 00 00 00            MOV ECX,0x78
004807CE  C1 FA 05                  SAR EDX,0x5
004807D1  8B C2                     MOV EAX,EDX
004807D3  C1 E8 1F                  SHR EAX,0x1f
004807D6  03 D0                     ADD EDX,EAX
004807D8  B8 08 00 00 00            MOV EAX,0x8
004807DD  2B C2                     SUB EAX,EDX
004807DF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004807E2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004807E5  99                        CDQ
004807E6  F7 F9                     IDIV ECX
004807E8  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004807EE  B8 04 00 00 00            MOV EAX,0x4
004807F3  2B C1                     SUB EAX,ECX
004807F5  B9 78 00 00 00            MOV ECX,0x78
004807FA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004807FD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00480800  D1 E0                     SHL EAX,0x1
00480802  8B DA                     MOV EBX,EDX
00480804  99                        CDQ
00480805  F7 F9                     IDIV ECX
00480807  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0048080A  03 DA                     ADD EBX,EDX
0048080C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00480812  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
00480819  75 06                     JNZ 0x00480821
0048081B  FF 86 22 08 00 00         INC dword ptr [ESI + 0x822]
LAB_00480821:
00480821  83 BE 22 08 00 00 0F      CMP dword ptr [ESI + 0x822],0xf
00480828  75 0A                     JNZ 0x00480834
0048082A  C7 86 22 08 00 00 00 00 00 00  MOV dword ptr [ESI + 0x822],0x0
LAB_00480834:
00480834  8B 86 22 08 00 00         MOV EAX,dword ptr [ESI + 0x822]
0048083A  6A 0E                     PUSH 0xe
0048083C  03 C3                     ADD EAX,EBX
0048083E  8B CF                     MOV ECX,EDI
00480840  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00480843  E8 67 3A F8 FF            CALL 0x004042af
00480848  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048084B  3B C8                     CMP ECX,EAX
0048084D  0F 84 6F 09 00 00         JZ 0x004811c2
00480853  51                        PUSH ECX
00480854  6A 0E                     PUSH 0xe
00480856  8B CF                     MOV ECX,EDI
00480858  E8 07 08 F8 FF            CALL 0x00401064
0048085D  8B 96 22 08 00 00         MOV EDX,dword ptr [ESI + 0x822]
00480863  8B CF                     MOV ECX,EDI
00480865  03 D3                     ADD EDX,EBX
00480867  52                        PUSH EDX
00480868  6A 0C                     PUSH 0xc
0048086A  E8 F5 07 F8 FF            CALL 0x00401064
0048086F  6A 0E                     PUSH 0xe
00480871  8B CF                     MOV ECX,EDI
00480873  E8 44 28 F8 FF            CALL 0x004030bc
00480878  85 C0                     TEST EAX,EAX
0048087A  74 0A                     JZ 0x00480886
0048087C  83 C8 FF                  OR EAX,0xffffffff
0048087F  5F                        POP EDI
00480880  5E                        POP ESI
00480881  5B                        POP EBX
00480882  8B E5                     MOV ESP,EBP
00480884  5D                        POP EBP
00480885  C3                        RET
LAB_00480886:
00480886  6A 0C                     PUSH 0xc
00480888  8B CF                     MOV ECX,EDI
0048088A  E8 2D 28 F8 FF            CALL 0x004030bc
0048088F  85 C0                     TEST EAX,EAX
00480891  74 0A                     JZ 0x0048089d
00480893  83 C8 FF                  OR EAX,0xffffffff
00480896  5F                        POP EDI
00480897  5E                        POP ESI
00480898  5B                        POP EBX
00480899  8B E5                     MOV ESP,EBP
0048089B  5D                        POP EBP
0048089C  C3                        RET
LAB_0048089d:
0048089D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004808A0  8B CF                     MOV ECX,EDI
004808A2  50                        PUSH EAX
004808A3  6A 0E                     PUSH 0xe
004808A5  E8 54 4A F8 FF            CALL 0x004052fe
004808AA  85 C0                     TEST EAX,EAX
004808AC  0F 84 10 09 00 00         JZ 0x004811c2
004808B2  83 C8 FF                  OR EAX,0xffffffff
004808B5  5F                        POP EDI
004808B6  5E                        POP ESI
004808B7  5B                        POP EBX
004808B8  8B E5                     MOV ESP,EBP
004808BA  5D                        POP EBP
004808BB  C3                        RET
switchD_004806bc::caseD_16:
004808BC  83 BE 32 07 00 00 01      CMP dword ptr [ESI + 0x732],0x1
004808C3  0F 85 42 03 00 00         JNZ 0x00480c0b
004808C9  33 C9                     XOR ECX,ECX
004808CB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004808D1  51                        PUSH ECX
004808D2  8B CE                     MOV ECX,ESI
004808D4  E8 0E 52 F8 FF            CALL 0x00405ae7
004808D9  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
004808DF  83 F8 01                  CMP EAX,0x1
004808E2  0F 85 A5 00 00 00         JNZ 0x0048098d
004808E8  83 F9 FF                  CMP ECX,-0x1
004808EB  75 3B                     JNZ 0x00480928
004808ED  C7 86 4A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x74a],0x0
004808F7  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004808FD  85 C9                     TEST ECX,ECX
004808FF  0F 84 7A 03 00 00         JZ 0x00480c7f
00480905  8B 96 F7 06 00 00         MOV EDX,dword ptr [ESI + 0x6f7]
0048090B  33 C0                     XOR EAX,EAX
0048090D  A0 4D 87 80 00            MOV AL,[0x0080874d]
00480912  52                        PUSH EDX
00480913  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00480917  50                        PUSH EAX
00480918  52                        PUSH EDX
00480919  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0048091D  50                        PUSH EAX
0048091E  E8 33 47 F8 FF            CALL 0x00405056
00480923  E9 57 03 00 00            JMP 0x00480c7f
LAB_00480928:
00480928  8B 1D 24 67 80 00         MOV EBX,dword ptr [0x00806724]
0048092E  85 C9                     TEST ECX,ECX
00480930  7C 19                     JL 0x0048094b
00480932  0F BF 43 23               MOVSX EAX,word ptr [EBX + 0x23]
00480936  99                        CDQ
00480937  2B C2                     SUB EAX,EDX
00480939  D1 F8                     SAR EAX,0x1
0048093B  3B C8                     CMP ECX,EAX
0048093D  7D 0C                     JGE 0x0048094b
0048093F  41                        INC ECX
00480940  89 8E 4A 07 00 00         MOV dword ptr [ESI + 0x74a],ECX
00480946  E9 34 03 00 00            JMP 0x00480c7f
LAB_0048094b:
0048094B  0F BF 43 23               MOVSX EAX,word ptr [EBX + 0x23]
0048094F  99                        CDQ
00480950  2B C2                     SUB EAX,EDX
00480952  D1 F8                     SAR EAX,0x1
00480954  3B C8                     CMP ECX,EAX
00480956  7E 07                     JLE 0x0048095f
00480958  49                        DEC ECX
00480959  89 8E 4A 07 00 00         MOV dword ptr [ESI + 0x74a],ECX
LAB_0048095f:
0048095F  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00480965  0F BF 41 23               MOVSX EAX,word ptr [ECX + 0x23]
00480969  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
0048096F  99                        CDQ
00480970  2B C2                     SUB EAX,EDX
00480972  D1 F8                     SAR EAX,0x1
00480974  40                        INC EAX
00480975  3B C8                     CMP ECX,EAX
00480977  75 06                     JNZ 0x0048097f
00480979  8B 17                     MOV EDX,dword ptr [EDI]
0048097B  8B CF                     MOV ECX,EDI
0048097D  FF 12                     CALL dword ptr [EDX]
LAB_0048097f:
0048097F  A1 24 67 80 00            MOV EAX,[0x00806724]
00480984  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00480988  E9 6D 02 00 00            JMP 0x00480bfa
LAB_0048098d:
0048098D  83 F9 FF                  CMP ECX,-0x1
00480990  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00480993  75 0F                     JNZ 0x004809a4
00480995  C7 86 4A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x74a],0x0
0048099F  E9 DB 02 00 00            JMP 0x00480c7f
LAB_004809a4:
004809A4  85 C9                     TEST ECX,ECX
004809A6  7C 1F                     JL 0x004809c7
004809A8  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
004809AE  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
004809B2  99                        CDQ
004809B3  2B C2                     SUB EAX,EDX
004809B5  D1 F8                     SAR EAX,0x1
004809B7  3B C8                     CMP ECX,EAX
004809B9  7D 0C                     JGE 0x004809c7
004809BB  41                        INC ECX
004809BC  89 8E 4A 07 00 00         MOV dword ptr [ESI + 0x74a],ECX
004809C2  E9 B8 02 00 00            JMP 0x00480c7f
LAB_004809c7:
004809C7  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004809CD  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004809D0  84 C9                     TEST CL,CL
004809D2  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004809D5  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004809D8  74 2F                     JZ 0x00480a09
004809DA  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
004809E0  33 C0                     XOR EAX,EAX
004809E2  8A C3                     MOV AL,BL
004809E4  33 D2                     XOR EDX,EDX
004809E6  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004809E9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004809EC  25 FF 00 00 00            AND EAX,0xff
004809F1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004809F4  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004809FB  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00480A02  0F 95 C2                  SETNZ DL
00480A05  8B C2                     MOV EAX,EDX
00480A07  EB 7B                     JMP 0x00480a84
LAB_00480a09:
00480A09  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00480A0F  3A D8                     CMP BL,AL
00480A11  74 66                     JZ 0x00480a79
00480A13  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00480A16  33 C9                     XOR ECX,ECX
00480A18  8A CB                     MOV CL,BL
00480A1A  25 FF 00 00 00            AND EAX,0xff
00480A1F  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00480A26  84 D2                     TEST DL,DL
00480A28  75 10                     JNZ 0x00480a3a
00480A2A  38 94 C1 4F 8A 80 00      CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],DL
00480A31  75 07                     JNZ 0x00480a3a
00480A33  B8 FE FF FF FF            MOV EAX,0xfffffffe
00480A38  EB 41                     JMP 0x00480a7b
LAB_00480a3a:
00480A3A  80 FA 01                  CMP DL,0x1
00480A3D  75 0F                     JNZ 0x00480a4e
00480A3F  80 BC C1 4F 8A 80 00 00   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x0
00480A47  75 05                     JNZ 0x00480a4e
00480A49  83 C8 FF                  OR EAX,0xffffffff
00480A4C  EB 2D                     JMP 0x00480a7b
LAB_00480a4e:
00480A4E  84 D2                     TEST DL,DL
00480A50  75 11                     JNZ 0x00480a63
00480A52  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
00480A5A  75 07                     JNZ 0x00480a63
00480A5C  B8 01 00 00 00            MOV EAX,0x1
00480A61  EB 18                     JMP 0x00480a7b
LAB_00480a63:
00480A63  80 FA 01                  CMP DL,0x1
00480A66  75 11                     JNZ 0x00480a79
00480A68  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
00480A70  75 07                     JNZ 0x00480a79
00480A72  B8 02 00 00 00            MOV EAX,0x2
00480A77  EB 02                     JMP 0x00480a7b
LAB_00480a79:
00480A79  33 C0                     XOR EAX,EAX
LAB_00480a7b:
00480A7B  33 C9                     XOR ECX,ECX
00480A7D  85 C0                     TEST EAX,EAX
00480A7F  0F 9C C1                  SETL CL
00480A82  8B C1                     MOV EAX,ECX
LAB_00480a84:
00480A84  83 F8 01                  CMP EAX,0x1
00480A87  0F 84 F3 00 00 00         JZ 0x00480b80
00480A8D  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00480A93  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00480A96  84 C9                     TEST CL,CL
00480A98  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00480A9B  74 29                     JZ 0x00480ac6
00480A9D  33 C0                     XOR EAX,EAX
00480A9F  8A C3                     MOV AL,BL
00480AA1  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00480AA4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00480AA7  25 FF 00 00 00            AND EAX,0xff
00480AAC  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00480AB3  33 C9                     XOR ECX,ECX
00480AB5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00480AB8  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00480ABF  0F 95 C1                  SETNZ CL
00480AC2  8B C1                     MOV EAX,ECX
00480AC4  EB 75                     JMP 0x00480b3b
LAB_00480ac6:
00480AC6  3A C3                     CMP AL,BL
00480AC8  74 66                     JZ 0x00480b30
00480ACA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00480ACD  33 C9                     XOR ECX,ECX
00480ACF  25 FF 00 00 00            AND EAX,0xff
00480AD4  8A CB                     MOV CL,BL
00480AD6  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00480ADD  84 D2                     TEST DL,DL
00480ADF  75 10                     JNZ 0x00480af1
00480AE1  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00480AE8  75 07                     JNZ 0x00480af1
00480AEA  B8 FE FF FF FF            MOV EAX,0xfffffffe
00480AEF  EB 41                     JMP 0x00480b32
LAB_00480af1:
00480AF1  80 FA 01                  CMP DL,0x1
00480AF4  75 0F                     JNZ 0x00480b05
00480AF6  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00480AFE  75 05                     JNZ 0x00480b05
00480B00  83 C8 FF                  OR EAX,0xffffffff
00480B03  EB 2D                     JMP 0x00480b32
LAB_00480b05:
00480B05  84 D2                     TEST DL,DL
00480B07  75 11                     JNZ 0x00480b1a
00480B09  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00480B11  75 07                     JNZ 0x00480b1a
00480B13  B8 01 00 00 00            MOV EAX,0x1
00480B18  EB 18                     JMP 0x00480b32
LAB_00480b1a:
00480B1A  80 FA 01                  CMP DL,0x1
00480B1D  75 11                     JNZ 0x00480b30
00480B1F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00480B27  75 07                     JNZ 0x00480b30
00480B29  B8 02 00 00 00            MOV EAX,0x2
00480B2E  EB 02                     JMP 0x00480b32
LAB_00480b30:
00480B30  33 C0                     XOR EAX,EAX
LAB_00480b32:
00480B32  33 D2                     XOR EDX,EDX
00480B34  85 C0                     TEST EAX,EAX
00480B36  0F 9C C2                  SETL DL
00480B39  8B C2                     MOV EAX,EDX
LAB_00480b3b:
00480B3B  83 F8 01                  CMP EAX,0x1
00480B3E  74 40                     JZ 0x00480b80
00480B40  A1 24 67 80 00            MOV EAX,[0x00806724]
00480B45  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00480B49  99                        CDQ
00480B4A  2B C2                     SUB EAX,EDX
00480B4C  8B C8                     MOV ECX,EAX
00480B4E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00480B51  D1 F9                     SAR ECX,0x1
00480B53  3B C1                     CMP EAX,ECX
00480B55  7E 07                     JLE 0x00480b5e
00480B57  48                        DEC EAX
00480B58  89 86 4A 07 00 00         MOV dword ptr [ESI + 0x74a],EAX
LAB_00480b5e:
00480B5E  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
00480B64  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00480B6A  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
00480B6E  99                        CDQ
00480B6F  2B C2                     SUB EAX,EDX
00480B71  D1 F8                     SAR EAX,0x1
00480B73  40                        INC EAX
00480B74  3B C8                     CMP ECX,EAX
00480B76  75 78                     JNZ 0x00480bf0
00480B78  8B 07                     MOV EAX,dword ptr [EDI]
00480B7A  8B CF                     MOV ECX,EDI
00480B7C  FF 10                     CALL dword ptr [EAX]
00480B7E  EB 70                     JMP 0x00480bf0
LAB_00480b80:
00480B80  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00480B86  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00480B89  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
00480B8D  4A                        DEC EDX
00480B8E  3B C2                     CMP EAX,EDX
00480B90  7D 0D                     JGE 0x00480b9f
00480B92  40                        INC EAX
00480B93  89 86 4A 07 00 00         MOV dword ptr [ESI + 0x74a],EAX
00480B99  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00480b9f:
00480B9F  A1 24 67 80 00            MOV EAX,[0x00806724]
00480BA4  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00480BAA  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00480BAE  99                        CDQ
00480BAF  2B C2                     SUB EAX,EDX
00480BB1  D1 F8                     SAR EAX,0x1
00480BB3  40                        INC EAX
00480BB4  3B C8                     CMP ECX,EAX
00480BB6  75 38                     JNZ 0x00480bf0
00480BB8  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00480BBC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00480BBF  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00480BC2  51                        PUSH ECX
00480BC3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00480BC9  52                        PUSH EDX
00480BCA  50                        PUSH EAX
00480BCB  53                        PUSH EBX
00480BCC  E8 D2 15 F8 FF            CALL 0x004021a3
00480BD1  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00480BD5  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00480BD8  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00480BDB  51                        PUSH ECX
00480BDC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00480BE2  52                        PUSH EDX
00480BE3  50                        PUSH EAX
00480BE4  E8 5A 2A F8 FF            CALL 0x00403643
00480BE9  8B CF                     MOV ECX,EDI
00480BEB  E8 A0 1E F8 FF            CALL 0x00402a90
LAB_00480bf0:
00480BF0  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00480BF6  0F BF 41 23               MOVSX EAX,word ptr [ECX + 0x23]
LAB_00480bfa:
00480BFA  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00480C00  99                        CDQ
00480C01  2B C2                     SUB EAX,EDX
00480C03  D1 F8                     SAR EAX,0x1
00480C05  3B C8                     CMP ECX,EAX
00480C07  7E 76                     JLE 0x00480c7f
00480C09  EB 5F                     JMP 0x00480c6a
LAB_00480c0b:
00480C0B  8B 86 4A 07 00 00         MOV EAX,dword ptr [ESI + 0x74a]
00480C11  83 F8 FF                  CMP EAX,-0x1
00480C14  7E 07                     JLE 0x00480c1d
00480C16  48                        DEC EAX
00480C17  89 86 4A 07 00 00         MOV dword ptr [ESI + 0x74a],EAX
LAB_00480c1d:
00480C1D  83 BE 4A 07 00 00 FF      CMP dword ptr [ESI + 0x74a],-0x1
00480C24  75 0B                     JNZ 0x00480c31
00480C26  6A 00                     PUSH 0x0
00480C28  6A 00                     PUSH 0x0
00480C2A  8B CF                     MOV ECX,EDI
00480C2C  E8 3C 05 F8 FF            CALL 0x0040116d
LAB_00480c31:
00480C31  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
00480C37  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00480C3D  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
00480C41  99                        CDQ
00480C42  2B C2                     SUB EAX,EDX
00480C44  D1 F8                     SAR EAX,0x1
00480C46  40                        INC EAX
00480C47  3B C8                     CMP ECX,EAX
00480C49  75 06                     JNZ 0x00480c51
00480C4B  8B 07                     MOV EAX,dword ptr [EDI]
00480C4D  8B CF                     MOV ECX,EDI
00480C4F  FF 10                     CALL dword ptr [EAX]
LAB_00480c51:
00480C51  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00480C57  0F BF 41 23               MOVSX EAX,word ptr [ECX + 0x23]
00480C5B  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00480C61  99                        CDQ
00480C62  2B C2                     SUB EAX,EDX
00480C64  D1 F8                     SAR EAX,0x1
00480C66  3B C8                     CMP ECX,EAX
00480C68  7E 15                     JLE 0x00480c7f
LAB_00480c6a:
00480C6A  6A 00                     PUSH 0x0
00480C6C  8B CF                     MOV ECX,EDI
00480C6E  E8 59 46 F8 FF            CALL 0x004052cc
00480C73  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00480C79  50                        PUSH EAX
00480C7A  E8 F1 5B 26 00            CALL 0x006e6870
LAB_00480c7f:
00480C7F  8B 86 4A 07 00 00         MOV EAX,dword ptr [ESI + 0x74a]
00480C85  83 F8 FF                  CMP EAX,-0x1
00480C88  0F 8E 84 02 00 00         JLE 0x00480f12
00480C8E  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00480C94  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
00480C98  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
00480C9C  52                        PUSH EDX
00480C9D  50                        PUSH EAX
00480C9E  8B CF                     MOV ECX,EDI
00480CA0  E8 C8 04 F8 FF            CALL 0x0040116d
00480CA5  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00480CAB  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00480CAE  84 C9                     TEST CL,CL
00480CB0  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00480CB3  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00480CB6  74 2D                     JZ 0x00480ce5
00480CB8  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00480CBE  33 C0                     XOR EAX,EAX
00480CC0  8A C3                     MOV AL,BL
00480CC2  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00480CC5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00480CC8  25 FF 00 00 00            AND EAX,0xff
00480CCD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00480CD0  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00480CD7  33 C0                     XOR EAX,EAX
00480CD9  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00480CE0  0F 95 C0                  SETNZ AL
00480CE3  EB 7B                     JMP 0x00480d60
LAB_00480ce5:
00480CE5  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00480CEB  3A D8                     CMP BL,AL
00480CED  74 66                     JZ 0x00480d55
00480CEF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00480CF2  33 C9                     XOR ECX,ECX
00480CF4  8A CB                     MOV CL,BL
00480CF6  25 FF 00 00 00            AND EAX,0xff
00480CFB  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00480D02  84 D2                     TEST DL,DL
00480D04  75 10                     JNZ 0x00480d16
00480D06  38 94 C1 4F 8A 80 00      CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],DL
00480D0D  75 07                     JNZ 0x00480d16
00480D0F  B8 FE FF FF FF            MOV EAX,0xfffffffe
00480D14  EB 41                     JMP 0x00480d57
LAB_00480d16:
00480D16  80 FA 01                  CMP DL,0x1
00480D19  75 0F                     JNZ 0x00480d2a
00480D1B  80 BC C1 4F 8A 80 00 00   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x0
00480D23  75 05                     JNZ 0x00480d2a
00480D25  83 C8 FF                  OR EAX,0xffffffff
00480D28  EB 2D                     JMP 0x00480d57
LAB_00480d2a:
00480D2A  84 D2                     TEST DL,DL
00480D2C  75 11                     JNZ 0x00480d3f
00480D2E  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
00480D36  75 07                     JNZ 0x00480d3f
00480D38  B8 01 00 00 00            MOV EAX,0x1
00480D3D  EB 18                     JMP 0x00480d57
LAB_00480d3f:
00480D3F  80 FA 01                  CMP DL,0x1
00480D42  75 11                     JNZ 0x00480d55
00480D44  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
00480D4C  75 07                     JNZ 0x00480d55
00480D4E  B8 02 00 00 00            MOV EAX,0x2
00480D53  EB 02                     JMP 0x00480d57
LAB_00480d55:
00480D55  33 C0                     XOR EAX,EAX
LAB_00480d57:
00480D57  33 C9                     XOR ECX,ECX
00480D59  85 C0                     TEST EAX,EAX
00480D5B  0F 9C C1                  SETL CL
00480D5E  8B C1                     MOV EAX,ECX
LAB_00480d60:
00480D60  83 F8 01                  CMP EAX,0x1
00480D63  0F 84 32 01 00 00         JZ 0x00480e9b
00480D69  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00480D6F  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00480D72  84 C9                     TEST CL,CL
00480D74  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00480D77  74 29                     JZ 0x00480da2
00480D79  33 C0                     XOR EAX,EAX
00480D7B  8A C3                     MOV AL,BL
00480D7D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00480D80  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00480D83  25 FF 00 00 00            AND EAX,0xff
00480D88  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00480D8F  33 C9                     XOR ECX,ECX
00480D91  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00480D94  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00480D9B  0F 95 C1                  SETNZ CL
00480D9E  8B C1                     MOV EAX,ECX
00480DA0  EB 78                     JMP 0x00480e1a
LAB_00480da2:
00480DA2  3A C3                     CMP AL,BL
00480DA4  74 69                     JZ 0x00480e0f
00480DA6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00480DA9  33 C9                     XOR ECX,ECX
00480DAB  25 FF 00 00 00            AND EAX,0xff
00480DB0  8A CB                     MOV CL,BL
00480DB2  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00480DB9  84 D2                     TEST DL,DL
00480DBB  75 12                     JNZ 0x00480dcf
00480DBD  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00480DC4  84 DB                     TEST BL,BL
00480DC6  75 07                     JNZ 0x00480dcf
00480DC8  B8 FE FF FF FF            MOV EAX,0xfffffffe
00480DCD  EB 42                     JMP 0x00480e11
LAB_00480dcf:
00480DCF  80 FA 01                  CMP DL,0x1
00480DD2  75 10                     JNZ 0x00480de4
00480DD4  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00480DDB  84 DB                     TEST BL,BL
00480DDD  75 05                     JNZ 0x00480de4
00480DDF  83 C8 FF                  OR EAX,0xffffffff
00480DE2  EB 2D                     JMP 0x00480e11
LAB_00480de4:
00480DE4  84 D2                     TEST DL,DL
00480DE6  75 11                     JNZ 0x00480df9
00480DE8  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00480DF0  75 07                     JNZ 0x00480df9
00480DF2  B8 01 00 00 00            MOV EAX,0x1
00480DF7  EB 18                     JMP 0x00480e11
LAB_00480df9:
00480DF9  80 FA 01                  CMP DL,0x1
00480DFC  75 11                     JNZ 0x00480e0f
00480DFE  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00480E06  75 07                     JNZ 0x00480e0f
00480E08  B8 02 00 00 00            MOV EAX,0x2
00480E0D  EB 02                     JMP 0x00480e11
LAB_00480e0f:
00480E0F  33 C0                     XOR EAX,EAX
LAB_00480e11:
00480E11  33 D2                     XOR EDX,EDX
00480E13  85 C0                     TEST EAX,EAX
00480E15  0F 9C C2                  SETL DL
00480E18  8B C2                     MOV EAX,EDX
LAB_00480e1a:
00480E1A  83 F8 01                  CMP EAX,0x1
00480E1D  74 7C                     JZ 0x00480e9b
00480E1F  83 BE 46 07 00 00 01      CMP dword ptr [ESI + 0x746],0x1
00480E26  0F 85 E6 00 00 00         JNZ 0x00480f12
00480E2C  6A 0E                     PUSH 0xe
00480E2E  8B CF                     MOV ECX,EDI
00480E30  E8 79 0D F8 FF            CALL 0x00401bae
00480E35  6A 0D                     PUSH 0xd
00480E37  8B CF                     MOV ECX,EDI
00480E39  E8 70 0D F8 FF            CALL 0x00401bae
00480E3E  6A 0C                     PUSH 0xc
00480E40  8B CF                     MOV ECX,EDI
00480E42  E8 67 0D F8 FF            CALL 0x00401bae
00480E47  6A 01                     PUSH 0x1
00480E49  8B CF                     MOV ECX,EDI
00480E4B  E8 8A 31 F8 FF            CALL 0x00403fda
00480E50  6A 02                     PUSH 0x2
00480E52  8B CF                     MOV ECX,EDI
00480E54  E8 81 31 F8 FF            CALL 0x00403fda
00480E59  6A 00                     PUSH 0x0
00480E5B  8B CF                     MOV ECX,EDI
00480E5D  E8 78 31 F8 FF            CALL 0x00403fda
00480E62  6A 0F                     PUSH 0xf
00480E64  8B CF                     MOV ECX,EDI
00480E66  E8 6F 31 F8 FF            CALL 0x00403fda
00480E6B  6A 0B                     PUSH 0xb
00480E6D  8B CF                     MOV ECX,EDI
00480E6F  E8 66 31 F8 FF            CALL 0x00403fda
00480E74  6A 0A                     PUSH 0xa
00480E76  8B CF                     MOV ECX,EDI
00480E78  E8 5D 31 F8 FF            CALL 0x00403fda
00480E7D  6A 09                     PUSH 0x9
00480E7F  8B CF                     MOV ECX,EDI
00480E81  E8 54 31 F8 FF            CALL 0x00403fda
00480E86  6A 08                     PUSH 0x8
00480E88  8B CF                     MOV ECX,EDI
00480E8A  E8 4B 31 F8 FF            CALL 0x00403fda
00480E8F  C7 86 46 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x746],0x0
00480E99  EB 77                     JMP 0x00480f12
LAB_00480e9b:
00480E9B  8B 86 46 07 00 00         MOV EAX,dword ptr [ESI + 0x746]
00480EA1  85 C0                     TEST EAX,EAX
00480EA3  75 6D                     JNZ 0x00480f12
00480EA5  6A 0E                     PUSH 0xe
00480EA7  8B CF                     MOV ECX,EDI
00480EA9  E8 00 0D F8 FF            CALL 0x00401bae
00480EAE  6A 0D                     PUSH 0xd
00480EB0  8B CF                     MOV ECX,EDI
00480EB2  E8 F7 0C F8 FF            CALL 0x00401bae
00480EB7  6A 0C                     PUSH 0xc
00480EB9  8B CF                     MOV ECX,EDI
00480EBB  E8 EE 0C F8 FF            CALL 0x00401bae
00480EC0  6A 01                     PUSH 0x1
00480EC2  8B CF                     MOV ECX,EDI
00480EC4  E8 E5 0C F8 FF            CALL 0x00401bae
00480EC9  6A 02                     PUSH 0x2
00480ECB  8B CF                     MOV ECX,EDI
00480ECD  E8 DC 0C F8 FF            CALL 0x00401bae
00480ED2  6A 00                     PUSH 0x0
00480ED4  8B CF                     MOV ECX,EDI
00480ED6  E8 D3 0C F8 FF            CALL 0x00401bae
00480EDB  6A 0F                     PUSH 0xf
00480EDD  8B CF                     MOV ECX,EDI
00480EDF  E8 CA 0C F8 FF            CALL 0x00401bae
00480EE4  6A 0B                     PUSH 0xb
00480EE6  8B CF                     MOV ECX,EDI
00480EE8  E8 C1 0C F8 FF            CALL 0x00401bae
00480EED  6A 0A                     PUSH 0xa
00480EEF  8B CF                     MOV ECX,EDI
00480EF1  E8 B8 0C F8 FF            CALL 0x00401bae
00480EF6  6A 09                     PUSH 0x9
00480EF8  8B CF                     MOV ECX,EDI
00480EFA  E8 AF 0C F8 FF            CALL 0x00401bae
00480EFF  6A 08                     PUSH 0x8
00480F01  8B CF                     MOV ECX,EDI
00480F03  E8 A6 0C F8 FF            CALL 0x00401bae
00480F08  C7 86 46 07 00 00 01 00 00 00  MOV dword ptr [ESI + 0x746],0x1
LAB_00480f12:
00480F12  83 BE F7 06 00 00 16      CMP dword ptr [ESI + 0x6f7],0x16
00480F19  0F 85 CF 00 00 00         JNZ 0x00480fee
switchD_004806bc::caseD_a:
00480F1F  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
00480F23  B8 89 88 88 88            MOV EAX,0x88888889
00480F28  8B 1D FC 73 80 00         MOV EBX,dword ptr [0x008073fc]
00480F2E  F7 E9                     IMUL ECX
00480F30  03 D1                     ADD EDX,ECX
00480F32  B9 18 00 00 00            MOV ECX,0x18
00480F37  C1 FA 03                  SAR EDX,0x3
00480F3A  8B C2                     MOV EAX,EDX
00480F3C  6A 0E                     PUSH 0xe
00480F3E  C1 E8 1F                  SHR EAX,0x1f
00480F41  03 D0                     ADD EDX,EAX
00480F43  B8 18 00 00 00            MOV EAX,0x18
00480F48  2B C2                     SUB EAX,EDX
00480F4A  99                        CDQ
00480F4B  F7 F9                     IDIV ECX
00480F4D  B8 04 00 00 00            MOV EAX,0x4
00480F52  2B C3                     SUB EAX,EBX
00480F54  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00480F57  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00480F5A  99                        CDQ
00480F5B  F7 F9                     IDIV ECX
00480F5D  8B CF                     MOV ECX,EDI
00480F5F  8B DA                     MOV EBX,EDX
00480F61  E8 49 33 F8 FF            CALL 0x004042af
00480F66  3B D8                     CMP EBX,EAX
00480F68  0F 84 80 00 00 00         JZ 0x00480fee
00480F6E  53                        PUSH EBX
00480F6F  6A 0E                     PUSH 0xe
00480F71  8B CF                     MOV ECX,EDI
00480F73  E8 EC 00 F8 FF            CALL 0x00401064
00480F78  53                        PUSH EBX
00480F79  6A 0C                     PUSH 0xc
00480F7B  8B CF                     MOV ECX,EDI
00480F7D  E8 E2 00 F8 FF            CALL 0x00401064
00480F82  6A 0E                     PUSH 0xe
00480F84  8B CF                     MOV ECX,EDI
00480F86  E8 31 21 F8 FF            CALL 0x004030bc
00480F8B  85 C0                     TEST EAX,EAX
00480F8D  74 0A                     JZ 0x00480f99
00480F8F  83 C8 FF                  OR EAX,0xffffffff
00480F92  5F                        POP EDI
00480F93  5E                        POP ESI
00480F94  5B                        POP EBX
00480F95  8B E5                     MOV ESP,EBP
00480F97  5D                        POP EBP
00480F98  C3                        RET
LAB_00480f99:
00480F99  6A 0C                     PUSH 0xc
00480F9B  8B CF                     MOV ECX,EDI
00480F9D  E8 1A 21 F8 FF            CALL 0x004030bc
00480FA2  85 C0                     TEST EAX,EAX
00480FA4  74 0A                     JZ 0x00480fb0
00480FA6  83 C8 FF                  OR EAX,0xffffffff
00480FA9  5F                        POP EDI
00480FAA  5E                        POP ESI
00480FAB  5B                        POP EBX
00480FAC  8B E5                     MOV ESP,EBP
00480FAE  5D                        POP EBP
00480FAF  C3                        RET
LAB_00480fb0:
00480FB0  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
00480FB4  B8 89 88 88 88            MOV EAX,0x88888889
00480FB9  F7 E9                     IMUL ECX
00480FBB  03 D1                     ADD EDX,ECX
00480FBD  B9 18 00 00 00            MOV ECX,0x18
00480FC2  C1 FA 03                  SAR EDX,0x3
00480FC5  8B C2                     MOV EAX,EDX
00480FC7  C1 E8 1F                  SHR EAX,0x1f
00480FCA  03 D0                     ADD EDX,EAX
00480FCC  B8 18 00 00 00            MOV EAX,0x18
00480FD1  2B C2                     SUB EAX,EDX
00480FD3  99                        CDQ
00480FD4  F7 F9                     IDIV ECX
00480FD6  8B CF                     MOV ECX,EDI
00480FD8  52                        PUSH EDX
00480FD9  6A 0E                     PUSH 0xe
00480FDB  E8 1E 43 F8 FF            CALL 0x004052fe
00480FE0  85 C0                     TEST EAX,EAX
00480FE2  74 0A                     JZ 0x00480fee
00480FE4  83 C8 FF                  OR EAX,0xffffffff
00480FE7  5F                        POP EDI
00480FE8  5E                        POP ESI
00480FE9  5B                        POP EBX
00480FEA  8B E5                     MOV ESP,EBP
00480FEC  5D                        POP EBP
00480FED  C3                        RET
switchD_004806bc::caseD_24:
00480FEE  8B 46 76                  MOV EAX,dword ptr [ESI + 0x76]
00480FF1  83 F8 01                  CMP EAX,0x1
00480FF4  74 0B                     JZ 0x00481001
00480FF6  85 C0                     TEST EAX,EAX
00480FF8  75 0E                     JNZ 0x00481008
00480FFA  66 83 7E 6E 2F            CMP word ptr [ESI + 0x6e],0x2f
00480FFF  74 07                     JZ 0x00481008
LAB_00481001:
00481001  8B CE                     MOV ECX,ESI
00481003  E8 A4 35 F8 FF            CALL 0x004045ac
LAB_00481008:
00481008  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0048100B  B9 07 00 00 00            MOV ECX,0x7
00481010  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00481016  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0048101C  33 D2                     XOR EDX,EDX
0048101E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00481021  C1 E8 10                  SHR EAX,0x10
00481024  F7 F1                     DIV ECX
00481026  8B FA                     MOV EDI,EDX
00481028  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0048102B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00481031  83 EF 03                  SUB EDI,0x3
00481034  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0048103A  33 D2                     XOR EDX,EDX
0048103C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0048103F  C1 E8 10                  SHR EAX,0x10
00481042  F7 F1                     DIV ECX
00481044  8B DA                     MOV EBX,EDX
00481046  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00481049  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0048104F  83 EB 03                  SUB EBX,0x3
00481052  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00481058  33 D2                     XOR EDX,EDX
0048105A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0048105D  C1 E8 10                  SHR EAX,0x10
00481060  F7 F1                     DIV ECX
00481062  8A 86 E3 00 00 00         MOV AL,byte ptr [ESI + 0xe3]
00481068  83 EA 03                  SUB EDX,0x3
0048106B  3C 01                     CMP AL,0x1
0048106D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00481070  0F 85 4C 01 00 00         JNZ 0x004811c2
00481076  66 83 BE FA 00 00 00 00   CMP word ptr [ESI + 0xfa],0x0
0048107E  0F 85 3E 01 00 00         JNZ 0x004811c2
00481084  83 BE E8 00 00 00 01      CMP dword ptr [ESI + 0xe8],0x1
0048108B  0F 84 31 01 00 00         JZ 0x004811c2
00481091  8A 56 63                  MOV DL,byte ptr [ESI + 0x63]
00481094  8A 46 61                  MOV AL,byte ptr [ESI + 0x61]
00481097  3A D0                     CMP DL,AL
00481099  0F 85 23 01 00 00         JNZ 0x004811c2
0048109F  A1 24 67 80 00            MOV EAX,[0x00806724]
004810A4  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
004810AA  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
004810AE  99                        CDQ
004810AF  2B C2                     SUB EAX,EDX
004810B1  D1 F8                     SAR EAX,0x1
004810B3  3B C8                     CMP ECX,EAX
004810B5  0F 8F 07 01 00 00         JG 0x004811c2
004810BB  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
004810C1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004810C8  84 C0                     TEST AL,AL
004810CA  0F 86 F2 00 00 00         JBE 0x004811c2
004810D0  8D 8E B3 02 00 00         LEA ECX,[ESI + 0x2b3]
004810D6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_004810d9:
004810D9  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
004810DD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004810E0  52                        PUSH EDX
004810E1  8B 10                     MOV EDX,dword ptr [EAX]
004810E3  83 EC 08                  SUB ESP,0x8
004810E6  8B CC                     MOV ECX,ESP
004810E8  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004810EC  89 11                     MOV dword ptr [ECX],EDX
004810EE  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004810F2  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004810F5  51                        PUSH ECX
004810F6  8B CE                     MOV ECX,ESI
004810F8  E8 2F 23 F8 FF            CALL 0x0040342c
004810FD  8B 10                     MOV EDX,dword ptr [EAX]
004810FF  6A 00                     PUSH 0x0
00481101  6A 00                     PUSH 0x0
00481103  6A FF                     PUSH -0x1
00481105  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00481109  6A 00                     PUSH 0x0
0048110B  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
0048110F  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00481114  6A 00                     PUSH 0x0
00481116  6A 00                     PUSH 0x0
00481118  6A 00                     PUSH 0x0
0048111A  83 F8 01                  CMP EAX,0x1
0048111D  6A 00                     PUSH 0x0
0048111F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00481122  6A 00                     PUSH 0x0
00481124  75 3F                     JNZ 0x00481165
00481126  D9 46 70                  FLD float ptr [ESI + 0x70]
00481129  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0048112F  E8 54 D1 2A 00            CALL 0x0072e288
00481134  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00481138  0F BF C8                  MOVSX ECX,AX
0048113B  03 55 F4                  ADD EDX,dword ptr [EBP + -0xc]
0048113E  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00481142  03 D1                     ADD EDX,ECX
00481144  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00481148  03 C2                     ADD EAX,EDX
0048114A  0F BF 55 EE               MOVSX EDX,word ptr [EBP + -0x12]
0048114E  2B CA                     SUB ECX,EDX
00481150  50                        PUSH EAX
00481151  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00481155  03 CB                     ADD ECX,EBX
00481157  8B D7                     MOV EDX,EDI
00481159  51                        PUSH ECX
0048115A  03 D0                     ADD EDX,EAX
0048115C  0F BF 4D EC               MOVSX ECX,word ptr [EBP + -0x14]
00481160  03 CA                     ADD ECX,EDX
00481162  51                        PUSH ECX
00481163  EB 2C                     JMP 0x00481191
LAB_00481165:
00481165  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
00481169  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
0048116D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00481170  03 D0                     ADD EDX,EAX
00481172  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00481176  03 CA                     ADD ECX,EDX
00481178  51                        PUSH ECX
00481179  0F BF 4D EE               MOVSX ECX,word ptr [EBP + -0x12]
0048117D  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00481181  2B C1                     SUB EAX,ECX
00481183  8B CF                     MOV ECX,EDI
00481185  03 C3                     ADD EAX,EBX
00481187  03 CA                     ADD ECX,EDX
00481189  50                        PUSH EAX
0048118A  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
0048118E  03 C1                     ADD EAX,ECX
00481190  50                        PUSH EAX
LAB_00481191:
00481191  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00481197  6A 07                     PUSH 0x7
00481199  6A 02                     PUSH 0x2
0048119B  6A 01                     PUSH 0x1
0048119D  E8 91 02 F8 FF            CALL 0x00401433
004811A2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004811A5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004811A8  83 C2 06                  ADD EDX,0x6
004811AB  40                        INC EAX
004811AC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004811AF  33 D2                     XOR EDX,EDX
004811B1  8A 96 BF 02 00 00         MOV DL,byte ptr [ESI + 0x2bf]
004811B7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004811BA  3B C2                     CMP EAX,EDX
004811BC  0F 8C 17 FF FF FF         JL 0x004810d9
LAB_004811c2:
004811C2  8B CE                     MOV ECX,ESI
004811C4  E8 74 3E F8 FF            CALL 0x0040503d
004811C9  5F                        POP EDI
004811CA  5E                        POP ESI
004811CB  5B                        POP EBX
004811CC  8B E5                     MOV ESP,EBP
004811CE  5D                        POP EBP
004811CF  C3                        RET
