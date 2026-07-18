FUN_006fc3e0:
006FC3E0  55                        PUSH EBP
006FC3E1  8B EC                     MOV EBP,ESP
006FC3E3  83 EC 18                  SUB ESP,0x18
006FC3E6  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FC3E9  53                        PUSH EBX
006FC3EA  56                        PUSH ESI
006FC3EB  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FC3EE  C1 F8 03                  SAR EAX,0x3
006FC3F1  03 F0                     ADD ESI,EAX
006FC3F3  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FC3F6  48                        DEC EAX
006FC3F7  57                        PUSH EDI
006FC3F8  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FC402  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FC405  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FC408  0F 88 19 07 00 00         JS 0x006fcb27
006FC40E  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
LAB_006fc411:
006FC411  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FC414  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC417  83 F8 01                  CMP EAX,0x1
006FC41A  75 4A                     JNZ 0x006fc466
006FC41C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FC41F  48                        DEC EAX
006FC420  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FC423  0F 88 FE 06 00 00         JS 0x006fcb27
006FC429  33 C0                     XOR EAX,EAX
006FC42B  8A 01                     MOV AL,byte ptr [ECX]
006FC42D  41                        INC ECX
006FC42E  85 C0                     TEST EAX,EAX
006FC430  74 2D                     JZ 0x006fc45f
006FC432  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
LAB_006fc435:
006FC435  A8 80                     TEST AL,0x80
006FC437  74 16                     JZ 0x006fc44f
006FC439  A8 40                     TEST AL,0x40
006FC43B  74 06                     JZ 0x006fc443
006FC43D  41                        INC ECX
006FC43E  83 E0 3F                  AND EAX,0x3f
006FC441  EB 0F                     JMP 0x006fc452
LAB_006fc443:
006FC443  8B D8                     MOV EBX,EAX
006FC445  83 E3 3F                  AND EBX,0x3f
006FC448  03 CB                     ADD ECX,EBX
006FC44A  83 E0 3F                  AND EAX,0x3f
006FC44D  EB 03                     JMP 0x006fc452
LAB_006fc44f:
006FC44F  83 E0 7F                  AND EAX,0x7f
LAB_006fc452:
006FC452  2B D0                     SUB EDX,EAX
006FC454  85 D2                     TEST EDX,EDX
006FC456  7E 07                     JLE 0x006fc45f
006FC458  33 C0                     XOR EAX,EAX
006FC45A  8A 01                     MOV AL,byte ptr [ECX]
006FC45C  41                        INC ECX
006FC45D  EB D6                     JMP 0x006fc435
LAB_006fc45f:
006FC45F  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006fc466:
006FC466  33 DB                     XOR EBX,EBX
006FC468  8A 19                     MOV BL,byte ptr [ECX]
006FC46A  41                        INC ECX
006FC46B  85 DB                     TEST EBX,EBX
006FC46D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FC470  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC473  0F 84 62 06 00 00         JZ 0x006fcadb
006FC479  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FC47C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006FC47F  83 E1 07                  AND ECX,0x7
006FC482  BA 80 00 00 00            MOV EDX,0x80
006FC487  D3 FA                     SAR EDX,CL
006FC489  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006FC48C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FC48F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006FC492  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FC495  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006FC498  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006fc49b:
006FC49B  F6 C3 80                  TEST BL,0x80
006FC49E  8B C3                     MOV EAX,EBX
006FC4A0  74 36                     JZ 0x006fc4d8
006FC4A2  83 E0 3F                  AND EAX,0x3f
006FC4A5  3B C7                     CMP EAX,EDI
006FC4A7  7F 45                     JG 0x006fc4ee
006FC4A9  F6 C3 40                  TEST BL,0x40
006FC4AC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FC4AF  74 13                     JZ 0x006fc4c4
006FC4B1  43                        INC EBX
006FC4B2  2B F8                     SUB EDI,EAX
006FC4B4  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FC4B7  33 DB                     XOR EBX,EBX
006FC4B9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FC4BC  8A 18                     MOV BL,byte ptr [EAX]
006FC4BE  40                        INC EAX
006FC4BF  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FC4C2  EB D7                     JMP 0x006fc49b
LAB_006fc4c4:
006FC4C4  03 D8                     ADD EBX,EAX
006FC4C6  2B F8                     SUB EDI,EAX
006FC4C8  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FC4CB  33 DB                     XOR EBX,EBX
006FC4CD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FC4D0  8A 18                     MOV BL,byte ptr [EAX]
006FC4D2  40                        INC EAX
006FC4D3  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FC4D6  EB C3                     JMP 0x006fc49b
LAB_006fc4d8:
006FC4D8  83 E0 7F                  AND EAX,0x7f
006FC4DB  3B C7                     CMP EAX,EDI
006FC4DD  7F 0F                     JG 0x006fc4ee
006FC4DF  2B F8                     SUB EDI,EAX
006FC4E1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FC4E4  33 DB                     XOR EBX,EBX
006FC4E6  8A 18                     MOV BL,byte ptr [EAX]
006FC4E8  40                        INC EAX
006FC4E9  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FC4EC  EB AD                     JMP 0x006fc49b
LAB_006fc4ee:
006FC4EE  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FC4F1  81 E3 C0 00 00 00         AND EBX,0xc0
006FC4F7  2B C7                     SUB EAX,EDI
006FC4F9  80 FB 80                  CMP BL,0x80
006FC4FC  75 03                     JNZ 0x006fc501
006FC4FE  01 7D 1C                  ADD dword ptr [EBP + 0x1c],EDI
LAB_006fc501:
006FC501  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FC504  8B DF                     MOV EBX,EDI
006FC506  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FC509  3B C3                     CMP EAX,EBX
006FC50B  0F 8F F2 02 00 00         JG 0x006fc803
006FC511  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006FC514  81 E7 80 00 00 00         AND EDI,0x80
LAB_006fc51a:
006FC51A  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FC51D  2B D8                     SUB EBX,EAX
006FC51F  85 FF                     TEST EDI,EDI
006FC521  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FC524  0F 84 8F 02 00 00         JZ 0x006fc7b9
006FC52A  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
006FC52E  0F 84 2A 01 00 00         JZ 0x006fc65e
006FC534  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FC537  33 DB                     XOR EBX,EBX
006FC539  8A 1F                     MOV BL,byte ptr [EDI]
006FC53B  47                        INC EDI
006FC53C  85 C9                     TEST ECX,ECX
006FC53E  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FC541  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FC544  7E 62                     JLE 0x006fc5a8
006FC546  83 F9 01                  CMP ECX,0x1
006FC549  75 06                     JNZ 0x006fc551
006FC54B  B9 02 00 00 00            MOV ECX,0x2
006FC550  48                        DEC EAX
LAB_006fc551:
006FC551  85 C0                     TEST EAX,EAX
006FC553  0F 8E 3A 02 00 00         JLE 0x006fc793
006FC559  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC55C  84 11                     TEST byte ptr [ECX],DL
006FC55E  75 11                     JNZ 0x006fc571
006FC560  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FC563  33 C9                     XOR ECX,ECX
006FC565  66 8B 0F                  MOV CX,word ptr [EDI]
006FC568  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FC56B  3B F9                     CMP EDI,ECX
006FC56D  77 28                     JA 0x006fc597
006FC56F  88 1E                     MOV byte ptr [ESI],BL
LAB_006fc571:
006FC571  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fc574:
006FC574  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC577  83 C3 02                  ADD EBX,0x2
006FC57A  46                        INC ESI
006FC57B  47                        INC EDI
006FC57C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC57F  D1 EA                     SHR EDX,0x1
006FC581  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FC584  75 0C                     JNZ 0x006fc592
006FC586  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC589  BA 80 00 00 00            MOV EDX,0x80
006FC58E  41                        INC ECX
006FC58F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc592:
006FC592  33 C9                     XOR ECX,ECX
006FC594  48                        DEC EAX
006FC595  EB 14                     JMP 0x006fc5ab
LAB_006fc597:
006FC597  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FC59A  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC59D  33 C9                     XOR ECX,ECX
006FC59F  8A 0F                     MOV CL,byte ptr [EDI]
006FC5A1  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FC5A4  88 0E                     MOV byte ptr [ESI],CL
006FC5A6  EB CC                     JMP 0x006fc574
LAB_006fc5a8:
006FC5A8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fc5ab:
006FC5AB  85 C0                     TEST EAX,EAX
006FC5AD  0F 8E E0 01 00 00         JLE 0x006fc793
LAB_006fc5b3:
006FC5B3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC5B6  84 11                     TEST byte ptr [ECX],DL
006FC5B8  75 20                     JNZ 0x006fc5da
006FC5BA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC5BD  33 C9                     XOR ECX,ECX
006FC5BF  66 8B 0B                  MOV CX,word ptr [EBX]
006FC5C2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC5C5  3B D9                     CMP EBX,ECX
006FC5C7  77 05                     JA 0x006fc5ce
006FC5C9  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FC5CC  EB 0A                     JMP 0x006fc5d8
LAB_006fc5ce:
006FC5CE  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC5D1  33 C9                     XOR ECX,ECX
006FC5D3  8A 0F                     MOV CL,byte ptr [EDI]
006FC5D5  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc5d8:
006FC5D8  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc5da:
006FC5DA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC5DD  83 C3 02                  ADD EBX,0x2
006FC5E0  46                        INC ESI
006FC5E1  47                        INC EDI
006FC5E2  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC5E5  D1 EA                     SHR EDX,0x1
006FC5E7  75 0C                     JNZ 0x006fc5f5
006FC5E9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC5EC  BA 80 00 00 00            MOV EDX,0x80
006FC5F1  41                        INC ECX
006FC5F2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc5f5:
006FC5F5  48                        DEC EAX
006FC5F6  B9 01 00 00 00            MOV ECX,0x1
006FC5FB  85 C0                     TEST EAX,EAX
006FC5FD  7E 57                     JLE 0x006fc656
006FC5FF  48                        DEC EAX
006FC600  B9 02 00 00 00            MOV ECX,0x2
006FC605  85 C0                     TEST EAX,EAX
006FC607  7E 4D                     JLE 0x006fc656
006FC609  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC60C  84 11                     TEST byte ptr [ECX],DL
006FC60E  75 20                     JNZ 0x006fc630
006FC610  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC613  33 C9                     XOR ECX,ECX
006FC615  66 8B 0B                  MOV CX,word ptr [EBX]
006FC618  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC61B  3B D9                     CMP EBX,ECX
006FC61D  77 05                     JA 0x006fc624
006FC61F  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FC622  EB 0A                     JMP 0x006fc62e
LAB_006fc624:
006FC624  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC627  33 C9                     XOR ECX,ECX
006FC629  8A 0F                     MOV CL,byte ptr [EDI]
006FC62B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc62e:
006FC62E  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc630:
006FC630  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC633  83 C3 02                  ADD EBX,0x2
006FC636  46                        INC ESI
006FC637  47                        INC EDI
006FC638  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC63B  D1 EA                     SHR EDX,0x1
006FC63D  75 0C                     JNZ 0x006fc64b
006FC63F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC642  BA 80 00 00 00            MOV EDX,0x80
006FC647  41                        INC ECX
006FC648  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc64b:
006FC64B  33 C9                     XOR ECX,ECX
006FC64D  48                        DEC EAX
006FC64E  85 C0                     TEST EAX,EAX
006FC650  0F 8F 5D FF FF FF         JG 0x006fc5b3
LAB_006fc656:
006FC656  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FC659  E9 35 01 00 00            JMP 0x006fc793
LAB_006fc65e:
006FC65E  85 C9                     TEST ECX,ECX
006FC660  7E 6D                     JLE 0x006fc6cf
006FC662  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FC665  83 F9 01                  CMP ECX,0x1
006FC668  75 0A                     JNZ 0x006fc674
006FC66A  47                        INC EDI
006FC66B  B9 02 00 00 00            MOV ECX,0x2
006FC670  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FC673  48                        DEC EAX
LAB_006fc674:
006FC674  85 C0                     TEST EAX,EAX
006FC676  0F 8E 17 01 00 00         JLE 0x006fc793
006FC67C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC67F  84 11                     TEST byte ptr [ECX],DL
006FC681  75 22                     JNZ 0x006fc6a5
006FC683  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC686  33 C9                     XOR ECX,ECX
006FC688  66 8B 0B                  MOV CX,word ptr [EBX]
006FC68B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC68E  3B D9                     CMP EBX,ECX
006FC690  77 04                     JA 0x006fc696
006FC692  8A 0F                     MOV CL,byte ptr [EDI]
006FC694  EB 0D                     JMP 0x006fc6a3
LAB_006fc696:
006FC696  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC699  33 C9                     XOR ECX,ECX
006FC69B  8A 0B                     MOV CL,byte ptr [EBX]
006FC69D  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC6A0  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc6a3:
006FC6A3  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc6a5:
006FC6A5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC6A8  83 C3 02                  ADD EBX,0x2
006FC6AB  46                        INC ESI
006FC6AC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC6AF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC6B2  43                        INC EBX
006FC6B3  D1 EA                     SHR EDX,0x1
006FC6B5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FC6B8  75 0C                     JNZ 0x006fc6c6
006FC6BA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC6BD  BA 80 00 00 00            MOV EDX,0x80
006FC6C2  41                        INC ECX
006FC6C3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc6c6:
006FC6C6  47                        INC EDI
006FC6C7  33 C9                     XOR ECX,ECX
006FC6C9  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FC6CC  48                        DEC EAX
006FC6CD  EB 03                     JMP 0x006fc6d2
LAB_006fc6cf:
006FC6CF  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006fc6d2:
006FC6D2  85 C0                     TEST EAX,EAX
006FC6D4  0F 8E B9 00 00 00         JLE 0x006fc793
LAB_006fc6da:
006FC6DA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC6DD  84 11                     TEST byte ptr [ECX],DL
006FC6DF  75 22                     JNZ 0x006fc703
006FC6E1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC6E4  33 C9                     XOR ECX,ECX
006FC6E6  66 8B 0B                  MOV CX,word ptr [EBX]
006FC6E9  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC6EC  3B D9                     CMP EBX,ECX
006FC6EE  77 04                     JA 0x006fc6f4
006FC6F0  8A 0F                     MOV CL,byte ptr [EDI]
006FC6F2  EB 0D                     JMP 0x006fc701
LAB_006fc6f4:
006FC6F4  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC6F7  33 C9                     XOR ECX,ECX
006FC6F9  8A 0B                     MOV CL,byte ptr [EBX]
006FC6FB  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC6FE  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc701:
006FC701  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc703:
006FC703  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC706  83 C3 02                  ADD EBX,0x2
006FC709  46                        INC ESI
006FC70A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC70D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC710  43                        INC EBX
006FC711  D1 EA                     SHR EDX,0x1
006FC713  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FC716  75 0C                     JNZ 0x006fc724
006FC718  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC71B  BA 80 00 00 00            MOV EDX,0x80
006FC720  41                        INC ECX
006FC721  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc724:
006FC724  47                        INC EDI
006FC725  48                        DEC EAX
006FC726  85 C0                     TEST EAX,EAX
006FC728  B9 01 00 00 00            MOV ECX,0x1
006FC72D  7E 61                     JLE 0x006fc790
006FC72F  47                        INC EDI
006FC730  48                        DEC EAX
006FC731  85 C0                     TEST EAX,EAX
006FC733  B9 02 00 00 00            MOV ECX,0x2
006FC738  7E 56                     JLE 0x006fc790
006FC73A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC73D  84 11                     TEST byte ptr [ECX],DL
006FC73F  75 22                     JNZ 0x006fc763
006FC741  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC744  33 C9                     XOR ECX,ECX
006FC746  66 8B 0B                  MOV CX,word ptr [EBX]
006FC749  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC74C  3B D9                     CMP EBX,ECX
006FC74E  77 04                     JA 0x006fc754
006FC750  8A 0F                     MOV CL,byte ptr [EDI]
006FC752  EB 0D                     JMP 0x006fc761
LAB_006fc754:
006FC754  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC757  33 C9                     XOR ECX,ECX
006FC759  8A 0B                     MOV CL,byte ptr [EBX]
006FC75B  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC75E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc761:
006FC761  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc763:
006FC763  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC766  83 C3 02                  ADD EBX,0x2
006FC769  46                        INC ESI
006FC76A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC76D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC770  43                        INC EBX
006FC771  D1 EA                     SHR EDX,0x1
006FC773  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FC776  75 0C                     JNZ 0x006fc784
006FC778  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC77B  BA 80 00 00 00            MOV EDX,0x80
006FC780  41                        INC ECX
006FC781  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc784:
006FC784  47                        INC EDI
006FC785  33 C9                     XOR ECX,ECX
006FC787  48                        DEC EAX
006FC788  85 C0                     TEST EAX,EAX
006FC78A  0F 8F 4A FF FF FF         JG 0x006fc6da
LAB_006fc790:
006FC790  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fc793:
006FC793  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FC796  85 C0                     TEST EAX,EAX
006FC798  7E 64                     JLE 0x006fc7fe
006FC79A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FC79D  33 C0                     XOR EAX,EAX
006FC79F  8A 03                     MOV AL,byte ptr [EBX]
006FC7A1  8B F8                     MOV EDI,EAX
006FC7A3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006FC7A6  81 E7 80 00 00 00         AND EDI,0x80
006FC7AC  43                        INC EBX
006FC7AD  85 FF                     TEST EDI,EDI
006FC7AF  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FC7B2  74 3C                     JZ 0x006fc7f0
006FC7B4  83 E0 3F                  AND EAX,0x3f
006FC7B7  EB 3A                     JMP 0x006fc7f3
LAB_006fc7b9:
006FC7B9  48                        DEC EAX
006FC7BA  78 D7                     JS 0x006fc793
006FC7BC  40                        INC EAX
LAB_006fc7bd:
006FC7BD  83 F9 01                  CMP ECX,0x1
006FC7C0  74 21                     JZ 0x006fc7e3
006FC7C2  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FC7C5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC7C8  46                        INC ESI
006FC7C9  47                        INC EDI
006FC7CA  83 C3 02                  ADD EBX,0x2
006FC7CD  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FC7D0  D1 EA                     SHR EDX,0x1
006FC7D2  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC7D5  75 0C                     JNZ 0x006fc7e3
006FC7D7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FC7DA  BA 80 00 00 00            MOV EDX,0x80
006FC7DF  47                        INC EDI
006FC7E0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006fc7e3:
006FC7E3  41                        INC ECX
006FC7E4  83 F9 02                  CMP ECX,0x2
006FC7E7  7E 02                     JLE 0x006fc7eb
006FC7E9  33 C9                     XOR ECX,ECX
LAB_006fc7eb:
006FC7EB  48                        DEC EAX
006FC7EC  75 CF                     JNZ 0x006fc7bd
006FC7EE  EB A3                     JMP 0x006fc793
LAB_006fc7f0:
006FC7F0  83 E0 7F                  AND EAX,0x7f
LAB_006fc7f3:
006FC7F3  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006FC7F6  0F 8E 1E FD FF FF         JLE 0x006fc51a
006FC7FC  EB 02                     JMP 0x006fc800
LAB_006fc7fe:
006FC7FE  33 C0                     XOR EAX,EAX
LAB_006fc800:
006FC800  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006fc803:
006FC803  2B C7                     SUB EAX,EDI
006FC805  85 FF                     TEST EDI,EDI
006FC807  0F 8E 79 02 00 00         JLE 0x006fca86
006FC80D  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
006FC810  F6 C3 80                  TEST BL,0x80
006FC813  0F 84 6D 02 00 00         JZ 0x006fca86
006FC819  F6 C3 40                  TEST BL,0x40
006FC81C  0F 84 2F 01 00 00         JZ 0x006fc951
006FC822  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FC825  33 DB                     XOR EBX,EBX
006FC827  8A 1F                     MOV BL,byte ptr [EDI]
006FC829  47                        INC EDI
006FC82A  85 C9                     TEST ECX,ECX
006FC82C  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FC82F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FC832  7E 5F                     JLE 0x006fc893
006FC834  83 F9 01                  CMP ECX,0x1
006FC837  75 03                     JNZ 0x006fc83c
006FC839  FF 4D F0                  DEC dword ptr [EBP + -0x10]
LAB_006fc83c:
006FC83C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FC83F  85 C9                     TEST ECX,ECX
006FC841  0F 8E 3F 02 00 00         JLE 0x006fca86
006FC847  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC84A  84 11                     TEST byte ptr [ECX],DL
006FC84C  75 11                     JNZ 0x006fc85f
006FC84E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FC851  33 C9                     XOR ECX,ECX
006FC853  66 8B 0F                  MOV CX,word ptr [EDI]
006FC856  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FC859  3B F9                     CMP EDI,ECX
006FC85B  77 25                     JA 0x006fc882
006FC85D  88 1E                     MOV byte ptr [ESI],BL
LAB_006fc85f:
006FC85F  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fc862:
006FC862  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC865  83 C3 02                  ADD EBX,0x2
006FC868  46                        INC ESI
006FC869  47                        INC EDI
006FC86A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC86D  D1 EA                     SHR EDX,0x1
006FC86F  75 0C                     JNZ 0x006fc87d
006FC871  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC874  BA 80 00 00 00            MOV EDX,0x80
006FC879  41                        INC ECX
006FC87A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc87d:
006FC87D  FF 4D F0                  DEC dword ptr [EBP + -0x10]
006FC880  EB 14                     JMP 0x006fc896
LAB_006fc882:
006FC882  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FC885  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC888  33 C9                     XOR ECX,ECX
006FC88A  8A 0F                     MOV CL,byte ptr [EDI]
006FC88C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FC88F  88 0E                     MOV byte ptr [ESI],CL
006FC891  EB CF                     JMP 0x006fc862
LAB_006fc893:
006FC893  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fc896:
006FC896  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FC899  85 C9                     TEST ECX,ECX
006FC89B  0F 8E E5 01 00 00         JLE 0x006fca86
LAB_006fc8a1:
006FC8A1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC8A4  84 11                     TEST byte ptr [ECX],DL
006FC8A6  75 20                     JNZ 0x006fc8c8
006FC8A8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC8AB  33 C9                     XOR ECX,ECX
006FC8AD  66 8B 0B                  MOV CX,word ptr [EBX]
006FC8B0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC8B3  3B D9                     CMP EBX,ECX
006FC8B5  77 05                     JA 0x006fc8bc
006FC8B7  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FC8BA  EB 0A                     JMP 0x006fc8c6
LAB_006fc8bc:
006FC8BC  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC8BF  33 C9                     XOR ECX,ECX
006FC8C1  8A 0F                     MOV CL,byte ptr [EDI]
006FC8C3  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc8c6:
006FC8C6  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc8c8:
006FC8C8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC8CB  83 C3 02                  ADD EBX,0x2
006FC8CE  46                        INC ESI
006FC8CF  47                        INC EDI
006FC8D0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC8D3  D1 EA                     SHR EDX,0x1
006FC8D5  75 0C                     JNZ 0x006fc8e3
006FC8D7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC8DA  BA 80 00 00 00            MOV EDX,0x80
006FC8DF  41                        INC ECX
006FC8E0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc8e3:
006FC8E3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FC8E6  49                        DEC ECX
006FC8E7  85 C9                     TEST ECX,ECX
006FC8E9  0F 8E 97 01 00 00         JLE 0x006fca86
006FC8EF  49                        DEC ECX
006FC8F0  85 C9                     TEST ECX,ECX
006FC8F2  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FC8F5  0F 8E 8B 01 00 00         JLE 0x006fca86
006FC8FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC8FE  84 11                     TEST byte ptr [ECX],DL
006FC900  75 20                     JNZ 0x006fc922
006FC902  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC905  33 C9                     XOR ECX,ECX
006FC907  66 8B 0B                  MOV CX,word ptr [EBX]
006FC90A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC90D  3B D9                     CMP EBX,ECX
006FC90F  77 05                     JA 0x006fc916
006FC911  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FC914  EB 0A                     JMP 0x006fc920
LAB_006fc916:
006FC916  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC919  33 C9                     XOR ECX,ECX
006FC91B  8A 0F                     MOV CL,byte ptr [EDI]
006FC91D  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc920:
006FC920  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc922:
006FC922  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC925  83 C3 02                  ADD EBX,0x2
006FC928  46                        INC ESI
006FC929  47                        INC EDI
006FC92A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC92D  D1 EA                     SHR EDX,0x1
006FC92F  75 0C                     JNZ 0x006fc93d
006FC931  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC934  BA 80 00 00 00            MOV EDX,0x80
006FC939  41                        INC ECX
006FC93A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc93d:
006FC93D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FC940  49                        DEC ECX
006FC941  85 C9                     TEST ECX,ECX
006FC943  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FC946  0F 8F 55 FF FF FF         JG 0x006fc8a1
006FC94C  E9 35 01 00 00            JMP 0x006fca86
LAB_006fc951:
006FC951  85 C9                     TEST ECX,ECX
006FC953  7E 6A                     JLE 0x006fc9bf
006FC955  83 F9 01                  CMP ECX,0x1
006FC958  75 08                     JNZ 0x006fc962
006FC95A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FC95D  43                        INC EBX
006FC95E  4F                        DEC EDI
006FC95F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006fc962:
006FC962  85 FF                     TEST EDI,EDI
006FC964  0F 8E 1C 01 00 00         JLE 0x006fca86
006FC96A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC96D  84 11                     TEST byte ptr [ECX],DL
006FC96F  75 25                     JNZ 0x006fc996
006FC971  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC974  33 C9                     XOR ECX,ECX
006FC976  66 8B 0B                  MOV CX,word ptr [EBX]
006FC979  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC97C  3B D9                     CMP EBX,ECX
006FC97E  77 07                     JA 0x006fc987
006FC980  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC983  8A 09                     MOV CL,byte ptr [ECX]
006FC985  EB 0D                     JMP 0x006fc994
LAB_006fc987:
006FC987  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC98A  33 C9                     XOR ECX,ECX
006FC98C  8A 0B                     MOV CL,byte ptr [EBX]
006FC98E  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC991  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc994:
006FC994  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc996:
006FC996  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC999  83 C3 02                  ADD EBX,0x2
006FC99C  46                        INC ESI
006FC99D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC9A0  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC9A3  43                        INC EBX
006FC9A4  D1 EA                     SHR EDX,0x1
006FC9A6  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FC9A9  75 0C                     JNZ 0x006fc9b7
006FC9AB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC9AE  BA 80 00 00 00            MOV EDX,0x80
006FC9B3  41                        INC ECX
006FC9B4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc9b7:
006FC9B7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FC9BA  43                        INC EBX
006FC9BB  4F                        DEC EDI
006FC9BC  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006fc9bf:
006FC9BF  85 FF                     TEST EDI,EDI
006FC9C1  0F 8E BF 00 00 00         JLE 0x006fca86
LAB_006fc9c7:
006FC9C7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC9CA  84 11                     TEST byte ptr [ECX],DL
006FC9CC  75 25                     JNZ 0x006fc9f3
006FC9CE  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC9D1  33 C9                     XOR ECX,ECX
006FC9D3  66 8B 0B                  MOV CX,word ptr [EBX]
006FC9D6  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FC9D9  3B D9                     CMP EBX,ECX
006FC9DB  77 07                     JA 0x006fc9e4
006FC9DD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC9E0  8A 09                     MOV CL,byte ptr [ECX]
006FC9E2  EB 0D                     JMP 0x006fc9f1
LAB_006fc9e4:
006FC9E4  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FC9E7  33 C9                     XOR ECX,ECX
006FC9E9  8A 0B                     MOV CL,byte ptr [EBX]
006FC9EB  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FC9EE  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fc9f1:
006FC9F1  88 0E                     MOV byte ptr [ESI],CL
LAB_006fc9f3:
006FC9F3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FC9F6  83 C3 02                  ADD EBX,0x2
006FC9F9  46                        INC ESI
006FC9FA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FC9FD  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FCA00  43                        INC EBX
006FCA01  D1 EA                     SHR EDX,0x1
006FCA03  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FCA06  75 0C                     JNZ 0x006fca14
006FCA08  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FCA0B  BA 80 00 00 00            MOV EDX,0x80
006FCA10  41                        INC ECX
006FCA11  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fca14:
006FCA14  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FCA17  41                        INC ECX
006FCA18  4F                        DEC EDI
006FCA19  85 FF                     TEST EDI,EDI
006FCA1B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FCA1E  7E 66                     JLE 0x006fca86
006FCA20  41                        INC ECX
006FCA21  4F                        DEC EDI
006FCA22  85 FF                     TEST EDI,EDI
006FCA24  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FCA27  7E 5D                     JLE 0x006fca86
006FCA29  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FCA2C  84 11                     TEST byte ptr [ECX],DL
006FCA2E  75 25                     JNZ 0x006fca55
006FCA30  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FCA33  33 C9                     XOR ECX,ECX
006FCA35  66 8B 0B                  MOV CX,word ptr [EBX]
006FCA38  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FCA3B  3B D9                     CMP EBX,ECX
006FCA3D  77 07                     JA 0x006fca46
006FCA3F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FCA42  8A 09                     MOV CL,byte ptr [ECX]
006FCA44  EB 0D                     JMP 0x006fca53
LAB_006fca46:
006FCA46  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FCA49  33 C9                     XOR ECX,ECX
006FCA4B  8A 0B                     MOV CL,byte ptr [EBX]
006FCA4D  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FCA50  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fca53:
006FCA53  88 0E                     MOV byte ptr [ESI],CL
LAB_006fca55:
006FCA55  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FCA58  83 C3 02                  ADD EBX,0x2
006FCA5B  46                        INC ESI
006FCA5C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FCA5F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FCA62  43                        INC EBX
006FCA63  D1 EA                     SHR EDX,0x1
006FCA65  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FCA68  75 0C                     JNZ 0x006fca76
006FCA6A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FCA6D  BA 80 00 00 00            MOV EDX,0x80
006FCA72  41                        INC ECX
006FCA73  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fca76:
006FCA76  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FCA79  41                        INC ECX
006FCA7A  4F                        DEC EDI
006FCA7B  85 FF                     TEST EDI,EDI
006FCA7D  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FCA80  0F 8F 41 FF FF FF         JG 0x006fc9c7
LAB_006fca86:
006FCA86  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FCA89  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FCA8C  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FCA8F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006FCA92  2B CF                     SUB ECX,EDI
006FCA94  2B CE                     SUB ECX,ESI
006FCA96  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FCA99  3B C1                     CMP EAX,ECX
006FCA9B  7D 2E                     JGE 0x006fcacb
LAB_006fca9d:
006FCA9D  81 E2 C0 00 00 00         AND EDX,0xc0
006FCAA3  2B C8                     SUB ECX,EAX
006FCAA5  80 FA 80                  CMP DL,0x80
006FCAA8  75 02                     JNZ 0x006fcaac
006FCAAA  03 F0                     ADD ESI,EAX
LAB_006fcaac:
006FCAAC  33 D2                     XOR EDX,EDX
006FCAAE  8A 16                     MOV DL,byte ptr [ESI]
006FCAB0  8B C2                     MOV EAX,EDX
006FCAB2  24 80                     AND AL,0x80
006FCAB4  46                        INC ESI
006FCAB5  84 C0                     TEST AL,AL
006FCAB7  8B C2                     MOV EAX,EDX
006FCAB9  74 09                     JZ 0x006fcac4
006FCABB  83 E0 3F                  AND EAX,0x3f
006FCABE  F6 C2 40                  TEST DL,0x40
006FCAC1  74 01                     JZ 0x006fcac4
006FCAC3  46                        INC ESI
LAB_006fcac4:
006FCAC4  3B C1                     CMP EAX,ECX
006FCAC6  7C D5                     JL 0x006fca9d
006FCAC8  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fcacb:
006FCACB  81 E2 C0 00 00 00         AND EDX,0xc0
006FCAD1  80 FA 80                  CMP DL,0x80
006FCAD4  75 05                     JNZ 0x006fcadb
006FCAD6  03 F1                     ADD ESI,ECX
006FCAD8  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fcadb:
006FCADB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FCADE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006FCAE1  8B 55 48                  MOV EDX,dword ptr [EBP + 0x48]
006FCAE4  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FCAE7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006FCAEA  03 D9                     ADD EBX,ECX
006FCAEC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FCAEF  03 F2                     ADD ESI,EDX
006FCAF1  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006FCAF4  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006FCAF7  89 75 44                  MOV dword ptr [EBP + 0x44],ESI
006FCAFA  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FCAFD  03 C8                     ADD ECX,EAX
006FCAFF  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FCB02  03 F3                     ADD ESI,EBX
006FCB04  40                        INC EAX
006FCB05  83 F8 02                  CMP EAX,0x2
006FCB08  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006FCB0B  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FCB0E  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FCB11  7E 07                     JLE 0x006fcb1a
006FCB13  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fcb1a:
006FCB1A  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FCB1D  48                        DEC EAX
006FCB1E  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FCB21  0F 89 EA F8 FF FF         JNS 0x006fc411
LAB_006fcb27:
006FCB27  5F                        POP EDI
006FCB28  5E                        POP ESI
006FCB29  5B                        POP EBX
006FCB2A  8B E5                     MOV ESP,EBP
006FCB2C  5D                        POP EBP
006FCB2D  C2 48 00                  RET 0x48
