FUN_0074d786:
0074D786  55                        PUSH EBP
0074D787  8B EC                     MOV EBP,ESP
0074D789  83 EC 30                  SUB ESP,0x30
0074D78C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074D78F  53                        PUSH EBX
0074D790  56                        PUSH ESI
0074D791  33 F6                     XOR ESI,ESI
0074D793  3B CE                     CMP ECX,ESI
0074D795  57                        PUSH EDI
0074D796  7C 12                     JL 0x0074d7aa
0074D798  7F 05                     JG 0x0074d79f
0074D79A  39 75 08                  CMP dword ptr [EBP + 0x8],ESI
0074D79D  72 0B                     JC 0x0074d7aa
LAB_0074d79f:
0074D79F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074D7A2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0074D7A5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074D7A8  EB 11                     JMP 0x0074d7bb
LAB_0074d7aa:
0074D7AA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074D7AD  F7 D8                     NEG EAX
0074D7AF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074D7B2  8B C1                     MOV EAX,ECX
0074D7B4  13 C6                     ADC EAX,ESI
0074D7B6  F7 D8                     NEG EAX
0074D7B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0074d7bb:
0074D7BB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0074D7BE  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0074D7C1  3B D6                     CMP EDX,ESI
0074D7C3  7C 0D                     JL 0x0074d7d2
0074D7C5  7F 04                     JG 0x0074d7cb
0074D7C7  3B DE                     CMP EBX,ESI
0074D7C9  72 07                     JC 0x0074d7d2
LAB_0074d7cb:
0074D7CB  8B FB                     MOV EDI,EBX
0074D7CD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0074D7D0  EB 0D                     JMP 0x0074d7df
LAB_0074d7d2:
0074D7D2  8B FB                     MOV EDI,EBX
0074D7D4  8B C2                     MOV EAX,EDX
0074D7D6  F7 DF                     NEG EDI
0074D7D8  13 C6                     ADC EAX,ESI
0074D7DA  F7 D8                     NEG EAX
0074D7DC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0074d7df:
0074D7DF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0074D7E2  3B C6                     CMP EAX,ESI
0074D7E4  7C 0F                     JL 0x0074d7f5
0074D7E6  7F 05                     JG 0x0074d7ed
0074D7E8  39 75 18                  CMP dword ptr [EBP + 0x18],ESI
0074D7EB  72 08                     JC 0x0074d7f5
LAB_0074d7ed:
0074D7ED  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0074D7F0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0074D7F3  EB 0C                     JMP 0x0074d801
LAB_0074d7f5:
0074D7F5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0074D7F8  F7 D9                     NEG ECX
0074D7FA  13 C6                     ADC EAX,ESI
0074D7FC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0074D7FF  F7 D8                     NEG EAX
LAB_0074d801:
0074D801  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0074D804  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0074D807  7F 0C                     JG 0x0074d815
0074D809  7C 05                     JL 0x0074d810
0074D80B  39 75 08                  CMP dword ptr [EBP + 0x8],ESI
0074D80E  73 05                     JNC 0x0074d815
LAB_0074d810:
0074D810  6A 01                     PUSH 0x1
0074D812  59                        POP ECX
0074D813  EB 02                     JMP 0x0074d817
LAB_0074d815:
0074D815  33 C9                     XOR ECX,ECX
LAB_0074d817:
0074D817  3B D6                     CMP EDX,ESI
0074D819  7F 0B                     JG 0x0074d826
0074D81B  7C 04                     JL 0x0074d821
0074D81D  3B DE                     CMP EBX,ESI
0074D81F  73 05                     JNC 0x0074d826
LAB_0074d821:
0074D821  6A 01                     PUSH 0x1
0074D823  58                        POP EAX
0074D824  EB 02                     JMP 0x0074d828
LAB_0074d826:
0074D826  33 C0                     XOR EAX,EAX
LAB_0074d828:
0074D828  33 DB                     XOR EBX,EBX
0074D82A  33 C1                     XOR EAX,ECX
0074D82C  53                        PUSH EBX
0074D82D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074D830  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074D833  56                        PUSH ESI
0074D834  57                        PUSH EDI
0074D835  E8 B6 0C FE FF            CALL 0x0072e4f0
0074D83A  21 5D EC                  AND dword ptr [EBP + -0x14],EBX
0074D83D  56                        PUSH ESI
0074D83E  57                        PUSH EDI
0074D83F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0074D842  FF 75 EC                  PUSH dword ptr [EBP + -0x14]
0074D845  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0074D848  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074D84B  E8 A0 0C FE FF            CALL 0x0072e4f0
0074D850  53                        PUSH EBX
0074D851  8B F8                     MOV EDI,EAX
0074D853  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074D856  8B F2                     MOV ESI,EDX
0074D858  53                        PUSH EBX
0074D859  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
0074D85C  E8 8F 0C FE FF            CALL 0x0072e4f0
0074D861  53                        PUSH EBX
0074D862  03 F8                     ADD EDI,EAX
0074D864  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
0074D867  13 F2                     ADC ESI,EDX
0074D869  33 C0                     XOR EAX,EAX
0074D86B  FF 75 EC                  PUSH dword ptr [EBP + -0x14]
0074D86E  03 7D D4                  ADD EDI,dword ptr [EBP + -0x2c]
0074D871  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074D874  13 F0                     ADC ESI,EAX
0074D876  E8 75 0C FE FF            CALL 0x0072e4f0
0074D87B  8B D8                     MOV EBX,EAX
0074D87D  33 C0                     XOR EAX,EAX
0074D87F  03 DE                     ADD EBX,ESI
0074D881  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0074D884  13 D0                     ADC EDX,EAX
0074D886  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0074D889  0B C6                     OR EAX,ESI
0074D88B  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0074D88E  0F 84 B7 00 00 00         JZ 0x0074d94b
0074D894  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074D898  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0074D89B  74 17                     JZ 0x0074d8b4
0074D89D  F7 D9                     NEG ECX
0074D89F  8B C6                     MOV EAX,ESI
0074D8A1  83 D0 00                  ADC EAX,0x0
0074D8A4  F7 D8                     NEG EAX
0074D8A6  85 F6                     TEST ESI,ESI
0074D8A8  7C 22                     JL 0x0074d8cc
0074D8AA  7F 16                     JG 0x0074d8c2
0074D8AC  83 7D 20 00               CMP dword ptr [EBP + 0x20],0x0
0074D8B0  76 1A                     JBE 0x0074d8cc
0074D8B2  EB 0E                     JMP 0x0074d8c2
LAB_0074d8b4:
0074D8B4  85 F6                     TEST ESI,ESI
0074D8B6  8B C6                     MOV EAX,ESI
0074D8B8  7F 12                     JG 0x0074d8cc
0074D8BA  7C 06                     JL 0x0074d8c2
0074D8BC  83 7D 20 00               CMP dword ptr [EBP + 0x20],0x0
0074D8C0  73 0A                     JNC 0x0074d8cc
LAB_0074d8c2:
0074D8C2  83 4D E8 FF               OR dword ptr [EBP + -0x18],0xffffffff
0074D8C6  83 4D EC FF               OR dword ptr [EBP + -0x14],0xffffffff
0074D8CA  EB 08                     JMP 0x0074d8d4
LAB_0074d8cc:
0074D8CC  83 65 E8 00               AND dword ptr [EBP + -0x18],0x0
0074D8D0  83 65 EC 00               AND dword ptr [EBP + -0x14],0x0
LAB_0074d8d4:
0074D8D4  83 65 24 00               AND dword ptr [EBP + 0x24],0x0
0074D8D8  33 F6                     XOR ESI,ESI
0074D8DA  03 4D D0                  ADD ECX,dword ptr [EBP + -0x30]
0074D8DD  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
0074D8E0  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0074D8E3  13 CE                     ADC ECX,ESI
0074D8E5  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
0074D8E8  83 65 24 00               AND dword ptr [EBP + 0x24],0x0
0074D8EC  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0074D8EF  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
0074D8F2  33 C9                     XOR ECX,ECX
0074D8F4  33 F6                     XOR ESI,ESI
0074D8F6  03 C7                     ADD EAX,EDI
0074D8F8  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
0074D8FB  13 CE                     ADC ECX,ESI
0074D8FD  03 F8                     ADD EDI,EAX
0074D8FF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0074D902  13 C1                     ADC EAX,ECX
0074D904  33 C9                     XOR ECX,ECX
0074D906  03 45 E8                  ADD EAX,dword ptr [EBP + -0x18]
0074D909  13 4D EC                  ADC ECX,dword ptr [EBP + -0x14]
0074D90C  03 D8                     ADD EBX,EAX
0074D90E  13 D1                     ADC EDX,ECX
0074D910  3B D6                     CMP EDX,ESI
0074D912  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0074D915  7D 36                     JGE 0x0074d94d
0074D917  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0074D91A  33 C0                     XOR EAX,EAX
0074D91C  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0074D91F  6A 01                     PUSH 0x1
0074D921  F7 D1                     NOT ECX
0074D923  0F 94 C0                  SETZ AL
0074D926  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074D929  58                        POP EAX
0074D92A  F7 D7                     NOT EDI
0074D92C  03 C8                     ADD ECX,EAX
0074D92E  13 FE                     ADC EDI,ESI
0074D930  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0074D933  F7 D2                     NOT EDX
0074D935  0B CF                     OR ECX,EDI
0074D937  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0074D93A  F7 D3                     NOT EBX
0074D93C  74 02                     JZ 0x0074d940
0074D93E  33 C0                     XOR EAX,EAX
LAB_0074d940:
0074D940  99                        CDQ
0074D941  03 D8                     ADD EBX,EAX
0074D943  11 55 DC                  ADC dword ptr [EBP + -0x24],EDX
0074D946  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0074D949  EB 02                     JMP 0x0074d94d
LAB_0074d94b:
0074D94B  33 F6                     XOR ESI,ESI
LAB_0074d94d:
0074D94D  39 75 1C                  CMP dword ptr [EBP + 0x1c],ESI
0074D950  7F 12                     JG 0x0074d964
0074D952  7C 05                     JL 0x0074d959
0074D954  39 75 18                  CMP dword ptr [EBP + 0x18],ESI
0074D957  73 0B                     JNC 0x0074d964
LAB_0074d959:
0074D959  33 C0                     XOR EAX,EAX
0074D95B  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0074D95E  0F 94 C0                  SETZ AL
0074D961  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_0074d964:
0074D964  39 55 14                  CMP dword ptr [EBP + 0x14],EDX
0074D967  77 25                     JA 0x0074d98e
0074D969  72 05                     JC 0x0074d970
0074D96B  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0074D96E  77 1E                     JA 0x0074d98e
LAB_0074d970:
0074D970  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0074D973  74 0C                     JZ 0x0074d981
0074D975  33 C0                     XOR EAX,EAX
0074D977  BA 00 00 00 80            MOV EDX,0x80000000
0074D97C  E9 F9 00 00 00            JMP 0x0074da7a
LAB_0074d981:
0074D981  83 C8 FF                  OR EAX,0xffffffff
0074D984  BA FF FF FF 7F            MOV EDX,0x7fffffff
0074D989  E9 EC 00 00 00            JMP 0x0074da7a
LAB_0074d98e:
0074D98E  8B C3                     MOV EAX,EBX
0074D990  0B C2                     OR EAX,EDX
0074D992  75 23                     JNZ 0x0074d9b7
0074D994  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074D997  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074D99A  57                        PUSH EDI
0074D99B  FF 75 D0                  PUSH dword ptr [EBP + -0x30]
0074D99E  E8 7D 78 FE FF            CALL 0x00735220
0074D9A3  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0074D9A6  0F 84 CE 00 00 00         JZ 0x0074da7a
0074D9AC  F7 D8                     NEG EAX
0074D9AE  13 D6                     ADC EDX,ESI
0074D9B0  F7 DA                     NEG EDX
0074D9B2  E9 C3 00 00 00            JMP 0x0074da7a
LAB_0074d9b7:
0074D9B7  39 75 14                  CMP dword ptr [EBP + 0x14],ESI
0074D9BA  75 42                     JNZ 0x0074d9fe
0074D9BC  33 C0                     XOR EAX,EAX
0074D9BE  50                        PUSH EAX
0074D9BF  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074D9C2  53                        PUSH EBX
0074D9C3  57                        PUSH EDI
0074D9C4  E8 57 78 FE FF            CALL 0x00735220
0074D9C9  8B F0                     MOV ESI,EAX
0074D9CB  33 C0                     XOR EAX,EAX
0074D9CD  50                        PUSH EAX
0074D9CE  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074D9D1  53                        PUSH EBX
0074D9D2  57                        PUSH EDI
0074D9D3  E8 B8 78 FE FF            CALL 0x00735290
0074D9D8  33 C9                     XOR ECX,ECX
0074D9DA  33 FF                     XOR EDI,EDI
0074D9DC  51                        PUSH ECX
0074D9DD  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074D9E0  50                        PUSH EAX
0074D9E1  FF 75 D0                  PUSH dword ptr [EBP + -0x30]
0074D9E4  E8 37 78 FE FF            CALL 0x00735220
0074D9E9  03 F8                     ADD EDI,EAX
0074D9EB  13 F2                     ADC ESI,EDX
0074D9ED  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074D9F1  74 07                     JZ 0x0074d9fa
0074D9F3  F7 DF                     NEG EDI
0074D9F5  83 D6 00                  ADC ESI,0x0
0074D9F8  F7 DE                     NEG ESI
LAB_0074d9fa:
0074D9FA  8B C7                     MOV EAX,EDI
0074D9FC  EB 7A                     JMP 0x0074da78
LAB_0074d9fe:
0074D9FE  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
0074DA01  C7 45 24 40 00 00 00      MOV dword ptr [EBP + 0x24],0x40
LAB_0074da08:
0074DA08  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0074DA0B  6A 01                     PUSH 0x1
0074DA0D  59                        POP ECX
0074DA0E  8B D6                     MOV EDX,ESI
0074DA10  E8 FB 37 FF FF            CALL 0x00741210
0074DA15  6A 01                     PUSH 0x1
0074DA17  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0074DA1A  8B F2                     MOV ESI,EDX
0074DA1C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0074DA1F  59                        POP ECX
0074DA20  8B C3                     MOV EAX,EBX
0074DA22  E8 E9 37 FF FF            CALL 0x00741210
0074DA27  F7 C7 00 00 00 80         TEST EDI,0x80000000
0074DA2D  8B D8                     MOV EBX,EAX
0074DA2F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0074DA32  74 01                     JZ 0x0074da35
0074DA34  43                        INC EBX
LAB_0074da35:
0074DA35  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0074DA38  6A 01                     PUSH 0x1
0074DA3A  59                        POP ECX
0074DA3B  8B D7                     MOV EDX,EDI
0074DA3D  E8 CE 37 FF FF            CALL 0x00741210
0074DA42  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0074DA45  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074DA48  3B 45 DC                  CMP EAX,dword ptr [EBP + -0x24]
0074DA4B  8B FA                     MOV EDI,EDX
0074DA4D  77 14                     JA 0x0074da63
0074DA4F  72 05                     JC 0x0074da56
0074DA51  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0074DA54  77 0D                     JA 0x0074da63
LAB_0074da56:
0074DA56  2B 5D 10                  SUB EBX,dword ptr [EBP + 0x10]
0074DA59  19 45 DC                  SBB dword ptr [EBP + -0x24],EAX
0074DA5C  83 45 18 01               ADD dword ptr [EBP + 0x18],0x1
0074DA60  83 D6 00                  ADC ESI,0x0
LAB_0074da63:
0074DA63  FF 4D 24                  DEC dword ptr [EBP + 0x24]
0074DA66  75 A0                     JNZ 0x0074da08
0074DA68  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074DA6C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0074DA6F  74 07                     JZ 0x0074da78
0074DA71  F7 D8                     NEG EAX
0074DA73  83 D6 00                  ADC ESI,0x0
0074DA76  F7 DE                     NEG ESI
LAB_0074da78:
0074DA78  8B D6                     MOV EDX,ESI
LAB_0074da7a:
0074DA7A  5F                        POP EDI
0074DA7B  5E                        POP ESI
0074DA7C  5B                        POP EBX
0074DA7D  C9                        LEAVE
0074DA7E  C2 20 00                  RET 0x20
