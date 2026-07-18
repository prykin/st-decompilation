FUN_006db450:
006DB450  55                        PUSH EBP
006DB451  8B EC                     MOV EBP,ESP
006DB453  53                        PUSH EBX
006DB454  56                        PUSH ESI
006DB455  57                        PUSH EDI
006DB456  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DB459  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DB45C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006DB45F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB462  F7 C7 01 00 00 00         TEST EDI,0x1
006DB468  0F 84 CF 00 00 00         JZ 0x006db53d
LAB_006db46e:
006DB46E  F7 C7 02 00 00 00         TEST EDI,0x2
006DB474  75 0E                     JNZ 0x006db484
006DB476  8A 06                     MOV AL,byte ptr [ESI]
006DB478  8A E0                     MOV AH,AL
006DB47A  46                        INC ESI
006DB47B  66 89 07                  MOV word ptr [EDI],AX
006DB47E  83 C7 02                  ADD EDI,0x2
006DB481  49                        DEC ECX
006DB482  7E 3C                     JLE 0x006db4c0
LAB_006db484:
006DB484  8A 16                     MOV DL,byte ptr [ESI]
006DB486  46                        INC ESI
006DB487  88 17                     MOV byte ptr [EDI],DL
006DB489  47                        INC EDI
006DB48A  83 E9 02                  SUB ECX,0x2
006DB48D  7E 1F                     JLE 0x006db4ae
LAB_006db48f:
006DB48F  8A 66 01                  MOV AH,byte ptr [ESI + 0x1]
006DB492  8A 06                     MOV AL,byte ptr [ESI]
006DB494  C1 E0 08                  SHL EAX,0x8
006DB497  8A C4                     MOV AL,AH
006DB499  C1 E0 08                  SHL EAX,0x8
006DB49C  8A C2                     MOV AL,DL
006DB49E  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
006DB4A1  83 C6 02                  ADD ESI,0x2
006DB4A4  89 07                     MOV dword ptr [EDI],EAX
006DB4A6  83 C7 04                  ADD EDI,0x4
006DB4A9  83 E9 02                  SUB ECX,0x2
006DB4AC  7F E1                     JG 0x006db48f
LAB_006db4ae:
006DB4AE  88 17                     MOV byte ptr [EDI],DL
006DB4B0  8D 7F 01                  LEA EDI,[EDI + 0x1]
006DB4B3  7C 0B                     JL 0x006db4c0
006DB4B5  8A 06                     MOV AL,byte ptr [ESI]
006DB4B7  8A E0                     MOV AH,AL
006DB4B9  46                        INC ESI
006DB4BA  66 89 07                  MOV word ptr [EDI],AX
006DB4BD  83 C7 02                  ADD EDI,0x2
LAB_006db4c0:
006DB4C0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB4C3  03 FB                     ADD EDI,EBX
006DB4C5  2B F1                     SUB ESI,ECX
006DB4C7  2B F9                     SUB EDI,ECX
006DB4C9  2B F9                     SUB EDI,ECX
006DB4CB  F7 C7 02 00 00 00         TEST EDI,0x2
006DB4D1  75 0E                     JNZ 0x006db4e1
006DB4D3  8A 06                     MOV AL,byte ptr [ESI]
006DB4D5  8A E0                     MOV AH,AL
006DB4D7  46                        INC ESI
006DB4D8  66 89 07                  MOV word ptr [EDI],AX
006DB4DB  83 C7 02                  ADD EDI,0x2
006DB4DE  49                        DEC ECX
006DB4DF  7E 3C                     JLE 0x006db51d
LAB_006db4e1:
006DB4E1  8A 16                     MOV DL,byte ptr [ESI]
006DB4E3  46                        INC ESI
006DB4E4  88 17                     MOV byte ptr [EDI],DL
006DB4E6  47                        INC EDI
006DB4E7  83 E9 02                  SUB ECX,0x2
006DB4EA  7E 1F                     JLE 0x006db50b
LAB_006db4ec:
006DB4EC  8A 66 01                  MOV AH,byte ptr [ESI + 0x1]
006DB4EF  8A 06                     MOV AL,byte ptr [ESI]
006DB4F1  C1 E0 08                  SHL EAX,0x8
006DB4F4  8A C4                     MOV AL,AH
006DB4F6  C1 E0 08                  SHL EAX,0x8
006DB4F9  8A C2                     MOV AL,DL
006DB4FB  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
006DB4FE  83 C6 02                  ADD ESI,0x2
006DB501  89 07                     MOV dword ptr [EDI],EAX
006DB503  83 C7 04                  ADD EDI,0x4
006DB506  83 E9 02                  SUB ECX,0x2
006DB509  7F E1                     JG 0x006db4ec
LAB_006db50b:
006DB50B  88 17                     MOV byte ptr [EDI],DL
006DB50D  8D 7F 01                  LEA EDI,[EDI + 0x1]
006DB510  7C 0B                     JL 0x006db51d
006DB512  8A 06                     MOV AL,byte ptr [ESI]
006DB514  8A E0                     MOV AH,AL
006DB516  46                        INC ESI
006DB517  66 89 07                  MOV word ptr [EDI],AX
006DB51A  83 C7 02                  ADD EDI,0x2
LAB_006db51d:
006DB51D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB520  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006DB523  03 FB                     ADD EDI,EBX
006DB525  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DB528  2B F9                     SUB EDI,ECX
006DB52A  2B F1                     SUB ESI,ECX
006DB52C  2B F9                     SUB EDI,ECX
006DB52E  48                        DEC EAX
006DB52F  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DB532  0F 8F 36 FF FF FF         JG 0x006db46e
006DB538  E9 A4 00 00 00            JMP 0x006db5e1
LAB_006db53d:
006DB53D  F7 C7 02 00 00 00         TEST EDI,0x2
006DB543  74 0E                     JZ 0x006db553
006DB545  8A 06                     MOV AL,byte ptr [ESI]
006DB547  8A E0                     MOV AH,AL
006DB549  46                        INC ESI
006DB54A  66 89 07                  MOV word ptr [EDI],AX
006DB54D  83 C7 02                  ADD EDI,0x2
006DB550  49                        DEC ECX
006DB551  7E 29                     JLE 0x006db57c
LAB_006db553:
006DB553  49                        DEC ECX
006DB554  7E 19                     JLE 0x006db56f
LAB_006db556:
006DB556  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006DB559  8A E0                     MOV AH,AL
006DB55B  C1 E0 10                  SHL EAX,0x10
006DB55E  8A 06                     MOV AL,byte ptr [ESI]
006DB560  8A E0                     MOV AH,AL
006DB562  83 C6 02                  ADD ESI,0x2
006DB565  89 07                     MOV dword ptr [EDI],EAX
006DB567  83 C7 04                  ADD EDI,0x4
006DB56A  83 E9 02                  SUB ECX,0x2
006DB56D  7F E7                     JG 0x006db556
LAB_006db56f:
006DB56F  7C 0B                     JL 0x006db57c
006DB571  8A 06                     MOV AL,byte ptr [ESI]
006DB573  8A E0                     MOV AH,AL
006DB575  46                        INC ESI
006DB576  66 89 07                  MOV word ptr [EDI],AX
006DB579  83 C7 02                  ADD EDI,0x2
LAB_006db57c:
006DB57C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB57F  03 FB                     ADD EDI,EBX
006DB581  2B F1                     SUB ESI,ECX
006DB583  2B F9                     SUB EDI,ECX
006DB585  2B F9                     SUB EDI,ECX
006DB587  F7 C7 02 00 00 00         TEST EDI,0x2
006DB58D  74 0E                     JZ 0x006db59d
006DB58F  8A 06                     MOV AL,byte ptr [ESI]
006DB591  8A E0                     MOV AH,AL
006DB593  46                        INC ESI
006DB594  66 89 07                  MOV word ptr [EDI],AX
006DB597  83 C7 02                  ADD EDI,0x2
006DB59A  49                        DEC ECX
006DB59B  7E 29                     JLE 0x006db5c6
LAB_006db59d:
006DB59D  49                        DEC ECX
006DB59E  7E 19                     JLE 0x006db5b9
LAB_006db5a0:
006DB5A0  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006DB5A3  8A E0                     MOV AH,AL
006DB5A5  C1 E0 10                  SHL EAX,0x10
006DB5A8  8A 06                     MOV AL,byte ptr [ESI]
006DB5AA  8A E0                     MOV AH,AL
006DB5AC  83 C6 02                  ADD ESI,0x2
006DB5AF  89 07                     MOV dword ptr [EDI],EAX
006DB5B1  83 C7 04                  ADD EDI,0x4
006DB5B4  83 E9 02                  SUB ECX,0x2
006DB5B7  7F E7                     JG 0x006db5a0
LAB_006db5b9:
006DB5B9  7C 0B                     JL 0x006db5c6
006DB5BB  8A 06                     MOV AL,byte ptr [ESI]
006DB5BD  8A E0                     MOV AH,AL
006DB5BF  46                        INC ESI
006DB5C0  66 89 07                  MOV word ptr [EDI],AX
006DB5C3  83 C7 02                  ADD EDI,0x2
LAB_006db5c6:
006DB5C6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB5C9  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006DB5CC  03 FB                     ADD EDI,EBX
006DB5CE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DB5D1  2B F9                     SUB EDI,ECX
006DB5D3  2B F1                     SUB ESI,ECX
006DB5D5  2B F9                     SUB EDI,ECX
006DB5D7  48                        DEC EAX
006DB5D8  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DB5DB  0F 8F 5C FF FF FF         JG 0x006db53d
LAB_006db5e1:
006DB5E1  5F                        POP EDI
006DB5E2  5E                        POP ESI
006DB5E3  5B                        POP EBX
006DB5E4  5D                        POP EBP
006DB5E5  C2 18 00                  RET 0x18
