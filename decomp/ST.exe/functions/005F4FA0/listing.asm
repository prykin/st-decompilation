STBHEShellC::sub_005F4FA0:
005F4FA0  55                        PUSH EBP
005F4FA1  8B EC                     MOV EBP,ESP
005F4FA3  83 EC 1C                  SUB ESP,0x1c
005F4FA6  53                        PUSH EBX
005F4FA7  8B D9                     MOV EBX,ECX
005F4FA9  57                        PUSH EDI
005F4FAA  33 FF                     XOR EDI,EDI
005F4FAC  8B 8B 69 01 00 00         MOV ECX,dword ptr [EBX + 0x169]
005F4FB2  33 C0                     XOR EAX,EAX
005F4FB4  3B CF                     CMP ECX,EDI
005F4FB6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005F4FB9  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
005F4FBC  0F 84 FB 02 00 00         JZ 0x005f52bd
005F4FC2  8B 8B 0D 01 00 00         MOV ECX,dword ptr [EBX + 0x10d]
005F4FC8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005F4FCB  3B CF                     CMP ECX,EDI
005F4FCD  0F 8E EA 02 00 00         JLE 0x005f52bd
005F4FD3  56                        PUSH ESI
LAB_005f4fd4:
005F4FD4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F4FD9  8B F7                     MOV ESI,EDI
005F4FDB  0F AF B3 09 01 00 00      IMUL ESI,dword ptr [EBX + 0x109]
005F4FE2  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F4FE8  8B 84 BB 59 01 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x159]
005F4FEF  3B C8                     CMP ECX,EAX
005F4FF1  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005F4FF4  73 0C                     JNC 0x005f5002
005F4FF6  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
005F4FFD  E9 A5 02 00 00            JMP 0x005f52a7
LAB_005f5002:
005F5002  8B 93 25 01 00 00         MOV EDX,dword ptr [EBX + 0x125]
005F5008  8B 84 BB 39 01 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x139]
005F500F  03 C2                     ADD EAX,EDX
005F5011  89 84 BB 39 01 00 00      MOV dword ptr [EBX + EDI*0x4 + 0x139],EAX
005F5018  8B 83 21 01 00 00         MOV EAX,dword ptr [EBX + 0x121]
005F501E  8B 8C BB 49 01 00 00      MOV ECX,dword ptr [EBX + EDI*0x4 + 0x149]
005F5025  03 C8                     ADD ECX,EAX
005F5027  85 FF                     TEST EDI,EDI
005F5029  89 8C BB 49 01 00 00      MOV dword ptr [EBX + EDI*0x4 + 0x149],ECX
005F5030  75 30                     JNZ 0x005f5062
005F5032  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F5037  F7 E9                     IMUL ECX
005F5039  8B 83 29 01 00 00         MOV EAX,dword ptr [EBX + 0x129]
005F503F  C1 FA 06                  SAR EDX,0x6
005F5042  8B CA                     MOV ECX,EDX
005F5044  C1 E9 1F                  SHR ECX,0x1f
005F5047  03 D1                     ADD EDX,ECX
005F5049  3B D0                     CMP EDX,EAX
005F504B  74 15                     JZ 0x005f5062
005F504D  89 93 29 01 00 00         MOV dword ptr [EBX + 0x129],EDX
005F5053  8B 83 39 01 00 00         MOV EAX,dword ptr [EBX + 0x139]
005F5059  50                        PUSH EAX
005F505A  52                        PUSH EDX
005F505B  8B CB                     MOV ECX,EBX
005F505D  E8 23 C2 E0 FF            CALL 0x00401285
LAB_005f5062:
005F5062  8B 83 09 01 00 00         MOV EAX,dword ptr [EBX + 0x109]
005F5068  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
005F506F  85 C0                     TEST EAX,EAX
005F5071  0F 8E 30 02 00 00         JLE 0x005f52a7
LAB_005f5077:
005F5077  8B 83 69 01 00 00         MOV EAX,dword ptr [EBX + 0x169]
005F507D  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
005F5080  0F 83 05 02 00 00         JNC 0x005f528b
005F5086  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005F5089  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005F508C  0F AF 75 F4               IMUL ESI,dword ptr [EBP + -0xc]
005F5090  03 F1                     ADD ESI,ECX
005F5092  85 F6                     TEST ESI,ESI
005F5094  0F 84 F1 01 00 00         JZ 0x005f528b
005F509A  80 3E 02                  CMP byte ptr [ESI],0x2
005F509D  0F 84 E8 01 00 00         JZ 0x005f528b
005F50A3  8B 4E 12                  MOV ECX,dword ptr [ESI + 0x12]
005F50A6  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F50AB  0F AF 8C BB 39 01 00 00   IMUL ECX,dword ptr [EBX + EDI*0x4 + 0x139]
005F50B3  F7 E9                     IMUL ECX
005F50B5  C1 FA 0C                  SAR EDX,0xc
005F50B8  8B CA                     MOV ECX,EDX
005F50BA  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F50BF  C1 E9 1F                  SHR ECX,0x1f
005F50C2  03 D1                     ADD EDX,ECX
005F50C4  8B 8B 11 01 00 00         MOV ECX,dword ptr [EBX + 0x111]
005F50CA  03 D1                     ADD EDX,ECX
005F50CC  8B 4E 16                  MOV ECX,dword ptr [ESI + 0x16]
005F50CF  89 56 02                  MOV dword ptr [ESI + 0x2],EDX
005F50D2  0F AF 8C BB 39 01 00 00   IMUL ECX,dword ptr [EBX + EDI*0x4 + 0x139]
005F50DA  F7 E9                     IMUL ECX
005F50DC  8B 8B 15 01 00 00         MOV ECX,dword ptr [EBX + 0x115]
005F50E2  C1 FA 0C                  SAR EDX,0xc
005F50E5  8B C2                     MOV EAX,EDX
005F50E7  C1 E8 1F                  SHR EAX,0x1f
005F50EA  03 D0                     ADD EDX,EAX
005F50EC  B8 79 19 8C 02            MOV EAX,0x28c1979
005F50F1  03 D1                     ADD EDX,ECX
005F50F3  8B 4E 02                  MOV ECX,dword ptr [ESI + 0x2]
005F50F6  89 56 06                  MOV dword ptr [ESI + 0x6],EDX
005F50F9  8B BC BB 49 01 00 00      MOV EDI,dword ptr [EBX + EDI*0x4 + 0x149]
005F5100  85 C9                     TEST ECX,ECX
005F5102  89 7E 0A                  MOV dword ptr [ESI + 0xa],EDI
005F5105  7C 13                     JL 0x005f511a
005F5107  F7 E9                     IMUL ECX
005F5109  D1 FA                     SAR EDX,0x1
005F510B  8B C2                     MOV EAX,EDX
005F510D  C1 E8 1F                  SHR EAX,0x1f
005F5110  03 D0                     ADD EDX,EAX
005F5112  0F BF D2                  MOVSX EDX,DX
005F5115  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005F5118  EB 12                     JMP 0x005f512c
LAB_005f511a:
005F511A  F7 E9                     IMUL ECX
005F511C  D1 FA                     SAR EDX,0x1
005F511E  8B C2                     MOV EAX,EDX
005F5120  C1 E8 1F                  SHR EAX,0x1f
005F5123  03 D0                     ADD EDX,EAX
005F5125  0F BF C2                  MOVSX EAX,DX
005F5128  48                        DEC EAX
005F5129  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_005f512c:
005F512C  8B 56 06                  MOV EDX,dword ptr [ESI + 0x6]
005F512F  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5134  85 D2                     TEST EDX,EDX
005F5136  7C 13                     JL 0x005f514b
005F5138  F7 EA                     IMUL EDX
005F513A  D1 FA                     SAR EDX,0x1
005F513C  8B C2                     MOV EAX,EDX
005F513E  C1 E8 1F                  SHR EAX,0x1f
005F5141  03 D0                     ADD EDX,EAX
005F5143  0F BF D2                  MOVSX EDX,DX
005F5146  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005F5149  EB 12                     JMP 0x005f515d
LAB_005f514b:
005F514B  F7 EA                     IMUL EDX
005F514D  D1 FA                     SAR EDX,0x1
005F514F  8B C2                     MOV EAX,EDX
005F5151  C1 E8 1F                  SHR EAX,0x1f
005F5154  03 D0                     ADD EDX,EAX
005F5156  0F BF C2                  MOVSX EAX,DX
005F5159  48                        DEC EAX
005F515A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_005f515d:
005F515D  85 FF                     TEST EDI,EDI
005F515F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F5164  7C 11                     JL 0x005f5177
005F5166  F7 EF                     IMUL EDI
005F5168  C1 FA 06                  SAR EDX,0x6
005F516B  8B C2                     MOV EAX,EDX
005F516D  C1 E8 1F                  SHR EAX,0x1f
005F5170  03 D0                     ADD EDX,EAX
005F5172  0F BF C2                  MOVSX EAX,DX
005F5175  EB 10                     JMP 0x005f5187
LAB_005f5177:
005F5177  F7 EF                     IMUL EDI
005F5179  C1 FA 06                  SAR EDX,0x6
005F517C  8B C2                     MOV EAX,EDX
005F517E  C1 E8 1F                  SHR EAX,0x1f
005F5181  03 D0                     ADD EDX,EAX
005F5183  0F BF C2                  MOVSX EAX,DX
005F5186  48                        DEC EAX
LAB_005f5187:
005F5187  85 C9                     TEST ECX,ECX
005F5189  7C 39                     JL 0x005f51c4
005F518B  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
005F5192  3B CA                     CMP ECX,EDX
005F5194  7D 2E                     JGE 0x005f51c4
005F5196  8B 4E 06                  MOV ECX,dword ptr [ESI + 0x6]
005F5199  85 C9                     TEST ECX,ECX
005F519B  7C 27                     JL 0x005f51c4
005F519D  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
005F51A4  3B CA                     CMP ECX,EDX
005F51A6  7D 1C                     JGE 0x005f51c4
005F51A8  85 FF                     TEST EDI,EDI
005F51AA  7C 18                     JL 0x005f51c4
005F51AC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005F51AF  50                        PUSH EAX
005F51B0  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F51B3  50                        PUSH EAX
005F51B4  51                        PUSH ECX
005F51B5  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F51BB  E8 7B FB E0 FF            CALL 0x00404d3b
005F51C0  85 C0                     TEST EAX,EAX
005F51C2  75 71                     JNZ 0x005f5235
LAB_005f51c4:
005F51C4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F51CA  8B 56 06                  MOV EDX,dword ptr [ESI + 0x6]
005F51CD  B8 79 19 8C 02            MOV EAX,0x28c1979
005F51D2  8B B9 80 03 00 00         MOV EDI,dword ptr [ECX + 0x380]
005F51D8  0F AF D7                  IMUL EDX,EDI
005F51DB  F7 EA                     IMUL EDX
005F51DD  D1 FA                     SAR EDX,0x1
005F51DF  8B C2                     MOV EAX,EDX
005F51E1  C1 E8 1F                  SHR EAX,0x1f
005F51E4  03 D0                     ADD EDX,EAX
005F51E6  B8 79 19 8C 02            MOV EAX,0x28c1979
005F51EB  52                        PUSH EDX
005F51EC  8B 56 02                  MOV EDX,dword ptr [ESI + 0x2]
005F51EF  0F AF D7                  IMUL EDX,EDI
005F51F2  F7 EA                     IMUL EDX
005F51F4  D1 FA                     SAR EDX,0x1
005F51F6  8B C2                     MOV EAX,EDX
005F51F8  C1 E8 1F                  SHR EAX,0x1f
005F51FB  03 D0                     ADD EDX,EAX
005F51FD  52                        PUSH EDX
005F51FE  E8 0D E0 0E 00            CALL 0x006e3210
005F5203  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005F5209  E8 7A 90 13 00            CALL 0x0072e288
005F520E  0F BF C8                  MOVSX ECX,AX
005F5211  39 4E 0A                  CMP dword ptr [ESI + 0xa],ECX
005F5214  7D 1F                     JGE 0x005f5235
005F5216  8B 46 1F                  MOV EAX,dword ptr [ESI + 0x1f]
005F5219  C6 06 02                  MOV byte ptr [ESI],0x2
005F521C  85 C0                     TEST EAX,EAX
005F521E  7C 68                     JL 0x005f5288
005F5220  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F5226  50                        PUSH EAX
005F5227  E8 74 39 0F 00            CALL 0x006e8ba0
005F522C  C7 46 1F FF FF FF FF      MOV dword ptr [ESI + 0x1f],0xffffffff
005F5233  EB 53                     JMP 0x005f5288
LAB_005f5235:
005F5235  80 3E 00                  CMP byte ptr [ESI],0x0
005F5238  75 21                     JNZ 0x005f525b
005F523A  83 7E 1F FF               CMP dword ptr [ESI + 0x1f],-0x1
005F523E  75 18                     JNZ 0x005f5258
005F5240  8A 83 03 01 00 00         MOV AL,byte ptr [EBX + 0x103]
005F5246  84 C0                     TEST AL,AL
005F5248  74 0E                     JZ 0x005f5258
005F524A  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005F524D  6A 00                     PUSH 0x0
005F524F  52                        PUSH EDX
005F5250  56                        PUSH ESI
005F5251  8B CB                     MOV ECX,EBX
005F5253  E8 EF DF E0 FF            CALL 0x00403247
LAB_005f5258:
005F5258  C6 06 01                  MOV byte ptr [ESI],0x1
LAB_005f525b:
005F525B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F525E  85 C0                     TEST EAX,EAX
005F5260  75 0C                     JNZ 0x005f526e
005F5262  80 3E 02                  CMP byte ptr [ESI],0x2
005F5265  74 07                     JZ 0x005f526e
005F5267  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_005f526e:
005F526E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F5271  85 C0                     TEST EAX,EAX
005F5273  75 13                     JNZ 0x005f5288
005F5275  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F5278  85 C0                     TEST EAX,EAX
005F527A  75 0C                     JNZ 0x005f5288
005F527C  80 3E 02                  CMP byte ptr [ESI],0x2
005F527F  74 07                     JZ 0x005f5288
005F5281  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
LAB_005f5288:
005F5288  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_005f528b:
005F528B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005F528E  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005F5291  8B 8B 09 01 00 00         MOV ECX,dword ptr [EBX + 0x109]
005F5297  40                        INC EAX
005F5298  46                        INC ESI
005F5299  3B C1                     CMP EAX,ECX
005F529B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F529E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005F52A1  0F 8C D0 FD FF FF         JL 0x005f5077
LAB_005f52a7:
005F52A7  8B 83 0D 01 00 00         MOV EAX,dword ptr [EBX + 0x10d]
005F52AD  47                        INC EDI
005F52AE  3B F8                     CMP EDI,EAX
005F52B0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005F52B3  0F 8C 1B FD FF FF         JL 0x005f4fd4
005F52B9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F52BC  5E                        POP ESI
LAB_005f52bd:
005F52BD  5F                        POP EDI
005F52BE  5B                        POP EBX
005F52BF  8B E5                     MOV ESP,EBP
005F52C1  5D                        POP EBP
005F52C2  C3                        RET
