FUN_0073d610:
0073D610  55                        PUSH EBP
0073D611  8B EC                     MOV EBP,ESP
0073D613  83 EC 14                  SUB ESP,0x14
0073D616  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D619  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0073D61F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073D622  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
0073D628  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073D62B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073D62E  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073D632  74 11                     JZ 0x0073d645
0073D634  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073D637  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D63A  89 08                     MOV dword ptr [EAX],ECX
0073D63C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073D63F  83 C2 04                  ADD EDX,0x4
0073D642  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_0073d645:
0073D645  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D648  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D64B  83 F9 22                  CMP ECX,0x22
0073D64E  0F 85 C9 00 00 00         JNZ 0x0073d71d
LAB_0073d654:
0073D654  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D657  83 C2 01                  ADD EDX,0x1
0073D65A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073D65D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D660  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D663  83 F9 22                  CMP ECX,0x22
0073D666  74 7A                     JZ 0x0073d6e2
0073D668  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D66B  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073D66E  85 C0                     TEST EAX,EAX
0073D670  74 70                     JZ 0x0073d6e2
0073D672  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D675  33 D2                     XOR EDX,EDX
0073D677  8A 11                     MOV DL,byte ptr [ECX]
0073D679  33 C0                     XOR EAX,EAX
0073D67B  8A 82 81 A4 85 00         MOV AL,byte ptr [EDX + 0x85a481]
0073D681  83 E0 04                  AND EAX,0x4
0073D684  85 C0                     TEST EAX,EAX
0073D686  74 2F                     JZ 0x0073d6b7
0073D688  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0073D68B  8B 11                     MOV EDX,dword ptr [ECX]
0073D68D  83 C2 01                  ADD EDX,0x1
0073D690  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D693  89 10                     MOV dword ptr [EAX],EDX
0073D695  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D699  74 1C                     JZ 0x0073d6b7
0073D69B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D69E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D6A1  8A 02                     MOV AL,byte ptr [EDX]
0073D6A3  88 01                     MOV byte ptr [ECX],AL
0073D6A5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D6A8  83 C1 01                  ADD ECX,0x1
0073D6AB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0073D6AE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D6B1  83 C2 01                  ADD EDX,0x1
0073D6B4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073d6b7:
0073D6B7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D6BA  8B 08                     MOV ECX,dword ptr [EAX]
0073D6BC  83 C1 01                  ADD ECX,0x1
0073D6BF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073D6C2  89 0A                     MOV dword ptr [EDX],ECX
0073D6C4  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D6C8  74 13                     JZ 0x0073d6dd
0073D6CA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D6CD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D6D0  8A 11                     MOV DL,byte ptr [ECX]
0073D6D2  88 10                     MOV byte ptr [EAX],DL
0073D6D4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D6D7  83 C0 01                  ADD EAX,0x1
0073D6DA  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0073d6dd:
0073D6DD  E9 72 FF FF FF            JMP 0x0073d654
LAB_0073d6e2:
0073D6E2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0073D6E5  8B 11                     MOV EDX,dword ptr [ECX]
0073D6E7  83 C2 01                  ADD EDX,0x1
0073D6EA  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D6ED  89 10                     MOV dword ptr [EAX],EDX
0073D6EF  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D6F3  74 0F                     JZ 0x0073d704
0073D6F5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D6F8  C6 01 00                  MOV byte ptr [ECX],0x0
0073D6FB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073D6FE  83 C2 01                  ADD EDX,0x1
0073D701  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_0073d704:
0073D704  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D707  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D70A  83 F9 22                  CMP ECX,0x22
0073D70D  75 09                     JNZ 0x0073d718
0073D70F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D712  83 C2 01                  ADD EDX,0x1
0073D715  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073d718:
0073D718  E9 CF 00 00 00            JMP 0x0073d7ec
LAB_0073d71d:
0073D71D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D720  8B 08                     MOV ECX,dword ptr [EAX]
0073D722  83 C1 01                  ADD ECX,0x1
0073D725  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073D728  89 0A                     MOV dword ptr [EDX],ECX
0073D72A  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D72E  74 13                     JZ 0x0073d743
0073D730  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D733  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D736  8A 11                     MOV DL,byte ptr [ECX]
0073D738  88 10                     MOV byte ptr [EAX],DL
0073D73A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D73D  83 C0 01                  ADD EAX,0x1
0073D740  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0073d743:
0073D743  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D746  8A 11                     MOV DL,byte ptr [ECX]
0073D748  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0073D74B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D74E  83 C0 01                  ADD EAX,0x1
0073D751  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D754  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D757  81 E1 FF 00 00 00         AND ECX,0xff
0073D75D  33 D2                     XOR EDX,EDX
0073D75F  8A 91 81 A4 85 00         MOV DL,byte ptr [ECX + 0x85a481]
0073D765  83 E2 04                  AND EDX,0x4
0073D768  85 D2                     TEST EDX,EDX
0073D76A  74 2F                     JZ 0x0073d79b
0073D76C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D76F  8B 08                     MOV ECX,dword ptr [EAX]
0073D771  83 C1 01                  ADD ECX,0x1
0073D774  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073D777  89 0A                     MOV dword ptr [EDX],ECX
0073D779  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D77D  74 13                     JZ 0x0073d792
0073D77F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D782  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D785  8A 11                     MOV DL,byte ptr [ECX]
0073D787  88 10                     MOV byte ptr [EAX],DL
0073D789  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D78C  83 C0 01                  ADD EAX,0x1
0073D78F  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0073d792:
0073D792  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D795  83 C1 01                  ADD ECX,0x1
0073D798  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073d79b:
0073D79B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D79E  81 E2 FF 00 00 00         AND EDX,0xff
0073D7A4  83 FA 20                  CMP EDX,0x20
0073D7A7  74 1E                     JZ 0x0073d7c7
0073D7A9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D7AC  25 FF 00 00 00            AND EAX,0xff
0073D7B1  85 C0                     TEST EAX,EAX
0073D7B3  74 12                     JZ 0x0073d7c7
0073D7B5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D7B8  81 E1 FF 00 00 00         AND ECX,0xff
0073D7BE  83 F9 09                  CMP ECX,0x9
0073D7C1  0F 85 56 FF FF FF         JNZ 0x0073d71d
LAB_0073d7c7:
0073D7C7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D7CA  81 E2 FF 00 00 00         AND EDX,0xff
0073D7D0  85 D2                     TEST EDX,EDX
0073D7D2  75 0B                     JNZ 0x0073d7df
0073D7D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D7D7  83 E8 01                  SUB EAX,0x1
0073D7DA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D7DD  EB 0D                     JMP 0x0073d7ec
LAB_0073d7df:
0073D7DF  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D7E3  74 07                     JZ 0x0073d7ec
0073D7E5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D7E8  C6 41 FF 00               MOV byte ptr [ECX + -0x1],0x0
LAB_0073d7ec:
0073D7EC  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0073d7f3:
0073D7F3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D7F6  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073D7F9  85 C0                     TEST EAX,EAX
0073D7FB  74 21                     JZ 0x0073d81e
LAB_0073d7fd:
0073D7FD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D800  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073D803  83 FA 20                  CMP EDX,0x20
0073D806  74 0B                     JZ 0x0073d813
0073D808  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D80B  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D80E  83 F9 09                  CMP ECX,0x9
0073D811  75 0B                     JNZ 0x0073d81e
LAB_0073d813:
0073D813  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D816  83 C2 01                  ADD EDX,0x1
0073D819  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073D81C  EB DF                     JMP 0x0073d7fd
LAB_0073d81e:
0073D81E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D821  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D824  85 C9                     TEST ECX,ECX
0073D826  75 05                     JNZ 0x0073d82d
0073D828  E9 DE 01 00 00            JMP 0x0073da0b
LAB_0073d82d:
0073D82D  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073D831  74 11                     JZ 0x0073d844
0073D833  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073D836  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D839  89 02                     MOV dword ptr [EDX],EAX
0073D83B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073D83E  83 C1 04                  ADD ECX,0x4
0073D841  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0073d844:
0073D844  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073D847  8B 02                     MOV EAX,dword ptr [EDX]
0073D849  83 C0 01                  ADD EAX,0x1
0073D84C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073D84F  89 01                     MOV dword ptr [ECX],EAX
LAB_0073d851:
0073D851  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0073D858  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0073d85f:
0073D85F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D862  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073D865  83 F8 5C                  CMP EAX,0x5c
0073D868  75 14                     JNZ 0x0073d87e
0073D86A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D86D  83 C1 01                  ADD ECX,0x1
0073D870  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073D873  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073D876  83 C2 01                  ADD EDX,0x1
0073D879  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0073D87C  EB E1                     JMP 0x0073d85f
LAB_0073d87e:
0073D87E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D881  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D884  83 F9 22                  CMP ECX,0x22
0073D887  75 51                     JNZ 0x0073d8da
0073D889  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073D88C  33 D2                     XOR EDX,EDX
0073D88E  B9 02 00 00 00            MOV ECX,0x2
0073D893  F7 F1                     DIV ECX
0073D895  85 D2                     TEST EDX,EDX
0073D897  75 39                     JNZ 0x0073d8d2
0073D899  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0073D89D  74 20                     JZ 0x0073d8bf
0073D89F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D8A2  0F BE 42 01               MOVSX EAX,byte ptr [EDX + 0x1]
0073D8A6  83 F8 22                  CMP EAX,0x22
0073D8A9  75 0B                     JNZ 0x0073d8b6
0073D8AB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D8AE  83 C1 01                  ADD ECX,0x1
0073D8B1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073D8B4  EB 07                     JMP 0x0073d8bd
LAB_0073d8b6:
0073D8B6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0073d8bd:
0073D8BD  EB 07                     JMP 0x0073d8c6
LAB_0073d8bf:
0073D8BF  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0073d8c6:
0073D8C6  33 D2                     XOR EDX,EDX
0073D8C8  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0073D8CC  0F 94 C2                  SETZ DL
0073D8CF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0073d8d2:
0073D8D2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073D8D5  D1 E8                     SHR EAX,0x1
0073D8D7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0073d8da:
0073D8DA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073D8DD  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073D8E0  83 EA 01                  SUB EDX,0x1
0073D8E3  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0073D8E6  85 C9                     TEST ECX,ECX
0073D8E8  74 24                     JZ 0x0073d90e
0073D8EA  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D8EE  74 0F                     JZ 0x0073d8ff
0073D8F0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073D8F3  C6 00 5C                  MOV byte ptr [EAX],0x5c
0073D8F6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D8F9  83 C1 01                  ADD ECX,0x1
0073D8FC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_0073d8ff:
0073D8FF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073D902  8B 02                     MOV EAX,dword ptr [EDX]
0073D904  83 C0 01                  ADD EAX,0x1
0073D907  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0073D90A  89 01                     MOV dword ptr [ECX],EAX
0073D90C  EB CC                     JMP 0x0073d8da
LAB_0073d90e:
0073D90E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D911  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073D914  85 C0                     TEST EAX,EAX
0073D916  74 1C                     JZ 0x0073d934
0073D918  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0073D91C  75 1B                     JNZ 0x0073d939
0073D91E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D921  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073D924  83 FA 20                  CMP EDX,0x20
0073D927  74 0B                     JZ 0x0073d934
0073D929  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D92C  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D92F  83 F9 09                  CMP ECX,0x9
0073D932  75 05                     JNZ 0x0073d939
LAB_0073d934:
0073D934  E9 AB 00 00 00            JMP 0x0073d9e4
LAB_0073d939:
0073D939  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073D93D  0F 84 93 00 00 00         JZ 0x0073d9d6
0073D943  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D947  74 54                     JZ 0x0073d99d
0073D949  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D94C  33 C0                     XOR EAX,EAX
0073D94E  8A 02                     MOV AL,byte ptr [EDX]
0073D950  33 C9                     XOR ECX,ECX
0073D952  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
0073D958  83 E1 04                  AND ECX,0x4
0073D95B  85 C9                     TEST ECX,ECX
0073D95D  74 29                     JZ 0x0073d988
0073D95F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073D962  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D965  8A 08                     MOV CL,byte ptr [EAX]
0073D967  88 0A                     MOV byte ptr [EDX],CL
0073D969  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073D96C  83 C2 01                  ADD EDX,0x1
0073D96F  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0073D972  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D975  83 C0 01                  ADD EAX,0x1
0073D978  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D97B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0073D97E  8B 11                     MOV EDX,dword ptr [ECX]
0073D980  83 C2 01                  ADD EDX,0x1
0073D983  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D986  89 10                     MOV dword ptr [EAX],EDX
LAB_0073d988:
0073D988  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D98B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D98E  8A 02                     MOV AL,byte ptr [EDX]
0073D990  88 01                     MOV byte ptr [ECX],AL
0073D992  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D995  83 C1 01                  ADD ECX,0x1
0073D998  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0073D99B  EB 2C                     JMP 0x0073d9c9
LAB_0073d99d:
0073D99D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D9A0  33 C0                     XOR EAX,EAX
0073D9A2  8A 02                     MOV AL,byte ptr [EDX]
0073D9A4  33 C9                     XOR ECX,ECX
0073D9A6  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
0073D9AC  83 E1 04                  AND ECX,0x4
0073D9AF  85 C9                     TEST ECX,ECX
0073D9B1  74 16                     JZ 0x0073d9c9
0073D9B3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D9B6  83 C2 01                  ADD EDX,0x1
0073D9B9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073D9BC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D9BF  8B 08                     MOV ECX,dword ptr [EAX]
0073D9C1  83 C1 01                  ADD ECX,0x1
0073D9C4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073D9C7  89 0A                     MOV dword ptr [EDX],ECX
LAB_0073d9c9:
0073D9C9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D9CC  8B 08                     MOV ECX,dword ptr [EAX]
0073D9CE  83 C1 01                  ADD ECX,0x1
0073D9D1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073D9D4  89 0A                     MOV dword ptr [EDX],ECX
LAB_0073d9d6:
0073D9D6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D9D9  83 C0 01                  ADD EAX,0x1
0073D9DC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D9DF  E9 6D FE FF FF            JMP 0x0073d851
LAB_0073d9e4:
0073D9E4  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073D9E8  74 0F                     JZ 0x0073d9f9
0073D9EA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073D9ED  C6 01 00                  MOV byte ptr [ECX],0x0
0073D9F0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073D9F3  83 C2 01                  ADD EDX,0x1
0073D9F6  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_0073d9f9:
0073D9F9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073D9FC  8B 08                     MOV ECX,dword ptr [EAX]
0073D9FE  83 C1 01                  ADD ECX,0x1
0073DA01  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073DA04  89 0A                     MOV dword ptr [EDX],ECX
0073DA06  E9 E8 FD FF FF            JMP 0x0073d7f3
LAB_0073da0b:
0073DA0B  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073DA0F  74 12                     JZ 0x0073da23
0073DA11  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073DA14  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0073DA1A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073DA1D  83 C1 04                  ADD ECX,0x4
0073DA20  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0073da23:
0073DA23  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073DA26  8B 02                     MOV EAX,dword ptr [EDX]
0073DA28  83 C0 01                  ADD EAX,0x1
0073DA2B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073DA2E  89 01                     MOV dword ptr [ECX],EAX
0073DA30  8B E5                     MOV ESP,EBP
0073DA32  5D                        POP EBP
0073DA33  C3                        RET
