FUN_006d86e0:
006D86E0  55                        PUSH EBP
006D86E1  8B EC                     MOV EBP,ESP
006D86E3  83 EC 0C                  SUB ESP,0xc
006D86E6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D86E9  57                        PUSH EDI
006D86EA  85 C0                     TEST EAX,EAX
006D86EC  0F 8E 59 03 00 00         JLE 0x006d8a4b
006D86F2  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006D86F5  85 FF                     TEST EDI,EDI
006D86F7  0F 8E 4E 03 00 00         JLE 0x006d8a4b
006D86FD  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D8700  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D8703  53                        PUSH EBX
006D8704  56                        PUSH ESI
006D8705  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
006D8709  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D870C  85 C0                     TEST EAX,EAX
006D870E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D8711  7E 0C                     JLE 0x006d871f
006D8713  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D8716  50                        PUSH EAX
006D8717  56                        PUSH ESI
006D8718  E8 F3 76 FF FF            CALL 0x006cfe10
006D871D  EB 0F                     JMP 0x006d872e
LAB_006d871f:
006D871F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D8722  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
006D8725  D1 E8                     SHR EAX,0x1
006D8727  83 E0 0E                  AND EAX,0xe
006D872A  8D 44 30 16               LEA EAX,[EAX + ESI*0x1 + 0x16]
LAB_006d872e:
006D872E  0F BF 4E 12               MOVSX ECX,word ptr [ESI + 0x12]
006D8732  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D8735  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006d8738:
006D8738  33 D2                     XOR EDX,EDX
006D873A  8A 10                     MOV DL,byte ptr [EAX]
006D873C  40                        INC EAX
006D873D  85 D2                     TEST EDX,EDX
006D873F  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D8742  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006D8745  0F 84 E6 02 00 00         JZ 0x006d8a31
006D874B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_006d874e:
006D874E  F6 C2 80                  TEST DL,0x80
006D8751  8B CA                     MOV ECX,EDX
006D8753  74 21                     JZ 0x006d8776
006D8755  83 E1 3F                  AND ECX,0x3f
006D8758  3B CE                     CMP ECX,ESI
006D875A  7F 2A                     JG 0x006d8786
006D875C  F6 C2 40                  TEST DL,0x40
006D875F  74 0A                     JZ 0x006d876b
006D8761  40                        INC EAX
006D8762  33 D2                     XOR EDX,EDX
006D8764  2B F1                     SUB ESI,ECX
006D8766  8A 10                     MOV DL,byte ptr [EAX]
006D8768  40                        INC EAX
006D8769  EB E3                     JMP 0x006d874e
LAB_006d876b:
006D876B  03 C1                     ADD EAX,ECX
006D876D  33 D2                     XOR EDX,EDX
006D876F  2B F1                     SUB ESI,ECX
006D8771  8A 10                     MOV DL,byte ptr [EAX]
006D8773  40                        INC EAX
006D8774  EB D8                     JMP 0x006d874e
LAB_006d8776:
006D8776  83 E1 7F                  AND ECX,0x7f
006D8779  3B CE                     CMP ECX,ESI
006D877B  7F 09                     JG 0x006d8786
006D877D  33 D2                     XOR EDX,EDX
006D877F  2B F1                     SUB ESI,ECX
006D8781  8A 10                     MOV DL,byte ptr [EAX]
006D8783  40                        INC EAX
006D8784  EB C8                     JMP 0x006d874e
LAB_006d8786:
006D8786  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D8789  81 E2 C0 00 00 00         AND EDX,0xc0
006D878F  2B CE                     SUB ECX,ESI
006D8791  80 FA 80                  CMP DL,0x80
006D8794  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006D8797  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006D879A  75 05                     JNZ 0x006d87a1
006D879C  03 C6                     ADD EAX,ESI
006D879E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006d87a1:
006D87A1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D87A4  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006D87A7  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D87AA  80 E1 C0                  AND CL,0xc0
006D87AD  F6 C1 80                  TEST CL,0x80
006D87B0  75 02                     JNZ 0x006d87b4
006D87B2  32 C9                     XOR CL,CL
LAB_006d87b4:
006D87B4  02 4D 28                  ADD CL,byte ptr [EBP + 0x28]
006D87B7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D87BA  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D87BD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_006d87c0:
006D87C0  F6 C1 80                  TEST CL,0x80
006D87C3  0F 84 F5 00 00 00         JZ 0x006d88be
006D87C9  F6 C1 40                  TEST CL,0x40
006D87CC  74 6D                     JZ 0x006d883b
006D87CE  8A 06                     MOV AL,byte ptr [ESI]
006D87D0  80 E1 3F                  AND CL,0x3f
006D87D3  8A E0                     MOV AH,AL
006D87D5  3B CA                     CMP ECX,EDX
006D87D7  0F 8F FA 00 00 00         JG 0x006d88d7
006D87DD  2B D1                     SUB EDX,ECX
006D87DF  46                        INC ESI
006D87E0  83 F9 03                  CMP ECX,0x3
006D87E3  7E 3D                     JLE 0x006d8822
006D87E5  F7 C7 01 00 00 00         TEST EDI,0x1
006D87EB  74 04                     JZ 0x006d87f1
006D87ED  88 07                     MOV byte ptr [EDI],AL
006D87EF  47                        INC EDI
006D87F0  49                        DEC ECX
LAB_006d87f1:
006D87F1  F7 C7 02 00 00 00         TEST EDI,0x2
006D87F7  74 09                     JZ 0x006d8802
006D87F9  66 89 07                  MOV word ptr [EDI],AX
006D87FC  83 C7 02                  ADD EDI,0x2
006D87FF  83 E9 02                  SUB ECX,0x2
LAB_006d8802:
006D8802  8B D8                     MOV EBX,EAX
006D8804  C1 E0 10                  SHL EAX,0x10
006D8807  83 E9 04                  SUB ECX,0x4
006D880A  66 8B C3                  MOV AX,BX
006D880D  7C 0A                     JL 0x006d8819
LAB_006d880f:
006D880F  89 07                     MOV dword ptr [EDI],EAX
006D8811  83 C7 04                  ADD EDI,0x4
006D8814  83 E9 04                  SUB ECX,0x4
006D8817  7D F6                     JGE 0x006d880f
LAB_006d8819:
006D8819  83 C1 04                  ADD ECX,0x4
006D881C  0F 84 A4 00 00 00         JZ 0x006d88c6
LAB_006d8822:
006D8822  80 F9 01                  CMP CL,0x1
006D8825  74 0B                     JZ 0x006d8832
006D8827  80 F9 02                  CMP CL,0x2
006D882A  74 03                     JZ 0x006d882f
006D882C  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d882f:
006D882F  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d8832:
006D8832  88 07                     MOV byte ptr [EDI],AL
006D8834  03 F9                     ADD EDI,ECX
006D8836  E9 8B 00 00 00            JMP 0x006d88c6
LAB_006d883b:
006D883B  83 E1 3F                  AND ECX,0x3f
006D883E  3B CA                     CMP ECX,EDX
006D8840  0F 8F 91 00 00 00         JG 0x006d88d7
006D8846  2B D1                     SUB EDX,ECX
006D8848  8A 06                     MOV AL,byte ptr [ESI]
006D884A  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D884D  72 0B                     JC 0x006d885a
006D884F  3A 45 FC                  CMP AL,byte ptr [EBP + -0x4]
006D8852  77 06                     JA 0x006d885a
006D8854  03 F1                     ADD ESI,ECX
006D8856  03 F9                     ADD EDI,ECX
006D8858  EB 6C                     JMP 0x006d88c6
LAB_006d885a:
006D885A  83 F9 03                  CMP ECX,0x3
006D885D  7E 3F                     JLE 0x006d889e
006D885F  F7 C7 01 00 00 00         TEST EDI,0x1
006D8865  74 07                     JZ 0x006d886e
006D8867  8A 06                     MOV AL,byte ptr [ESI]
006D8869  49                        DEC ECX
006D886A  88 07                     MOV byte ptr [EDI],AL
006D886C  46                        INC ESI
006D886D  47                        INC EDI
LAB_006d886e:
006D886E  F7 C7 02 00 00 00         TEST EDI,0x2
006D8874  74 0F                     JZ 0x006d8885
006D8876  66 8B 06                  MOV AX,word ptr [ESI]
006D8879  83 E9 02                  SUB ECX,0x2
006D887C  66 89 07                  MOV word ptr [EDI],AX
006D887F  83 C6 02                  ADD ESI,0x2
006D8882  83 C7 02                  ADD EDI,0x2
LAB_006d8885:
006D8885  83 E9 04                  SUB ECX,0x4
006D8888  7C 0F                     JL 0x006d8899
LAB_006d888a:
006D888A  8B 06                     MOV EAX,dword ptr [ESI]
006D888C  83 C6 04                  ADD ESI,0x4
006D888F  89 07                     MOV dword ptr [EDI],EAX
006D8891  83 C7 04                  ADD EDI,0x4
006D8894  83 E9 04                  SUB ECX,0x4
006D8897  7D F1                     JGE 0x006d888a
LAB_006d8899:
006D8899  83 C1 04                  ADD ECX,0x4
006D889C  74 28                     JZ 0x006d88c6
LAB_006d889e:
006D889E  80 F9 01                  CMP CL,0x1
006D88A1  74 11                     JZ 0x006d88b4
006D88A3  80 F9 02                  CMP CL,0x2
006D88A6  74 06                     JZ 0x006d88ae
006D88A8  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006D88AB  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d88ae:
006D88AE  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006D88B1  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d88b4:
006D88B4  8A 06                     MOV AL,byte ptr [ESI]
006D88B6  03 F1                     ADD ESI,ECX
006D88B8  88 07                     MOV byte ptr [EDI],AL
006D88BA  03 F9                     ADD EDI,ECX
006D88BC  EB 08                     JMP 0x006d88c6
LAB_006d88be:
006D88BE  3B CA                     CMP ECX,EDX
006D88C0  7F 15                     JG 0x006d88d7
006D88C2  2B D1                     SUB EDX,ECX
006D88C4  03 F9                     ADD EDI,ECX
LAB_006d88c6:
006D88C6  33 C9                     XOR ECX,ECX
006D88C8  0B D2                     OR EDX,EDX
006D88CA  7E 0B                     JLE 0x006d88d7
006D88CC  8A 0E                     MOV CL,byte ptr [ESI]
006D88CE  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006D88D1  46                        INC ESI
006D88D2  E9 E9 FE FF FF            JMP 0x006d87c0
FUN_006d86e0::cf_common_join_006D88D7:
006D88D7  0B D2                     OR EDX,EDX
006D88D9  0F 8E E7 00 00 00         JLE 0x006d89c6
006D88DF  2B CA                     SUB ECX,EDX
006D88E1  F6 45 20 80               TEST byte ptr [EBP + 0x20],0x80
006D88E5  0F 84 D9 00 00 00         JZ 0x006d89c4
006D88EB  F6 45 20 40               TEST byte ptr [EBP + 0x20],0x40
006D88EF  74 5D                     JZ 0x006d894e
006D88F1  8A 06                     MOV AL,byte ptr [ESI]
006D88F3  8A E0                     MOV AH,AL
006D88F5  46                        INC ESI
006D88F6  83 FA 03                  CMP EDX,0x3
006D88F9  7E 3D                     JLE 0x006d8938
006D88FB  F7 C7 01 00 00 00         TEST EDI,0x1
006D8901  74 04                     JZ 0x006d8907
006D8903  88 07                     MOV byte ptr [EDI],AL
006D8905  47                        INC EDI
006D8906  4A                        DEC EDX
LAB_006d8907:
006D8907  F7 C7 02 00 00 00         TEST EDI,0x2
006D890D  74 09                     JZ 0x006d8918
006D890F  66 89 07                  MOV word ptr [EDI],AX
006D8912  83 C7 02                  ADD EDI,0x2
006D8915  83 EA 02                  SUB EDX,0x2
LAB_006d8918:
006D8918  8B D8                     MOV EBX,EAX
006D891A  C1 E0 10                  SHL EAX,0x10
006D891D  83 EA 04                  SUB EDX,0x4
006D8920  66 8B C3                  MOV AX,BX
006D8923  7C 0A                     JL 0x006d892f
LAB_006d8925:
006D8925  89 07                     MOV dword ptr [EDI],EAX
006D8927  83 C7 04                  ADD EDI,0x4
006D892A  83 EA 04                  SUB EDX,0x4
006D892D  7D F6                     JGE 0x006d8925
LAB_006d892f:
006D892F  83 C2 04                  ADD EDX,0x4
006D8932  0F 84 8E 00 00 00         JZ 0x006d89c6
LAB_006d8938:
006D8938  80 FA 01                  CMP DL,0x1
006D893B  74 0B                     JZ 0x006d8948
006D893D  80 FA 02                  CMP DL,0x2
006D8940  74 03                     JZ 0x006d8945
006D8942  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d8945:
006D8945  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d8948:
006D8948  88 07                     MOV byte ptr [EDI],AL
006D894A  03 FA                     ADD EDI,EDX
006D894C  EB 78                     JMP 0x006d89c6
LAB_006d894e:
006D894E  8A 06                     MOV AL,byte ptr [ESI]
006D8950  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D8953  72 0B                     JC 0x006d8960
006D8955  3A 45 FC                  CMP AL,byte ptr [EBP + -0x4]
006D8958  77 06                     JA 0x006d8960
006D895A  03 F2                     ADD ESI,EDX
006D895C  03 FA                     ADD EDI,EDX
006D895E  EB 66                     JMP 0x006d89c6
LAB_006d8960:
006D8960  83 FA 03                  CMP EDX,0x3
006D8963  7E 3F                     JLE 0x006d89a4
006D8965  F7 C7 01 00 00 00         TEST EDI,0x1
006D896B  74 07                     JZ 0x006d8974
006D896D  8A 06                     MOV AL,byte ptr [ESI]
006D896F  88 07                     MOV byte ptr [EDI],AL
006D8971  46                        INC ESI
006D8972  47                        INC EDI
006D8973  4A                        DEC EDX
LAB_006d8974:
006D8974  F7 C7 02 00 00 00         TEST EDI,0x2
006D897A  74 0F                     JZ 0x006d898b
006D897C  66 8B 06                  MOV AX,word ptr [ESI]
006D897F  66 89 07                  MOV word ptr [EDI],AX
006D8982  83 C6 02                  ADD ESI,0x2
006D8985  83 C7 02                  ADD EDI,0x2
006D8988  83 EA 02                  SUB EDX,0x2
LAB_006d898b:
006D898B  83 EA 04                  SUB EDX,0x4
006D898E  7C 0F                     JL 0x006d899f
LAB_006d8990:
006D8990  8B 06                     MOV EAX,dword ptr [ESI]
006D8992  83 C6 04                  ADD ESI,0x4
006D8995  89 07                     MOV dword ptr [EDI],EAX
006D8997  83 C7 04                  ADD EDI,0x4
006D899A  83 EA 04                  SUB EDX,0x4
006D899D  7D F1                     JGE 0x006d8990
LAB_006d899f:
006D899F  83 C2 04                  ADD EDX,0x4
006D89A2  74 22                     JZ 0x006d89c6
LAB_006d89a4:
006D89A4  80 FA 01                  CMP DL,0x1
006D89A7  74 11                     JZ 0x006d89ba
006D89A9  80 FA 02                  CMP DL,0x2
006D89AC  74 06                     JZ 0x006d89b4
006D89AE  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006D89B1  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_006d89b4:
006D89B4  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006D89B7  88 47 01                  MOV byte ptr [EDI + 0x1],AL
LAB_006d89ba:
006D89BA  8A 06                     MOV AL,byte ptr [ESI]
006D89BC  88 07                     MOV byte ptr [EDI],AL
006D89BE  03 F2                     ADD ESI,EDX
006D89C0  03 FA                     ADD EDI,EDX
006D89C2  EB 02                     JMP 0x006d89c6
LAB_006d89c4:
006D89C4  03 FA                     ADD EDI,EDX
LAB_006d89c6:
006D89C6  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D89C9  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006D89CC  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D89CF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D89D2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D89D5  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D89D8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D89DB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D89DE  2B F2                     SUB ESI,EDX
006D89E0  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006D89E3  2B F7                     SUB ESI,EDI
006D89E5  3B D6                     CMP EDX,ESI
006D89E7  7D 2C                     JGE 0x006d8a15
LAB_006d89e9:
006D89E9  81 E1 C0 00 00 00         AND ECX,0xc0
006D89EF  2B F2                     SUB ESI,EDX
006D89F1  80 F9 80                  CMP CL,0x80
006D89F4  75 02                     JNZ 0x006d89f8
006D89F6  03 C2                     ADD EAX,EDX
LAB_006d89f8:
006D89F8  33 C9                     XOR ECX,ECX
006D89FA  8A 08                     MOV CL,byte ptr [EAX]
006D89FC  8B D1                     MOV EDX,ECX
006D89FE  80 E2 80                  AND DL,0x80
006D8A01  40                        INC EAX
006D8A02  84 D2                     TEST DL,DL
006D8A04  8B D1                     MOV EDX,ECX
006D8A06  74 09                     JZ 0x006d8a11
006D8A08  83 E2 3F                  AND EDX,0x3f
006D8A0B  F6 C1 40                  TEST CL,0x40
006D8A0E  74 01                     JZ 0x006d8a11
006D8A10  40                        INC EAX
LAB_006d8a11:
006D8A11  3B D6                     CMP EDX,ESI
006D8A13  7C D4                     JL 0x006d89e9
LAB_006d8a15:
006D8A15  81 E1 C0 00 00 00         AND ECX,0xc0
006D8A1B  80 F9 80                  CMP CL,0x80
006D8A1E  75 02                     JNZ 0x006d8a22
006D8A20  03 C6                     ADD EAX,ESI
LAB_006d8a22:
006D8A22  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D8A25  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D8A28  2B CF                     SUB ECX,EDI
006D8A2A  03 D1                     ADD EDX,ECX
006D8A2C  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D8A2F  EB 0B                     JMP 0x006d8a3c
LAB_006d8a31:
006D8A31  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D8A34  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D8A37  03 CA                     ADD ECX,EDX
006D8A39  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d8a3c:
006D8A3C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D8A3F  49                        DEC ECX
006D8A40  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006D8A43  0F 85 EF FC FF FF         JNZ 0x006d8738
006D8A49  5E                        POP ESI
006D8A4A  5B                        POP EBX
LAB_006d8a4b:
006D8A4B  5F                        POP EDI
006D8A4C  8B E5                     MOV ESP,EBP
006D8A4E  5D                        POP EBP
006D8A4F  C2 24 00                  RET 0x24
