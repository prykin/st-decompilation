FUN_006fe570:
006FE570  55                        PUSH EBP
006FE571  8B EC                     MOV EBP,ESP
006FE573  83 EC 1C                  SUB ESP,0x1c
006FE576  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FE579  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FE57C  C1 F8 03                  SAR EAX,0x3
006FE57F  03 C8                     ADD ECX,EAX
006FE581  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FE584  53                        PUSH EBX
006FE585  48                        DEC EAX
006FE586  56                        PUSH ESI
006FE587  57                        PUSH EDI
006FE588  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FE592  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FE595  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FE598  0F 88 A7 07 00 00         JS 0x006fed45
LAB_006fe59e:
006FE59E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FE5A1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE5A4  83 F8 01                  CMP EAX,0x1
006FE5A7  75 4A                     JNZ 0x006fe5f3
006FE5A9  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FE5AC  48                        DEC EAX
006FE5AD  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FE5B0  0F 88 8F 07 00 00         JS 0x006fed45
006FE5B6  33 C0                     XOR EAX,EAX
006FE5B8  8A 01                     MOV AL,byte ptr [ECX]
006FE5BA  41                        INC ECX
006FE5BB  85 C0                     TEST EAX,EAX
006FE5BD  74 2D                     JZ 0x006fe5ec
006FE5BF  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
LAB_006fe5c2:
006FE5C2  A8 80                     TEST AL,0x80
006FE5C4  74 16                     JZ 0x006fe5dc
006FE5C6  A8 40                     TEST AL,0x40
006FE5C8  74 06                     JZ 0x006fe5d0
006FE5CA  41                        INC ECX
006FE5CB  83 E0 3F                  AND EAX,0x3f
006FE5CE  EB 0F                     JMP 0x006fe5df
LAB_006fe5d0:
006FE5D0  8B F0                     MOV ESI,EAX
006FE5D2  83 E6 3F                  AND ESI,0x3f
006FE5D5  03 CE                     ADD ECX,ESI
006FE5D7  83 E0 3F                  AND EAX,0x3f
006FE5DA  EB 03                     JMP 0x006fe5df
LAB_006fe5dc:
006FE5DC  83 E0 7F                  AND EAX,0x7f
LAB_006fe5df:
006FE5DF  2B D0                     SUB EDX,EAX
006FE5E1  85 D2                     TEST EDX,EDX
006FE5E3  7E 07                     JLE 0x006fe5ec
006FE5E5  33 C0                     XOR EAX,EAX
006FE5E7  8A 01                     MOV AL,byte ptr [ECX]
006FE5E9  41                        INC ECX
006FE5EA  EB D6                     JMP 0x006fe5c2
LAB_006fe5ec:
006FE5EC  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006fe5f3:
006FE5F3  33 DB                     XOR EBX,EBX
006FE5F5  8A 19                     MOV BL,byte ptr [ECX]
006FE5F7  41                        INC ECX
006FE5F8  85 DB                     TEST EBX,EBX
006FE5FA  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FE5FD  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE600  0F 84 F3 06 00 00         JZ 0x006fecf9
006FE606  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FE609  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
006FE60C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006FE60F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FE612  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FE615  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FE618  83 E1 07                  AND ECX,0x7
006FE61B  BA 80 00 00 00            MOV EDX,0x80
006FE620  D3 FA                     SAR EDX,CL
006FE622  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FE625  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006FE628  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006FE62B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006FE62E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe631:
006FE631  F6 C3 80                  TEST BL,0x80
006FE634  8B CB                     MOV ECX,EBX
006FE636  74 36                     JZ 0x006fe66e
006FE638  83 E1 3F                  AND ECX,0x3f
006FE63B  3B CE                     CMP ECX,ESI
006FE63D  7F 45                     JG 0x006fe684
006FE63F  F6 C3 40                  TEST BL,0x40
006FE642  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FE645  74 13                     JZ 0x006fe65a
006FE647  43                        INC EBX
006FE648  2B F1                     SUB ESI,ECX
006FE64A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FE64D  33 DB                     XOR EBX,EBX
006FE64F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE652  8A 19                     MOV BL,byte ptr [ECX]
006FE654  41                        INC ECX
006FE655  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE658  EB D7                     JMP 0x006fe631
LAB_006fe65a:
006FE65A  03 D9                     ADD EBX,ECX
006FE65C  2B F1                     SUB ESI,ECX
006FE65E  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FE661  33 DB                     XOR EBX,EBX
006FE663  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE666  8A 19                     MOV BL,byte ptr [ECX]
006FE668  41                        INC ECX
006FE669  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE66C  EB C3                     JMP 0x006fe631
LAB_006fe66e:
006FE66E  83 E1 7F                  AND ECX,0x7f
006FE671  3B CE                     CMP ECX,ESI
006FE673  7F 0F                     JG 0x006fe684
006FE675  2B F1                     SUB ESI,ECX
006FE677  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE67A  33 DB                     XOR EBX,EBX
006FE67C  8A 19                     MOV BL,byte ptr [ECX]
006FE67E  41                        INC ECX
006FE67F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE682  EB AD                     JMP 0x006fe631
LAB_006fe684:
006FE684  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FE687  81 E3 C0 00 00 00         AND EBX,0xc0
006FE68D  2B CE                     SUB ECX,ESI
006FE68F  80 FB 80                  CMP BL,0x80
006FE692  75 03                     JNZ 0x006fe697
006FE694  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006fe697:
006FE697  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FE69A  3B CE                     CMP ECX,ESI
006FE69C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006FE69F  0F 8F 27 03 00 00         JG 0x006fe9cc
006FE6A5  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006FE6A8  81 E6 80 00 00 00         AND ESI,0x80
LAB_006fe6ae:
006FE6AE  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FE6B1  2B D9                     SUB EBX,ECX
006FE6B3  85 F6                     TEST ESI,ESI
006FE6B5  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FE6B8  0F 84 C2 02 00 00         JZ 0x006fe980
006FE6BE  F6 45 E8 40               TEST byte ptr [EBP + -0x18],0x40
006FE6C2  0F 84 48 01 00 00         JZ 0x006fe810
006FE6C8  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE6CB  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FE6CE  33 DB                     XOR EBX,EBX
006FE6D0  8A 1E                     MOV BL,byte ptr [ESI]
006FE6D2  8B F3                     MOV ESI,EBX
006FE6D4  33 DB                     XOR EBX,EBX
006FE6D6  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FE6D9  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FE6DC  47                        INC EDI
006FE6DD  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006FE6E0  85 C0                     TEST EAX,EAX
006FE6E2  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FE6E5  7E 70                     JLE 0x006fe757
006FE6E7  83 F8 01                  CMP EAX,0x1
006FE6EA  75 06                     JNZ 0x006fe6f2
006FE6EC  B8 02 00 00 00            MOV EAX,0x2
006FE6F1  49                        DEC ECX
LAB_006fe6f2:
006FE6F2  85 C9                     TEST ECX,ECX
006FE6F4  0F 8E BD 02 00 00         JLE 0x006fe9b7
006FE6FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE6FD  84 10                     TEST byte ptr [EAX],DL
006FE6FF  75 2A                     JNZ 0x006fe72b
006FE701  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FE704  33 C0                     XOR EAX,EAX
006FE706  66 8B 06                  MOV AX,word ptr [ESI]
006FE709  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FE70C  3B F0                     CMP ESI,EAX
006FE70E  77 07                     JA 0x006fe717
006FE710  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006FE713  88 1F                     MOV byte ptr [EDI],BL
006FE715  EB 17                     JMP 0x006fe72e
LAB_006fe717:
006FE717  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE71A  8B 7D 50                  MOV EDI,dword ptr [EBP + 0x50]
006FE71D  33 C0                     XOR EAX,EAX
006FE71F  8A 06                     MOV AL,byte ptr [ESI]
006FE721  8A 04 38                  MOV AL,byte ptr [EAX + EDI*0x1]
006FE724  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006FE727  88 07                     MOV byte ptr [EDI],AL
006FE729  EB 06                     JMP 0x006fe731
LAB_006fe72b:
006FE72B  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_006fe72e:
006FE72E  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006fe731:
006FE731  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE734  83 C3 02                  ADD EBX,0x2
006FE737  47                        INC EDI
006FE738  46                        INC ESI
006FE739  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE73C  D1 EA                     SHR EDX,0x1
006FE73E  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006FE741  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FE744  75 0C                     JNZ 0x006fe752
006FE746  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE749  BA 80 00 00 00            MOV EDX,0x80
006FE74E  40                        INC EAX
006FE74F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fe752:
006FE752  33 C0                     XOR EAX,EAX
006FE754  49                        DEC ECX
006FE755  EB 06                     JMP 0x006fe75d
LAB_006fe757:
006FE757  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006FE75A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006fe75d:
006FE75D  85 C9                     TEST ECX,ECX
006FE75F  0F 8E F5 01 00 00         JLE 0x006fe95a
LAB_006fe765:
006FE765  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE768  84 10                     TEST byte ptr [EAX],DL
006FE76A  75 20                     JNZ 0x006fe78c
006FE76C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE76F  33 C0                     XOR EAX,EAX
006FE771  66 8B 03                  MOV AX,word ptr [EBX]
006FE774  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FE777  3B D8                     CMP EBX,EAX
006FE779  77 05                     JA 0x006fe780
006FE77B  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
006FE77E  EB 0A                     JMP 0x006fe78a
LAB_006fe780:
006FE780  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FE783  33 C0                     XOR EAX,EAX
006FE785  8A 06                     MOV AL,byte ptr [ESI]
006FE787  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
LAB_006fe78a:
006FE78A  88 07                     MOV byte ptr [EDI],AL
LAB_006fe78c:
006FE78C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE78F  83 C3 02                  ADD EBX,0x2
006FE792  47                        INC EDI
006FE793  46                        INC ESI
006FE794  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE797  D1 EA                     SHR EDX,0x1
006FE799  75 0C                     JNZ 0x006fe7a7
006FE79B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE79E  BA 80 00 00 00            MOV EDX,0x80
006FE7A3  40                        INC EAX
006FE7A4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fe7a7:
006FE7A7  49                        DEC ECX
006FE7A8  B8 01 00 00 00            MOV EAX,0x1
006FE7AD  85 C9                     TEST ECX,ECX
006FE7AF  7E 57                     JLE 0x006fe808
006FE7B1  49                        DEC ECX
006FE7B2  B8 02 00 00 00            MOV EAX,0x2
006FE7B7  85 C9                     TEST ECX,ECX
006FE7B9  7E 4D                     JLE 0x006fe808
006FE7BB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE7BE  84 10                     TEST byte ptr [EAX],DL
006FE7C0  75 20                     JNZ 0x006fe7e2
006FE7C2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE7C5  33 C0                     XOR EAX,EAX
006FE7C7  66 8B 03                  MOV AX,word ptr [EBX]
006FE7CA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FE7CD  3B D8                     CMP EBX,EAX
006FE7CF  77 05                     JA 0x006fe7d6
006FE7D1  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
006FE7D4  EB 0A                     JMP 0x006fe7e0
LAB_006fe7d6:
006FE7D6  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FE7D9  33 C0                     XOR EAX,EAX
006FE7DB  8A 06                     MOV AL,byte ptr [ESI]
006FE7DD  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
LAB_006fe7e0:
006FE7E0  88 07                     MOV byte ptr [EDI],AL
LAB_006fe7e2:
006FE7E2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE7E5  83 C3 02                  ADD EBX,0x2
006FE7E8  47                        INC EDI
006FE7E9  46                        INC ESI
006FE7EA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE7ED  D1 EA                     SHR EDX,0x1
006FE7EF  75 0C                     JNZ 0x006fe7fd
006FE7F1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE7F4  BA 80 00 00 00            MOV EDX,0x80
006FE7F9  40                        INC EAX
006FE7FA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fe7fd:
006FE7FD  33 C0                     XOR EAX,EAX
006FE7FF  49                        DEC ECX
006FE800  85 C9                     TEST ECX,ECX
006FE802  0F 8F 5D FF FF FF         JG 0x006fe765
LAB_006fe808:
006FE808  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FE80B  E9 47 01 00 00            JMP 0x006fe957
LAB_006fe810:
006FE810  85 C0                     TEST EAX,EAX
006FE812  7E 75                     JLE 0x006fe889
006FE814  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE817  83 F8 01                  CMP EAX,0x1
006FE81A  75 0A                     JNZ 0x006fe826
006FE81C  46                        INC ESI
006FE81D  B8 02 00 00 00            MOV EAX,0x2
006FE822  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FE825  49                        DEC ECX
LAB_006fe826:
006FE826  85 C9                     TEST ECX,ECX
006FE828  0F 8E 2C 01 00 00         JLE 0x006fe95a
006FE82E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE831  84 10                     TEST byte ptr [EAX],DL
006FE833  75 27                     JNZ 0x006fe85c
006FE835  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE838  33 C0                     XOR EAX,EAX
006FE83A  66 8B 03                  MOV AX,word ptr [EBX]
006FE83D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FE840  3B D8                     CMP EBX,EAX
006FE842  77 09                     JA 0x006fe84d
006FE844  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FE847  33 C0                     XOR EAX,EAX
006FE849  8A 06                     MOV AL,byte ptr [ESI]
006FE84B  EB 0A                     JMP 0x006fe857
LAB_006fe84d:
006FE84D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FE850  33 C0                     XOR EAX,EAX
006FE852  8A 03                     MOV AL,byte ptr [EBX]
006FE854  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006fe857:
006FE857  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006FE85A  88 07                     MOV byte ptr [EDI],AL
LAB_006fe85c:
006FE85C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE85F  83 C3 02                  ADD EBX,0x2
006FE862  47                        INC EDI
006FE863  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE866  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FE869  43                        INC EBX
006FE86A  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006FE86D  D1 EA                     SHR EDX,0x1
006FE86F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FE872  75 0C                     JNZ 0x006fe880
006FE874  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE877  BA 80 00 00 00            MOV EDX,0x80
006FE87C  40                        INC EAX
006FE87D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fe880:
006FE880  46                        INC ESI
006FE881  33 C0                     XOR EAX,EAX
006FE883  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FE886  49                        DEC ECX
006FE887  EB 03                     JMP 0x006fe88c
LAB_006fe889:
006FE889  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006fe88c:
006FE88C  85 C9                     TEST ECX,ECX
006FE88E  0F 8E C6 00 00 00         JLE 0x006fe95a
LAB_006fe894:
006FE894  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE897  84 10                     TEST byte ptr [EAX],DL
006FE899  75 27                     JNZ 0x006fe8c2
006FE89B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE89E  33 C0                     XOR EAX,EAX
006FE8A0  66 8B 03                  MOV AX,word ptr [EBX]
006FE8A3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FE8A6  3B D8                     CMP EBX,EAX
006FE8A8  77 09                     JA 0x006fe8b3
006FE8AA  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FE8AD  33 C0                     XOR EAX,EAX
006FE8AF  8A 06                     MOV AL,byte ptr [ESI]
006FE8B1  EB 0A                     JMP 0x006fe8bd
LAB_006fe8b3:
006FE8B3  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FE8B6  33 C0                     XOR EAX,EAX
006FE8B8  8A 03                     MOV AL,byte ptr [EBX]
006FE8BA  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006fe8bd:
006FE8BD  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006FE8C0  88 07                     MOV byte ptr [EDI],AL
LAB_006fe8c2:
006FE8C2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE8C5  83 C3 02                  ADD EBX,0x2
006FE8C8  47                        INC EDI
006FE8C9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE8CC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FE8CF  43                        INC EBX
006FE8D0  D1 EA                     SHR EDX,0x1
006FE8D2  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FE8D5  75 0C                     JNZ 0x006fe8e3
006FE8D7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE8DA  BA 80 00 00 00            MOV EDX,0x80
006FE8DF  40                        INC EAX
006FE8E0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fe8e3:
006FE8E3  46                        INC ESI
006FE8E4  49                        DEC ECX
006FE8E5  85 C9                     TEST ECX,ECX
006FE8E7  B8 01 00 00 00            MOV EAX,0x1
006FE8EC  7E 66                     JLE 0x006fe954
006FE8EE  46                        INC ESI
006FE8EF  49                        DEC ECX
006FE8F0  85 C9                     TEST ECX,ECX
006FE8F2  B8 02 00 00 00            MOV EAX,0x2
006FE8F7  7E 5B                     JLE 0x006fe954
006FE8F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE8FC  84 10                     TEST byte ptr [EAX],DL
006FE8FE  75 27                     JNZ 0x006fe927
006FE900  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE903  33 C0                     XOR EAX,EAX
006FE905  66 8B 03                  MOV AX,word ptr [EBX]
006FE908  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FE90B  3B D8                     CMP EBX,EAX
006FE90D  77 09                     JA 0x006fe918
006FE90F  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FE912  33 C0                     XOR EAX,EAX
006FE914  8A 06                     MOV AL,byte ptr [ESI]
006FE916  EB 0A                     JMP 0x006fe922
LAB_006fe918:
006FE918  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FE91B  33 C0                     XOR EAX,EAX
006FE91D  8A 03                     MOV AL,byte ptr [EBX]
006FE91F  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006fe922:
006FE922  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006FE925  88 07                     MOV byte ptr [EDI],AL
LAB_006fe927:
006FE927  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE92A  83 C3 02                  ADD EBX,0x2
006FE92D  47                        INC EDI
006FE92E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE931  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FE934  43                        INC EBX
006FE935  D1 EA                     SHR EDX,0x1
006FE937  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FE93A  75 0C                     JNZ 0x006fe948
006FE93C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FE93F  BA 80 00 00 00            MOV EDX,0x80
006FE944  40                        INC EAX
006FE945  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fe948:
006FE948  46                        INC ESI
006FE949  33 C0                     XOR EAX,EAX
006FE94B  49                        DEC ECX
006FE94C  85 C9                     TEST ECX,ECX
006FE94E  0F 8F 40 FF FF FF         JG 0x006fe894
LAB_006fe954:
006FE954  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fe957:
006FE957  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_006fe95a:
006FE95A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FE95D  85 C9                     TEST ECX,ECX
006FE95F  7E 69                     JLE 0x006fe9ca
006FE961  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FE964  33 C9                     XOR ECX,ECX
006FE966  8A 0B                     MOV CL,byte ptr [EBX]
006FE968  8B F1                     MOV ESI,ECX
006FE96A  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006FE96D  81 E6 80 00 00 00         AND ESI,0x80
006FE973  43                        INC EBX
006FE974  85 F6                     TEST ESI,ESI
006FE976  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FE979  74 41                     JZ 0x006fe9bc
006FE97B  83 E1 3F                  AND ECX,0x3f
006FE97E  EB 3F                     JMP 0x006fe9bf
LAB_006fe980:
006FE980  49                        DEC ECX
006FE981  78 D7                     JS 0x006fe95a
006FE983  41                        INC ECX
LAB_006fe984:
006FE984  83 F8 01                  CMP EAX,0x1
006FE987  74 21                     JZ 0x006fe9aa
006FE989  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE98C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE98F  47                        INC EDI
006FE990  46                        INC ESI
006FE991  83 C3 02                  ADD EBX,0x2
006FE994  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FE997  D1 EA                     SHR EDX,0x1
006FE999  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FE99C  75 0C                     JNZ 0x006fe9aa
006FE99E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE9A1  BA 80 00 00 00            MOV EDX,0x80
006FE9A6  46                        INC ESI
006FE9A7  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006fe9aa:
006FE9AA  40                        INC EAX
006FE9AB  83 F8 02                  CMP EAX,0x2
006FE9AE  7E 02                     JLE 0x006fe9b2
006FE9B0  33 C0                     XOR EAX,EAX
LAB_006fe9b2:
006FE9B2  49                        DEC ECX
006FE9B3  75 CF                     JNZ 0x006fe984
006FE9B5  EB A0                     JMP 0x006fe957
LAB_006fe9b7:
006FE9B7  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006FE9BA  EB 9E                     JMP 0x006fe95a
LAB_006fe9bc:
006FE9BC  83 E1 7F                  AND ECX,0x7f
LAB_006fe9bf:
006FE9BF  3B 4D F0                  CMP ECX,dword ptr [EBP + -0x10]
006FE9C2  0F 8E E6 FC FF FF         JLE 0x006fe6ae
006FE9C8  EB 02                     JMP 0x006fe9cc
LAB_006fe9ca:
006FE9CA  33 C9                     XOR ECX,ECX
LAB_006fe9cc:
006FE9CC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FE9CF  2B CE                     SUB ECX,ESI
006FE9D1  85 F6                     TEST ESI,ESI
006FE9D3  0F 8E CA 02 00 00         JLE 0x006feca3
006FE9D9  8A 5D E8                  MOV BL,byte ptr [EBP + -0x18]
006FE9DC  F6 C3 80                  TEST BL,0x80
006FE9DF  0F 84 BE 02 00 00         JZ 0x006feca3
006FE9E5  F6 C3 40                  TEST BL,0x40
006FE9E8  0F 84 4A 01 00 00         JZ 0x006feb38
006FE9EE  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE9F1  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FE9F4  33 DB                     XOR EBX,EBX
006FE9F6  8A 1E                     MOV BL,byte ptr [ESI]
006FE9F8  8B F3                     MOV ESI,EBX
006FE9FA  33 DB                     XOR EBX,EBX
006FE9FC  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FE9FF  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FEA02  47                        INC EDI
006FEA03  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006FEA06  85 C0                     TEST EAX,EAX
006FEA08  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FEA0B  7E 6A                     JLE 0x006fea77
006FEA0D  83 F8 01                  CMP EAX,0x1
006FEA10  75 03                     JNZ 0x006fea15
006FEA12  FF 4D F0                  DEC dword ptr [EBP + -0x10]
LAB_006fea15:
006FEA15  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEA18  85 C0                     TEST EAX,EAX
006FEA1A  0F 8E 83 02 00 00         JLE 0x006feca3
006FEA20  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEA23  84 10                     TEST byte ptr [EAX],DL
006FEA25  75 2A                     JNZ 0x006fea51
006FEA27  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEA2A  33 C0                     XOR EAX,EAX
006FEA2C  66 8B 06                  MOV AX,word ptr [ESI]
006FEA2F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEA32  3B F0                     CMP ESI,EAX
006FEA34  77 07                     JA 0x006fea3d
006FEA36  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FEA39  88 1E                     MOV byte ptr [ESI],BL
006FEA3B  EB 17                     JMP 0x006fea54
LAB_006fea3d:
006FEA3D  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FEA40  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FEA43  33 C0                     XOR EAX,EAX
006FEA45  8A 07                     MOV AL,byte ptr [EDI]
006FEA47  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006FEA4A  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FEA4D  88 06                     MOV byte ptr [ESI],AL
006FEA4F  EB 06                     JMP 0x006fea57
LAB_006fea51:
006FEA51  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_006fea54:
006FEA54  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fea57:
006FEA57  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FEA5A  83 C3 02                  ADD EBX,0x2
006FEA5D  46                        INC ESI
006FEA5E  47                        INC EDI
006FEA5F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FEA62  D1 EA                     SHR EDX,0x1
006FEA64  75 0C                     JNZ 0x006fea72
006FEA66  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEA69  BA 80 00 00 00            MOV EDX,0x80
006FEA6E  40                        INC EAX
006FEA6F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fea72:
006FEA72  FF 4D F0                  DEC dword ptr [EBP + -0x10]
006FEA75  EB 06                     JMP 0x006fea7d
LAB_006fea77:
006FEA77  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FEA7A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fea7d:
006FEA7D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEA80  85 C0                     TEST EAX,EAX
006FEA82  0F 8E 1B 02 00 00         JLE 0x006feca3
LAB_006fea88:
006FEA88  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEA8B  84 10                     TEST byte ptr [EAX],DL
006FEA8D  75 20                     JNZ 0x006feaaf
006FEA8F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FEA92  33 C0                     XOR EAX,EAX
006FEA94  66 8B 03                  MOV AX,word ptr [EBX]
006FEA97  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FEA9A  3B D8                     CMP EBX,EAX
006FEA9C  77 05                     JA 0x006feaa3
006FEA9E  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
006FEAA1  EB 0A                     JMP 0x006feaad
LAB_006feaa3:
006FEAA3  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FEAA6  33 C0                     XOR EAX,EAX
006FEAA8  8A 07                     MOV AL,byte ptr [EDI]
006FEAAA  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
LAB_006feaad:
006FEAAD  88 06                     MOV byte ptr [ESI],AL
LAB_006feaaf:
006FEAAF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FEAB2  83 C3 02                  ADD EBX,0x2
006FEAB5  46                        INC ESI
006FEAB6  47                        INC EDI
006FEAB7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FEABA  D1 EA                     SHR EDX,0x1
006FEABC  75 0C                     JNZ 0x006feaca
006FEABE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEAC1  BA 80 00 00 00            MOV EDX,0x80
006FEAC6  40                        INC EAX
006FEAC7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006feaca:
006FEACA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEACD  48                        DEC EAX
006FEACE  85 C0                     TEST EAX,EAX
006FEAD0  0F 8E CD 01 00 00         JLE 0x006feca3
006FEAD6  48                        DEC EAX
006FEAD7  85 C0                     TEST EAX,EAX
006FEAD9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FEADC  0F 8E C1 01 00 00         JLE 0x006feca3
006FEAE2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEAE5  84 10                     TEST byte ptr [EAX],DL
006FEAE7  75 20                     JNZ 0x006feb09
006FEAE9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FEAEC  33 C0                     XOR EAX,EAX
006FEAEE  66 8B 03                  MOV AX,word ptr [EBX]
006FEAF1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FEAF4  3B D8                     CMP EBX,EAX
006FEAF6  77 05                     JA 0x006feafd
006FEAF8  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
006FEAFB  EB 0A                     JMP 0x006feb07
LAB_006feafd:
006FEAFD  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FEB00  33 C0                     XOR EAX,EAX
006FEB02  8A 07                     MOV AL,byte ptr [EDI]
006FEB04  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
LAB_006feb07:
006FEB07  88 06                     MOV byte ptr [ESI],AL
LAB_006feb09:
006FEB09  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FEB0C  83 C3 02                  ADD EBX,0x2
006FEB0F  46                        INC ESI
006FEB10  47                        INC EDI
006FEB11  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FEB14  D1 EA                     SHR EDX,0x1
006FEB16  75 0C                     JNZ 0x006feb24
006FEB18  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEB1B  BA 80 00 00 00            MOV EDX,0x80
006FEB20  40                        INC EAX
006FEB21  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006feb24:
006FEB24  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEB27  48                        DEC EAX
006FEB28  85 C0                     TEST EAX,EAX
006FEB2A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FEB2D  0F 8F 55 FF FF FF         JG 0x006fea88
006FEB33  E9 6B 01 00 00            JMP 0x006feca3
LAB_006feb38:
006FEB38  85 C0                     TEST EAX,EAX
006FEB3A  7E 7E                     JLE 0x006febba
006FEB3C  83 F8 01                  CMP EAX,0x1
006FEB3F  75 0E                     JNZ 0x006feb4f
006FEB41  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FEB44  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEB47  46                        INC ESI
006FEB48  48                        DEC EAX
006FEB49  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FEB4C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006feb4f:
006FEB4F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEB52  85 C0                     TEST EAX,EAX
006FEB54  0F 8E 49 01 00 00         JLE 0x006feca3
006FEB5A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEB5D  84 10                     TEST byte ptr [EAX],DL
006FEB5F  75 2A                     JNZ 0x006feb8b
006FEB61  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEB64  33 C0                     XOR EAX,EAX
006FEB66  66 8B 06                  MOV AX,word ptr [ESI]
006FEB69  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEB6C  3B F0                     CMP ESI,EAX
006FEB6E  77 0C                     JA 0x006feb7c
006FEB70  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FEB73  33 C0                     XOR EAX,EAX
006FEB75  8A 06                     MOV AL,byte ptr [ESI]
006FEB77  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FEB7A  EB 0A                     JMP 0x006feb86
LAB_006feb7c:
006FEB7C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEB7F  33 C0                     XOR EAX,EAX
006FEB81  8A 06                     MOV AL,byte ptr [ESI]
006FEB83  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
LAB_006feb86:
006FEB86  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006FEB89  88 07                     MOV byte ptr [EDI],AL
LAB_006feb8b:
006FEB8B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006FEB8E  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEB91  83 C0 02                  ADD EAX,0x2
006FEB94  47                        INC EDI
006FEB95  46                        INC ESI
006FEB96  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FEB99  D1 EA                     SHR EDX,0x1
006FEB9B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FEB9E  75 0C                     JNZ 0x006febac
006FEBA0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEBA3  BA 80 00 00 00            MOV EDX,0x80
006FEBA8  40                        INC EAX
006FEBA9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006febac:
006FEBAC  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FEBAF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEBB2  46                        INC ESI
006FEBB3  48                        DEC EAX
006FEBB4  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FEBB7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006febba:
006FEBBA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEBBD  85 C0                     TEST EAX,EAX
006FEBBF  0F 8E DE 00 00 00         JLE 0x006feca3
LAB_006febc5:
006FEBC5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEBC8  84 10                     TEST byte ptr [EAX],DL
006FEBCA  75 2A                     JNZ 0x006febf6
006FEBCC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEBCF  33 C0                     XOR EAX,EAX
006FEBD1  66 8B 06                  MOV AX,word ptr [ESI]
006FEBD4  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEBD7  3B F0                     CMP ESI,EAX
006FEBD9  77 0C                     JA 0x006febe7
006FEBDB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FEBDE  33 C0                     XOR EAX,EAX
006FEBE0  8A 06                     MOV AL,byte ptr [ESI]
006FEBE2  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FEBE5  EB 0A                     JMP 0x006febf1
LAB_006febe7:
006FEBE7  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEBEA  33 C0                     XOR EAX,EAX
006FEBEC  8A 06                     MOV AL,byte ptr [ESI]
006FEBEE  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
LAB_006febf1:
006FEBF1  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006FEBF4  88 07                     MOV byte ptr [EDI],AL
LAB_006febf6:
006FEBF6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006FEBF9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEBFC  83 C0 02                  ADD EAX,0x2
006FEBFF  47                        INC EDI
006FEC00  46                        INC ESI
006FEC01  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FEC04  D1 EA                     SHR EDX,0x1
006FEC06  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FEC09  75 0C                     JNZ 0x006fec17
006FEC0B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEC0E  BA 80 00 00 00            MOV EDX,0x80
006FEC13  40                        INC EAX
006FEC14  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fec17:
006FEC17  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FEC1A  40                        INC EAX
006FEC1B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FEC1E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEC21  48                        DEC EAX
006FEC22  85 C0                     TEST EAX,EAX
006FEC24  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FEC27  7E 7A                     JLE 0x006feca3
006FEC29  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FEC2C  40                        INC EAX
006FEC2D  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FEC30  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEC33  48                        DEC EAX
006FEC34  85 C0                     TEST EAX,EAX
006FEC36  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FEC39  7E 68                     JLE 0x006feca3
006FEC3B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEC3E  84 10                     TEST byte ptr [EAX],DL
006FEC40  75 2A                     JNZ 0x006fec6c
006FEC42  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FEC45  33 C0                     XOR EAX,EAX
006FEC47  66 8B 06                  MOV AX,word ptr [ESI]
006FEC4A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FEC4D  3B F0                     CMP ESI,EAX
006FEC4F  77 0C                     JA 0x006fec5d
006FEC51  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FEC54  33 C0                     XOR EAX,EAX
006FEC56  8A 06                     MOV AL,byte ptr [ESI]
006FEC58  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FEC5B  EB 0A                     JMP 0x006fec67
LAB_006fec5d:
006FEC5D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEC60  33 C0                     XOR EAX,EAX
006FEC62  8A 06                     MOV AL,byte ptr [ESI]
006FEC64  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
LAB_006fec67:
006FEC67  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006FEC6A  88 07                     MOV byte ptr [EDI],AL
LAB_006fec6c:
006FEC6C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006FEC6F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FEC72  83 C0 02                  ADD EAX,0x2
006FEC75  47                        INC EDI
006FEC76  46                        INC ESI
006FEC77  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FEC7A  D1 EA                     SHR EDX,0x1
006FEC7C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FEC7F  75 0C                     JNZ 0x006fec8d
006FEC81  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FEC84  BA 80 00 00 00            MOV EDX,0x80
006FEC89  40                        INC EAX
006FEC8A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006fec8d:
006FEC8D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FEC90  40                        INC EAX
006FEC91  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FEC94  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FEC97  48                        DEC EAX
006FEC98  85 C0                     TEST EAX,EAX
006FEC9A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FEC9D  0F 8F 22 FF FF FF         JG 0x006febc5
LAB_006feca3:
006FECA3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006FECA6  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FECA9  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FECAC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006FECAF  2B C7                     SUB EAX,EDI
006FECB1  2B C6                     SUB EAX,ESI
006FECB3  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FECB6  3B C8                     CMP ECX,EAX
006FECB8  7D 2F                     JGE 0x006fece9
LAB_006fecba:
006FECBA  81 E2 C0 00 00 00         AND EDX,0xc0
006FECC0  2B C1                     SUB EAX,ECX
006FECC2  80 FA 80                  CMP DL,0x80
006FECC5  75 02                     JNZ 0x006fecc9
006FECC7  03 F1                     ADD ESI,ECX
LAB_006fecc9:
006FECC9  33 D2                     XOR EDX,EDX
006FECCB  8A 16                     MOV DL,byte ptr [ESI]
006FECCD  8B CA                     MOV ECX,EDX
006FECCF  80 E1 80                  AND CL,0x80
006FECD2  46                        INC ESI
006FECD3  84 C9                     TEST CL,CL
006FECD5  8B CA                     MOV ECX,EDX
006FECD7  74 09                     JZ 0x006fece2
006FECD9  83 E1 3F                  AND ECX,0x3f
006FECDC  F6 C2 40                  TEST DL,0x40
006FECDF  74 01                     JZ 0x006fece2
006FECE1  46                        INC ESI
LAB_006fece2:
006FECE2  3B C8                     CMP ECX,EAX
006FECE4  7C D4                     JL 0x006fecba
006FECE6  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fece9:
006FECE9  81 E2 C0 00 00 00         AND EDX,0xc0
006FECEF  80 FA 80                  CMP DL,0x80
006FECF2  75 05                     JNZ 0x006fecf9
006FECF4  03 F0                     ADD ESI,EAX
006FECF6  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fecf9:
006FECF9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006FECFC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FECFF  8B 5D 48                  MOV EBX,dword ptr [EBP + 0x48]
006FED02  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006FED05  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FED08  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FED0B  03 C2                     ADD EAX,EDX
006FED0D  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006FED10  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FED13  8B 45 4C                  MOV EAX,dword ptr [EBP + 0x4c]
006FED16  03 D8                     ADD EBX,EAX
006FED18  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FED1B  03 F9                     ADD EDI,ECX
006FED1D  03 F2                     ADD ESI,EDX
006FED1F  40                        INC EAX
006FED20  89 5D 48                  MOV dword ptr [EBP + 0x48],EBX
006FED23  83 F8 02                  CMP EAX,0x2
006FED26  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FED29  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FED2C  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FED2F  7E 07                     JLE 0x006fed38
006FED31  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fed38:
006FED38  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FED3B  48                        DEC EAX
006FED3C  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FED3F  0F 89 59 F8 FF FF         JNS 0x006fe59e
LAB_006fed45:
006FED45  5F                        POP EDI
006FED46  5E                        POP ESI
006FED47  5B                        POP EBX
006FED48  8B E5                     MOV ESP,EBP
006FED4A  5D                        POP EBP
006FED4B  C2 4C 00                  RET 0x4c
