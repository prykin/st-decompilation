FUN_006f66c0:
006F66C0  55                        PUSH EBP
006F66C1  8B EC                     MOV EBP,ESP
006F66C3  83 EC 0C                  SUB ESP,0xc
006F66C6  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F66C9  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F66CC  03 C8                     ADD ECX,EAX
006F66CE  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006F66D1  8B D1                     MOV EDX,ECX
006F66D3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006F66D6  C1 FA 03                  SAR EDX,0x3
006F66D9  03 C2                     ADD EAX,EDX
006F66DB  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006F66DE  4A                        DEC EDX
006F66DF  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006F66E2  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F66EC  0F 88 E1 03 00 00         JS 0x006f6ad3
006F66F2  53                        PUSH EBX
006F66F3  56                        PUSH ESI
006F66F4  42                        INC EDX
006F66F5  57                        PUSH EDI
006F66F6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F66F9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006f66fc:
006F66FC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F66FF  33 DB                     XOR EBX,EBX
006F6701  8A 1A                     MOV BL,byte ptr [EDX]
006F6703  42                        INC EDX
006F6704  85 DB                     TEST EBX,EBX
006F6706  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F6709  0F 84 8E 03 00 00         JZ 0x006f6a9d
006F670F  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F6712  83 E1 07                  AND ECX,0x7
006F6715  BA 80 00 00 00            MOV EDX,0x80
006F671A  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
006F671D  D3 FA                     SAR EDX,CL
LAB_006f671f:
006F671F  F6 C3 80                  TEST BL,0x80
006F6722  8B C3                     MOV EAX,EBX
006F6724  74 34                     JZ 0x006f675a
006F6726  83 E0 3F                  AND EAX,0x3f
006F6729  3B C6                     CMP EAX,ESI
006F672B  7F 43                     JG 0x006f6770
006F672D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F6730  F6 C3 40                  TEST BL,0x40
006F6733  74 12                     JZ 0x006f6747
006F6735  41                        INC ECX
006F6736  2B F0                     SUB ESI,EAX
006F6738  8B C1                     MOV EAX,ECX
006F673A  33 DB                     XOR EBX,EBX
006F673C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F673F  8A 18                     MOV BL,byte ptr [EAX]
006F6741  40                        INC EAX
006F6742  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6745  EB D8                     JMP 0x006f671f
LAB_006f6747:
006F6747  03 C8                     ADD ECX,EAX
006F6749  2B F0                     SUB ESI,EAX
006F674B  8B C1                     MOV EAX,ECX
006F674D  33 DB                     XOR EBX,EBX
006F674F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6752  8A 18                     MOV BL,byte ptr [EAX]
006F6754  40                        INC EAX
006F6755  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6758  EB C5                     JMP 0x006f671f
LAB_006f675a:
006F675A  83 E0 7F                  AND EAX,0x7f
006F675D  3B C6                     CMP EAX,ESI
006F675F  7F 0F                     JG 0x006f6770
006F6761  2B F0                     SUB ESI,EAX
006F6763  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6766  33 DB                     XOR EBX,EBX
006F6768  8A 18                     MOV BL,byte ptr [EAX]
006F676A  40                        INC EAX
006F676B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F676E  EB AF                     JMP 0x006f671f
LAB_006f6770:
006F6770  8B CB                     MOV ECX,EBX
006F6772  2B C6                     SUB EAX,ESI
006F6774  81 E1 C0 00 00 00         AND ECX,0xc0
006F677A  80 F9 80                  CMP CL,0x80
006F677D  75 03                     JNZ 0x006f6782
006F677F  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006f6782:
006F6782  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F6785  3B C6                     CMP EAX,ESI
006F6787  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F678A  0F 8F 7D 01 00 00         JG 0x006f690d
006F6790  8B CB                     MOV ECX,EBX
006F6792  81 E1 80 00 00 00         AND ECX,0x80
LAB_006f6798:
006F6798  2B F0                     SUB ESI,EAX
006F679A  85 C9                     TEST ECX,ECX
006F679C  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F679F  0F 84 FC 00 00 00         JZ 0x006f68a1
006F67A5  F6 C3 40                  TEST BL,0x40
006F67A8  0F 84 92 00 00 00         JZ 0x006f6840
006F67AE  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F67B1  33 C9                     XOR ECX,ECX
006F67B3  8A 0E                     MOV CL,byte ptr [ESI]
006F67B5  46                        INC ESI
006F67B6  48                        DEC EAX
006F67B7  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F67BA  78 54                     JS 0x006f6810
006F67BC  40                        INC EAX
006F67BD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006f67c0:
006F67C0  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F67C3  84 10                     TEST byte ptr [EAX],DL
006F67C5  75 22                     JNZ 0x006f67e9
006F67C7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F67CA  33 C0                     XOR EAX,EAX
006F67CC  66 8B 06                  MOV AX,word ptr [ESI]
006F67CF  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F67D2  3B F0                     CMP ESI,EAX
006F67D4  77 04                     JA 0x006f67da
006F67D6  88 0F                     MOV byte ptr [EDI],CL
006F67D8  EB 0F                     JMP 0x006f67e9
LAB_006f67da:
006F67DA  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F67DD  33 C0                     XOR EAX,EAX
006F67DF  8A 06                     MOV AL,byte ptr [ESI]
006F67E1  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006F67E4  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006F67E7  88 07                     MOV byte ptr [EDI],AL
LAB_006f67e9:
006F67E9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F67EC  83 C6 02                  ADD ESI,0x2
006F67EF  47                        INC EDI
006F67F0  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F67F3  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F67F6  46                        INC ESI
006F67F7  D0 EA                     SHR DL,0x1
006F67F9  89 75 3C                  MOV dword ptr [EBP + 0x3c],ESI
006F67FC  75 09                     JNZ 0x006f6807
006F67FE  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6801  B2 80                     MOV DL,0x80
006F6803  40                        INC EAX
006F6804  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f6807:
006F6807  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F680A  48                        DEC EAX
006F680B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006F680E  75 B0                     JNZ 0x006f67c0
LAB_006f6810:
006F6810  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
LAB_006f6813:
006F6813  85 F6                     TEST ESI,ESI
006F6815  0F 8E ED 00 00 00         JLE 0x006f6908
006F681B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F681E  33 DB                     XOR EBX,EBX
006F6820  8A 18                     MOV BL,byte ptr [EAX]
006F6822  8B CB                     MOV ECX,EBX
006F6824  81 E1 80 00 00 00         AND ECX,0x80
006F682A  40                        INC EAX
006F682B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F682E  8B C3                     MOV EAX,EBX
006F6830  85 C9                     TEST ECX,ECX
006F6832  0F 84 C0 00 00 00         JZ 0x006f68f8
006F6838  83 E0 3F                  AND EAX,0x3f
006F683B  E9 BB 00 00 00            JMP 0x006f68fb
LAB_006f6840:
006F6840  48                        DEC EAX
006F6841  78 D0                     JS 0x006f6813
006F6843  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f6846:
006F6846  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6849  84 11                     TEST byte ptr [ECX],DL
006F684B  75 27                     JNZ 0x006f6874
006F684D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6850  33 C0                     XOR EAX,EAX
006F6852  66 8B 01                  MOV AX,word ptr [ECX]
006F6855  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F6858  3B C8                     CMP ECX,EAX
006F685A  77 09                     JA 0x006f6865
006F685C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F685F  8A 08                     MOV CL,byte ptr [EAX]
006F6861  88 0F                     MOV byte ptr [EDI],CL
006F6863  EB 0F                     JMP 0x006f6874
LAB_006f6865:
006F6865  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006F6868  33 C0                     XOR EAX,EAX
006F686A  8A 01                     MOV AL,byte ptr [ECX]
006F686C  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F686F  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
006F6872  88 07                     MOV byte ptr [EDI],AL
LAB_006f6874:
006F6874  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6877  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F687A  83 C0 02                  ADD EAX,0x2
006F687D  47                        INC EDI
006F687E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F6881  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006F6884  40                        INC EAX
006F6885  41                        INC ECX
006F6886  D0 EA                     SHR DL,0x1
006F6888  89 45 3C                  MOV dword ptr [EBP + 0x3c],EAX
006F688B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F688E  75 09                     JNZ 0x006f6899
006F6890  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6893  B2 80                     MOV DL,0x80
006F6895  40                        INC EAX
006F6896  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f6899:
006F6899  4E                        DEC ESI
006F689A  75 AA                     JNZ 0x006f6846
006F689C  E9 6F FF FF FF            JMP 0x006f6810
LAB_006f68a1:
006F68A1  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006F68A4  03 F8                     ADD EDI,EAX
006F68A6  03 C8                     ADD ECX,EAX
006F68A8  89 4D 3C                  MOV dword ptr [EBP + 0x3c],ECX
006F68AB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F68AE  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006F68B1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F68B4  33 C9                     XOR ECX,ECX
006F68B6  8A EA                     MOV CH,DL
006F68B8  8B D1                     MOV EDX,ECX
006F68BA  8B C8                     MOV ECX,EAX
006F68BC  83 E1 07                  AND ECX,0x7
006F68BF  D3 EA                     SHR EDX,CL
006F68C1  8B CA                     MOV ECX,EDX
006F68C3  81 F9 80 00 00 00         CMP ECX,0x80
006F68C9  77 19                     JA 0x006f68e4
006F68CB  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F68CE  42                        INC EDX
006F68CF  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
006F68D2  8A D1                     MOV DL,CL
006F68D4  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F68D7  C1 F8 03                  SAR EAX,0x3
006F68DA  03 C8                     ADD ECX,EAX
006F68DC  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F68DF  E9 2F FF FF FF            JMP 0x006f6813
LAB_006f68e4:
006F68E4  33 D2                     XOR EDX,EDX
006F68E6  8A D5                     MOV DL,CH
006F68E8  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F68EB  C1 F8 03                  SAR EAX,0x3
006F68EE  03 C8                     ADD ECX,EAX
006F68F0  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F68F3  E9 1B FF FF FF            JMP 0x006f6813
LAB_006f68f8:
006F68F8  83 E0 7F                  AND EAX,0x7f
LAB_006f68fb:
006F68FB  3B C6                     CMP EAX,ESI
006F68FD  0F 8E 95 FE FF FF         JLE 0x006f6798
006F6903  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6906  EB 05                     JMP 0x006f690d
LAB_006f6908:
006F6908  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F690B  33 C0                     XOR EAX,EAX
LAB_006f690d:
006F690D  2B C6                     SUB EAX,ESI
006F690F  F6 C3 80                  TEST BL,0x80
006F6912  0F 84 EF 00 00 00         JZ 0x006f6a07
006F6918  F6 C3 40                  TEST BL,0x40
006F691B  0F 84 83 00 00 00         JZ 0x006f69a4
006F6921  85 F6                     TEST ESI,ESI
006F6923  0F 8E F1 00 00 00         JLE 0x006f6a1a
006F6929  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F692C  33 C9                     XOR ECX,ECX
006F692E  8A 0E                     MOV CL,byte ptr [ESI]
006F6930  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006F6933  8B CE                     MOV ECX,ESI
006F6935  41                        INC ECX
006F6936  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6939  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006F693C  49                        DEC ECX
006F693D  0F 88 D7 00 00 00         JS 0x006f6a1a
006F6943  41                        INC ECX
006F6944  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
LAB_006f6947:
006F6947  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F694A  84 11                     TEST byte ptr [ECX],DL
006F694C  75 2A                     JNZ 0x006f6978
006F694E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6951  33 C9                     XOR ECX,ECX
006F6953  66 8B 0E                  MOV CX,word ptr [ESI]
006F6956  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F6959  3B F1                     CMP ESI,ECX
006F695B  77 0C                     JA 0x006f6969
006F695D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F6960  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F6963  8B FE                     MOV EDI,ESI
006F6965  88 0E                     MOV byte ptr [ESI],CL
006F6967  EB 0F                     JMP 0x006f6978
LAB_006f6969:
006F6969  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F696C  33 C9                     XOR ECX,ECX
006F696E  8A 0E                     MOV CL,byte ptr [ESI]
006F6970  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006F6973  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006F6976  88 0F                     MOV byte ptr [EDI],CL
LAB_006f6978:
006F6978  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F697B  83 C6 02                  ADD ESI,0x2
006F697E  47                        INC EDI
006F697F  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F6982  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F6985  46                        INC ESI
006F6986  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6989  D0 EA                     SHR DL,0x1
006F698B  89 75 3C                  MOV dword ptr [EBP + 0x3c],ESI
006F698E  75 09                     JNZ 0x006f6999
006F6990  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6993  B2 80                     MOV DL,0x80
006F6995  41                        INC ECX
006F6996  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006f6999:
006F6999  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006F699C  49                        DEC ECX
006F699D  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006F69A0  75 A5                     JNZ 0x006f6947
006F69A2  EB 76                     JMP 0x006f6a1a
LAB_006f69a4:
006F69A4  4E                        DEC ESI
006F69A5  78 73                     JS 0x006f6a1a
006F69A7  46                        INC ESI
006F69A8  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_006f69ab:
006F69AB  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F69AE  84 11                     TEST byte ptr [ECX],DL
006F69B0  75 25                     JNZ 0x006f69d7
006F69B2  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F69B5  33 C9                     XOR ECX,ECX
006F69B7  66 8B 0E                  MOV CX,word ptr [ESI]
006F69BA  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F69BD  3B F1                     CMP ESI,ECX
006F69BF  77 07                     JA 0x006f69c8
006F69C1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F69C4  8A 09                     MOV CL,byte ptr [ECX]
006F69C6  EB 0D                     JMP 0x006f69d5
LAB_006f69c8:
006F69C8  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F69CB  33 C9                     XOR ECX,ECX
006F69CD  8A 0E                     MOV CL,byte ptr [ESI]
006F69CF  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006F69D2  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
LAB_006f69d5:
006F69D5  88 0F                     MOV byte ptr [EDI],CL
LAB_006f69d7:
006F69D7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F69DA  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F69DD  83 C1 02                  ADD ECX,0x2
006F69E0  47                        INC EDI
006F69E1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F69E4  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006F69E7  41                        INC ECX
006F69E8  46                        INC ESI
006F69E9  D0 EA                     SHR DL,0x1
006F69EB  89 4D 3C                  MOV dword ptr [EBP + 0x3c],ECX
006F69EE  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F69F1  75 09                     JNZ 0x006f69fc
006F69F3  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F69F6  B2 80                     MOV DL,0x80
006F69F8  41                        INC ECX
006F69F9  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006f69fc:
006F69FC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F69FF  49                        DEC ECX
006F6A00  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006F6A03  75 A6                     JNZ 0x006f69ab
006F6A05  EB 13                     JMP 0x006f6a1a
LAB_006f6a07:
006F6A07  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006F6A0A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F6A0D  03 FE                     ADD EDI,ESI
006F6A0F  03 CE                     ADD ECX,ESI
006F6A11  89 4D 3C                  MOV dword ptr [EBP + 0x3c],ECX
006F6A14  8D 0C 72                  LEA ECX,[EDX + ESI*0x2]
006F6A17  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f6a1a:
006F6A1A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006F6A1D  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F6A20  2B CE                     SUB ECX,ESI
006F6A22  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F6A25  2B CE                     SUB ECX,ESI
006F6A27  3B C1                     CMP EAX,ECX
006F6A29  7D 35                     JGE 0x006f6a60
LAB_006f6a2b:
006F6A2B  81 E3 C0 00 00 00         AND EBX,0xc0
006F6A31  2B C8                     SUB ECX,EAX
006F6A33  80 FB 80                  CMP BL,0x80
006F6A36  75 03                     JNZ 0x006f6a3b
006F6A38  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_006f6a3b:
006F6A3B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6A3E  33 DB                     XOR EBX,EBX
006F6A40  8A 18                     MOV BL,byte ptr [EAX]
006F6A42  8B D3                     MOV EDX,EBX
006F6A44  80 E2 80                  AND DL,0x80
006F6A47  40                        INC EAX
006F6A48  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6A4B  8B C3                     MOV EAX,EBX
006F6A4D  84 D2                     TEST DL,DL
006F6A4F  74 0B                     JZ 0x006f6a5c
006F6A51  83 E0 3F                  AND EAX,0x3f
006F6A54  F6 C3 40                  TEST BL,0x40
006F6A57  74 03                     JZ 0x006f6a5c
006F6A59  FF 45 1C                  INC dword ptr [EBP + 0x1c]
LAB_006f6a5c:
006F6A5C  3B C1                     CMP EAX,ECX
006F6A5E  7C CB                     JL 0x006f6a2b
LAB_006f6a60:
006F6A60  81 E3 C0 00 00 00         AND EBX,0xc0
006F6A66  80 FB 80                  CMP BL,0x80
006F6A69  75 03                     JNZ 0x006f6a6e
006F6A6B  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006f6a6e:
006F6A6E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F6A71  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006F6A74  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006F6A77  2B C6                     SUB EAX,ESI
006F6A79  03 F8                     ADD EDI,EAX
006F6A7B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F6A7E  2B CE                     SUB ECX,ESI
006F6A80  8D 14 36                  LEA EDX,[ESI + ESI*0x1]
006F6A83  03 D9                     ADD EBX,ECX
006F6A85  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6A88  2B C2                     SUB EAX,EDX
006F6A8A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6A8D  03 C8                     ADD ECX,EAX
006F6A8F  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006F6A92  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F6A95  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006F6A98  89 5D 3C                  MOV dword ptr [EBP + 0x3c],EBX
006F6A9B  EB 1E                     JMP 0x006f6abb
LAB_006f6a9d:
006F6A9D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F6AA0  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006F6AA3  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6AA6  03 FA                     ADD EDI,EDX
006F6AA8  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006F6AAB  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6AAE  03 DA                     ADD EBX,EDX
006F6AB0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F6AB3  03 F2                     ADD ESI,EDX
006F6AB5  89 5D 3C                  MOV dword ptr [EBP + 0x3c],EBX
006F6AB8  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_006f6abb:
006F6ABB  8B 75 34                  MOV ESI,dword ptr [EBP + 0x34]
006F6ABE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F6AC1  03 C6                     ADD EAX,ESI
006F6AC3  4A                        DEC EDX
006F6AC4  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006F6AC7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F6ACA  0F 85 2C FC FF FF         JNZ 0x006f66fc
006F6AD0  5F                        POP EDI
006F6AD1  5E                        POP ESI
006F6AD2  5B                        POP EBX
LAB_006f6ad3:
006F6AD3  8B E5                     MOV ESP,EBP
006F6AD5  5D                        POP EBP
006F6AD6  C2 40 00                  RET 0x40
