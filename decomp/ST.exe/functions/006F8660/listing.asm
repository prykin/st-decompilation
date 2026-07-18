FUN_006f8660:
006F8660  55                        PUSH EBP
006F8661  8B EC                     MOV EBP,ESP
006F8663  83 EC 08                  SUB ESP,0x8
006F8666  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006F8669  48                        DEC EAX
006F866A  0F 88 27 02 00 00         JS 0x006f8897
006F8670  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F8673  53                        PUSH EBX
006F8674  40                        INC EAX
006F8675  56                        PUSH ESI
006F8676  57                        PUSH EDI
006F8677  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F867A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F867D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006f8680:
006F8680  33 D2                     XOR EDX,EDX
006F8682  8A 11                     MOV DL,byte ptr [ECX]
006F8684  41                        INC ECX
006F8685  85 D2                     TEST EDX,EDX
006F8687  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F868A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F868D  0F 84 EF 01 00 00         JZ 0x006f8882
006F8693  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
LAB_006f8696:
006F8696  F6 C2 80                  TEST DL,0x80
006F8699  8B F2                     MOV ESI,EDX
006F869B  74 21                     JZ 0x006f86be
006F869D  83 E6 3F                  AND ESI,0x3f
006F86A0  3B F0                     CMP ESI,EAX
006F86A2  7F 2A                     JG 0x006f86ce
006F86A4  F6 C2 40                  TEST DL,0x40
006F86A7  74 0A                     JZ 0x006f86b3
006F86A9  41                        INC ECX
006F86AA  33 D2                     XOR EDX,EDX
006F86AC  2B C6                     SUB EAX,ESI
006F86AE  8A 11                     MOV DL,byte ptr [ECX]
006F86B0  41                        INC ECX
006F86B1  EB E3                     JMP 0x006f8696
LAB_006f86b3:
006F86B3  03 CE                     ADD ECX,ESI
006F86B5  33 D2                     XOR EDX,EDX
006F86B7  2B C6                     SUB EAX,ESI
006F86B9  8A 11                     MOV DL,byte ptr [ECX]
006F86BB  41                        INC ECX
006F86BC  EB D8                     JMP 0x006f8696
LAB_006f86be:
006F86BE  83 E6 7F                  AND ESI,0x7f
006F86C1  3B F0                     CMP ESI,EAX
006F86C3  7F 09                     JG 0x006f86ce
006F86C5  33 D2                     XOR EDX,EDX
006F86C7  2B C6                     SUB EAX,ESI
006F86C9  8A 11                     MOV DL,byte ptr [ECX]
006F86CB  41                        INC ECX
006F86CC  EB C8                     JMP 0x006f8696
LAB_006f86ce:
006F86CE  8B DA                     MOV EBX,EDX
006F86D0  2B F0                     SUB ESI,EAX
006F86D2  81 E3 C0 00 00 00         AND EBX,0xc0
006F86D8  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F86DB  80 FB 80                  CMP BL,0x80
006F86DE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F86E1  75 05                     JNZ 0x006f86e8
006F86E3  03 C8                     ADD ECX,EAX
006F86E5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f86e8:
006F86E8  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F86EB  3B F3                     CMP ESI,EBX
006F86ED  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
006F86F0  0F 8F B7 00 00 00         JG 0x006f87ad
006F86F6  8B C2                     MOV EAX,EDX
006F86F8  25 80 00 00 00            AND EAX,0x80
LAB_006f86fd:
006F86FD  2B DE                     SUB EBX,ESI
006F86FF  85 C0                     TEST EAX,EAX
006F8701  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
006F8704  0F 84 87 00 00 00         JZ 0x006f8791
006F870A  F6 C2 40                  TEST DL,0x40
006F870D  74 64                     JZ 0x006f8773
006F870F  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F8712  33 C0                     XOR EAX,EAX
006F8714  8A 01                     MOV AL,byte ptr [ECX]
006F8716  8B C8                     MOV ECX,EAX
006F8718  33 C0                     XOR EAX,EAX
006F871A  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006F871D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F8720  41                        INC ECX
006F8721  4E                        DEC ESI
006F8722  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F8725  78 2B                     JS 0x006f8752
006F8727  8A D8                     MOV BL,AL
006F8729  46                        INC ESI
006F872A  8A FB                     MOV BH,BL
006F872C  8B CE                     MOV ECX,ESI
006F872E  8B C3                     MOV EAX,EBX
006F8730  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006F8733  C1 E0 10                  SHL EAX,0x10
006F8736  66 8B C3                  MOV AX,BX
006F8739  C1 E9 02                  SHR ECX,0x2
006F873C  F3 AB                     STOSD.REP ES:EDI
006F873E  8B CE                     MOV ECX,ESI
006F8740  83 E1 03                  AND ECX,0x3
006F8743  F3 AA                     STOSB.REP ES:EDI
006F8745  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F8748  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F874B  8B C6                     MOV EAX,ESI
006F874D  03 F8                     ADD EDI,EAX
006F874F  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006f8752:
006F8752  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
LAB_006f8755:
006F8755  85 DB                     TEST EBX,EBX
006F8757  7E 4F                     JLE 0x006f87a8
006F8759  33 D2                     XOR EDX,EDX
006F875B  8A 11                     MOV DL,byte ptr [ECX]
006F875D  8B C2                     MOV EAX,EDX
006F875F  8B F2                     MOV ESI,EDX
006F8761  25 80 00 00 00            AND EAX,0x80
006F8766  41                        INC ECX
006F8767  85 C0                     TEST EAX,EAX
006F8769  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F876C  74 2A                     JZ 0x006f8798
006F876E  83 E6 3F                  AND ESI,0x3f
006F8771  EB 28                     JMP 0x006f879b
LAB_006f8773:
006F8773  4E                        DEC ESI
006F8774  78 DF                     JS 0x006f8755
006F8776  46                        INC ESI
LAB_006f8777:
006F8777  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F877A  33 C0                     XOR EAX,EAX
006F877C  8A 01                     MOV AL,byte ptr [ECX]
006F877E  47                        INC EDI
006F877F  41                        INC ECX
006F8780  4E                        DEC ESI
006F8781  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006F8784  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F8787  75 EE                     JNZ 0x006f8777
006F8789  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F878C  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F878F  EB C1                     JMP 0x006f8752
LAB_006f8791:
006F8791  03 FE                     ADD EDI,ESI
006F8793  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F8796  EB BD                     JMP 0x006f8755
LAB_006f8798:
006F8798  83 E6 7F                  AND ESI,0x7f
LAB_006f879b:
006F879B  3B F3                     CMP ESI,EBX
006F879D  0F 8E 5A FF FF FF         JLE 0x006f86fd
006F87A3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F87A6  EB 05                     JMP 0x006f87ad
LAB_006f87a8:
006F87A8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F87AB  33 F6                     XOR ESI,ESI
LAB_006f87ad:
006F87AD  2B F3                     SUB ESI,EBX
006F87AF  F6 C2 80                  TEST DL,0x80
006F87B2  74 74                     JZ 0x006f8828
006F87B4  F6 C2 40                  TEST DL,0x40
006F87B7  74 4E                     JZ 0x006f8807
006F87B9  85 DB                     TEST EBX,EBX
006F87BB  7E 6D                     JLE 0x006f882a
006F87BD  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F87C0  33 C0                     XOR EAX,EAX
006F87C2  8A 01                     MOV AL,byte ptr [ECX]
006F87C4  8B C8                     MOV ECX,EAX
006F87C6  33 C0                     XOR EAX,EAX
006F87C8  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006F87CB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F87CE  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006F87D1  41                        INC ECX
006F87D2  4B                        DEC EBX
006F87D3  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F87D6  78 52                     JS 0x006f882a
006F87D8  8D 4B 01                  LEA ECX,[EBX + 0x1]
006F87DB  8A D8                     MOV BL,AL
006F87DD  8A FB                     MOV BH,BL
006F87DF  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006F87E2  8B C3                     MOV EAX,EBX
006F87E4  8B D1                     MOV EDX,ECX
006F87E6  C1 E0 10                  SHL EAX,0x10
006F87E9  66 8B C3                  MOV AX,BX
006F87EC  C1 E9 02                  SHR ECX,0x2
006F87EF  F3 AB                     STOSD.REP ES:EDI
006F87F1  8B CA                     MOV ECX,EDX
006F87F3  83 E1 03                  AND ECX,0x3
006F87F6  F3 AA                     STOSB.REP ES:EDI
006F87F8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F87FB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F87FE  8B C2                     MOV EAX,EDX
006F8800  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F8803  03 F8                     ADD EDI,EAX
006F8805  EB 23                     JMP 0x006f882a
LAB_006f8807:
006F8807  4B                        DEC EBX
006F8808  78 20                     JS 0x006f882a
006F880A  43                        INC EBX
006F880B  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
LAB_006f880e:
006F880E  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F8811  33 C0                     XOR EAX,EAX
006F8813  8A 01                     MOV AL,byte ptr [ECX]
006F8815  47                        INC EDI
006F8816  41                        INC ECX
006F8817  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006F881A  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F881D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F8820  48                        DEC EAX
006F8821  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F8824  75 E8                     JNZ 0x006f880e
006F8826  EB 02                     JMP 0x006f882a
LAB_006f8828:
006F8828  03 FB                     ADD EDI,EBX
LAB_006f882a:
006F882A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F882D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F8830  2B C3                     SUB EAX,EBX
006F8832  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F8835  2B C3                     SUB EAX,EBX
006F8837  3B F0                     CMP ESI,EAX
006F8839  7D 2C                     JGE 0x006f8867
LAB_006f883b:
006F883B  81 E2 C0 00 00 00         AND EDX,0xc0
006F8841  2B C6                     SUB EAX,ESI
006F8843  80 FA 80                  CMP DL,0x80
006F8846  75 02                     JNZ 0x006f884a
006F8848  03 CE                     ADD ECX,ESI
LAB_006f884a:
006F884A  33 D2                     XOR EDX,EDX
006F884C  8A 11                     MOV DL,byte ptr [ECX]
006F884E  8B DA                     MOV EBX,EDX
006F8850  8B F2                     MOV ESI,EDX
006F8852  80 E3 80                  AND BL,0x80
006F8855  41                        INC ECX
006F8856  84 DB                     TEST BL,BL
006F8858  74 09                     JZ 0x006f8863
006F885A  83 E6 3F                  AND ESI,0x3f
006F885D  F6 C2 40                  TEST DL,0x40
006F8860  74 01                     JZ 0x006f8863
006F8862  41                        INC ECX
LAB_006f8863:
006F8863  3B F0                     CMP ESI,EAX
006F8865  7C D4                     JL 0x006f883b
LAB_006f8867:
006F8867  81 E2 C0 00 00 00         AND EDX,0xc0
006F886D  80 FA 80                  CMP DL,0x80
006F8870  75 02                     JNZ 0x006f8874
006F8872  03 C8                     ADD ECX,EAX
LAB_006f8874:
006F8874  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F8877  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F887A  8B D0                     MOV EDX,EAX
006F887C  2B D3                     SUB EDX,EBX
006F887E  03 FA                     ADD EDI,EDX
006F8880  EB 02                     JMP 0x006f8884
LAB_006f8882:
006F8882  03 F8                     ADD EDI,EAX
LAB_006f8884:
006F8884  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F8887  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F888A  4A                        DEC EDX
006F888B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F888E  0F 85 EC FD FF FF         JNZ 0x006f8680
006F8894  5F                        POP EDI
006F8895  5E                        POP ESI
006F8896  5B                        POP EBX
LAB_006f8897:
006F8897  8B E5                     MOV ESP,EBP
006F8899  5D                        POP EBP
006F889A  C2 20 00                  RET 0x20
