FUN_004be6c0:
004BE6C0  55                        PUSH EBP
004BE6C1  8B EC                     MOV EBP,ESP
004BE6C3  53                        PUSH EBX
004BE6C4  56                        PUSH ESI
004BE6C5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004BE6C8  8B D9                     MOV EBX,ECX
004BE6CA  57                        PUSH EDI
004BE6CB  B9 0D 00 00 00            MOV ECX,0xd
004BE6D0  33 C0                     XOR EAX,EAX
004BE6D2  8B FE                     MOV EDI,ESI
004BE6D4  F3 AB                     STOSD.REP ES:EDI
004BE6D6  66 AB                     STOSW ES:EDI
004BE6D8  C6 06 01                  MOV byte ptr [ESI],0x1
004BE6DB  8A 83 1D 02 00 00         MOV AL,byte ptr [EBX + 0x21d]
004BE6E1  88 46 01                  MOV byte ptr [ESI + 0x1],AL
004BE6E4  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004BE6EA  51                        PUSH ECX
004BE6EB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE6F1  E8 C1 62 F4 FF            CALL 0x004049b7
004BE6F6  88 46 07                  MOV byte ptr [ESI + 0x7],AL
004BE6F9  8A 83 D1 01 00 00         MOV AL,byte ptr [EBX + 0x1d1]
004BE6FF  A8 04                     TEST AL,0x4
004BE701  75 11                     JNZ 0x004be714
004BE703  8B 83 20 04 00 00         MOV EAX,dword ptr [EBX + 0x420]
004BE709  85 C0                     TEST EAX,EAX
004BE70B  75 07                     JNZ 0x004be714
004BE70D  B8 01 00 00 00            MOV EAX,0x1
004BE712  EB 02                     JMP 0x004be716
LAB_004be714:
004BE714  33 C0                     XOR EAX,EAX
LAB_004be716:
004BE716  88 46 1D                  MOV byte ptr [ESI + 0x1d],AL
004BE719  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004BE71F  83 F8 06                  CMP EAX,0x6
004BE722  77 11                     JA 0x004be735
switchD_004be724::switchD:
004BE724  FF 24 85 88 E9 4B 00      JMP dword ptr [EAX*0x4 + 0x4be988]
switchD_004be724::caseD_0:
004BE72B  C6 46 02 00               MOV byte ptr [ESI + 0x2],0x0
004BE72F  EB 04                     JMP 0x004be735
switchD_004be724::caseD_3:
004BE731  C6 46 02 01               MOV byte ptr [ESI + 0x2],0x1
switchD_004be724::default:
004BE735  8B 13                     MOV EDX,dword ptr [EBX]
004BE737  8B CB                     MOV ECX,EBX
004BE739  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
004BE73C  88 46 1B                  MOV byte ptr [ESI + 0x1b],AL
004BE73F  8B 03                     MOV EAX,dword ptr [EBX]
004BE741  8B CB                     MOV ECX,EBX
004BE743  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
004BE749  88 46 1C                  MOV byte ptr [ESI + 0x1c],AL
004BE74C  8B 8B AC 05 00 00         MOV ECX,dword ptr [EBX + 0x5ac]
004BE752  89 4E 03                  MOV dword ptr [ESI + 0x3],ECX
004BE755  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004BE758  8D 83 C4 05 00 00         LEA EAX,[EBX + 0x5c4]
004BE75E  6A 0E                     PUSH 0xe
004BE760  8D 4E 0C                  LEA ECX,[ESI + 0xc]
004BE763  50                        PUSH EAX
004BE764  51                        PUSH ECX
004BE765  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
004BE768  E8 D3 FB 26 00            CALL 0x0072e340
004BE76D  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BE773  83 C4 0C                  ADD ESP,0xc
004BE776  8B 0C 85 78 27 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x792778]
004BE77D  85 C9                     TEST ECX,ECX
004BE77F  0F 84 D5 01 00 00         JZ 0x004be95a
004BE785  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004BE788  66 8B 04 D5 A0 2C 79 00   MOV AX,word ptr [EDX*0x8 + 0x792ca0]
004BE790  66 3D A0 00               CMP AX,0xa0
004BE794  66 89 46 1E               MOV word ptr [ESI + 0x1e],AX
004BE798  75 06                     JNZ 0x004be7a0
004BE79A  66 C7 46 1E 9F 00         MOV word ptr [ESI + 0x1e],0x9f
LAB_004be7a0:
004BE7A0  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BE7A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004BE7A9  8B 04 C5 A0 2C 79 00      MOV EAX,dword ptr [EAX*0x8 + 0x792ca0]
004BE7B0  3D 96 00 00 00            CMP EAX,0x96
004BE7B5  74 19                     JZ 0x004be7d0
004BE7B7  3D 97 00 00 00            CMP EAX,0x97
004BE7BC  74 12                     JZ 0x004be7d0
004BE7BE  3D 98 00 00 00            CMP EAX,0x98
004BE7C3  74 0B                     JZ 0x004be7d0
004BE7C5  3D A0 00 00 00            CMP EAX,0xa0
004BE7CA  75 3E                     JNZ 0x004be80a
004BE7CC  6A 0B                     PUSH 0xb
004BE7CE  EB 27                     JMP 0x004be7f7
LAB_004be7d0:
004BE7D0  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004BE7D3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE7D9  52                        PUSH EDX
004BE7DA  E8 D8 61 F4 FF            CALL 0x004049b7
004BE7DF  25 FF 00 00 00            AND EAX,0xff
004BE7E4  48                        DEC EAX
004BE7E5  74 0E                     JZ 0x004be7f5
004BE7E7  48                        DEC EAX
004BE7E8  75 20                     JNZ 0x004be80a
004BE7EA  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BE7ED  68 83 00 00 00            PUSH 0x83
004BE7F2  50                        PUSH EAX
004BE7F3  EB 06                     JMP 0x004be7fb
LAB_004be7f5:
004BE7F5  6A 06                     PUSH 0x6
LAB_004be7f7:
004BE7F7  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BE7FA  51                        PUSH ECX
LAB_004be7fb:
004BE7FB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE801  E8 65 30 F4 FF            CALL 0x0040186b
004BE806  66 89 46 22               MOV word ptr [ESI + 0x22],AX
LAB_004be80a:
004BE80A  8B 93 35 02 00 00         MOV EDX,dword ptr [EBX + 0x235]
004BE810  33 C9                     XOR ECX,ECX
004BE812  BF FF FF 00 00            MOV EDI,0xffff
004BE817  39 0C D5 28 3E 79 00      CMP dword ptr [EDX*0x8 + 0x793e28],ECX
004BE81E  74 0D                     JZ 0x004be82d
004BE820  66 8B 83 C5 02 00 00      MOV AX,word ptr [EBX + 0x2c5]
004BE827  66 89 46 26               MOV word ptr [ESI + 0x26],AX
004BE82B  EB 04                     JMP 0x004be831
LAB_004be82d:
004BE82D  66 89 7E 26               MOV word ptr [ESI + 0x26],DI
LAB_004be831:
004BE831  66 81 7E 1E A8 00         CMP word ptr [ESI + 0x1e],0xa8
004BE837  75 1B                     JNZ 0x004be854
004BE839  83 BB AC 05 00 00 45      CMP dword ptr [EBX + 0x5ac],0x45
004BE840  75 12                     JNZ 0x004be854
004BE842  66 89 7E 26               MOV word ptr [ESI + 0x26],DI
004BE846  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BE84C  3B C1                     CMP EAX,ECX
004BE84E  75 04                     JNZ 0x004be854
004BE850  66 89 4E 1E               MOV word ptr [ESI + 0x1e],CX
LAB_004be854:
004BE854  66 81 7E 1E A3 00         CMP word ptr [ESI + 0x1e],0xa3
004BE85A  75 21                     JNZ 0x004be87d
004BE85C  83 BB AC 05 00 00 4E      CMP dword ptr [EBX + 0x5ac],0x4e
004BE863  75 18                     JNZ 0x004be87d
004BE865  66 89 7E 26               MOV word ptr [ESI + 0x26],DI
004BE869  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BE86F  83 F8 01                  CMP EAX,0x1
004BE872  74 09                     JZ 0x004be87d
004BE874  83 F8 04                  CMP EAX,0x4
004BE877  74 04                     JZ 0x004be87d
004BE879  66 89 4E 1E               MOV word ptr [ESI + 0x1e],CX
LAB_004be87d:
004BE87D  66 81 7E 1E B2 00         CMP word ptr [ESI + 0x1e],0xb2
004BE883  75 1B                     JNZ 0x004be8a0
004BE885  83 BB AC 05 00 00 70      CMP dword ptr [EBX + 0x5ac],0x70
004BE88C  75 12                     JNZ 0x004be8a0
004BE88E  66 89 7E 26               MOV word ptr [ESI + 0x26],DI
004BE892  8B 83 F0 04 00 00         MOV EAX,dword ptr [EBX + 0x4f0]
004BE898  3B C1                     CMP EAX,ECX
004BE89A  75 04                     JNZ 0x004be8a0
004BE89C  66 89 4E 1E               MOV word ptr [ESI + 0x1e],CX
LAB_004be8a0:
004BE8A0  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BE8A6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004BE8A9  66 8B 04 CD AC 2C 79 00   MOV AX,word ptr [ECX*0x8 + 0x792cac]
004BE8B1  66 3D A0 00               CMP AX,0xa0
004BE8B5  66 89 46 20               MOV word ptr [ESI + 0x20],AX
004BE8B9  75 06                     JNZ 0x004be8c1
004BE8BB  66 C7 46 20 9F 00         MOV word ptr [ESI + 0x20],0x9f
LAB_004be8c1:
004BE8C1  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BE8C7  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004BE8CA  8B 04 D5 AC 2C 79 00      MOV EAX,dword ptr [EDX*0x8 + 0x792cac]
004BE8D1  3D 96 00 00 00            CMP EAX,0x96
004BE8D6  74 19                     JZ 0x004be8f1
004BE8D8  3D 97 00 00 00            CMP EAX,0x97
004BE8DD  74 12                     JZ 0x004be8f1
004BE8DF  3D 98 00 00 00            CMP EAX,0x98
004BE8E4  74 0B                     JZ 0x004be8f1
004BE8E6  3D A0 00 00 00            CMP EAX,0xa0
004BE8EB  75 3E                     JNZ 0x004be92b
004BE8ED  6A 0B                     PUSH 0xb
004BE8EF  EB 27                     JMP 0x004be918
LAB_004be8f1:
004BE8F1  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004BE8F4  51                        PUSH ECX
004BE8F5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE8FB  E8 B7 60 F4 FF            CALL 0x004049b7
004BE900  25 FF 00 00 00            AND EAX,0xff
004BE905  48                        DEC EAX
004BE906  74 0E                     JZ 0x004be916
004BE908  48                        DEC EAX
004BE909  75 20                     JNZ 0x004be92b
004BE90B  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BE90E  68 83 00 00 00            PUSH 0x83
004BE913  52                        PUSH EDX
004BE914  EB 06                     JMP 0x004be91c
LAB_004be916:
004BE916  6A 06                     PUSH 0x6
LAB_004be918:
004BE918  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BE91B  50                        PUSH EAX
LAB_004be91c:
004BE91C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE922  E8 44 2F F4 FF            CALL 0x0040186b
004BE927  66 89 46 24               MOV word ptr [ESI + 0x24],AX
LAB_004be92b:
004BE92B  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BE931  8B 04 CD 2C 3E 79 00      MOV EAX,dword ptr [ECX*0x8 + 0x793e2c]
004BE938  85 C0                     TEST EAX,EAX
004BE93A  74 33                     JZ 0x004be96f
004BE93C  66 8B 93 45 03 00 00      MOV DX,word ptr [EBX + 0x345]
004BE943  5F                        POP EDI
004BE944  66 89 56 28               MOV word ptr [ESI + 0x28],DX
004BE948  8B 83 B8 05 00 00         MOV EAX,dword ptr [EBX + 0x5b8]
004BE94E  2B F0                     SUB ESI,EAX
004BE950  C6 46 2E 01               MOV byte ptr [ESI + 0x2e],0x1
004BE954  5E                        POP ESI
004BE955  5B                        POP EBX
004BE956  5D                        POP EBP
004BE957  C2 04 00                  RET 0x4
LAB_004be95a:
004BE95A  BF FF FF 00 00            MOV EDI,0xffff
004BE95F  66 C7 46 1E 00 00         MOV word ptr [ESI + 0x1e],0x0
004BE965  66 C7 46 20 00 00         MOV word ptr [ESI + 0x20],0x0
004BE96B  66 89 7E 26               MOV word ptr [ESI + 0x26],DI
LAB_004be96f:
004BE96F  66 89 7E 28               MOV word ptr [ESI + 0x28],DI
004BE973  8B 83 B8 05 00 00         MOV EAX,dword ptr [EBX + 0x5b8]
004BE979  2B F0                     SUB ESI,EAX
004BE97B  5F                        POP EDI
004BE97C  C6 46 2E 01               MOV byte ptr [ESI + 0x2e],0x1
004BE980  5E                        POP ESI
004BE981  5B                        POP EBX
004BE982  5D                        POP EBP
004BE983  C2 04 00                  RET 0x4
