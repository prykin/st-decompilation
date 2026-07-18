STRubbishC::GetMessage:
0062E740  55                        PUSH EBP
0062E741  8B EC                     MOV EBP,ESP
0062E743  83 EC 54                  SUB ESP,0x54
0062E746  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0062E74B  53                        PUSH EBX
0062E74C  56                        PUSH ESI
0062E74D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0062E750  57                        PUSH EDI
0062E751  8D 55 B0                  LEA EDX,[EBP + -0x50]
0062E754  8D 4D AC                  LEA ECX,[EBP + -0x54]
0062E757  6A 00                     PUSH 0x0
0062E759  52                        PUSH EDX
0062E75A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0062E75D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062E763  E8 88 F0 0F 00            CALL 0x0072d7f0
0062E768  8B F0                     MOV ESI,EAX
0062E76A  83 C4 08                  ADD ESP,0x8
0062E76D  85 F6                     TEST ESI,ESI
0062E76F  0F 85 FA 03 00 00         JNZ 0x0062eb6f
0062E775  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062E778  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0062E77B  57                        PUSH EDI
0062E77C  8B CE                     MOV ECX,ESI
0062E77E  E8 3A 57 DD FF            CALL 0x00403ebd
0062E783  3D FF FF 00 00            CMP EAX,0xffff
0062E788  0F 84 1F 04 00 00         JZ 0x0062ebad
0062E78E  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0062E791  83 F8 03                  CMP EAX,0x3
0062E794  0F 87 63 03 00 00         JA 0x0062eafd
0062E79A  0F 84 42 03 00 00         JZ 0x0062eae2
0062E7A0  83 E8 00                  SUB EAX,0x0
0062E7A3  0F 84 BB 02 00 00         JZ 0x0062ea64
0062E7A9  83 E8 02                  SUB EAX,0x2
0062E7AC  0F 85 A9 03 00 00         JNZ 0x0062eb5b
0062E7B2  8B 5F 14                  MOV EBX,dword ptr [EDI + 0x14]
0062E7B5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062E7B8  83 7B 0C 02               CMP dword ptr [EBX + 0xc],0x2
0062E7BC  0F 84 71 02 00 00         JZ 0x0062ea33
0062E7C2  8B 86 D5 01 00 00         MOV EAX,dword ptr [ESI + 0x1d5]
0062E7C8  85 C0                     TEST EAX,EAX
0062E7CA  7C 18                     JL 0x0062e7e4
0062E7CC  8B 86 D9 01 00 00         MOV EAX,dword ptr [ESI + 0x1d9]
0062E7D2  85 C0                     TEST EAX,EAX
0062E7D4  7C 0E                     JL 0x0062e7e4
0062E7D6  8B 86 DD 01 00 00         MOV EAX,dword ptr [ESI + 0x1dd]
0062E7DC  85 C0                     TEST EAX,EAX
0062E7DE  0F 8D 1E 02 00 00         JGE 0x0062ea02
LAB_0062e7e4:
0062E7E4  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
0062E7E7  B8 79 19 8C 02            MOV EAX,0x28c1979
0062E7EC  85 C9                     TEST ECX,ECX
0062E7EE  7C 10                     JL 0x0062e800
0062E7F0  F7 E9                     IMUL ECX
0062E7F2  D1 FA                     SAR EDX,0x1
0062E7F4  8B C2                     MOV EAX,EDX
0062E7F6  C1 E8 1F                  SHR EAX,0x1f
0062E7F9  03 D0                     ADD EDX,EAX
0062E7FB  0F BF C2                  MOVSX EAX,DX
0062E7FE  EB 0F                     JMP 0x0062e80f
LAB_0062e800:
0062E800  F7 E9                     IMUL ECX
0062E802  D1 FA                     SAR EDX,0x1
0062E804  8B CA                     MOV ECX,EDX
0062E806  C1 E9 1F                  SHR ECX,0x1f
0062E809  03 D1                     ADD EDX,ECX
0062E80B  0F BF C2                  MOVSX EAX,DX
0062E80E  48                        DEC EAX
LAB_0062e80f:
0062E80F  89 86 D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EAX
0062E815  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0062E818  85 C9                     TEST ECX,ECX
0062E81A  B8 79 19 8C 02            MOV EAX,0x28c1979
0062E81F  7C 10                     JL 0x0062e831
0062E821  F7 E9                     IMUL ECX
0062E823  D1 FA                     SAR EDX,0x1
0062E825  8B C2                     MOV EAX,EDX
0062E827  C1 E8 1F                  SHR EAX,0x1f
0062E82A  03 D0                     ADD EDX,EAX
0062E82C  0F BF C2                  MOVSX EAX,DX
0062E82F  EB 0F                     JMP 0x0062e840
LAB_0062e831:
0062E831  F7 E9                     IMUL ECX
0062E833  D1 FA                     SAR EDX,0x1
0062E835  8B CA                     MOV ECX,EDX
0062E837  C1 E9 1F                  SHR ECX,0x1f
0062E83A  03 D1                     ADD EDX,ECX
0062E83C  0F BF C2                  MOVSX EAX,DX
0062E83F  48                        DEC EAX
LAB_0062e840:
0062E840  89 86 D9 01 00 00         MOV dword ptr [ESI + 0x1d9],EAX
0062E846  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0062E849  85 C9                     TEST ECX,ECX
0062E84B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062E850  7C 11                     JL 0x0062e863
0062E852  F7 E9                     IMUL ECX
0062E854  C1 FA 06                  SAR EDX,0x6
0062E857  8B C2                     MOV EAX,EDX
0062E859  C1 E8 1F                  SHR EAX,0x1f
0062E85C  03 D0                     ADD EDX,EAX
0062E85E  0F BF C2                  MOVSX EAX,DX
0062E861  EB 10                     JMP 0x0062e873
LAB_0062e863:
0062E863  F7 E9                     IMUL ECX
0062E865  C1 FA 06                  SAR EDX,0x6
0062E868  8B CA                     MOV ECX,EDX
0062E86A  C1 E9 1F                  SHR ECX,0x1f
0062E86D  03 D1                     ADD EDX,ECX
0062E86F  0F BF C2                  MOVSX EAX,DX
0062E872  48                        DEC EAX
LAB_0062e873:
0062E873  66 8B 8E D5 01 00 00      MOV CX,word ptr [ESI + 0x1d5]
0062E87A  89 86 DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EAX
0062E880  66 8B D0                  MOV DX,AX
0062E883  66 8B 86 D9 01 00 00      MOV AX,word ptr [ESI + 0x1d9]
0062E88A  52                        PUSH EDX
0062E88B  50                        PUSH EAX
0062E88C  51                        PUSH ECX
0062E88D  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062E893  E8 A3 64 DD FF            CALL 0x00404d3b
0062E898  85 C0                     TEST EAX,EAX
0062E89A  0F 84 5B 01 00 00         JZ 0x0062e9fb
0062E8A0  66 8B 86 D5 01 00 00      MOV AX,word ptr [ESI + 0x1d5]
0062E8A7  66 8B 8E DD 01 00 00      MOV CX,word ptr [ESI + 0x1dd]
0062E8AE  66 8B 96 D9 01 00 00      MOV DX,word ptr [ESI + 0x1d9]
0062E8B5  66 85 C0                  TEST AX,AX
0062E8B8  7C 54                     JL 0x0062e90e
0062E8BA  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0062E8C1  66 3B C7                  CMP AX,DI
0062E8C4  7D 48                     JGE 0x0062e90e
0062E8C6  66 85 D2                  TEST DX,DX
0062E8C9  7C 43                     JL 0x0062e90e
0062E8CB  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0062E8D2  7D 3A                     JGE 0x0062e90e
0062E8D4  66 85 C9                  TEST CX,CX
0062E8D7  7C 35                     JL 0x0062e90e
0062E8D9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0062E8E0  7D 2C                     JGE 0x0062e90e
0062E8E2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0062E8E9  0F BF C9                  MOVSX ECX,CX
0062E8EC  0F AF D9                  IMUL EBX,ECX
0062E8EF  0F BF CF                  MOVSX ECX,DI
0062E8F2  0F BF D2                  MOVSX EDX,DX
0062E8F5  0F AF CA                  IMUL ECX,EDX
0062E8F8  0F BF C0                  MOVSX EAX,AX
0062E8FB  03 D9                     ADD EBX,ECX
0062E8FD  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0062E903  03 D8                     ADD EBX,EAX
0062E905  8B 44 D9 04               MOV EAX,dword ptr [ECX + EBX*0x8 + 0x4]
0062E909  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0062E90C  EB 02                     JMP 0x0062e910
LAB_0062e90e:
0062E90E  33 C0                     XOR EAX,EAX
LAB_0062e910:
0062E910  85 C0                     TEST EAX,EAX
0062E912  0F 85 E3 00 00 00         JNZ 0x0062e9fb
0062E918  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
0062E91B  8B 86 DD 01 00 00         MOV EAX,dword ptr [ESI + 0x1dd]
0062E921  8B 8E D9 01 00 00         MOV ECX,dword ptr [ESI + 0x1d9]
0062E927  8B 96 D5 01 00 00         MOV EDX,dword ptr [ESI + 0x1d5]
0062E92D  BF 01 00 00 00            MOV EDI,0x1
0062E932  53                        PUSH EBX
0062E933  56                        PUSH ESI
0062E934  57                        PUSH EDI
0062E935  50                        PUSH EAX
0062E936  51                        PUSH ECX
0062E937  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062E93D  52                        PUSH EDX
0062E93E  E8 E2 29 DD FF            CALL 0x00401325
0062E943  85 C0                     TEST EAX,EAX
0062E945  74 02                     JZ 0x0062e949
0062E947  33 FF                     XOR EDI,EDI
LAB_0062e949:
0062E949  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0062E94C  85 FF                     TEST EDI,EDI
0062E94E  0F 84 A7 00 00 00         JZ 0x0062e9fb
0062E954  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
0062E957  B8 79 19 8C 02            MOV EAX,0x28c1979
0062E95C  85 C9                     TEST ECX,ECX
0062E95E  7C 10                     JL 0x0062e970
0062E960  F7 E9                     IMUL ECX
0062E962  D1 FA                     SAR EDX,0x1
0062E964  8B C2                     MOV EAX,EDX
0062E966  C1 E8 1F                  SHR EAX,0x1f
0062E969  03 D0                     ADD EDX,EAX
0062E96B  0F BF FA                  MOVSX EDI,DX
0062E96E  EB 0F                     JMP 0x0062e97f
LAB_0062e970:
0062E970  F7 E9                     IMUL ECX
0062E972  D1 FA                     SAR EDX,0x1
0062E974  8B CA                     MOV ECX,EDX
0062E976  C1 E9 1F                  SHR ECX,0x1f
0062E979  03 D1                     ADD EDX,ECX
0062E97B  0F BF FA                  MOVSX EDI,DX
0062E97E  4F                        DEC EDI
LAB_0062e97f:
0062E97F  89 BE D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EDI
0062E985  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0062E988  85 C9                     TEST ECX,ECX
0062E98A  B8 79 19 8C 02            MOV EAX,0x28c1979
0062E98F  7C 10                     JL 0x0062e9a1
0062E991  F7 E9                     IMUL ECX
0062E993  D1 FA                     SAR EDX,0x1
0062E995  8B C2                     MOV EAX,EDX
0062E997  C1 E8 1F                  SHR EAX,0x1f
0062E99A  03 D0                     ADD EDX,EAX
0062E99C  0F BF CA                  MOVSX ECX,DX
0062E99F  EB 0F                     JMP 0x0062e9b0
LAB_0062e9a1:
0062E9A1  F7 E9                     IMUL ECX
0062E9A3  D1 FA                     SAR EDX,0x1
0062E9A5  8B CA                     MOV ECX,EDX
0062E9A7  C1 E9 1F                  SHR ECX,0x1f
0062E9AA  03 D1                     ADD EDX,ECX
0062E9AC  0F BF CA                  MOVSX ECX,DX
0062E9AF  49                        DEC ECX
LAB_0062e9b0:
0062E9B0  89 8E D9 01 00 00         MOV dword ptr [ESI + 0x1d9],ECX
0062E9B6  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0062E9B9  85 D2                     TEST EDX,EDX
0062E9BB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062E9C0  7C 11                     JL 0x0062e9d3
0062E9C2  F7 EA                     IMUL EDX
0062E9C4  C1 FA 06                  SAR EDX,0x6
0062E9C7  8B C2                     MOV EAX,EDX
0062E9C9  C1 E8 1F                  SHR EAX,0x1f
0062E9CC  03 D0                     ADD EDX,EAX
0062E9CE  0F BF C2                  MOVSX EAX,DX
0062E9D1  EB 10                     JMP 0x0062e9e3
LAB_0062e9d3:
0062E9D3  F7 EA                     IMUL EDX
0062E9D5  C1 FA 06                  SAR EDX,0x6
0062E9D8  8B C2                     MOV EAX,EDX
0062E9DA  C1 E8 1F                  SHR EAX,0x1f
0062E9DD  03 D0                     ADD EDX,EAX
0062E9DF  0F BF C2                  MOVSX EAX,DX
0062E9E2  48                        DEC EAX
LAB_0062e9e3:
0062E9E3  50                        PUSH EAX
0062E9E4  51                        PUSH ECX
0062E9E5  57                        PUSH EDI
0062E9E6  8B CE                     MOV ECX,ESI
0062E9E8  89 86 DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EAX
0062E9EE  E8 46 33 DD FF            CALL 0x00401d39
0062E9F3  88 86 F9 01 00 00         MOV byte ptr [ESI + 0x1f9],AL
0062E9F9  EB 07                     JMP 0x0062ea02
LAB_0062e9fb:
0062E9FB  8B CE                     MOV ECX,ESI
0062E9FD  E8 83 6E DD FF            CALL 0x00405885
LAB_0062ea02:
0062EA02  53                        PUSH EBX
0062EA03  8B CE                     MOV ECX,ESI
0062EA05  E8 D1 54 DD FF            CALL 0x00403edb
0062EA0A  3D FF FF 00 00            CMP EAX,0xffff
0062EA0F  0F 84 98 01 00 00         JZ 0x0062ebad
0062EA15  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EA18  C7 86 FA 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1fa],0x1
0062EA22  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EA28  33 C0                     XOR EAX,EAX
0062EA2A  5F                        POP EDI
0062EA2B  5E                        POP ESI
0062EA2C  5B                        POP EBX
0062EA2D  8B E5                     MOV ESP,EBP
0062EA2F  5D                        POP EBP
0062EA30  C2 04 00                  RET 0x4
LAB_0062ea33:
0062EA33  53                        PUSH EBX
0062EA34  8B CE                     MOV ECX,ESI
0062EA36  E8 70 48 DD FF            CALL 0x004032ab
0062EA3B  8A 86 F9 01 00 00         MOV AL,byte ptr [ESI + 0x1f9]
0062EA41  84 C0                     TEST AL,AL
0062EA43  0F 84 12 01 00 00         JZ 0x0062eb5b
0062EA49  8B CE                     MOV ECX,ESI
0062EA4B  E8 E3 6A DD FF            CALL 0x00405533
0062EA50  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EA53  33 C0                     XOR EAX,EAX
0062EA55  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EA5B  5F                        POP EDI
0062EA5C  5E                        POP ESI
0062EA5D  5B                        POP EBX
0062EA5E  8B E5                     MOV ESP,EBP
0062EA60  5D                        POP EBP
0062EA61  C2 04 00                  RET 0x4
LAB_0062ea64:
0062EA64  8B 86 FA 01 00 00         MOV EAX,dword ptr [ESI + 0x1fa]
0062EA6A  48                        DEC EAX
0062EA6B  74 22                     JZ 0x0062ea8f
0062EA6D  48                        DEC EAX
0062EA6E  0F 85 E7 00 00 00         JNZ 0x0062eb5b
0062EA74  8B CE                     MOV ECX,ESI
0062EA76  E8 0A 6E DD FF            CALL 0x00405885
0062EA7B  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EA7E  33 C0                     XOR EAX,EAX
0062EA80  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EA86  5F                        POP EDI
0062EA87  5E                        POP ESI
0062EA88  5B                        POP EBX
0062EA89  8B E5                     MOV ESP,EBP
0062EA8B  5D                        POP EBP
0062EA8C  C2 04 00                  RET 0x4
LAB_0062ea8f:
0062EA8F  8A 86 F9 01 00 00         MOV AL,byte ptr [ESI + 0x1f9]
0062EA95  84 C0                     TEST AL,AL
0062EA97  75 2E                     JNZ 0x0062eac7
0062EA99  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
0062EA9F  8B 96 D9 01 00 00         MOV EDX,dword ptr [ESI + 0x1d9]
0062EAA5  8B 86 D5 01 00 00         MOV EAX,dword ptr [ESI + 0x1d5]
0062EAAB  51                        PUSH ECX
0062EAAC  52                        PUSH EDX
0062EAAD  50                        PUSH EAX
0062EAAE  8B CE                     MOV ECX,ESI
0062EAB0  E8 84 32 DD FF            CALL 0x00401d39
0062EAB5  85 C0                     TEST EAX,EAX
0062EAB7  74 0E                     JZ 0x0062eac7
0062EAB9  8B CE                     MOV ECX,ESI
0062EABB  E8 73 6A DD FF            CALL 0x00405533
0062EAC0  C6 86 F9 01 00 00 01      MOV byte ptr [ESI + 0x1f9],0x1
LAB_0062eac7:
0062EAC7  8B CE                     MOV ECX,ESI
0062EAC9  E8 4D 28 DD FF            CALL 0x0040131b
0062EACE  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EAD1  33 C0                     XOR EAX,EAX
0062EAD3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EAD9  5F                        POP EDI
0062EADA  5E                        POP ESI
0062EADB  5B                        POP EBX
0062EADC  8B E5                     MOV ESP,EBP
0062EADE  5D                        POP EBP
0062EADF  C2 04 00                  RET 0x4
LAB_0062eae2:
0062EAE2  8B CE                     MOV ECX,ESI
0062EAE4  E8 32 32 DD FF            CALL 0x00401d1b
0062EAE9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EAEC  33 C0                     XOR EAX,EAX
0062EAEE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EAF4  5F                        POP EDI
0062EAF5  5E                        POP ESI
0062EAF6  5B                        POP EBX
0062EAF7  8B E5                     MOV ESP,EBP
0062EAF9  5D                        POP EBP
0062EAFA  C2 04 00                  RET 0x4
LAB_0062eafd:
0062EAFD  2D 08 01 00 00            SUB EAX,0x108
0062EB02  74 44                     JZ 0x0062eb48
0062EB04  83 E8 07                  SUB EAX,0x7
0062EB07  75 52                     JNZ 0x0062eb5b
0062EB09  8D 4D F8                  LEA ECX,[EBP + -0x8]
0062EB0C  51                        PUSH ECX
0062EB0D  8B CE                     MOV ECX,ESI
0062EB0F  E8 05 5C DD FF            CALL 0x00404719
0062EB14  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0062EB17  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062EB1D  52                        PUSH EDX
0062EB1E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062EB21  50                        PUSH EAX
0062EB22  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0062EB25  50                        PUSH EAX
0062EB26  E8 CE 3A DD FF            CALL 0x004025f9
0062EB2B  8D 4D F4                  LEA ECX,[EBP + -0xc]
0062EB2E  51                        PUSH ECX
0062EB2F  E8 2C C5 07 00            CALL 0x006ab060
0062EB34  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EB37  33 C0                     XOR EAX,EAX
0062EB39  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EB3F  5F                        POP EDI
0062EB40  5E                        POP ESI
0062EB41  5B                        POP EBX
0062EB42  8B E5                     MOV ESP,EBP
0062EB44  5D                        POP EBP
0062EB45  C2 04 00                  RET 0x4
LAB_0062eb48:
0062EB48  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0062EB4E  E8 C9 6C DD FF            CALL 0x0040581c
0062EB53  50                        PUSH EAX
0062EB54  8B CE                     MOV ECX,ESI
0062EB56  E8 AF 42 DD FF            CALL 0x00402e0a
LAB_0062eb5b:
0062EB5B  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062EB5E  33 C0                     XOR EAX,EAX
0062EB60  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062EB66  5F                        POP EDI
0062EB67  5E                        POP ESI
0062EB68  5B                        POP EBX
0062EB69  8B E5                     MOV ESP,EBP
0062EB6B  5D                        POP EBP
0062EB6C  C2 04 00                  RET 0x4
LAB_0062eb6f:
0062EB6F  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0062EB72  68 BC 17 7D 00            PUSH 0x7d17bc
0062EB77  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062EB7C  56                        PUSH ESI
0062EB7D  6A 00                     PUSH 0x0
0062EB7F  68 A6 00 00 00            PUSH 0xa6
0062EB84  68 98 17 7D 00            PUSH 0x7d1798
0062EB89  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062EB8E  E8 3D E9 07 00            CALL 0x006ad4d0
0062EB93  83 C4 18                  ADD ESP,0x18
0062EB96  85 C0                     TEST EAX,EAX
0062EB98  74 01                     JZ 0x0062eb9b
0062EB9A  CC                        INT3
LAB_0062eb9b:
0062EB9B  68 A8 00 00 00            PUSH 0xa8
0062EBA0  68 98 17 7D 00            PUSH 0x7d1798
0062EBA5  6A 00                     PUSH 0x0
0062EBA7  56                        PUSH ESI
0062EBA8  E8 93 72 07 00            CALL 0x006a5e40
LAB_0062ebad:
0062EBAD  5F                        POP EDI
0062EBAE  5E                        POP ESI
0062EBAF  B8 FF FF 00 00            MOV EAX,0xffff
0062EBB4  5B                        POP EBX
0062EBB5  8B E5                     MOV ESP,EBP
0062EBB7  5D                        POP EBP
0062EBB8  C2 04 00                  RET 0x4
