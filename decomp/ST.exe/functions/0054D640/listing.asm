STPlaySystemC::Life:
0054D640  55                        PUSH EBP
0054D641  8B EC                     MOV EBP,ESP
0054D643  81 EC A4 00 00 00         SUB ESP,0xa4
0054D649  53                        PUSH EBX
0054D64A  56                        PUSH ESI
0054D64B  57                        PUSH EDI
0054D64C  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0054D64F  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0054D655  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0054D658  A1 12 C5 80 00            MOV EAX,[0x0080c512]
0054D65D  85 C0                     TEST EAX,EAX
0054D65F  74 09                     JZ 0x0054d66a
0054D661  33 C0                     XOR EAX,EAX
0054D663  5F                        POP EDI
0054D664  5E                        POP ESI
0054D665  5B                        POP EBX
0054D666  8B E5                     MOV ESP,EBP
0054D668  5D                        POP EBP
0054D669  C3                        RET
LAB_0054d66a:
0054D66A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054D66F  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
0054D675  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
0054D67B  6A 00                     PUSH 0x0
0054D67D  52                        PUSH EDX
0054D67E  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0054D684  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D68A  E8 61 01 1E 00            CALL 0x0072d7f0
0054D68F  8B F0                     MOV ESI,EAX
0054D691  83 C4 08                  ADD ESP,0x8
0054D694  85 F6                     TEST ESI,ESI
0054D696  0F 85 BB 0A 00 00         JNZ 0x0054e157
0054D69C  A0 83 87 80 00            MOV AL,[0x00808783]
0054D6A1  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0054D6A4  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0054D6A7  3C 03                     CMP AL,0x3
0054D6A9  75 56                     JNZ 0x0054d701
0054D6AB  8B 53 7F                  MOV EDX,dword ptr [EBX + 0x7f]
0054D6AE  8B C7                     MOV EAX,EDI
0054D6B0  2B C2                     SUB EAX,EDX
0054D6B2  3D F4 01 00 00            CMP EAX,0x1f4
0054D6B7  72 48                     JC 0x0054d701
0054D6B9  89 7B 7F                  MOV dword ptr [EBX + 0x7f],EDI
0054D6BC  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054D6C2  56                        PUSH ESI
0054D6C3  51                        PUSH ECX
0054D6C4  E8 37 8E 16 00            CALL 0x006b6500
0054D6C9  8A 0D 7E 87 80 00         MOV CL,byte ptr [0x0080877e]
0054D6CF  A1 64 17 81 00            MOV EAX,[0x00811764]
0054D6D4  6A FF                     PUSH -0x1
0054D6D6  33 D2                     XOR EDX,EDX
0054D6D8  56                        PUSH ESI
0054D6D9  56                        PUSH ESI
0054D6DA  84 C9                     TEST CL,CL
0054D6DC  56                        PUSH ESI
0054D6DD  6A 35                     PUSH 0x35
0054D6DF  0F 94 C2                  SETZ DL
0054D6E2  52                        PUSH EDX
0054D6E3  50                        PUSH EAX
0054D6E4  E8 77 7C 1C 00            CALL 0x00715360
0054D6E9  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
0054D6EF  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054D6F5  83 C4 1C                  ADD ESP,0x1c
0054D6F8  51                        PUSH ECX
0054D6F9  52                        PUSH EDX
0054D6FA  E8 01 8E 16 00            CALL 0x006b6500
0054D6FF  EB 02                     JMP 0x0054d703
LAB_0054d701:
0054D701  33 F6                     XOR ESI,ESI
LAB_0054d703:
0054D703  A0 A0 67 80 00            MOV AL,[0x008067a0]
0054D708  84 C0                     TEST AL,AL
0054D70A  74 0B                     JZ 0x0054d717
0054D70C  B9 90 2A 80 00            MOV ECX,0x802a90
0054D711  FF 15 5C C0 85 00         CALL dword ptr [0x0085c05c]
LAB_0054d717:
0054D717  39 35 84 87 80 00         CMP dword ptr [0x00808784],ESI
0054D71D  74 23                     JZ 0x0054d742
0054D71F  8B CB                     MOV ECX,EBX
0054D721  E8 2B 47 EB FF            CALL 0x00401e51
0054D726  8B CB                     MOV ECX,EBX
0054D728  E8 21 40 EB FF            CALL 0x0040174e
0054D72D  39 73 28                  CMP dword ptr [EBX + 0x28],ESI
0054D730  0F 84 F6 08 00 00         JZ 0x0054e02c
0054D736  8B CB                     MOV ECX,EBX
0054D738  E8 53 86 19 00            CALL 0x006e5d90
0054D73D  E9 EA 08 00 00            JMP 0x0054e02c
LAB_0054d742:
0054D742  A0 7E 87 80 00            MOV AL,[0x0080877e]
0054D747  84 C0                     TEST AL,AL
0054D749  0F 84 83 08 00 00         JZ 0x0054dfd2
0054D74F  8A 43 38                  MOV AL,byte ptr [EBX + 0x38]
0054D752  84 C0                     TEST AL,AL
0054D754  0F 84 F9 02 00 00         JZ 0x0054da53
0054D75A  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054D760  56                        PUSH ESI
0054D761  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0054D764  6A FF                     PUSH -0x1
0054D766  50                        PUSH EAX
0054D767  6A FF                     PUSH -0x1
0054D769  51                        PUSH ECX
0054D76A  E8 A1 9D 16 00            CALL 0x006b7510
0054D76F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0054D772  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0054D775  3B C6                     CMP EAX,ESI
0054D777  0F 8E 1C 02 00 00         JLE 0x0054d999
LAB_0054d77d:
0054D77D  6A 00                     PUSH 0x0
0054D77F  6A FF                     PUSH -0x1
0054D781  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054D784  6A 00                     PUSH 0x0
0054D786  8D 45 EC                  LEA EAX,[EBP + -0x14]
0054D789  52                        PUSH EDX
0054D78A  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054D790  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054D793  50                        PUSH EAX
0054D794  51                        PUSH ECX
0054D795  6A FF                     PUSH -0x1
0054D797  52                        PUSH EDX
0054D798  E8 93 7E 1C 00            CALL 0x00715630
0054D79D  83 C4 20                  ADD ESP,0x20
0054D7A0  48                        DEC EAX
0054D7A1  0F 85 DD 01 00 00         JNZ 0x0054d984
0054D7A7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0054D7AA  83 C0 EF                  ADD EAX,-0x11
0054D7AD  83 F8 24                  CMP EAX,0x24
0054D7B0  0F 87 BE 01 00 00         JA 0x0054d974
0054D7B6  33 C9                     XOR ECX,ECX
0054D7B8  8A 88 B8 E1 54 00         MOV CL,byte ptr [EAX + 0x54e1b8]
switchD_0054d7be::switchD:
0054D7BE  FF 24 8D A4 E1 54 00      JMP dword ptr [ECX*0x4 + 0x54e1a4]
switchD_0054d7be::caseD_35:
0054D7C5  8B 35 FE C4 80 00         MOV ESI,dword ptr [0x0080c4fe]
0054D7CB  33 C9                     XOR ECX,ECX
0054D7CD  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0054D7D0  85 D2                     TEST EDX,EDX
0054D7D2  0F 8E A0 00 00 00         JLE 0x0054d878
0054D7D8  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0054D7DB  3B CA                     CMP ECX,EDX
LAB_0054d7dd:
0054D7DD  73 0B                     JNC 0x0054d7ea
0054D7DF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0054D7E2  0F AF C1                  IMUL EAX,ECX
0054D7E5  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
0054D7E8  EB 02                     JMP 0x0054d7ec
LAB_0054d7ea:
0054D7EA  33 C0                     XOR EAX,EAX
LAB_0054d7ec:
0054D7EC  85 C0                     TEST EAX,EAX
0054D7EE  74 04                     JZ 0x0054d7f4
0054D7F0  39 38                     CMP dword ptr [EAX],EDI
0054D7F2  74 07                     JZ 0x0054d7fb
LAB_0054d7f4:
0054D7F4  41                        INC ECX
0054D7F5  3B CA                     CMP ECX,EDX
0054D7F7  7C E4                     JL 0x0054d7dd
0054D7F9  EB 7D                     JMP 0x0054d878
LAB_0054d7fb:
0054D7FB  8B 15 FE C4 80 00         MOV EDX,dword ptr [0x0080c4fe]
0054D801  51                        PUSH ECX
0054D802  52                        PUSH EDX
0054D803  E8 68 34 16 00            CALL 0x006b0c70
0054D808  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054D80D  33 FF                     XOR EDI,EDI
0054D80F  84 C0                     TEST AL,AL
0054D811  76 65                     JBE 0x0054d878
0054D813  BE F6 8A 80 00            MOV ESI,0x808af6
LAB_0054d818:
0054D818  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0054D81B  8B 4E FA                  MOV ECX,dword ptr [ESI + -0x6]
0054D81E  3B C8                     CMP ECX,EAX
0054D820  75 44                     JNZ 0x0054d866
0054D822  80 3E 00                  CMP byte ptr [ESI],0x0
0054D825  74 3F                     JZ 0x0054d866
0054D827  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0054D82D  51                        PUSH ECX
0054D82E  68 6E 42 00 00            PUSH 0x426e
0054D833  E8 08 29 16 00            CALL 0x006b0140
0054D838  8D 56 BA                  LEA EDX,[ESI + -0x46]
0054D83B  50                        PUSH EAX
0054D83C  52                        PUSH EDX
0054D83D  68 1C 41 7C 00            PUSH 0x7c411c
0054D842  68 3A F3 80 00            PUSH 0x80f33a
0054D847  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054D84D  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054D853  83 C4 10                  ADD ESP,0x10
0054D856  85 C9                     TEST ECX,ECX
0054D858  74 0C                     JZ 0x0054d866
0054D85A  6A 08                     PUSH 0x8
0054D85C  68 3A F3 80 00            PUSH 0x80f33a
0054D861  E8 72 3C EB FF            CALL 0x004014d8
LAB_0054d866:
0054D866  33 C0                     XOR EAX,EAX
0054D868  47                        INC EDI
0054D869  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054D86E  81 C6 9C 00 00 00         ADD ESI,0x9c
0054D874  3B F8                     CMP EDI,EAX
0054D876  7C A0                     JL 0x0054d818
switchD_0054d7be::caseD_1a:
0054D878  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054D87D  33 F6                     XOR ESI,ESI
0054D87F  84 C0                     TEST AL,AL
0054D881  0F 86 ED 00 00 00         JBE 0x0054d974
0054D887  B8 F6 8A 80 00            MOV EAX,0x808af6
LAB_0054d88c:
0054D88C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0054D88F  8B 50 FA                  MOV EDX,dword ptr [EAX + -0x6]
0054D892  3B D1                     CMP EDX,ECX
0054D894  75 0B                     JNZ 0x0054d8a1
0054D896  80 38 00                  CMP byte ptr [EAX],0x0
0054D899  74 06                     JZ 0x0054d8a1
0054D89B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0054D89E  89 50 02                  MOV dword ptr [EAX + 0x2],EDX
LAB_0054d8a1:
0054D8A1  33 C9                     XOR ECX,ECX
0054D8A3  46                        INC ESI
0054D8A4  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
0054D8AA  05 9C 00 00 00            ADD EAX,0x9c
0054D8AF  3B F1                     CMP ESI,ECX
0054D8B1  7C D9                     JL 0x0054d88c
0054D8B3  E9 BC 00 00 00            JMP 0x0054d974
switchD_0054d7be::caseD_11:
0054D8B8  33 D2                     XOR EDX,EDX
0054D8BA  33 C9                     XOR ECX,ECX
0054D8BC  8A 15 AF 8A 80 00         MOV DL,byte ptr [0x00808aaf]
0054D8C2  85 D2                     TEST EDX,EDX
0054D8C4  7E 68                     JLE 0x0054d92e
0054D8C6  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0054D8C9  B8 F6 8A 80 00            MOV EAX,0x808af6
LAB_0054d8ce:
0054D8CE  39 78 FA                  CMP dword ptr [EAX + -0x6],EDI
0054D8D1  8D 70 BA                  LEA ESI,[EAX + -0x46]
0054D8D4  75 05                     JNZ 0x0054d8db
0054D8D6  80 38 00                  CMP byte ptr [EAX],0x0
0054D8D9  75 0C                     JNZ 0x0054d8e7
LAB_0054d8db:
0054D8DB  41                        INC ECX
0054D8DC  05 9C 00 00 00            ADD EAX,0x9c
0054D8E1  3B CA                     CMP ECX,EDX
0054D8E3  7C E9                     JL 0x0054d8ce
0054D8E5  EB 4A                     JMP 0x0054d931
LAB_0054d8e7:
0054D8E7  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0054D8ED  52                        PUSH EDX
0054D8EE  68 6F 42 00 00            PUSH 0x426f
0054D8F3  E8 48 28 16 00            CALL 0x006b0140
0054D8F8  50                        PUSH EAX
0054D8F9  56                        PUSH ESI
0054D8FA  68 1C 41 7C 00            PUSH 0x7c411c
0054D8FF  68 3A F3 80 00            PUSH 0x80f33a
0054D904  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054D90A  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054D910  83 C4 10                  ADD ESP,0x10
0054D913  85 C9                     TEST ECX,ECX
0054D915  74 0C                     JZ 0x0054d923
0054D917  6A 08                     PUSH 0x8
0054D919  68 3A F3 80 00            PUSH 0x80f33a
0054D91E  E8 B5 3B EB FF            CALL 0x004014d8
LAB_0054d923:
0054D923  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0054D926  8B CB                     MOV ECX,EBX
0054D928  50                        PUSH EAX
0054D929  E8 42 3A EB FF            CALL 0x00401370
LAB_0054d92e:
0054D92E  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0054d931:
0054D931  8B 35 FE C4 80 00         MOV ESI,dword ptr [0x0080c4fe]
0054D937  33 C9                     XOR ECX,ECX
0054D939  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0054D93C  85 D2                     TEST EDX,EDX
0054D93E  7E 34                     JLE 0x0054d974
0054D940  3B CA                     CMP ECX,EDX
LAB_0054d942:
0054D942  73 0B                     JNC 0x0054d94f
0054D944  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0054D947  0F AF C1                  IMUL EAX,ECX
0054D94A  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
0054D94D  EB 02                     JMP 0x0054d951
LAB_0054d94f:
0054D94F  33 C0                     XOR EAX,EAX
LAB_0054d951:
0054D951  85 C0                     TEST EAX,EAX
0054D953  74 04                     JZ 0x0054d959
0054D955  39 38                     CMP dword ptr [EAX],EDI
0054D957  74 07                     JZ 0x0054d960
LAB_0054d959:
0054D959  41                        INC ECX
0054D95A  3B CA                     CMP ECX,EDX
0054D95C  7C E4                     JL 0x0054d942
0054D95E  EB 14                     JMP 0x0054d974
LAB_0054d960:
0054D960  51                        PUSH ECX
0054D961  56                        PUSH ESI
0054D962  E8 09 33 16 00            CALL 0x006b0c70
0054D967  EB 0B                     JMP 0x0054d974
switchD_0054d7be::caseD_33:
0054D969  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054D96C  51                        PUSH ECX
0054D96D  8B CB                     MOV ECX,EBX
0054D96F  E8 6F 6C EB FF            CALL 0x004045e3
switchD_0054d7be::caseD_12:
0054D974  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054D977  85 C0                     TEST EAX,EAX
0054D979  74 09                     JZ 0x0054d984
0054D97B  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054D97E  52                        PUSH EDX
0054D97F  E8 DC D6 15 00            CALL 0x006ab060
LAB_0054d984:
0054D984  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054D987  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0054D98A  40                        INC EAX
0054D98B  3B C1                     CMP EAX,ECX
0054D98D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0054D990  0F 8C E7 FD FF FF         JL 0x0054d77d
0054D996  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0054d999:
0054D999  A1 D8 16 80 00            MOV EAX,[0x008016d8]
0054D99E  85 C0                     TEST EAX,EAX
0054D9A0  74 28                     JZ 0x0054d9ca
0054D9A2  8A 88 9C 00 00 00         MOV CL,byte ptr [EAX + 0x9c]
0054D9A8  84 C9                     TEST CL,CL
0054D9AA  75 1E                     JNZ 0x0054d9ca
0054D9AC  A1 18 76 80 00            MOV EAX,[0x00807618]
0054D9B1  6A 08                     PUSH 0x8
0054D9B3  50                        PUSH EAX
0054D9B4  68 6A 42 00 00            PUSH 0x426a
0054D9B9  E8 82 27 16 00            CALL 0x006b0140
0054D9BE  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054D9C4  50                        PUSH EAX
0054D9C5  E8 0E 3B EB FF            CALL 0x004014d8
LAB_0054d9ca:
0054D9CA  8B 0D FE C4 80 00         MOV ECX,dword ptr [0x0080c4fe]
0054D9D0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0054D9D3  85 C0                     TEST EAX,EAX
0054D9D5  74 12                     JZ 0x0054d9e9
0054D9D7  8B 8B BC 00 00 00         MOV ECX,dword ptr [EBX + 0xbc]
0054D9DD  8B D7                     MOV EDX,EDI
0054D9DF  2B D1                     SUB EDX,ECX
0054D9E1  81 FA 60 EA 00 00         CMP EDX,0xea60
0054D9E7  7C 2B                     JL 0x0054da14
LAB_0054d9e9:
0054D9E9  A1 D8 16 80 00            MOV EAX,[0x008016d8]
0054D9EE  85 C0                     TEST EAX,EAX
0054D9F0  74 1E                     JZ 0x0054da10
0054D9F2  A1 18 76 80 00            MOV EAX,[0x00807618]
0054D9F7  6A 08                     PUSH 0x8
0054D9F9  50                        PUSH EAX
0054D9FA  68 69 42 00 00            PUSH 0x4269
0054D9FF  E8 3C 27 16 00            CALL 0x006b0140
0054DA04  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054DA0A  50                        PUSH EAX
0054DA0B  E8 C8 3A EB FF            CALL 0x004014d8
LAB_0054da10:
0054DA10  C6 43 38 00               MOV byte ptr [EBX + 0x38],0x0
LAB_0054da14:
0054DA14  8A 43 38                  MOV AL,byte ptr [EBX + 0x38]
0054DA17  84 C0                     TEST AL,AL
0054DA19  0F 85 E6 04 00 00         JNZ 0x0054df05
0054DA1F  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
0054DA25  33 C0                     XOR EAX,EAX
0054DA27  84 C9                     TEST CL,CL
0054DA29  0F 86 D6 04 00 00         JBE 0x0054df05
0054DA2F  BE F8 8A 80 00            MOV ESI,0x808af8
0054DA34  EB 03                     JMP 0x0054da39
LAB_0054da36:
0054DA36  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0054da39:
0054DA39  33 C9                     XOR ECX,ECX
0054DA3B  89 3E                     MOV dword ptr [ESI],EDI
0054DA3D  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
0054DA43  40                        INC EAX
0054DA44  81 C6 9C 00 00 00         ADD ESI,0x9c
0054DA4A  3B C1                     CMP EAX,ECX
0054DA4C  7C E8                     JL 0x0054da36
0054DA4E  E9 B2 04 00 00            JMP 0x0054df05
LAB_0054da53:
0054DA53  39 73 59                  CMP dword ptr [EBX + 0x59],ESI
0054DA56  0F 85 51 01 00 00         JNZ 0x0054dbad
0054DA5C  39 35 88 87 80 00         CMP dword ptr [0x00808788],ESI
0054DA62  0F 85 45 01 00 00         JNZ 0x0054dbad
0054DA68  39 B3 E8 00 00 00         CMP dword ptr [EBX + 0xe8],ESI
0054DA6E  0F 84 BC 00 00 00         JZ 0x0054db30
0054DA74  8A 4B 4D                  MOV CL,byte ptr [EBX + 0x4d]
0054DA77  84 C9                     TEST CL,CL
0054DA79  74 67                     JZ 0x0054dae2
0054DA7B  8B 43 3D                  MOV EAX,dword ptr [EBX + 0x3d]
0054DA7E  3B C6                     CMP EAX,ESI
0054DA80  74 2A                     JZ 0x0054daac
0054DA82  88 48 04                  MOV byte ptr [EAX + 0x4],CL
0054DA85  8B 53 3D                  MOV EDX,dword ptr [EBX + 0x3d]
0054DA88  6A 07                     PUSH 0x7
0054DA8A  8B CB                     MOV ECX,EBX
0054DA8C  66 89 72 05               MOV word ptr [EDX + 0x5],SI
0054DA90  8B 43 3D                  MOV EAX,dword ptr [EBX + 0x3d]
0054DA93  50                        PUSH EAX
0054DA94  E8 AA 79 EB FF            CALL 0x00405443
0054DA99  85 C0                     TEST EAX,EAX
0054DA9B  74 0F                     JZ 0x0054daac
0054DA9D  56                        PUSH ESI
0054DA9E  6A 01                     PUSH 0x1
0054DAA0  8B CB                     MOV ECX,EBX
0054DAA2  E8 46 7F EB FF            CALL 0x004059ed
0054DAA7  E9 A6 05 00 00            JMP 0x0054e052
LAB_0054daac:
0054DAAC  6A FF                     PUSH -0x1
0054DAAE  56                        PUSH ESI
0054DAAF  56                        PUSH ESI
0054DAB0  C6 43 4D 00               MOV byte ptr [EBX + 0x4d],0x0
0054DAB4  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054DABA  56                        PUSH ESI
0054DABB  6A 34                     PUSH 0x34
0054DABD  56                        PUSH ESI
0054DABE  51                        PUSH ECX
0054DABF  E8 9C 78 1C 00            CALL 0x00715360
0054DAC4  83 C4 1C                  ADD ESP,0x1c
0054DAC7  85 C0                     TEST EAX,EAX
0054DAC9  74 0F                     JZ 0x0054dada
0054DACB  56                        PUSH ESI
0054DACC  6A 02                     PUSH 0x2
0054DACE  8B CB                     MOV ECX,EBX
0054DAD0  E8 18 7F EB FF            CALL 0x004059ed
0054DAD5  E9 78 05 00 00            JMP 0x0054e052
LAB_0054dada:
0054DADA  89 7B 30                  MOV dword ptr [EBX + 0x30],EDI
0054DADD  E9 23 04 00 00            JMP 0x0054df05
LAB_0054dae2:
0054DAE2  2B 7B 30                  SUB EDI,dword ptr [EBX + 0x30]
0054DAE5  81 FF 30 75 00 00         CMP EDI,0x7530
0054DAEB  7F 15                     JG 0x0054db02
0054DAED  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DAF3  52                        PUSH EDX
0054DAF4  E8 47 96 16 00            CALL 0x006b7140
0054DAF9  83 F8 01                  CMP EAX,0x1
0054DAFC  0F 8F 03 04 00 00         JG 0x0054df05
LAB_0054db02:
0054DB02  B9 08 00 00 00            MOV ECX,0x8
0054DB07  33 C0                     XOR EAX,EAX
0054DB09  8D 7D A0                  LEA EDI,[EBP + -0x60]
0054DB0C  F3 AB                     STOSD.REP ES:EDI
0054DB0E  A1 26 C5 80 00            MOV EAX,[0x0080c526]
0054DB13  8D 4D A0                  LEA ECX,[EBP + -0x60]
0054DB16  51                        PUSH ECX
0054DB17  B9 20 76 80 00            MOV ECX,0x807620
0054DB1C  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
0054DB23  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0054DB26  E8 85 5F 19 00            CALL 0x006e3ab0
0054DB2B  E9 D5 03 00 00            JMP 0x0054df05
LAB_0054db30:
0054DB30  39 B3 EC 00 00 00         CMP dword ptr [EBX + 0xec],ESI
0054DB36  74 2C                     JZ 0x0054db64
0054DB38  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
0054DB3B  8B D7                     MOV EDX,EDI
0054DB3D  2B D1                     SUB EDX,ECX
0054DB3F  81 FA E8 03 00 00         CMP EDX,0x3e8
0054DB45  7E 1D                     JLE 0x0054db64
0054DB47  A1 64 17 81 00            MOV EAX,[0x00811764]
0054DB4C  50                        PUSH EAX
0054DB4D  E8 EE 95 16 00            CALL 0x006b7140
0054DB52  83 F8 01                  CMP EAX,0x1
0054DB55  7F 0A                     JG 0x0054db61
0054DB57  C7 83 E8 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xe8],0x1
LAB_0054db61:
0054DB61  89 7B 30                  MOV dword ptr [EBX + 0x30],EDI
LAB_0054db64:
0054DB64  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
0054DB67  49                        DEC ECX
0054DB68  8B C1                     MOV EAX,ECX
0054DB6A  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
0054DB6D  3B C6                     CMP EAX,ESI
0054DB6F  0F 8F 90 03 00 00         JG 0x0054df05
0054DB75  33 C0                     XOR EAX,EAX
0054DB77  A0 3B 73 80 00            MOV AL,[0x0080733b]
0054DB7C  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0054DB7F  8B 14 CD E4 2A 7C 00      MOV EDX,dword ptr [ECX*0x8 + 0x7c2ae4]
0054DB86  8B CB                     MOV ECX,EBX
0054DB88  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
0054DB8B  E8 85 6F EB FF            CALL 0x00404b15
0054DB90  8B CB                     MOV ECX,EBX
0054DB92  E8 BA 42 EB FF            CALL 0x00401e51
0054DB97  8B CB                     MOV ECX,EBX
0054DB99  E8 B0 3B EB FF            CALL 0x0040174e
0054DB9E  8B CB                     MOV ECX,EBX
0054DBA0  E8 EB 81 19 00            CALL 0x006e5d90
0054DBA5  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
0054DBA8  E9 58 03 00 00            JMP 0x0054df05
LAB_0054dbad:
0054DBAD  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054DBB3  33 FF                     XOR EDI,EDI
0054DBB5  57                        PUSH EDI
0054DBB6  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054DBB9  6A FF                     PUSH -0x1
0054DBBB  50                        PUSH EAX
0054DBBC  6A 42                     PUSH 0x42
0054DBBE  51                        PUSH ECX
0054DBBF  E8 4C 99 16 00            CALL 0x006b7510
0054DBC4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DBC7  33 F6                     XOR ESI,ESI
0054DBC9  3B C7                     CMP EAX,EDI
0054DBCB  7E 45                     JLE 0x0054dc12
LAB_0054dbcd:
0054DBCD  57                        PUSH EDI
0054DBCE  6A FF                     PUSH -0x1
0054DBD0  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DBD3  57                        PUSH EDI
0054DBD4  8D 45 F4                  LEA EAX,[EBP + -0xc]
0054DBD7  52                        PUSH EDX
0054DBD8  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DBDE  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054DBE1  50                        PUSH EAX
0054DBE2  51                        PUSH ECX
0054DBE3  6A 42                     PUSH 0x42
0054DBE5  52                        PUSH EDX
0054DBE6  E8 45 7A 1C 00            CALL 0x00715630
0054DBEB  83 C4 20                  ADD ESP,0x20
0054DBEE  83 F8 B3                  CMP EAX,-0x4d
0054DBF1  0F 84 B6 03 00 00         JZ 0x0054dfad
0054DBF7  83 F8 01                  CMP EAX,0x1
0054DBFA  75 0E                     JNZ 0x0054dc0a
0054DBFC  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054DBFF  74 09                     JZ 0x0054dc0a
0054DC01  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054DC04  50                        PUSH EAX
0054DC05  E8 56 D4 15 00            CALL 0x006ab060
LAB_0054dc0a:
0054DC0A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DC0D  46                        INC ESI
0054DC0E  3B F0                     CMP ESI,EAX
0054DC10  7C BB                     JL 0x0054dbcd
LAB_0054dc12:
0054DC12  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DC18  57                        PUSH EDI
0054DC19  8D 4D F8                  LEA ECX,[EBP + -0x8]
0054DC1C  6A FF                     PUSH -0x1
0054DC1E  51                        PUSH ECX
0054DC1F  6A 43                     PUSH 0x43
0054DC21  52                        PUSH EDX
0054DC22  E8 E9 98 16 00            CALL 0x006b7510
0054DC27  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DC2A  33 F6                     XOR ESI,ESI
0054DC2C  3B C7                     CMP EAX,EDI
0054DC2E  7E 51                     JLE 0x0054dc81
LAB_0054dc30:
0054DC30  57                        PUSH EDI
0054DC31  6A FF                     PUSH -0x1
0054DC33  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054DC36  57                        PUSH EDI
0054DC37  8D 4D F4                  LEA ECX,[EBP + -0xc]
0054DC3A  50                        PUSH EAX
0054DC3B  A1 64 17 81 00            MOV EAX,[0x00811764]
0054DC40  8D 55 F0                  LEA EDX,[EBP + -0x10]
0054DC43  51                        PUSH ECX
0054DC44  52                        PUSH EDX
0054DC45  6A 43                     PUSH 0x43
0054DC47  50                        PUSH EAX
0054DC48  E8 E3 79 1C 00            CALL 0x00715630
0054DC4D  83 C4 20                  ADD ESP,0x20
0054DC50  83 F8 B3                  CMP EAX,-0x4d
0054DC53  0F 84 54 03 00 00         JZ 0x0054dfad
0054DC59  83 F8 01                  CMP EAX,0x1
0054DC5C  75 1B                     JNZ 0x0054dc79
0054DC5E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0054DC61  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
0054DC64  3B C8                     CMP ECX,EAX
0054DC66  75 03                     JNZ 0x0054dc6b
0054DC68  89 7B 59                  MOV dword ptr [EBX + 0x59],EDI
LAB_0054dc6b:
0054DC6B  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054DC6E  74 09                     JZ 0x0054dc79
0054DC70  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DC73  52                        PUSH EDX
0054DC74  E8 E7 D3 15 00            CALL 0x006ab060
LAB_0054dc79:
0054DC79  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DC7C  46                        INC ESI
0054DC7D  3B F0                     CMP ESI,EAX
0054DC7F  7C AF                     JL 0x0054dc30
LAB_0054dc81:
0054DC81  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054DC87  57                        PUSH EDI
0054DC88  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054DC8B  6A FF                     PUSH -0x1
0054DC8D  50                        PUSH EAX
0054DC8E  6A 33                     PUSH 0x33
0054DC90  51                        PUSH ECX
0054DC91  E8 7A 98 16 00            CALL 0x006b7510
0054DC96  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DC99  33 F6                     XOR ESI,ESI
0054DC9B  3B C7                     CMP EAX,EDI
0054DC9D  7E 4F                     JLE 0x0054dcee
LAB_0054dc9f:
0054DC9F  57                        PUSH EDI
0054DCA0  6A FF                     PUSH -0x1
0054DCA2  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DCA5  57                        PUSH EDI
0054DCA6  8D 45 F4                  LEA EAX,[EBP + -0xc]
0054DCA9  52                        PUSH EDX
0054DCAA  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DCB0  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054DCB3  50                        PUSH EAX
0054DCB4  51                        PUSH ECX
0054DCB5  6A 33                     PUSH 0x33
0054DCB7  52                        PUSH EDX
0054DCB8  E8 73 79 1C 00            CALL 0x00715630
0054DCBD  83 C4 20                  ADD ESP,0x20
0054DCC0  83 F8 B3                  CMP EAX,-0x4d
0054DCC3  0F 84 E4 02 00 00         JZ 0x0054dfad
0054DCC9  83 F8 01                  CMP EAX,0x1
0054DCCC  75 18                     JNZ 0x0054dce6
0054DCCE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054DCD1  3B C7                     CMP EAX,EDI
0054DCD3  74 11                     JZ 0x0054dce6
0054DCD5  50                        PUSH EAX
0054DCD6  8B CB                     MOV ECX,EBX
0054DCD8  E8 06 69 EB FF            CALL 0x004045e3
0054DCDD  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054DCE0  50                        PUSH EAX
0054DCE1  E8 7A D3 15 00            CALL 0x006ab060
LAB_0054dce6:
0054DCE6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DCE9  46                        INC ESI
0054DCEA  3B F0                     CMP ESI,EAX
0054DCEC  7C B1                     JL 0x0054dc9f
LAB_0054dcee:
0054DCEE  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DCF4  57                        PUSH EDI
0054DCF5  8D 4D F8                  LEA ECX,[EBP + -0x8]
0054DCF8  6A FF                     PUSH -0x1
0054DCFA  51                        PUSH ECX
0054DCFB  6A 35                     PUSH 0x35
0054DCFD  52                        PUSH EDX
0054DCFE  E8 0D 98 16 00            CALL 0x006b7510
0054DD03  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DD06  33 F6                     XOR ESI,ESI
0054DD08  3B C7                     CMP EAX,EDI
0054DD0A  7E 50                     JLE 0x0054dd5c
LAB_0054dd0c:
0054DD0C  57                        PUSH EDI
0054DD0D  6A FF                     PUSH -0x1
0054DD0F  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054DD12  57                        PUSH EDI
0054DD13  8D 4D F4                  LEA ECX,[EBP + -0xc]
0054DD16  50                        PUSH EAX
0054DD17  A1 64 17 81 00            MOV EAX,[0x00811764]
0054DD1C  8D 55 F0                  LEA EDX,[EBP + -0x10]
0054DD1F  51                        PUSH ECX
0054DD20  52                        PUSH EDX
0054DD21  6A 35                     PUSH 0x35
0054DD23  50                        PUSH EAX
0054DD24  E8 07 79 1C 00            CALL 0x00715630
0054DD29  83 C4 20                  ADD ESP,0x20
0054DD2C  83 F8 B3                  CMP EAX,-0x4d
0054DD2F  0F 84 78 02 00 00         JZ 0x0054dfad
0054DD35  83 F8 01                  CMP EAX,0x1
0054DD38  75 1A                     JNZ 0x0054dd54
0054DD3A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0054DD3D  50                        PUSH EAX
0054DD3E  51                        PUSH ECX
0054DD3F  8B CB                     MOV ECX,EBX
0054DD41  E8 3E 36 EB FF            CALL 0x00401384
0054DD46  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054DD49  74 09                     JZ 0x0054dd54
0054DD4B  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DD4E  52                        PUSH EDX
0054DD4F  E8 0C D3 15 00            CALL 0x006ab060
LAB_0054dd54:
0054DD54  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DD57  46                        INC ESI
0054DD58  3B F0                     CMP ESI,EAX
0054DD5A  7C B0                     JL 0x0054dd0c
LAB_0054dd5c:
0054DD5C  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054DD62  57                        PUSH EDI
0054DD63  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054DD66  6A FF                     PUSH -0x1
0054DD68  50                        PUSH EAX
0054DD69  6A 36                     PUSH 0x36
0054DD6B  51                        PUSH ECX
0054DD6C  E8 9F 97 16 00            CALL 0x006b7510
0054DD71  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DD74  33 F6                     XOR ESI,ESI
0054DD76  3B C7                     CMP EAX,EDI
0054DD78  7E 49                     JLE 0x0054ddc3
LAB_0054dd7a:
0054DD7A  57                        PUSH EDI
0054DD7B  6A FF                     PUSH -0x1
0054DD7D  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DD80  57                        PUSH EDI
0054DD81  8D 45 F4                  LEA EAX,[EBP + -0xc]
0054DD84  52                        PUSH EDX
0054DD85  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DD8B  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054DD8E  50                        PUSH EAX
0054DD8F  51                        PUSH ECX
0054DD90  6A 36                     PUSH 0x36
0054DD92  52                        PUSH EDX
0054DD93  E8 98 78 1C 00            CALL 0x00715630
0054DD98  83 C4 20                  ADD ESP,0x20
0054DD9B  48                        DEC EAX
0054DD9C  75 1D                     JNZ 0x0054ddbb
0054DD9E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054DDA1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0054DDA4  50                        PUSH EAX
0054DDA5  51                        PUSH ECX
0054DDA6  8B CB                     MOV ECX,EBX
0054DDA8  E8 A9 36 EB FF            CALL 0x00401456
0054DDAD  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054DDB0  74 09                     JZ 0x0054ddbb
0054DDB2  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DDB5  52                        PUSH EDX
0054DDB6  E8 A5 D2 15 00            CALL 0x006ab060
LAB_0054ddbb:
0054DDBB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DDBE  46                        INC ESI
0054DDBF  3B F0                     CMP ESI,EAX
0054DDC1  7C B7                     JL 0x0054dd7a
LAB_0054ddc3:
0054DDC3  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054DDC9  57                        PUSH EDI
0054DDCA  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054DDCD  6A FF                     PUSH -0x1
0054DDCF  50                        PUSH EAX
0054DDD0  6A 11                     PUSH 0x11
0054DDD2  51                        PUSH ECX
0054DDD3  E8 38 97 16 00            CALL 0x006b7510
0054DDD8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DDDB  33 F6                     XOR ESI,ESI
0054DDDD  3B C7                     CMP EAX,EDI
0054DDDF  7E 63                     JLE 0x0054de44
LAB_0054dde1:
0054DDE1  57                        PUSH EDI
0054DDE2  6A FF                     PUSH -0x1
0054DDE4  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DDE7  57                        PUSH EDI
0054DDE8  8D 45 F4                  LEA EAX,[EBP + -0xc]
0054DDEB  52                        PUSH EDX
0054DDEC  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DDF2  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054DDF5  50                        PUSH EAX
0054DDF6  51                        PUSH ECX
0054DDF7  6A 11                     PUSH 0x11
0054DDF9  52                        PUSH EDX
0054DDFA  E8 31 78 1C 00            CALL 0x00715630
0054DDFF  83 C4 20                  ADD ESP,0x20
0054DE02  83 F8 B3                  CMP EAX,-0x4d
0054DE05  0F 84 A2 01 00 00         JZ 0x0054dfad
0054DE0B  83 F8 01                  CMP EAX,0x1
0054DE0E  75 2C                     JNZ 0x0054de3c
0054DE10  50                        PUSH EAX
0054DE11  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054DE14  68 6F 42 00 00            PUSH 0x426f
0054DE19  50                        PUSH EAX
0054DE1A  8B CB                     MOV ECX,EBX
0054DE1C  E8 66 41 EB FF            CALL 0x00401f87
0054DE21  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0054DE24  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
0054DE27  3B C8                     CMP ECX,EAX
0054DE29  75 03                     JNZ 0x0054de2e
0054DE2B  89 7B 59                  MOV dword ptr [EBX + 0x59],EDI
LAB_0054de2e:
0054DE2E  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054DE31  74 09                     JZ 0x0054de3c
0054DE33  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DE36  52                        PUSH EDX
0054DE37  E8 24 D2 15 00            CALL 0x006ab060
LAB_0054de3c:
0054DE3C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DE3F  46                        INC ESI
0054DE40  3B F0                     CMP ESI,EAX
0054DE42  7C 9D                     JL 0x0054dde1
LAB_0054de44:
0054DE44  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054DE4A  57                        PUSH EDI
0054DE4B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054DE4E  6A FF                     PUSH -0x1
0054DE50  50                        PUSH EAX
0054DE51  6A 13                     PUSH 0x13
0054DE53  51                        PUSH ECX
0054DE54  E8 B7 96 16 00            CALL 0x006b7510
0054DE59  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DE5C  33 F6                     XOR ESI,ESI
0054DE5E  3B C7                     CMP EAX,EDI
0054DE60  7E 75                     JLE 0x0054ded7
LAB_0054de62:
0054DE62  57                        PUSH EDI
0054DE63  6A FF                     PUSH -0x1
0054DE65  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054DE68  57                        PUSH EDI
0054DE69  8D 45 F4                  LEA EAX,[EBP + -0xc]
0054DE6C  52                        PUSH EDX
0054DE6D  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054DE73  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054DE76  50                        PUSH EAX
0054DE77  51                        PUSH ECX
0054DE78  6A 13                     PUSH 0x13
0054DE7A  52                        PUSH EDX
0054DE7B  E8 B0 77 1C 00            CALL 0x00715630
0054DE80  83 C4 20                  ADD ESP,0x20
0054DE83  83 F8 B3                  CMP EAX,-0x4d
0054DE86  0F 84 21 01 00 00         JZ 0x0054dfad
0054DE8C  83 F8 01                  CMP EAX,0x1
0054DE8F  75 3E                     JNZ 0x0054decf
0054DE91  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054DE94  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
0054DE97  3B C1                     CMP EAX,ECX
0054DE99  75 03                     JNZ 0x0054de9e
0054DE9B  89 7B 59                  MOV dword ptr [EBX + 0x59],EDI
LAB_0054de9e:
0054DE9E  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054DEA1  74 09                     JZ 0x0054deac
0054DEA3  8D 4D FC                  LEA ECX,[EBP + -0x4]
0054DEA6  51                        PUSH ECX
0054DEA7  E8 B4 D1 15 00            CALL 0x006ab060
LAB_0054deac:
0054DEAC  39 BB EC 00 00 00         CMP dword ptr [EBX + 0xec],EDI
0054DEB2  74 1B                     JZ 0x0054decf
0054DEB4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0054DEB7  57                        PUSH EDI
0054DEB8  68 74 42 00 00            PUSH 0x4274
0054DEBD  52                        PUSH EDX
0054DEBE  8B CB                     MOV ECX,EBX
0054DEC0  E8 C2 40 EB FF            CALL 0x00401f87
0054DEC5  C7 83 E8 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xe8],0x1
LAB_0054decf:
0054DECF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054DED2  46                        INC ESI
0054DED3  3B F0                     CMP ESI,EAX
0054DED5  7C 8B                     JL 0x0054de62
LAB_0054ded7:
0054DED7  39 7B 59                  CMP dword ptr [EBX + 0x59],EDI
0054DEDA  74 29                     JZ 0x0054df05
0054DEDC  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
0054DEDF  41                        INC ECX
0054DEE0  8B C1                     MOV EAX,ECX
0054DEE2  89 4B 5D                  MOV dword ptr [EBX + 0x5d],ECX
0054DEE5  3D D0 07 00 00            CMP EAX,0x7d0
0054DEEA  76 19                     JBE 0x0054df05
0054DEEC  A1 64 17 81 00            MOV EAX,[0x00811764]
0054DEF1  6A FF                     PUSH -0x1
0054DEF3  57                        PUSH EDI
0054DEF4  57                        PUSH EDI
0054DEF5  57                        PUSH EDI
0054DEF6  6A 44                     PUSH 0x44
0054DEF8  57                        PUSH EDI
0054DEF9  50                        PUSH EAX
0054DEFA  E8 61 74 1C 00            CALL 0x00715360
0054DEFF  83 C4 1C                  ADD ESP,0x1c
0054DF02  89 7B 59                  MOV dword ptr [EBX + 0x59],EDI
LAB_0054df05:
0054DF05  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054DF0C  0F 85 1D 01 00 00         JNZ 0x0054e02f
0054DF12  A1 88 87 80 00            MOV EAX,[0x00808788]
0054DF17  85 C0                     TEST EAX,EAX
0054DF19  0F 85 10 01 00 00         JNZ 0x0054e02f
0054DF1F  8B 83 E8 00 00 00         MOV EAX,dword ptr [EBX + 0xe8]
0054DF25  85 C0                     TEST EAX,EAX
0054DF27  0F 85 02 01 00 00         JNZ 0x0054e02f
0054DF2D  8A 43 38                  MOV AL,byte ptr [EBX + 0x38]
0054DF30  84 C0                     TEST AL,AL
0054DF32  0F 85 F7 00 00 00         JNZ 0x0054e02f
0054DF38  8B 43 59                  MOV EAX,dword ptr [EBX + 0x59]
0054DF3B  85 C0                     TEST EAX,EAX
0054DF3D  0F 85 EC 00 00 00         JNZ 0x0054e02f
0054DF43  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054DF48  33 FF                     XOR EDI,EDI
0054DF4A  84 C0                     TEST AL,AL
0054DF4C  0F 86 DD 00 00 00         JBE 0x0054e02f
0054DF52  BE F0 8A 80 00            MOV ESI,0x808af0
LAB_0054df57:
0054DF57  8D 4E C0                  LEA ECX,[ESI + -0x40]
0054DF5A  85 C9                     TEST ECX,ECX
0054DF5C  74 38                     JZ 0x0054df96
0054DF5E  8B 06                     MOV EAX,dword ptr [ESI]
0054DF60  85 C0                     TEST EAX,EAX
0054DF62  76 32                     JBE 0x0054df96
0054DF64  3B 05 7F 87 80 00         CMP EAX,dword ptr [0x0080877f]
0054DF6A  74 2A                     JZ 0x0054df96
0054DF6C  8A 46 06                  MOV AL,byte ptr [ESI + 0x6]
0054DF6F  84 C0                     TEST AL,AL
0054DF71  74 23                     JZ 0x0054df96
0054DF73  33 D2                     XOR EDX,EDX
0054DF75  8A 56 04                  MOV DL,byte ptr [ESI + 0x4]
0054DF78  8A 82 50 99 80 00         MOV AL,byte ptr [EDX + 0x809950]
0054DF7E  84 C0                     TEST AL,AL
0054DF80  75 14                     JNZ 0x0054df96
0054DF82  B9 20 76 80 00            MOV ECX,0x807620
0054DF87  E8 24 72 19 00            CALL 0x006e51b0
0054DF8C  2B 46 08                  SUB EAX,dword ptr [ESI + 0x8]
0054DF8F  3D 30 75 00 00            CMP EAX,0x7530
0054DF94  7F 26                     JG 0x0054dfbc
LAB_0054df96:
0054DF96  33 C0                     XOR EAX,EAX
0054DF98  47                        INC EDI
0054DF99  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054DF9E  81 C6 9C 00 00 00         ADD ESI,0x9c
0054DFA4  3B F8                     CMP EDI,EAX
0054DFA6  7C AF                     JL 0x0054df57
0054DFA8  E9 82 00 00 00            JMP 0x0054e02f
LAB_0054dfad:
0054DFAD  57                        PUSH EDI
0054DFAE  6A 03                     PUSH 0x3
0054DFB0  8B CB                     MOV ECX,EBX
0054DFB2  E8 36 7A EB FF            CALL 0x004059ed
0054DFB7  E9 96 00 00 00            JMP 0x0054e052
LAB_0054dfbc:
0054DFBC  8B 36                     MOV ESI,dword ptr [ESI]
0054DFBE  8B 83 F4 00 00 00         MOV EAX,dword ptr [EBX + 0xf4]
0054DFC4  3B F0                     CMP ESI,EAX
0054DFC6  74 67                     JZ 0x0054e02f
0054DFC8  56                        PUSH ESI
0054DFC9  8B CB                     MOV ECX,EBX
0054DFCB  E8 62 3F EB FF            CALL 0x00401f32
0054DFD0  EB 5D                     JMP 0x0054e02f
LAB_0054dfd2:
0054DFD2  8B CB                     MOV ECX,EBX
0054DFD4  E8 78 3E EB FF            CALL 0x00401e51
0054DFD9  8B CB                     MOV ECX,EBX
0054DFDB  E8 6E 37 EB FF            CALL 0x0040174e
0054DFE0  8A 43 38                  MOV AL,byte ptr [EBX + 0x38]
0054DFE3  84 C0                     TEST AL,AL
0054DFE5  74 32                     JZ 0x0054e019
0054DFE7  A1 D8 16 80 00            MOV EAX,[0x008016d8]
0054DFEC  3B C6                     CMP EAX,ESI
0054DFEE  74 29                     JZ 0x0054e019
0054DFF0  8A 88 9C 00 00 00         MOV CL,byte ptr [EAX + 0x9c]
0054DFF6  84 C9                     TEST CL,CL
0054DFF8  75 1F                     JNZ 0x0054e019
0054DFFA  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0054E000  6A 08                     PUSH 0x8
0054E002  51                        PUSH ECX
0054E003  68 75 42 00 00            PUSH 0x4275
0054E008  E8 33 21 16 00            CALL 0x006b0140
0054E00D  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054E013  50                        PUSH EAX
0054E014  E8 BF 34 EB FF            CALL 0x004014d8
LAB_0054e019:
0054E019  39 73 28                  CMP dword ptr [EBX + 0x28],ESI
0054E01C  74 0E                     JZ 0x0054e02c
0054E01E  8B CB                     MOV ECX,EBX
0054E020  E8 6B 7D 19 00            CALL 0x006e5d90
0054E025  8B CB                     MOV ECX,EBX
0054E027  E8 F4 73 EB FF            CALL 0x00405420
LAB_0054e02c:
0054E02C  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
LAB_0054e02f:
0054E02F  A1 94 87 80 00            MOV EAX,[0x00808794]
0054E034  85 C0                     TEST EAX,EAX
0054E036  74 1A                     JZ 0x0054e052
0054E038  6A 00                     PUSH 0x0
0054E03A  6A 00                     PUSH 0x0
0054E03C  6A 00                     PUSH 0x0
0054E03E  B9 20 76 80 00            MOV ECX,0x807620
0054E043  E8 2E 5A EB FF            CALL 0x00403a76
0054E048  C7 05 94 87 80 00 00 00 00 00  MOV dword ptr [0x00808794],0x0
LAB_0054e052:
0054E052  A0 4D 87 80 00            MOV AL,[0x0080874d]
0054E057  3C 08                     CMP AL,0x8
0054E059  0F 83 E3 00 00 00         JNC 0x0054e142
0054E05F  33 D2                     XOR EDX,EDX
0054E061  8A D0                     MOV DL,AL
0054E063  8A 82 50 99 80 00         MOV AL,byte ptr [EDX + 0x809950]
0054E069  84 C0                     TEST AL,AL
0054E06B  0F 86 D1 00 00 00         JBE 0x0054e142
0054E071  B9 08 00 00 00            MOV ECX,0x8
0054E076  33 C0                     XOR EAX,EAX
0054E078  8D 7D C0                  LEA EDI,[EBP + -0x40]
0054E07B  BE 01 00 00 00            MOV ESI,0x1
0054E080  F3 AB                     STOSD.REP ES:EDI
0054E082  B8 08 61 00 00            MOV EAX,0x6108
0054E087  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
0054E08A  A3 26 C5 80 00            MOV [0x0080c526],EAX
0054E08F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0054E092  A1 A0 87 80 00            MOV EAX,[0x008087a0]
0054E097  25 FF 00 00 00            AND EAX,0xff
0054E09C  48                        DEC EAX
0054E09D  83 F8 12                  CMP EAX,0x12
0054E0A0  0F 87 9C 00 00 00         JA 0x0054e142
0054E0A6  33 C9                     XOR ECX,ECX
0054E0A8  8A 88 EC E1 54 00         MOV CL,byte ptr [EAX + 0x54e1ec]
switchD_0054e0ae::switchD:
0054E0AE  FF 24 8D E0 E1 54 00      JMP dword ptr [ECX*0x4 + 0x54e1e0]
switchD_0054e0ae::caseD_1:
0054E0B5  8D 55 C0                  LEA EDX,[EBP + -0x40]
0054E0B8  52                        PUSH EDX
0054E0B9  EB 7D                     JMP 0x0054e138
switchD_0054e0ae::caseD_4:
0054E0BB  A0 7E 87 80 00            MOV AL,[0x0080877e]
0054E0C0  84 C0                     TEST AL,AL
0054E0C2  74 59                     JZ 0x0054e11d
0054E0C4  8B 83 E8 00 00 00         MOV EAX,dword ptr [EBX + 0xe8]
0054E0CA  85 C0                     TEST EAX,EAX
0054E0CC  75 10                     JNZ 0x0054e0de
0054E0CE  8B 83 EC 00 00 00         MOV EAX,dword ptr [EBX + 0xec]
0054E0D4  85 C0                     TEST EAX,EAX
0054E0D6  75 06                     JNZ 0x0054e0de
0054E0D8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0054E0DB  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
LAB_0054e0de:
0054E0DE  A1 22 C5 80 00            MOV EAX,[0x0080c522]
0054E0E3  85 C0                     TEST EAX,EAX
0054E0E5  74 1B                     JZ 0x0054e102
0054E0E7  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
0054E0ED  89 B3 E8 00 00 00         MOV dword ptr [EBX + 0xe8],ESI
0054E0F3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054E0F9  33 C0                     XOR EAX,EAX
0054E0FB  5F                        POP EDI
0054E0FC  5E                        POP ESI
0054E0FD  5B                        POP EBX
0054E0FE  8B E5                     MOV ESP,EBP
0054E100  5D                        POP EBP
0054E101  C3                        RET
LAB_0054e102:
0054E102  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
0054E108  89 B3 EC 00 00 00         MOV dword ptr [EBX + 0xec],ESI
0054E10E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054E114  33 C0                     XOR EAX,EAX
0054E116  5F                        POP EDI
0054E117  5E                        POP ESI
0054E118  5B                        POP EBX
0054E119  8B E5                     MOV ESP,EBP
0054E11B  5D                        POP EBP
0054E11C  C3                        RET
LAB_0054e11d:
0054E11D  A1 22 C5 80 00            MOV EAX,[0x0080c522]
0054E122  85 C0                     TEST EAX,EAX
0054E124  74 08                     JZ 0x0054e12e
0054E126  89 35 0E C5 80 00         MOV dword ptr [0x0080c50e],ESI
0054E12C  EB 06                     JMP 0x0054e134
LAB_0054e12e:
0054E12E  89 35 0A C5 80 00         MOV dword ptr [0x0080c50a],ESI
LAB_0054e134:
0054E134  8D 4D C0                  LEA ECX,[EBP + -0x40]
0054E137  51                        PUSH ECX
LAB_0054e138:
0054E138  B9 20 76 80 00            MOV ECX,0x807620
0054E13D  E8 6E 59 19 00            CALL 0x006e3ab0
switchD_0054e0ae::caseD_9:
0054E142  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
0054E148  33 C0                     XOR EAX,EAX
0054E14A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054E150  5F                        POP EDI
0054E151  5E                        POP ESI
0054E152  5B                        POP EBX
0054E153  8B E5                     MOV ESP,EBP
0054E155  5D                        POP EBP
0054E156  C3                        RET
LAB_0054e157:
0054E157  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
0054E15D  68 3C 85 7C 00            PUSH 0x7c853c
0054E162  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054E167  56                        PUSH ESI
0054E168  6A 00                     PUSH 0x0
0054E16A  68 11 04 00 00            PUSH 0x411
0054E16F  68 30 84 7C 00            PUSH 0x7c8430
0054E174  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054E179  E8 52 F3 15 00            CALL 0x006ad4d0
0054E17E  83 C4 18                  ADD ESP,0x18
0054E181  85 C0                     TEST EAX,EAX
0054E183  74 01                     JZ 0x0054e186
0054E185  CC                        INT3
LAB_0054e186:
0054E186  68 12 04 00 00            PUSH 0x412
0054E18B  68 30 84 7C 00            PUSH 0x7c8430
0054E190  6A 00                     PUSH 0x0
0054E192  56                        PUSH ESI
0054E193  E8 A8 7C 15 00            CALL 0x006a5e40
0054E198  5F                        POP EDI
0054E199  5E                        POP ESI
0054E19A  83 C8 FF                  OR EAX,0xffffffff
0054E19D  5B                        POP EBX
0054E19E  8B E5                     MOV ESP,EBP
0054E1A0  5D                        POP EBP
0054E1A1  C3                        RET
