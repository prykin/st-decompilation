STBoatC::ToDok:
0046F5C0  55                        PUSH EBP
0046F5C1  8B EC                     MOV EBP,ESP
0046F5C3  83 EC 24                  SUB ESP,0x24
0046F5C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046F5C9  53                        PUSH EBX
0046F5CA  56                        PUSH ESI
0046F5CB  57                        PUSH EDI
0046F5CC  33 FF                     XOR EDI,EDI
0046F5CE  8B F1                     MOV ESI,ECX
0046F5D0  3B C7                     CMP EAX,EDI
0046F5D2  0F 84 17 17 00 00         JZ 0x00470cef
0046F5D8  BB 01 00 00 00            MOV EBX,0x1
0046F5DD  3B C3                     CMP EAX,EBX
0046F5DF  0F 84 0A 17 00 00         JZ 0x00470cef
0046F5E5  8B 86 80 05 00 00         MOV EAX,dword ptr [ESI + 0x580]
0046F5EB  3B C7                     CMP EAX,EDI
0046F5ED  0F 85 BD 02 00 00         JNZ 0x0046f8b0
0046F5F3  6A 02                     PUSH 0x2
0046F5F5  E8 E4 3B F9 FF            CALL 0x004031de
0046F5FA  40                        INC EAX
0046F5FB  83 F8 04                  CMP EAX,0x4
0046F5FE  0F 87 B3 11 00 00         JA 0x004707b7
switchD_0046f604::switchD:
0046F604  FF 24 85 50 0E 47 00      JMP dword ptr [EAX*0x4 + 0x470e50]
switchD_0046f604::caseD_ffffffff:
0046F60B  68 3C AC 7A 00            PUSH 0x7aac3c
0046F610  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F615  6A 00                     PUSH 0x0
0046F617  6A 00                     PUSH 0x0
0046F619  68 AC 28 00 00            PUSH 0x28ac
0046F61E  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F623  E8 A8 DE 23 00            CALL 0x006ad4d0
0046F628  83 C4 18                  ADD ESP,0x18
0046F62B  85 C0                     TEST EAX,EAX
0046F62D  74 01                     JZ 0x0046f630
0046F62F  CC                        INT3
LAB_0046f630:
0046F630  68 AC 28 00 00            PUSH 0x28ac
0046F635  E9 0C 16 00 00            JMP 0x00470c46
switchD_0046f604::caseD_0:
0046F63A  39 9E 64 05 00 00         CMP dword ptr [ESI + 0x564],EBX
0046F640  75 28                     JNZ 0x0046f66a
0046F642  0F BF 8E 58 05 00 00      MOVSX ECX,word ptr [ESI + 0x558]
0046F649  0F BF 96 56 05 00 00      MOVSX EDX,word ptr [ESI + 0x556]
0046F650  0F BF 86 54 05 00 00      MOVSX EAX,word ptr [ESI + 0x554]
0046F657  41                        INC ECX
0046F658  C7 86 64 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x564],0x0
0046F662  51                        PUSH ECX
0046F663  52                        PUSH EDX
0046F664  50                        PUSH EAX
0046F665  E9 2E 05 00 00            JMP 0x0046fb98
LAB_0046f66a:
0046F66A  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046F671  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046F678  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046F67F  66 85 C0                  TEST AX,AX
0046F682  7C 55                     JL 0x0046f6d9
0046F684  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046F68B  66 3B C7                  CMP AX,DI
0046F68E  7D 49                     JGE 0x0046f6d9
0046F690  66 85 D2                  TEST DX,DX
0046F693  7C 44                     JL 0x0046f6d9
0046F695  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046F69C  7D 3B                     JGE 0x0046f6d9
0046F69E  66 85 C9                  TEST CX,CX
0046F6A1  7C 36                     JL 0x0046f6d9
0046F6A3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046F6AA  7D 2D                     JGE 0x0046f6d9
0046F6AC  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046F6B3  0F BF C9                  MOVSX ECX,CX
0046F6B6  0F BF D2                  MOVSX EDX,DX
0046F6B9  0F AF CB                  IMUL ECX,EBX
0046F6BC  0F BF FF                  MOVSX EDI,DI
0046F6BF  0F AF D7                  IMUL EDX,EDI
0046F6C2  0F BF C0                  MOVSX EAX,AX
0046F6C5  03 CA                     ADD ECX,EDX
0046F6C7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046F6CD  03 C8                     ADD ECX,EAX
0046F6CF  BB 01 00 00 00            MOV EBX,0x1
0046F6D4  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046F6D7  EB 02                     JMP 0x0046f6db
LAB_0046f6d9:
0046F6D9  33 FF                     XOR EDI,EDI
LAB_0046f6db:
0046F6DB  8B CE                     MOV ECX,ESI
0046F6DD  E8 E9 52 F9 FF            CALL 0x004049cb
0046F6E2  3B C3                     CMP EAX,EBX
0046F6E4  0F 85 AA 00 00 00         JNZ 0x0046f794
0046F6EA  85 FF                     TEST EDI,EDI
0046F6EC  74 37                     JZ 0x0046f725
0046F6EE  8B 07                     MOV EAX,dword ptr [EDI]
0046F6F0  8B CF                     MOV ECX,EDI
0046F6F2  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046F6F5  83 F8 33                  CMP EAX,0x33
0046F6F8  75 2B                     JNZ 0x0046f725
0046F6FA  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0046F6FD  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046F700  3B C8                     CMP ECX,EAX
0046F702  75 21                     JNZ 0x0046f725
0046F704  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046F708  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046F70C  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0046F710  52                        PUSH EDX
0046F711  50                        PUSH EAX
0046F712  51                        PUSH ECX
0046F713  8B CF                     MOV ECX,EDI
0046F715  E8 9C 53 F9 FF            CALL 0x00404ab6
0046F71A  83 F8 FF                  CMP EAX,-0x1
0046F71D  89 86 68 05 00 00         MOV dword ptr [ESI + 0x568],EAX
0046F723  75 6F                     JNZ 0x0046f794
LAB_0046f725:
0046F725  66 8B 96 58 05 00 00      MOV DX,word ptr [ESI + 0x558]
0046F72C  66 8B 8E 54 05 00 00      MOV CX,word ptr [ESI + 0x554]
0046F733  8D BE 62 05 00 00         LEA EDI,[ESI + 0x562]
0046F739  8D 9E 60 05 00 00         LEA EBX,[ESI + 0x560]
0046F73F  8D 86 5E 05 00 00         LEA EAX,[ESI + 0x55e]
0046F745  57                        PUSH EDI
0046F746  53                        PUSH EBX
0046F747  50                        PUSH EAX
0046F748  66 8B 86 56 05 00 00      MOV AX,word ptr [ESI + 0x556]
0046F74F  66 42                     INC DX
0046F751  6A 01                     PUSH 0x1
0046F753  52                        PUSH EDX
0046F754  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0046F758  50                        PUSH EAX
0046F759  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0046F75D  51                        PUSH ECX
0046F75E  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0046F762  52                        PUSH EDX
0046F763  50                        PUSH EAX
0046F764  51                        PUSH ECX
0046F765  8B CE                     MOV ECX,ESI
0046F767  E8 9C 51 F9 FF            CALL 0x00404908
0046F76C  0F BF 17                  MOVSX EDX,word ptr [EDI]
0046F76F  0F BF 03                  MOVSX EAX,word ptr [EBX]
0046F772  0F BF 8E 5E 05 00 00      MOVSX ECX,word ptr [ESI + 0x55e]
0046F779  52                        PUSH EDX
0046F77A  C7 86 80 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x580],0x1
0046F784  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046F78E  50                        PUSH EAX
0046F78F  E9 03 04 00 00            JMP 0x0046fb97
LAB_0046f794:
0046F794  85 FF                     TEST EDI,EDI
0046F796  0F 84 EC 00 00 00         JZ 0x0046f888
0046F79C  8B 17                     MOV EDX,dword ptr [EDI]
0046F79E  8B CF                     MOV ECX,EDI
0046F7A0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046F7A3  83 F8 33                  CMP EAX,0x33
0046F7A6  0F 85 DC 00 00 00         JNZ 0x0046f888
0046F7AC  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0046F7AF  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0046F7B2  3B C1                     CMP EAX,ECX
0046F7B4  0F 85 CE 00 00 00         JNZ 0x0046f888
0046F7BA  C7 86 80 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x580],0x2
0046F7C4  6A 00                     PUSH 0x0
0046F7C6  E9 C4 01 00 00            JMP 0x0046f98f
switchD_0046f604::caseD_1:
0046F7CB  39 9E 64 05 00 00         CMP dword ptr [ESI + 0x564],EBX
0046F7D1  75 2F                     JNZ 0x0046f802
0046F7D3  8B CE                     MOV ECX,ESI
0046F7D5  C7 86 64 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x564],0x0
0046F7DF  E8 71 40 F9 FF            CALL 0x00403855
switchD_0046f604::caseD_3:
0046F7E4  0F BF 86 58 05 00 00      MOVSX EAX,word ptr [ESI + 0x558]
0046F7EB  0F BF 8E 56 05 00 00      MOVSX ECX,word ptr [ESI + 0x556]
0046F7F2  0F BF 96 54 05 00 00      MOVSX EDX,word ptr [ESI + 0x554]
0046F7F9  40                        INC EAX
0046F7FA  50                        PUSH EAX
0046F7FB  51                        PUSH ECX
0046F7FC  52                        PUSH EDX
0046F7FD  E9 96 03 00 00            JMP 0x0046fb98
LAB_0046f802:
0046F802  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046F809  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046F810  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046F817  66 85 C0                  TEST AX,AX
0046F81A  7C 6C                     JL 0x0046f888
0046F81C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046F823  66 3B C7                  CMP AX,DI
0046F826  7D 60                     JGE 0x0046f888
0046F828  66 85 D2                  TEST DX,DX
0046F82B  7C 5B                     JL 0x0046f888
0046F82D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046F834  7D 52                     JGE 0x0046f888
0046F836  66 85 C9                  TEST CX,CX
0046F839  7C 4D                     JL 0x0046f888
0046F83B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046F842  7D 44                     JGE 0x0046f888
0046F844  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046F84B  0F BF C9                  MOVSX ECX,CX
0046F84E  0F BF D2                  MOVSX EDX,DX
0046F851  0F AF CB                  IMUL ECX,EBX
0046F854  0F BF FF                  MOVSX EDI,DI
0046F857  0F AF D7                  IMUL EDX,EDI
0046F85A  0F BF C0                  MOVSX EAX,AX
0046F85D  03 CA                     ADD ECX,EDX
0046F85F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046F865  03 C8                     ADD ECX,EAX
0046F867  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046F86A  85 FF                     TEST EDI,EDI
0046F86C  74 1A                     JZ 0x0046f888
0046F86E  8B 07                     MOV EAX,dword ptr [EDI]
0046F870  8B CF                     MOV ECX,EDI
0046F872  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046F875  83 F8 33                  CMP EAX,0x33
0046F878  75 0E                     JNZ 0x0046f888
0046F87A  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0046F87D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046F880  3B C8                     CMP ECX,EAX
0046F882  0F 84 2F 0F 00 00         JZ 0x004707b7
LAB_0046f888:
0046F888  8B CE                     MOV ECX,ESI
0046F88A  E8 C6 3F F9 FF            CALL 0x00403855
0046F88F  8B 16                     MOV EDX,dword ptr [ESI]
0046F891  8B CE                     MOV ECX,ESI
0046F893  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046F89D  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046F8A3  F7 D8                     NEG EAX
0046F8A5  1B C0                     SBB EAX,EAX
0046F8A7  5F                        POP EDI
0046F8A8  5E                        POP ESI
0046F8A9  5B                        POP EBX
0046F8AA  8B E5                     MOV ESP,EBP
0046F8AC  5D                        POP EBP
0046F8AD  C2 04 00                  RET 0x4
LAB_0046f8b0:
0046F8B0  3B C3                     CMP EAX,EBX
0046F8B2  0F 85 F5 02 00 00         JNZ 0x0046fbad
0046F8B8  6A 02                     PUSH 0x2
0046F8BA  8B CE                     MOV ECX,ESI
0046F8BC  E8 1D 39 F9 FF            CALL 0x004031de
0046F8C1  40                        INC EAX
0046F8C2  83 F8 04                  CMP EAX,0x4
0046F8C5  0F 87 EC 0E 00 00         JA 0x004707b7
switchD_0046f8cb::switchD:
0046F8CB  FF 24 85 64 0E 47 00      JMP dword ptr [EAX*0x4 + 0x470e64]
switchD_0046f8cb::caseD_ffffffff:
0046F8D2  68 08 AC 7A 00            PUSH 0x7aac08
0046F8D7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F8DC  57                        PUSH EDI
0046F8DD  57                        PUSH EDI
0046F8DE  68 07 29 00 00            PUSH 0x2907
0046F8E3  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F8E8  E8 E3 DB 23 00            CALL 0x006ad4d0
0046F8ED  83 C4 18                  ADD ESP,0x18
0046F8F0  85 C0                     TEST EAX,EAX
0046F8F2  74 01                     JZ 0x0046f8f5
0046F8F4  CC                        INT3
LAB_0046f8f5:
0046F8F5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046F8FB  68 07 29 00 00            PUSH 0x2907
0046F900  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F905  51                        PUSH ECX
0046F906  68 FF FF 00 00            PUSH 0xffff
0046F90B  E8 30 65 23 00            CALL 0x006a5e40
0046F910  B8 FF FF 00 00            MOV EAX,0xffff
0046F915  5F                        POP EDI
0046F916  5E                        POP ESI
0046F917  5B                        POP EBX
0046F918  8B E5                     MOV ESP,EBP
0046F91A  5D                        POP EBP
0046F91B  C2 04 00                  RET 0x4
switchD_0046f8cb::caseD_0:
0046F91E  8B CE                     MOV ECX,ESI
0046F920  E8 A6 50 F9 FF            CALL 0x004049cb
0046F925  3B C3                     CMP EAX,EBX
0046F927  75 5B                     JNZ 0x0046f984
0046F929  66 8B 96 58 05 00 00      MOV DX,word ptr [ESI + 0x558]
0046F930  66 8B 8E 54 05 00 00      MOV CX,word ptr [ESI + 0x554]
0046F937  8D BE 62 05 00 00         LEA EDI,[ESI + 0x562]
0046F93D  8D 9E 60 05 00 00         LEA EBX,[ESI + 0x560]
0046F943  8D 86 5E 05 00 00         LEA EAX,[ESI + 0x55e]
0046F949  57                        PUSH EDI
0046F94A  53                        PUSH EBX
0046F94B  50                        PUSH EAX
0046F94C  66 8B 86 56 05 00 00      MOV AX,word ptr [ESI + 0x556]
0046F953  66 42                     INC DX
0046F955  6A 01                     PUSH 0x1
0046F957  52                        PUSH EDX
0046F958  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0046F95C  50                        PUSH EAX
0046F95D  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0046F961  51                        PUSH ECX
0046F962  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0046F966  52                        PUSH EDX
0046F967  50                        PUSH EAX
0046F968  51                        PUSH ECX
0046F969  8B CE                     MOV ECX,ESI
0046F96B  E8 98 4F F9 FF            CALL 0x00404908
0046F970  0F BF 17                  MOVSX EDX,word ptr [EDI]
0046F973  0F BF 03                  MOVSX EAX,word ptr [EBX]
0046F976  0F BF 8E 5E 05 00 00      MOVSX ECX,word ptr [ESI + 0x55e]
0046F97D  52                        PUSH EDX
0046F97E  50                        PUSH EAX
0046F97F  E9 13 02 00 00            JMP 0x0046fb97
LAB_0046f984:
0046F984  C7 86 80 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x580],0x2
0046F98E  57                        PUSH EDI
LAB_0046f98f:
0046F98F  8B CE                     MOV ECX,ESI
0046F991  E8 95 40 F9 FF            CALL 0x00403a2b
0046F996  40                        INC EAX
0046F997  F7 D8                     NEG EAX
0046F999  1B C0                     SBB EAX,EAX
0046F99B  83 E0 03                  AND EAX,0x3
0046F99E  48                        DEC EAX
0046F99F  5F                        POP EDI
0046F9A0  5E                        POP ESI
0046F9A1  5B                        POP EBX
0046F9A2  8B E5                     MOV ESP,EBP
0046F9A4  5D                        POP EBP
0046F9A5  C2 04 00                  RET 0x4
switchD_0046f8cb::caseD_3:
0046F9A8  8B CE                     MOV ECX,ESI
0046F9AA  E8 1C 50 F9 FF            CALL 0x004049cb
0046F9AF  3B C3                     CMP EAX,EBX
0046F9B1  75 46                     JNZ 0x0046f9f9
0046F9B3  8D 96 62 05 00 00         LEA EDX,[ESI + 0x562]
0046F9B9  8D 86 60 05 00 00         LEA EAX,[ESI + 0x560]
0046F9BF  52                        PUSH EDX
0046F9C0  66 8B 96 58 05 00 00      MOV DX,word ptr [ESI + 0x558]
0046F9C7  8D 8E 5E 05 00 00         LEA ECX,[ESI + 0x55e]
0046F9CD  50                        PUSH EAX
0046F9CE  66 8B 86 56 05 00 00      MOV AX,word ptr [ESI + 0x556]
0046F9D5  51                        PUSH ECX
0046F9D6  66 8B 8E 54 05 00 00      MOV CX,word ptr [ESI + 0x554]
0046F9DD  66 42                     INC DX
0046F9DF  53                        PUSH EBX
0046F9E0  52                        PUSH EDX
0046F9E1  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0046F9E5  50                        PUSH EAX
0046F9E6  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0046F9EA  51                        PUSH ECX
0046F9EB  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0046F9EF  52                        PUSH EDX
0046F9F0  50                        PUSH EAX
0046F9F1  51                        PUSH ECX
0046F9F2  8B CE                     MOV ECX,ESI
0046F9F4  E8 0F 4F F9 FF            CALL 0x00404908
LAB_0046f9f9:
0046F9F9  0F BF 96 62 05 00 00      MOVSX EDX,word ptr [ESI + 0x562]
0046FA00  0F BF 86 60 05 00 00      MOVSX EAX,word ptr [ESI + 0x560]
0046FA07  0F BF 8E 5E 05 00 00      MOVSX ECX,word ptr [ESI + 0x55e]
0046FA0E  52                        PUSH EDX
0046FA0F  50                        PUSH EAX
0046FA10  51                        PUSH ECX
0046FA11  8B CE                     MOV ECX,ESI
0046FA13  E8 53 55 F9 FF            CALL 0x00404f6b
0046FA18  57                        PUSH EDI
0046FA19  8B CE                     MOV ECX,ESI
0046FA1B  E8 BE 37 F9 FF            CALL 0x004031de
0046FA20  E9 92 0D 00 00            JMP 0x004707b7
switchD_0046f8cb::caseD_1:
0046FA25  39 9E 64 05 00 00         CMP dword ptr [ESI + 0x564],EBX
0046FA2B  75 4A                     JNZ 0x0046fa77
0046FA2D  8B CE                     MOV ECX,ESI
0046FA2F  89 BE 64 05 00 00         MOV dword ptr [ESI + 0x564],EDI
0046FA35  E8 1B 3E F9 FF            CALL 0x00403855
0046FA3A  0F BF 96 58 05 00 00      MOVSX EDX,word ptr [ESI + 0x558]
0046FA41  0F BF 86 56 05 00 00      MOVSX EAX,word ptr [ESI + 0x556]
0046FA48  0F BF 8E 54 05 00 00      MOVSX ECX,word ptr [ESI + 0x554]
0046FA4F  42                        INC EDX
0046FA50  89 BE 80 05 00 00         MOV dword ptr [ESI + 0x580],EDI
0046FA56  52                        PUSH EDX
0046FA57  50                        PUSH EAX
0046FA58  51                        PUSH ECX
0046FA59  8B CE                     MOV ECX,ESI
0046FA5B  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0046FA65  E8 01 55 F9 FF            CALL 0x00404f6b
0046FA6A  57                        PUSH EDI
0046FA6B  8B CE                     MOV ECX,ESI
0046FA6D  E8 6C 37 F9 FF            CALL 0x004031de
0046FA72  E9 40 0D 00 00            JMP 0x004707b7
LAB_0046fa77:
0046FA77  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046FA7E  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046FA85  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046FA8C  66 3B C7                  CMP AX,DI
0046FA8F  0F 8C A2 02 00 00         JL 0x0046fd37
0046FA95  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046FA9C  66 3B C7                  CMP AX,DI
0046FA9F  0F 8D 92 02 00 00         JGE 0x0046fd37
0046FAA5  66 85 D2                  TEST DX,DX
0046FAA8  0F 8C 89 02 00 00         JL 0x0046fd37
0046FAAE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046FAB5  0F 8D 7C 02 00 00         JGE 0x0046fd37
0046FABB  66 85 C9                  TEST CX,CX
0046FABE  0F 8C 73 02 00 00         JL 0x0046fd37
0046FAC4  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046FACB  0F 8D 66 02 00 00         JGE 0x0046fd37
0046FAD1  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046FAD8  0F BF C9                  MOVSX ECX,CX
0046FADB  0F BF D2                  MOVSX EDX,DX
0046FADE  0F AF CB                  IMUL ECX,EBX
0046FAE1  0F BF FF                  MOVSX EDI,DI
0046FAE4  0F AF D7                  IMUL EDX,EDI
0046FAE7  0F BF C0                  MOVSX EAX,AX
0046FAEA  03 CA                     ADD ECX,EDX
0046FAEC  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046FAF2  03 C8                     ADD ECX,EAX
0046FAF4  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046FAF7  85 FF                     TEST EDI,EDI
0046FAF9  0F 84 38 02 00 00         JZ 0x0046fd37
0046FAFF  8B 07                     MOV EAX,dword ptr [EDI]
0046FB01  8B CF                     MOV ECX,EDI
0046FB03  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046FB06  83 F8 33                  CMP EAX,0x33
0046FB09  0F 85 28 02 00 00         JNZ 0x0046fd37
0046FB0F  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0046FB12  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046FB15  3B C8                     CMP ECX,EAX
0046FB17  0F 85 1A 02 00 00         JNZ 0x0046fd37
0046FB1D  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046FB21  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046FB25  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0046FB29  52                        PUSH EDX
0046FB2A  50                        PUSH EAX
0046FB2B  51                        PUSH ECX
0046FB2C  8B CF                     MOV ECX,EDI
0046FB2E  E8 83 4F F9 FF            CALL 0x00404ab6
0046FB33  83 F8 FF                  CMP EAX,-0x1
0046FB36  89 86 68 05 00 00         MOV dword ptr [ESI + 0x568],EAX
0046FB3C  0F 84 75 0C 00 00         JZ 0x004707b7
0046FB42  50                        PUSH EAX
0046FB43  57                        PUSH EDI
0046FB44  8B CE                     MOV ECX,ESI
0046FB46  E8 12 62 F9 FF            CALL 0x00405d5d
0046FB4B  83 F8 01                  CMP EAX,0x1
0046FB4E  0F 85 63 0C 00 00         JNZ 0x004707b7
0046FB54  8B CE                     MOV ECX,ESI
0046FB56  E8 FA 3C F9 FF            CALL 0x00403855
0046FB5B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0046FB5E  8B 8E 68 05 00 00         MOV ECX,dword ptr [ESI + 0x568]
0046FB64  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0046FB67  50                        PUSH EAX
0046FB68  51                        PUSH ECX
0046FB69  8B CF                     MOV ECX,EDI
0046FB6B  89 96 5A 05 00 00         MOV dword ptr [ESI + 0x55a],EDX
0046FB71  E8 EA 31 F9 FF            CALL 0x00402d60
0046FB76  0F BF 96 70 05 00 00      MOVSX EDX,word ptr [ESI + 0x570]
0046FB7D  0F BF 86 6E 05 00 00      MOVSX EAX,word ptr [ESI + 0x56e]
0046FB84  0F BF 8E 6C 05 00 00      MOVSX ECX,word ptr [ESI + 0x56c]
0046FB8B  52                        PUSH EDX
0046FB8C  C7 86 80 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x580],0x3
0046FB96  50                        PUSH EAX
LAB_0046fb97:
0046FB97  51                        PUSH ECX
LAB_0046fb98:
0046FB98  8B CE                     MOV ECX,ESI
0046FB9A  E8 CC 53 F9 FF            CALL 0x00404f6b
0046FB9F  6A 00                     PUSH 0x0
0046FBA1  8B CE                     MOV ECX,ESI
0046FBA3  E8 36 36 F9 FF            CALL 0x004031de
0046FBA8  E9 0A 0C 00 00            JMP 0x004707b7
LAB_0046fbad:
0046FBAD  83 F8 02                  CMP EAX,0x2
0046FBB0  0F 85 9F 01 00 00         JNZ 0x0046fd55
0046FBB6  8B 86 74 05 00 00         MOV EAX,dword ptr [ESI + 0x574]
0046FBBC  6A 02                     PUSH 0x2
0046FBBE  40                        INC EAX
0046FBBF  8B CE                     MOV ECX,ESI
0046FBC1  89 86 74 05 00 00         MOV dword ptr [ESI + 0x574],EAX
0046FBC7  E8 5F 3E F9 FF            CALL 0x00403a2b
0046FBCC  83 F8 FF                  CMP EAX,-0x1
0046FBCF  75 0B                     JNZ 0x0046fbdc
0046FBD1  0B C0                     OR EAX,EAX
0046FBD3  5F                        POP EDI
0046FBD4  5E                        POP ESI
0046FBD5  5B                        POP EBX
0046FBD6  8B E5                     MOV ESP,EBP
0046FBD8  5D                        POP EBP
0046FBD9  C2 04 00                  RET 0x4
LAB_0046fbdc:
0046FBDC  39 BE 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EDI
0046FBE2  0F 85 26 10 00 00         JNZ 0x00470c0e
0046FBE8  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
0046FBF2  0F 85 16 10 00 00         JNZ 0x00470c0e
0046FBF8  8B 86 74 05 00 00         MOV EAX,dword ptr [ESI + 0x574]
0046FBFE  B9 32 00 00 00            MOV ECX,0x32
0046FC03  99                        CDQ
0046FC04  F7 F9                     IDIV ECX
0046FC06  3B D3                     CMP EDX,EBX
0046FC08  0F 85 00 10 00 00         JNZ 0x00470c0e
0046FC0E  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046FC15  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046FC1C  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046FC23  66 85 C0                  TEST AX,AX
0046FC26  0F 8C 0B 01 00 00         JL 0x0046fd37
0046FC2C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046FC33  66 3B C7                  CMP AX,DI
0046FC36  0F 8D FB 00 00 00         JGE 0x0046fd37
0046FC3C  66 85 D2                  TEST DX,DX
0046FC3F  0F 8C F2 00 00 00         JL 0x0046fd37
0046FC45  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046FC4C  0F 8D E5 00 00 00         JGE 0x0046fd37
0046FC52  66 85 C9                  TEST CX,CX
0046FC55  0F 8C DC 00 00 00         JL 0x0046fd37
0046FC5B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046FC62  0F 8D CF 00 00 00         JGE 0x0046fd37
0046FC68  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046FC6F  0F BF C9                  MOVSX ECX,CX
0046FC72  0F BF D2                  MOVSX EDX,DX
0046FC75  0F AF CB                  IMUL ECX,EBX
0046FC78  0F BF FF                  MOVSX EDI,DI
0046FC7B  0F AF D7                  IMUL EDX,EDI
0046FC7E  0F BF C0                  MOVSX EAX,AX
0046FC81  03 CA                     ADD ECX,EDX
0046FC83  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046FC89  03 C8                     ADD ECX,EAX
0046FC8B  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046FC8E  85 FF                     TEST EDI,EDI
0046FC90  0F 84 A1 00 00 00         JZ 0x0046fd37
0046FC96  8B 07                     MOV EAX,dword ptr [EDI]
0046FC98  8B CF                     MOV ECX,EDI
0046FC9A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046FC9D  83 F8 33                  CMP EAX,0x33
0046FCA0  0F 85 91 00 00 00         JNZ 0x0046fd37
0046FCA6  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0046FCA9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046FCAC  3B C8                     CMP ECX,EAX
0046FCAE  0F 85 83 00 00 00         JNZ 0x0046fd37
0046FCB4  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046FCB8  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046FCBC  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0046FCC0  52                        PUSH EDX
0046FCC1  50                        PUSH EAX
0046FCC2  51                        PUSH ECX
0046FCC3  8B CF                     MOV ECX,EDI
0046FCC5  E8 EC 4D F9 FF            CALL 0x00404ab6
0046FCCA  83 F8 FF                  CMP EAX,-0x1
0046FCCD  89 86 68 05 00 00         MOV dword ptr [ESI + 0x568],EAX
0046FCD3  0F 84 35 0F 00 00         JZ 0x00470c0e
0046FCD9  50                        PUSH EAX
0046FCDA  57                        PUSH EDI
0046FCDB  8B CE                     MOV ECX,ESI
0046FCDD  E8 7B 60 F9 FF            CALL 0x00405d5d
0046FCE2  83 F8 01                  CMP EAX,0x1
0046FCE5  0F 85 23 0F 00 00         JNZ 0x00470c0e
0046FCEB  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0046FCEE  8B 8E 68 05 00 00         MOV ECX,dword ptr [ESI + 0x568]
0046FCF4  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0046FCF7  50                        PUSH EAX
0046FCF8  51                        PUSH ECX
0046FCF9  8B CF                     MOV ECX,EDI
0046FCFB  89 96 5A 05 00 00         MOV dword ptr [ESI + 0x55a],EDX
0046FD01  E8 5A 30 F9 FF            CALL 0x00402d60
0046FD06  0F BF 96 70 05 00 00      MOVSX EDX,word ptr [ESI + 0x570]
0046FD0D  0F BF 86 6E 05 00 00      MOVSX EAX,word ptr [ESI + 0x56e]
0046FD14  0F BF 8E 6C 05 00 00      MOVSX ECX,word ptr [ESI + 0x56c]
0046FD1B  52                        PUSH EDX
0046FD1C  50                        PUSH EAX
0046FD1D  C7 86 80 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x580],0x3
0046FD27  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046FD31  51                        PUSH ECX
0046FD32  E9 C7 0E 00 00            JMP 0x00470bfe
LAB_0046fd37:
0046FD37  8B CE                     MOV ECX,ESI
0046FD39  E8 17 3B F9 FF            CALL 0x00403855
LAB_0046fd3e:
0046FD3E  8B 16                     MOV EDX,dword ptr [ESI]
0046FD40  8B CE                     MOV ECX,ESI
0046FD42  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046FD48  F7 D8                     NEG EAX
0046FD4A  1B C0                     SBB EAX,EAX
0046FD4C  5F                        POP EDI
0046FD4D  5E                        POP ESI
0046FD4E  5B                        POP EBX
0046FD4F  8B E5                     MOV ESP,EBP
0046FD51  5D                        POP EBP
0046FD52  C2 04 00                  RET 0x4
LAB_0046fd55:
0046FD55  BF 03 00 00 00            MOV EDI,0x3
0046FD5A  3B C7                     CMP EAX,EDI
0046FD5C  0F 85 5B 03 00 00         JNZ 0x004700bd
0046FD62  6A 02                     PUSH 0x2
0046FD64  8B CE                     MOV ECX,ESI
0046FD66  E8 73 34 F9 FF            CALL 0x004031de
0046FD6B  40                        INC EAX
0046FD6C  83 F8 04                  CMP EAX,0x4
0046FD6F  0F 87 BD 10 00 00         JA 0x00470e32
switchD_0046fd75::switchD:
0046FD75  FF 24 85 78 0E 47 00      JMP dword ptr [EAX*0x4 + 0x470e78]
switchD_0046fd75::caseD_ffffffff:
0046FD7C  68 D8 AB 7A 00            PUSH 0x7aabd8
0046FD81  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046FD86  6A 00                     PUSH 0x0
0046FD88  6A 00                     PUSH 0x0
0046FD8A  68 77 29 00 00            PUSH 0x2977
0046FD8F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046FD94  E8 37 D7 23 00            CALL 0x006ad4d0
0046FD99  83 C4 18                  ADD ESP,0x18
0046FD9C  85 C0                     TEST EAX,EAX
0046FD9E  74 01                     JZ 0x0046fda1
0046FDA0  CC                        INT3
LAB_0046fda1:
0046FDA1  68 77 29 00 00            PUSH 0x2977
0046FDA6  E9 9B 0E 00 00            JMP 0x00470c46
switchD_0046fd75::caseD_0:
0046FDAB  39 9E 64 05 00 00         CMP dword ptr [ESI + 0x564],EBX
0046FDB1  0F 84 F1 01 00 00         JZ 0x0046ffa8
0046FDB7  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046FDBE  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046FDC5  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046FDCC  66 85 C0                  TEST AX,AX
0046FDCF  0F 8C 69 FF FF FF         JL 0x0046fd3e
0046FDD5  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046FDDC  66 3B C7                  CMP AX,DI
0046FDDF  0F 8D 59 FF FF FF         JGE 0x0046fd3e
0046FDE5  66 85 D2                  TEST DX,DX
0046FDE8  0F 8C 50 FF FF FF         JL 0x0046fd3e
0046FDEE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046FDF5  0F 8D 43 FF FF FF         JGE 0x0046fd3e
0046FDFB  66 85 C9                  TEST CX,CX
0046FDFE  0F 8C 3A FF FF FF         JL 0x0046fd3e
0046FE04  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046FE0B  0F 8D 2D FF FF FF         JGE 0x0046fd3e
0046FE11  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046FE18  0F BF C9                  MOVSX ECX,CX
0046FE1B  0F BF D2                  MOVSX EDX,DX
0046FE1E  0F AF CB                  IMUL ECX,EBX
0046FE21  0F BF FF                  MOVSX EDI,DI
0046FE24  0F AF D7                  IMUL EDX,EDI
0046FE27  0F BF C0                  MOVSX EAX,AX
0046FE2A  03 CA                     ADD ECX,EDX
0046FE2C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046FE32  03 C8                     ADD ECX,EAX
0046FE34  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046FE37  85 FF                     TEST EDI,EDI
0046FE39  0F 84 FF FE FF FF         JZ 0x0046fd3e
0046FE3F  8B 07                     MOV EAX,dword ptr [EDI]
0046FE41  8B CF                     MOV ECX,EDI
0046FE43  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046FE46  83 F8 33                  CMP EAX,0x33
0046FE49  0F 85 EF FE FF FF         JNZ 0x0046fd3e
0046FE4F  8B 87 B4 04 00 00         MOV EAX,dword ptr [EDI + 0x4b4]
0046FE55  85 C0                     TEST EAX,EAX
0046FE57  0F 85 E1 FE FF FF         JNZ 0x0046fd3e
0046FE5D  83 BF 45 02 00 00 06      CMP dword ptr [EDI + 0x245],0x6
0046FE64  0F 84 D4 FE FF FF         JZ 0x0046fd3e
0046FE6A  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0046FE6D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046FE70  3B C8                     CMP ECX,EAX
0046FE72  0F 85 C6 FE FF FF         JNZ 0x0046fd3e
0046FE78  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0046FE7C  66 3B 96 6C 05 00 00      CMP DX,word ptr [ESI + 0x56c]
0046FE83  75 4A                     JNZ 0x0046fecf
0046FE85  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0046FE89  66 3B 86 6E 05 00 00      CMP AX,word ptr [ESI + 0x56e]
0046FE90  75 3D                     JNZ 0x0046fecf
0046FE92  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0046FE96  66 3B 8E 70 05 00 00      CMP CX,word ptr [ESI + 0x570]
0046FE9D  75 30                     JNZ 0x0046fecf
0046FE9F  8B 16                     MOV EDX,dword ptr [ESI]
0046FEA1  8B CE                     MOV ECX,ESI
0046FEA3  C7 86 80 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x580],0x4
0046FEAD  C7 86 84 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x584],0x0
0046FEB7  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046FEBD  F7 D8                     NEG EAX
0046FEBF  1B C0                     SBB EAX,EAX
0046FEC1  24 FD                     AND AL,0xfd
0046FEC3  83 C0 02                  ADD EAX,0x2
0046FEC6  5F                        POP EDI
0046FEC7  5E                        POP ESI
0046FEC8  5B                        POP EBX
0046FEC9  8B E5                     MOV ESP,EBP
0046FECB  5D                        POP EBP
0046FECC  C2 04 00                  RET 0x4
LAB_0046fecf:
0046FECF  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046FED2  8B 86 68 05 00 00         MOV EAX,dword ptr [ESI + 0x568]
0046FED8  52                        PUSH EDX
0046FED9  50                        PUSH EAX
0046FEDA  8B CF                     MOV ECX,EDI
0046FEDC  E8 47 3E F9 FF            CALL 0x00403d28
LAB_0046fee1:
0046FEE1  33 C0                     XOR EAX,EAX
0046FEE3  5F                        POP EDI
0046FEE4  5E                        POP ESI
0046FEE5  5B                        POP EBX
0046FEE6  8B E5                     MOV ESP,EBP
0046FEE8  5D                        POP EBP
0046FEE9  C2 04 00                  RET 0x4
switchD_0046fd75::caseD_3:
0046FEEC  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046FEF3  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046FEFA  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046FF01  66 85 C0                  TEST AX,AX
0046FF04  0F 8C 9C 01 00 00         JL 0x004700a6
0046FF0A  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046FF11  66 3B C7                  CMP AX,DI
0046FF14  0F 8D 8C 01 00 00         JGE 0x004700a6
0046FF1A  66 85 D2                  TEST DX,DX
0046FF1D  0F 8C 83 01 00 00         JL 0x004700a6
0046FF23  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046FF2A  0F 8D 76 01 00 00         JGE 0x004700a6
0046FF30  66 85 C9                  TEST CX,CX
0046FF33  0F 8C 6D 01 00 00         JL 0x004700a6
0046FF39  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046FF40  0F 8D 60 01 00 00         JGE 0x004700a6
0046FF46  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046FF4D  0F BF C9                  MOVSX ECX,CX
0046FF50  0F BF D2                  MOVSX EDX,DX
0046FF53  0F AF CB                  IMUL ECX,EBX
0046FF56  0F BF FF                  MOVSX EDI,DI
0046FF59  0F AF D7                  IMUL EDX,EDI
0046FF5C  0F BF C0                  MOVSX EAX,AX
0046FF5F  03 CA                     ADD ECX,EDX
0046FF61  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046FF67  03 C8                     ADD ECX,EAX
0046FF69  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046FF6C  85 FF                     TEST EDI,EDI
0046FF6E  0F 84 32 01 00 00         JZ 0x004700a6
0046FF74  8B 07                     MOV EAX,dword ptr [EDI]
0046FF76  8B CF                     MOV ECX,EDI
0046FF78  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046FF7B  83 F8 33                  CMP EAX,0x33
0046FF7E  0F 85 22 01 00 00         JNZ 0x004700a6
0046FF84  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0046FF87  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046FF8A  3B C8                     CMP ECX,EAX
0046FF8C  0F 85 14 01 00 00         JNZ 0x004700a6
0046FF92  E9 DA 00 00 00            JMP 0x00470071
switchD_0046fd75::caseD_1:
0046FF97  8B 86 64 05 00 00         MOV EAX,dword ptr [ESI + 0x564]
0046FF9D  8B CE                     MOV ECX,ESI
0046FF9F  3B C3                     CMP EAX,EBX
0046FFA1  75 37                     JNZ 0x0046ffda
0046FFA3  E8 AD 38 F9 FF            CALL 0x00403855
LAB_0046ffa8:
0046FFA8  0F BF 8E 58 05 00 00      MOVSX ECX,word ptr [ESI + 0x558]
0046FFAF  0F BF 96 56 05 00 00      MOVSX EDX,word ptr [ESI + 0x556]
0046FFB6  0F BF 86 54 05 00 00      MOVSX EAX,word ptr [ESI + 0x554]
0046FFBD  33 DB                     XOR EBX,EBX
0046FFBF  41                        INC ECX
0046FFC0  51                        PUSH ECX
0046FFC1  52                        PUSH EDX
0046FFC2  89 9E 64 05 00 00         MOV dword ptr [ESI + 0x564],EBX
0046FFC8  89 9E 80 05 00 00         MOV dword ptr [ESI + 0x580],EBX
0046FFCE  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
0046FFD4  50                        PUSH EAX
0046FFD5  E9 49 0E 00 00            JMP 0x00470e23
LAB_0046ffda:
0046FFDA  E8 76 38 F9 FF            CALL 0x00403855
0046FFDF  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0046FFE6  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0046FFED  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0046FFF4  66 85 C0                  TEST AX,AX
0046FFF7  0F 8C A9 00 00 00         JL 0x004700a6
0046FFFD  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00470004  66 3B C7                  CMP AX,DI
00470007  0F 8D 99 00 00 00         JGE 0x004700a6
0047000D  66 85 D2                  TEST DX,DX
00470010  0F 8C 90 00 00 00         JL 0x004700a6
00470016  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047001D  0F 8D 83 00 00 00         JGE 0x004700a6
00470023  66 85 C9                  TEST CX,CX
00470026  7C 7E                     JL 0x004700a6
00470028  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047002F  7D 75                     JGE 0x004700a6
00470031  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00470038  0F BF C9                  MOVSX ECX,CX
0047003B  0F BF D2                  MOVSX EDX,DX
0047003E  0F AF CB                  IMUL ECX,EBX
00470041  0F BF FF                  MOVSX EDI,DI
00470044  0F AF D7                  IMUL EDX,EDI
00470047  0F BF C0                  MOVSX EAX,AX
0047004A  03 CA                     ADD ECX,EDX
0047004C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00470052  03 C8                     ADD ECX,EAX
00470054  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
00470057  85 FF                     TEST EDI,EDI
00470059  74 4B                     JZ 0x004700a6
0047005B  8B 07                     MOV EAX,dword ptr [EDI]
0047005D  8B CF                     MOV ECX,EDI
0047005F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00470062  83 F8 33                  CMP EAX,0x33
00470065  75 3F                     JNZ 0x004700a6
00470067  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0047006A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047006D  3B C8                     CMP ECX,EAX
0047006F  75 35                     JNZ 0x004700a6
LAB_00470071:
00470071  8B 96 68 05 00 00         MOV EDX,dword ptr [ESI + 0x568]
00470077  8B CE                     MOV ECX,ESI
00470079  52                        PUSH EDX
0047007A  57                        PUSH EDI
0047007B  E8 DD 5C F9 FF            CALL 0x00405d5d
00470080  0F BF 86 70 05 00 00      MOVSX EAX,word ptr [ESI + 0x570]
00470087  0F BF 8E 6E 05 00 00      MOVSX ECX,word ptr [ESI + 0x56e]
0047008E  0F BF 96 6C 05 00 00      MOVSX EDX,word ptr [ESI + 0x56c]
00470095  50                        PUSH EAX
00470096  51                        PUSH ECX
00470097  52                        PUSH EDX
00470098  8B CE                     MOV ECX,ESI
0047009A  E8 CC 4E F9 FF            CALL 0x00404f6b
0047009F  6A 00                     PUSH 0x0
004700A1  E9 85 0D 00 00            JMP 0x00470e2b
LAB_004700a6:
004700A6  8B 06                     MOV EAX,dword ptr [ESI]
004700A8  8B CE                     MOV ECX,ESI
004700AA  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004700B0  F7 D8                     NEG EAX
004700B2  1B C0                     SBB EAX,EAX
004700B4  5F                        POP EDI
004700B5  5E                        POP ESI
004700B6  5B                        POP EBX
004700B7  8B E5                     MOV ESP,EBP
004700B9  5D                        POP EBP
004700BA  C2 04 00                  RET 0x4
LAB_004700bd:
004700BD  83 F8 04                  CMP EAX,0x4
004700C0  0F 85 A1 03 00 00         JNZ 0x00470467
004700C6  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
004700CC  85 C0                     TEST EAX,EAX
004700CE  75 61                     JNZ 0x00470131
004700D0  66 8B 86 58 05 00 00      MOV AX,word ptr [ESI + 0x558]
004700D7  8B 16                     MOV EDX,dword ptr [ESI]
004700D9  66 69 C0 C8 00            IMUL AX,AX,0xc8
004700DE  05 2C 01 00 00            ADD EAX,0x12c
004700E3  50                        PUSH EAX
004700E4  66 8B 86 56 05 00 00      MOV AX,word ptr [ESI + 0x556]
004700EB  66 40                     INC AX
004700ED  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004700F0  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004700F3  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004700F6  50                        PUSH EAX
004700F7  66 8B 86 68 05 00 00      MOV AX,word ptr [ESI + 0x568]
004700FE  66 03 86 54 05 00 00      ADD AX,word ptr [ESI + 0x554]
00470105  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00470108  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047010B  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0047010F  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00470113  50                        PUSH EAX
00470114  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00470118  51                        PUSH ECX
00470119  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047011D  50                        PUSH EAX
0047011E  51                        PUSH ECX
0047011F  8B CE                     MOV ECX,ESI
00470121  FF 52 10                  CALL dword ptr [EDX + 0x10]
00470124  66 89 86 72 05 00 00      MOV word ptr [ESI + 0x572],AX
0047012B  89 9E 84 05 00 00         MOV dword ptr [ESI + 0x584],EBX
LAB_00470131:
00470131  39 9E 84 05 00 00         CMP dword ptr [ESI + 0x584],EBX
00470137  75 73                     JNZ 0x004701ac
00470139  66 8B 96 72 05 00 00      MOV DX,word ptr [ESI + 0x572]
00470140  8B CE                     MOV ECX,ESI
00470142  52                        PUSH EDX
00470143  E8 6A 2F F9 FF            CALL 0x004030b2
00470148  50                        PUSH EAX
00470149  8B CE                     MOV ECX,ESI
0047014B  E8 AC 21 F9 FF            CALL 0x004022fc
00470150  83 F8 FF                  CMP EAX,-0x1
00470153  74 09                     JZ 0x0047015e
00470155  85 C0                     TEST EAX,EAX
00470157  75 53                     JNZ 0x004701ac
00470159  E9 4F 06 00 00            JMP 0x004707ad
LAB_0047015e:
0047015E  68 B4 AB 7A 00            PUSH 0x7aabb4
00470163  68 CC 4C 7A 00            PUSH 0x7a4ccc
00470168  6A 00                     PUSH 0x0
0047016A  6A 00                     PUSH 0x0
0047016C  68 D3 29 00 00            PUSH 0x29d3
00470171  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470176  E8 55 D3 23 00            CALL 0x006ad4d0
0047017B  83 C4 18                  ADD ESP,0x18
0047017E  85 C0                     TEST EAX,EAX
00470180  74 01                     JZ 0x00470183
00470182  CC                        INT3
LAB_00470183:
00470183  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00470189  68 D4 29 00 00            PUSH 0x29d4
0047018E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470193  51                        PUSH ECX
00470194  68 FF FF 00 00            PUSH 0xffff
00470199  E8 A2 5C 23 00            CALL 0x006a5e40
0047019E  B8 FF FF 00 00            MOV EAX,0xffff
004701A3  5F                        POP EDI
004701A4  5E                        POP ESI
004701A5  5B                        POP EBX
004701A6  8B E5                     MOV ESP,EBP
004701A8  5D                        POP EBP
004701A9  C2 04 00                  RET 0x4
LAB_004701ac:
004701AC  83 BE 84 05 00 00 02      CMP dword ptr [ESI + 0x584],0x2
004701B3  75 5E                     JNZ 0x00470213
004701B5  66 8B 86 58 05 00 00      MOV AX,word ptr [ESI + 0x558]
004701BC  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
004701BF  66 69 C0 C8 00            IMUL AX,AX,0xc8
004701C4  05 2C 01 00 00            ADD EAX,0x12c
004701C9  52                        PUSH EDX
004701CA  50                        PUSH EAX
004701CB  66 8B 86 56 05 00 00      MOV AX,word ptr [ESI + 0x556]
004701D2  66 40                     INC AX
004701D4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004701D7  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004701DA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004701DD  66 8B 86 68 05 00 00      MOV AX,word ptr [ESI + 0x568]
004701E4  66 03 86 54 05 00 00      ADD AX,word ptr [ESI + 0x554]
004701EB  52                        PUSH EDX
004701EC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004701EF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004701F2  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004701F6  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
004701FA  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
004701FE  52                        PUSH EDX
004701FF  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00470203  50                        PUSH EAX
00470204  51                        PUSH ECX
00470205  52                        PUSH EDX
00470206  8B CE                     MOV ECX,ESI
00470208  E8 48 22 F9 FF            CALL 0x00402455
0047020D  89 BE 84 05 00 00         MOV dword ptr [ESI + 0x584],EDI
LAB_00470213:
00470213  39 BE 84 05 00 00         CMP dword ptr [ESI + 0x584],EDI
00470219  0F 85 98 05 00 00         JNZ 0x004707b7
0047021F  8D 45 F0                  LEA EAX,[EBP + -0x10]
00470222  8D 4D EC                  LEA ECX,[EBP + -0x14]
00470225  50                        PUSH EAX
00470226  51                        PUSH ECX
00470227  8B CE                     MOV ECX,ESI
00470229  E8 19 26 F9 FF            CALL 0x00402847
0047022E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00470231  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00470234  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047023A  B9 07 00 00 00            MOV ECX,0x7
0047023F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00470245  33 D2                     XOR EDX,EDX
00470247  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047024A  C1 E8 10                  SHR EAX,0x10
0047024D  F7 F1                     DIV ECX
0047024F  8B FA                     MOV EDI,EDX
00470251  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00470254  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047025A  83 EF 03                  SUB EDI,0x3
0047025D  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00470263  33 D2                     XOR EDX,EDX
00470265  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00470268  C1 E8 10                  SHR EAX,0x10
0047026B  F7 F1                     DIV ECX
0047026D  8B DA                     MOV EBX,EDX
0047026F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00470272  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00470278  83 EB 03                  SUB EBX,0x3
0047027B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00470281  33 D2                     XOR EDX,EDX
00470283  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00470286  C1 E8 10                  SHR EAX,0x10
00470289  F7 F1                     DIV ECX
0047028B  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00470291  83 EA 03                  SUB EDX,0x3
00470294  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00470297  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0047029D  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
004702A1  99                        CDQ
004702A2  2B C2                     SUB EAX,EDX
004702A4  D1 F8                     SAR EAX,0x1
004702A6  3B C8                     CMP ECX,EAX
004702A8  0F 8F 09 01 00 00         JG 0x004703b7
004702AE  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
004702B4  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004702BB  84 C0                     TEST AL,AL
004702BD  0F 86 F4 00 00 00         JBE 0x004703b7
004702C3  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
004702C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004702cc:
004702CC  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
004702D0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004702D3  51                        PUSH ECX
004702D4  8B 0A                     MOV ECX,dword ptr [EDX]
004702D6  83 EC 08                  SUB ESP,0x8
004702D9  8B C4                     MOV EAX,ESP
004702DB  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
004702DF  89 08                     MOV dword ptr [EAX],ECX
004702E1  8B CE                     MOV ECX,ESI
004702E3  66 89 50 04               MOV word ptr [EAX + 0x4],DX
004702E7  8D 45 DC                  LEA EAX,[EBP + -0x24]
004702EA  50                        PUSH EAX
004702EB  E8 3C 31 F9 FF            CALL 0x0040342c
004702F0  8B 08                     MOV ECX,dword ptr [EAX]
004702F2  6A 00                     PUSH 0x0
004702F4  6A 00                     PUSH 0x0
004702F6  6A FF                     PUSH -0x1
004702F8  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
004702FC  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00470301  6A 00                     PUSH 0x0
00470303  6A 00                     PUSH 0x0
00470305  6A 00                     PUSH 0x0
00470307  6A 00                     PUSH 0x0
00470309  83 F8 01                  CMP EAX,0x1
0047030C  6A 00                     PUSH 0x0
0047030E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00470311  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
00470315  6A 00                     PUSH 0x0
00470317  75 41                     JNZ 0x0047035a
00470319  D9 46 70                  FLD float ptr [ESI + 0x70]
0047031C  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00470322  E8 61 DF 2B 00            CALL 0x0072e288
00470327  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047032B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0047032E  0F BF C0                  MOVSX EAX,AX
00470331  03 CA                     ADD ECX,EDX
00470333  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
00470337  03 C8                     ADD ECX,EAX
00470339  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047033D  03 D1                     ADD EDX,ECX
0047033F  0F BF 4D E6               MOVSX ECX,word ptr [EBP + -0x1a]
00470343  2B C1                     SUB EAX,ECX
00470345  52                        PUSH EDX
00470346  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047034A  03 C3                     ADD EAX,EBX
0047034C  8B CF                     MOV ECX,EDI
0047034E  50                        PUSH EAX
0047034F  03 CA                     ADD ECX,EDX
00470351  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
00470355  03 C1                     ADD EAX,ECX
00470357  50                        PUSH EAX
00470358  EB 2C                     JMP 0x00470386
LAB_0047035a:
0047035A  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047035E  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
00470362  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00470365  03 CA                     ADD ECX,EDX
00470367  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047036B  03 C1                     ADD EAX,ECX
0047036D  50                        PUSH EAX
0047036E  0F BF 45 E6               MOVSX EAX,word ptr [EBP + -0x1a]
00470372  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00470376  2B D0                     SUB EDX,EAX
00470378  8B C7                     MOV EAX,EDI
0047037A  03 D3                     ADD EDX,EBX
0047037C  03 C1                     ADD EAX,ECX
0047037E  52                        PUSH EDX
0047037F  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
00470383  03 D0                     ADD EDX,EAX
00470385  52                        PUSH EDX
LAB_00470386:
00470386  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047038C  6A 07                     PUSH 0x7
0047038E  6A 02                     PUSH 0x2
00470390  6A 01                     PUSH 0x1
00470392  E8 9C 10 F9 FF            CALL 0x00401433
00470397  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047039A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047039D  83 C1 06                  ADD ECX,0x6
004703A0  40                        INC EAX
004703A1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004703A4  33 C9                     XOR ECX,ECX
004703A6  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
004703AC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004703AF  3B C1                     CMP EAX,ECX
004703B1  0F 8C 15 FF FF FF         JL 0x004702cc
LAB_004703b7:
004703B7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004703BA  83 F8 FF                  CMP EAX,-0x1
004703BD  74 5A                     JZ 0x00470419
004703BF  85 C0                     TEST EAX,EAX
004703C1  0F 85 F0 03 00 00         JNZ 0x004707b7
004703C7  C7 86 80 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x580],0x5
004703D1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004703D7  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004703DD  33 D2                     XOR EDX,EDX
004703DF  89 86 74 05 00 00         MOV dword ptr [ESI + 0x574],EAX
004703E5  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
004703E8  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
004703EE  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
004703F4  B9 33 00 00 00            MOV ECX,0x33
004703F9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004703FC  C7 86 84 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x584],0x0
00470406  C1 E8 10                  SHR EAX,0x10
00470409  F7 F1                     DIV ECX
0047040B  83 C2 28                  ADD EDX,0x28
0047040E  89 96 78 05 00 00         MOV dword ptr [ESI + 0x578],EDX
00470414  E9 9E 03 00 00            JMP 0x004707b7
LAB_00470419:
00470419  68 8C AB 7A 00            PUSH 0x7aab8c
0047041E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00470423  6A 00                     PUSH 0x0
00470425  6A 00                     PUSH 0x0
00470427  68 FE 29 00 00            PUSH 0x29fe
0047042C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470431  E8 9A D0 23 00            CALL 0x006ad4d0
00470436  83 C4 18                  ADD ESP,0x18
00470439  85 C0                     TEST EAX,EAX
0047043B  74 01                     JZ 0x0047043e
0047043D  CC                        INT3
LAB_0047043e:
0047043E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00470444  68 FF 29 00 00            PUSH 0x29ff
00470449  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047044E  52                        PUSH EDX
0047044F  68 FF FF 00 00            PUSH 0xffff
00470454  E8 E7 59 23 00            CALL 0x006a5e40
00470459  B8 FF FF 00 00            MOV EAX,0xffff
0047045E  5F                        POP EDI
0047045F  5E                        POP ESI
00470460  5B                        POP EBX
00470461  8B E5                     MOV ESP,EBP
00470463  5D                        POP EBP
00470464  C2 04 00                  RET 0x4
LAB_00470467:
00470467  83 F8 05                  CMP EAX,0x5
0047046A  0F 85 91 02 00 00         JNZ 0x00470701
00470470  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
00470477  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0047047E  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
00470485  66 85 C0                  TEST AX,AX
00470488  0F 8C 46 02 00 00         JL 0x004706d4
0047048E  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
00470495  66 3B C3                  CMP AX,BX
00470498  0F 8D 36 02 00 00         JGE 0x004706d4
0047049E  66 85 D2                  TEST DX,DX
004704A1  0F 8C 2D 02 00 00         JL 0x004706d4
004704A7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004704AE  0F 8D 20 02 00 00         JGE 0x004706d4
004704B4  66 85 C9                  TEST CX,CX
004704B7  0F 8C 17 02 00 00         JL 0x004706d4
004704BD  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004704C4  0F 8D 0A 02 00 00         JGE 0x004706d4
004704CA  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004704D1  0F BF C9                  MOVSX ECX,CX
004704D4  0F AF CF                  IMUL ECX,EDI
004704D7  0F BF D2                  MOVSX EDX,DX
004704DA  0F BF FB                  MOVSX EDI,BX
004704DD  0F AF D7                  IMUL EDX,EDI
004704E0  0F BF C0                  MOVSX EAX,AX
004704E3  03 CA                     ADD ECX,EDX
004704E5  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004704EB  03 C8                     ADD ECX,EAX
004704ED  8B 1C CA                  MOV EBX,dword ptr [EDX + ECX*0x8]
004704F0  85 DB                     TEST EBX,EBX
004704F2  0F 84 DC 01 00 00         JZ 0x004706d4
004704F8  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004704FB  8B 8E 5A 05 00 00         MOV ECX,dword ptr [ESI + 0x55a]
00470501  3B C1                     CMP EAX,ECX
00470503  0F 85 CB 01 00 00         JNZ 0x004706d4
00470509  8B 8E 74 05 00 00         MOV ECX,dword ptr [ESI + 0x574]
0047050F  8B 96 78 05 00 00         MOV EDX,dword ptr [ESI + 0x578]
00470515  03 CA                     ADD ECX,EDX
00470517  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0047051D  39 8A E4 00 00 00         CMP dword ptr [EDX + 0xe4],ECX
00470523  0F 85 63 01 00 00         JNZ 0x0047068c
00470529  8B 06                     MOV EAX,dword ptr [ESI]
0047052B  68 63 03 00 00            PUSH 0x363
00470530  6A 03                     PUSH 0x3
00470532  8B CE                     MOV ECX,ESI
00470534  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
0047053A  0F BF 8E 37 02 00 00      MOVSX ECX,word ptr [ESI + 0x237]
00470541  B8 67 66 66 66            MOV EAX,0x66666667
00470546  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
0047054D  2B D1                     SUB EDX,ECX
0047054F  F7 EA                     IMUL EDX
00470551  C1 FA 02                  SAR EDX,0x2
00470554  8B C2                     MOV EAX,EDX
00470556  C1 E8 1F                  SHR EAX,0x1f
00470559  03 D0                     ADD EDX,EAX
0047055B  B8 67 66 66 66            MOV EAX,0x66666667
00470560  8B FA                     MOV EDI,EDX
00470562  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
00470569  2B D1                     SUB EDX,ECX
0047056B  F7 DA                     NEG EDX
0047056D  F7 EA                     IMUL EDX
0047056F  C1 FA 02                  SAR EDX,0x2
00470572  8B CA                     MOV ECX,EDX
00470574  C1 E9 1F                  SHR ECX,0x1f
00470577  03 D1                     ADD EDX,ECX
00470579  8B CA                     MOV ECX,EDX
0047057B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047057E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00470584  2B F9                     SUB EDI,ECX
00470586  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047058C  47                        INC EDI
0047058D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00470590  33 D2                     XOR EDX,EDX
00470592  C1 E8 10                  SHR EAX,0x10
00470595  F7 F7                     DIV EDI
00470597  B8 67 66 66 66            MOV EAX,0x66666667
0047059C  03 D1                     ADD EDX,ECX
0047059E  0F BF 8E 37 02 00 00      MOVSX ECX,word ptr [ESI + 0x237]
004705A5  66 89 55 E4               MOV word ptr [EBP + -0x1c],DX
004705A9  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
004705AC  F7 EA                     IMUL EDX
004705AE  C1 FA 02                  SAR EDX,0x2
004705B1  8B C2                     MOV EAX,EDX
004705B3  C1 E8 1F                  SHR EAX,0x1f
004705B6  F7 D9                     NEG ECX
004705B8  03 D0                     ADD EDX,EAX
004705BA  B8 67 66 66 66            MOV EAX,0x66666667
004705BF  D1 E1                     SHL ECX,0x1
004705C1  8B FA                     MOV EDI,EDX
004705C3  F7 E9                     IMUL ECX
004705C5  C1 FA 02                  SAR EDX,0x2
004705C8  8B CA                     MOV ECX,EDX
004705CA  C1 E9 1F                  SHR ECX,0x1f
004705CD  03 D1                     ADD EDX,ECX
004705CF  8B CA                     MOV ECX,EDX
004705D1  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004705D4  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004705DA  2B F9                     SUB EDI,ECX
004705DC  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004705E2  47                        INC EDI
004705E3  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004705E6  33 D2                     XOR EDX,EDX
004705E8  C1 E8 10                  SHR EAX,0x10
004705EB  F7 F7                     DIV EDI
004705ED  66 33 C0                  XOR AX,AX
004705F0  03 D1                     ADD EDX,ECX
004705F2  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
004705F6  51                        PUSH ECX
004705F7  66 89 55 E6               MOV word ptr [EBP + -0x1a],DX
004705FB  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004705FE  83 EC 08                  SUB ESP,0x8
00470601  8B D4                     MOV EDX,ESP
00470603  89 0A                     MOV dword ptr [EDX],ECX
00470605  8B CE                     MOV ECX,ESI
00470607  66 89 42 04               MOV word ptr [EDX + 0x4],AX
0047060B  8D 55 DC                  LEA EDX,[EBP + -0x24]
0047060E  52                        PUSH EDX
0047060F  E8 18 2E F9 FF            CALL 0x0040342c
00470614  8B 08                     MOV ECX,dword ptr [EAX]
00470616  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00470619  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0047061D  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
00470621  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
00470625  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00470629  0F BF 55 E6               MOVSX EDX,word ptr [EBP + -0x1a]
0047062D  6A 00                     PUSH 0x0
0047062F  83 E8 28                  SUB EAX,0x28
00470632  6A 00                     PUSH 0x0
00470634  03 CA                     ADD ECX,EDX
00470636  50                        PUSH EAX
00470637  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
0047063D  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00470641  51                        PUSH ECX
00470642  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
00470646  03 C1                     ADD EAX,ECX
00470648  50                        PUSH EAX
00470649  6A 00                     PUSH 0x0
0047064B  52                        PUSH EDX
0047064C  E8 87 27 F9 FF            CALL 0x00402dd8
00470651  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00470656  83 C4 1C                  ADD ESP,0x1c
00470659  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0047065F  89 8E 74 05 00 00         MOV dword ptr [ESI + 0x574],ECX
00470665  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00470668  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047066E  B9 33 00 00 00            MOV ECX,0x33
00470673  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00470679  33 D2                     XOR EDX,EDX
0047067B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047067E  C1 E8 10                  SHR EAX,0x10
00470681  F7 F1                     DIV ECX
00470683  83 C2 28                  ADD EDX,0x28
00470686  89 96 78 05 00 00         MOV dword ptr [ESI + 0x578],EDX
LAB_0047068c:
0047068C  8B 96 16 07 00 00         MOV EDX,dword ptr [ESI + 0x716]
00470692  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00470698  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0047069B  52                        PUSH EDX
0047069C  8B 96 68 05 00 00         MOV EDX,dword ptr [ESI + 0x568]
004706A2  50                        PUSH EAX
004706A3  51                        PUSH ECX
004706A4  52                        PUSH EDX
004706A5  8B CB                     MOV ECX,EBX
004706A7  E8 D6 4F F9 FF            CALL 0x00405682
004706AC  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004706AF  8B 8E 68 05 00 00         MOV ECX,dword ptr [ESI + 0x568]
004706B5  6A 00                     PUSH 0x0
004706B7  50                        PUSH EAX
004706B8  51                        PUSH ECX
004706B9  8B CB                     MOV ECX,EBX
004706BB  E8 21 37 F9 FF            CALL 0x00403de1
004706C0  89 86 16 07 00 00         MOV dword ptr [ESI + 0x716],EAX
004706C6  8B 8E 12 07 00 00         MOV ECX,dword ptr [ESI + 0x712]
004706CC  3B C1                     CMP EAX,ECX
004706CE  0F 85 5E 07 00 00         JNZ 0x00470e32
LAB_004706d4:
004706D4  8B CE                     MOV ECX,ESI
004706D6  E8 F3 1C F9 FF            CALL 0x004023ce
004706DB  8B 16                     MOV EDX,dword ptr [ESI]
004706DD  8B CE                     MOV ECX,ESI
004706DF  C7 86 80 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x580],0x6
004706E9  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004706EF  F7 D8                     NEG EAX
004706F1  1B C0                     SBB EAX,EAX
004706F3  24 FD                     AND AL,0xfd
004706F5  83 C0 02                  ADD EAX,0x2
004706F8  5F                        POP EDI
004706F9  5E                        POP ESI
004706FA  5B                        POP EBX
004706FB  8B E5                     MOV ESP,EBP
004706FD  5D                        POP EBP
004706FE  C2 04 00                  RET 0x4
LAB_00470701:
00470701  83 F8 06                  CMP EAX,0x6
00470704  0F 85 91 04 00 00         JNZ 0x00470b9b
0047070A  8B 8E 7C 05 00 00         MOV ECX,dword ptr [ESI + 0x57c]
00470710  41                        INC ECX
00470711  8B C1                     MOV EAX,ECX
00470713  89 8E 7C 05 00 00         MOV dword ptr [ESI + 0x57c],ECX
00470719  83 F8 1E                  CMP EAX,0x1e
0047071C  0F 8C 95 00 00 00         JL 0x004707b7
00470722  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
00470728  85 C0                     TEST EAX,EAX
0047072A  75 53                     JNZ 0x0047077f
0047072C  66 8B 86 70 05 00 00      MOV AX,word ptr [ESI + 0x570]
00470733  66 8B 8E 6E 05 00 00      MOV CX,word ptr [ESI + 0x56e]
0047073A  66 69 C0 C8 00            IMUL AX,AX,0xc8
0047073F  66 69 C9 C9 00            IMUL CX,CX,0xc9
00470744  83 C0 64                  ADD EAX,0x64
00470747  8B 16                     MOV EDX,dword ptr [ESI]
00470749  50                        PUSH EAX
0047074A  66 8B 86 6C 05 00 00      MOV AX,word ptr [ESI + 0x56c]
00470751  66 69 C0 C9 00            IMUL AX,AX,0xc9
00470756  83 C1 64                  ADD ECX,0x64
00470759  83 C0 64                  ADD EAX,0x64
0047075C  51                        PUSH ECX
0047075D  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00470761  50                        PUSH EAX
00470762  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00470766  51                        PUSH ECX
00470767  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047076B  50                        PUSH EAX
0047076C  51                        PUSH ECX
0047076D  8B CE                     MOV ECX,ESI
0047076F  FF 52 10                  CALL dword ptr [EDX + 0x10]
00470772  66 89 86 72 05 00 00      MOV word ptr [ESI + 0x572],AX
00470779  89 9E 84 05 00 00         MOV dword ptr [ESI + 0x584],EBX
LAB_0047077f:
0047077F  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
00470785  3B C3                     CMP EAX,EBX
00470787  0F 85 94 00 00 00         JNZ 0x00470821
0047078D  66 8B 96 72 05 00 00      MOV DX,word ptr [ESI + 0x572]
00470794  8B CE                     MOV ECX,ESI
00470796  52                        PUSH EDX
00470797  E8 16 29 F9 FF            CALL 0x004030b2
0047079C  50                        PUSH EAX
0047079D  8B CE                     MOV ECX,ESI
0047079F  E8 58 1B F9 FF            CALL 0x004022fc
004707A4  83 F8 FF                  CMP EAX,-0x1
004707A7  74 2A                     JZ 0x004707d3
004707A9  85 C0                     TEST EAX,EAX
004707AB  75 0A                     JNZ 0x004707b7
LAB_004707ad:
004707AD  C7 86 84 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x584],0x2
STBoatC::ToDok::cf_common_exit_004707B7:
004707B7  8B 06                     MOV EAX,dword ptr [ESI]
004707B9  8B CE                     MOV ECX,ESI
004707BB  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004707C1  F7 D8                     NEG EAX
004707C3  1B C0                     SBB EAX,EAX
004707C5  24 FD                     AND AL,0xfd
004707C7  83 C0 02                  ADD EAX,0x2
004707CA  5F                        POP EDI
004707CB  5E                        POP ESI
004707CC  5B                        POP EBX
004707CD  8B E5                     MOV ESP,EBP
004707CF  5D                        POP EBP
004707D0  C2 04 00                  RET 0x4
LAB_004707d3:
004707D3  68 68 AB 7A 00            PUSH 0x7aab68
004707D8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004707DD  6A 00                     PUSH 0x0
004707DF  6A 00                     PUSH 0x0
004707E1  68 42 2A 00 00            PUSH 0x2a42
004707E6  68 3C 9D 7A 00            PUSH 0x7a9d3c
004707EB  E8 E0 CC 23 00            CALL 0x006ad4d0
004707F0  83 C4 18                  ADD ESP,0x18
004707F3  85 C0                     TEST EAX,EAX
004707F5  74 01                     JZ 0x004707f8
004707F7  CC                        INT3
LAB_004707f8:
004707F8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004707FE  68 43 2A 00 00            PUSH 0x2a43
00470803  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470808  51                        PUSH ECX
00470809  68 FF FF 00 00            PUSH 0xffff
0047080E  E8 2D 56 23 00            CALL 0x006a5e40
00470813  B8 FF FF 00 00            MOV EAX,0xffff
00470818  5F                        POP EDI
00470819  5E                        POP ESI
0047081A  5B                        POP EBX
0047081B  8B E5                     MOV ESP,EBP
0047081D  5D                        POP EBP
0047081E  C2 04 00                  RET 0x4
LAB_00470821:
00470821  83 F8 02                  CMP EAX,0x2
00470824  75 50                     JNZ 0x00470876
00470826  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
00470829  66 8B 86 70 05 00 00      MOV AX,word ptr [ESI + 0x570]
00470830  66 8B 8E 6E 05 00 00      MOV CX,word ptr [ESI + 0x56e]
00470837  52                        PUSH EDX
00470838  66 8B 96 6C 05 00 00      MOV DX,word ptr [ESI + 0x56c]
0047083F  66 69 C0 C8 00            IMUL AX,AX,0xc8
00470844  66 69 C9 C9 00            IMUL CX,CX,0xc9
00470849  66 69 D2 C9 00            IMUL DX,DX,0xc9
0047084E  83 C0 64                  ADD EAX,0x64
00470851  83 C1 64                  ADD ECX,0x64
00470854  50                        PUSH EAX
00470855  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00470859  83 C2 64                  ADD EDX,0x64
0047085C  51                        PUSH ECX
0047085D  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00470861  52                        PUSH EDX
00470862  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00470866  50                        PUSH EAX
00470867  51                        PUSH ECX
00470868  52                        PUSH EDX
00470869  8B CE                     MOV ECX,ESI
0047086B  E8 E5 1B F9 FF            CALL 0x00402455
00470870  89 BE 84 05 00 00         MOV dword ptr [ESI + 0x584],EDI
LAB_00470876:
00470876  39 BE 84 05 00 00         CMP dword ptr [ESI + 0x584],EDI
0047087C  0F 85 B0 05 00 00         JNZ 0x00470e32
00470882  8D 45 F0                  LEA EAX,[EBP + -0x10]
00470885  8D 4D F4                  LEA ECX,[EBP + -0xc]
00470888  50                        PUSH EAX
00470889  51                        PUSH ECX
0047088A  8B CE                     MOV ECX,ESI
0047088C  E8 B6 1F F9 FF            CALL 0x00402847
00470891  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00470894  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00470897  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047089D  B9 07 00 00 00            MOV ECX,0x7
004708A2  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004708A8  33 D2                     XOR EDX,EDX
004708AA  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004708AD  C1 E8 10                  SHR EAX,0x10
004708B0  F7 F1                     DIV ECX
004708B2  8B FA                     MOV EDI,EDX
004708B4  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004708B7  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004708BD  83 EF 03                  SUB EDI,0x3
004708C0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004708C6  33 D2                     XOR EDX,EDX
004708C8  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004708CB  C1 E8 10                  SHR EAX,0x10
004708CE  F7 F1                     DIV ECX
004708D0  8B DA                     MOV EBX,EDX
004708D2  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004708D5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004708DB  83 EB 03                  SUB EBX,0x3
004708DE  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004708E4  33 D2                     XOR EDX,EDX
004708E6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004708E9  C1 E8 10                  SHR EAX,0x10
004708EC  F7 F1                     DIV ECX
004708EE  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
004708F4  83 EA 03                  SUB EDX,0x3
004708F7  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004708FA  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
00470900  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
00470904  99                        CDQ
00470905  2B C2                     SUB EAX,EDX
00470907  D1 F8                     SAR EAX,0x1
00470909  3B C8                     CMP ECX,EAX
0047090B  0F 8F 09 01 00 00         JG 0x00470a1a
00470911  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
00470917  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0047091E  84 C0                     TEST AL,AL
00470920  0F 86 F4 00 00 00         JBE 0x00470a1a
00470926  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047092C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0047092f:
0047092F  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00470933  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00470936  51                        PUSH ECX
00470937  8B 0A                     MOV ECX,dword ptr [EDX]
00470939  83 EC 08                  SUB ESP,0x8
0047093C  8B C4                     MOV EAX,ESP
0047093E  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
00470942  89 08                     MOV dword ptr [EAX],ECX
00470944  8B CE                     MOV ECX,ESI
00470946  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0047094A  8D 45 DC                  LEA EAX,[EBP + -0x24]
0047094D  50                        PUSH EAX
0047094E  E8 D9 2A F9 FF            CALL 0x0040342c
00470953  8B 08                     MOV ECX,dword ptr [EAX]
00470955  6A 00                     PUSH 0x0
00470957  6A 00                     PUSH 0x0
00470959  6A FF                     PUSH -0x1
0047095B  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0047095F  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00470964  6A 00                     PUSH 0x0
00470966  6A 00                     PUSH 0x0
00470968  6A 00                     PUSH 0x0
0047096A  6A 00                     PUSH 0x0
0047096C  83 F8 01                  CMP EAX,0x1
0047096F  6A 00                     PUSH 0x0
00470971  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00470974  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
00470978  6A 00                     PUSH 0x0
0047097A  75 41                     JNZ 0x004709bd
0047097C  D9 46 70                  FLD float ptr [ESI + 0x70]
0047097F  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00470985  E8 FE D8 2B 00            CALL 0x0072e288
0047098A  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047098E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00470991  0F BF C0                  MOVSX EAX,AX
00470994  03 CA                     ADD ECX,EDX
00470996  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
0047099A  03 C8                     ADD ECX,EAX
0047099C  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004709A0  03 D1                     ADD EDX,ECX
004709A2  0F BF 4D E6               MOVSX ECX,word ptr [EBP + -0x1a]
004709A6  2B C1                     SUB EAX,ECX
004709A8  52                        PUSH EDX
004709A9  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
004709AD  03 C3                     ADD EAX,EBX
004709AF  8B CF                     MOV ECX,EDI
004709B1  50                        PUSH EAX
004709B2  03 CA                     ADD ECX,EDX
004709B4  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
004709B8  03 C1                     ADD EAX,ECX
004709BA  50                        PUSH EAX
004709BB  EB 2C                     JMP 0x004709e9
LAB_004709bd:
004709BD  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004709C1  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
004709C5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004709C8  03 CA                     ADD ECX,EDX
004709CA  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
004709CE  03 C1                     ADD EAX,ECX
004709D0  50                        PUSH EAX
004709D1  0F BF 45 E6               MOVSX EAX,word ptr [EBP + -0x1a]
004709D5  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004709D9  2B D0                     SUB EDX,EAX
004709DB  8B C7                     MOV EAX,EDI
004709DD  03 D3                     ADD EDX,EBX
004709DF  03 C1                     ADD EAX,ECX
004709E1  52                        PUSH EDX
004709E2  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
004709E6  03 D0                     ADD EDX,EAX
004709E8  52                        PUSH EDX
LAB_004709e9:
004709E9  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
004709EF  6A 07                     PUSH 0x7
004709F1  6A 02                     PUSH 0x2
004709F3  6A 01                     PUSH 0x1
004709F5  E8 39 0A F9 FF            CALL 0x00401433
004709FA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004709FD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00470A00  83 C1 06                  ADD ECX,0x6
00470A03  40                        INC EAX
00470A04  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00470A07  33 C9                     XOR ECX,ECX
00470A09  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00470A0F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00470A12  3B C1                     CMP EAX,ECX
00470A14  0F 8C 15 FF FF FF         JL 0x0047092f
LAB_00470a1a:
00470A1A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00470A1D  83 F8 FF                  CMP EAX,-0x1
00470A20  0F 84 46 01 00 00         JZ 0x00470b6c
00470A26  85 C0                     TEST EAX,EAX
00470A28  0F 85 04 04 00 00         JNZ 0x00470e32
00470A2E  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
00470A35  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
00470A3C  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
00470A43  66 85 C0                  TEST AX,AX
00470A46  0F 8C C8 00 00 00         JL 0x00470b14
00470A4C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00470A53  66 3B C7                  CMP AX,DI
00470A56  0F 8D B8 00 00 00         JGE 0x00470b14
00470A5C  66 85 D2                  TEST DX,DX
00470A5F  0F 8C AF 00 00 00         JL 0x00470b14
00470A65  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00470A6C  0F 8D A2 00 00 00         JGE 0x00470b14
00470A72  66 85 C9                  TEST CX,CX
00470A75  0F 8C 99 00 00 00         JL 0x00470b14
00470A7B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00470A82  0F 8D 8C 00 00 00         JGE 0x00470b14
00470A88  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00470A8F  0F BF C9                  MOVSX ECX,CX
00470A92  0F BF D2                  MOVSX EDX,DX
00470A95  0F AF CB                  IMUL ECX,EBX
00470A98  0F BF FF                  MOVSX EDI,DI
00470A9B  0F AF D7                  IMUL EDX,EDI
00470A9E  0F BF C0                  MOVSX EAX,AX
00470AA1  03 CA                     ADD ECX,EDX
00470AA3  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00470AA9  03 C8                     ADD ECX,EAX
00470AAB  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00470AAE  85 C0                     TEST EAX,EAX
00470AB0  74 62                     JZ 0x00470b14
00470AB2  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00470AB5  8B 96 5A 05 00 00         MOV EDX,dword ptr [ESI + 0x55a]
00470ABB  3B CA                     CMP ECX,EDX
00470ABD  75 55                     JNZ 0x00470b14
00470ABF  8B 90 2C 04 00 00         MOV EDX,dword ptr [EAX + 0x42c]
00470AC5  8D BE 62 05 00 00         LEA EDI,[ESI + 0x562]
00470ACB  85 D2                     TEST EDX,EDX
00470ACD  8D 9E 60 05 00 00         LEA EBX,[ESI + 0x560]
00470AD3  8D 8E 5E 05 00 00         LEA ECX,[ESI + 0x55e]
00470AD9  74 24                     JZ 0x00470aff
00470ADB  85 C9                     TEST ECX,ECX
00470ADD  74 08                     JZ 0x00470ae7
00470ADF  8B 90 30 04 00 00         MOV EDX,dword ptr [EAX + 0x430]
00470AE5  89 11                     MOV dword ptr [ECX],EDX
LAB_00470ae7:
00470AE7  85 DB                     TEST EBX,EBX
00470AE9  74 08                     JZ 0x00470af3
00470AEB  8B 88 34 04 00 00         MOV ECX,dword ptr [EAX + 0x434]
00470AF1  89 0B                     MOV dword ptr [EBX],ECX
LAB_00470af3:
00470AF3  85 FF                     TEST EDI,EDI
00470AF5  74 08                     JZ 0x00470aff
00470AF7  8B 90 38 04 00 00         MOV EDX,dword ptr [EAX + 0x438]
00470AFD  89 17                     MOV dword ptr [EDI],EDX
LAB_00470aff:
00470AFF  83 B8 2C 04 00 00 01      CMP dword ptr [EAX + 0x42c],0x1
00470B06  75 0C                     JNZ 0x00470b14
00470B08  C7 86 80 05 00 00 08 00 00 00  MOV dword ptr [ESI + 0x580],0x8
00470B12  EB 3A                     JMP 0x00470b4e
STBoatC::ToDok::cf_common_exit_00470B14:
00470B14  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00470B18  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00470B1C  8D BE 62 05 00 00         LEA EDI,[ESI + 0x562]
00470B22  8D 9E 60 05 00 00         LEA EBX,[ESI + 0x560]
00470B28  57                        PUSH EDI
00470B29  8D 96 5E 05 00 00         LEA EDX,[ESI + 0x55e]
00470B2F  53                        PUSH EBX
00470B30  52                        PUSH EDX
00470B31  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00470B35  6A 03                     PUSH 0x3
00470B37  50                        PUSH EAX
00470B38  51                        PUSH ECX
00470B39  52                        PUSH EDX
00470B3A  50                        PUSH EAX
00470B3B  51                        PUSH ECX
00470B3C  52                        PUSH EDX
00470B3D  8B CE                     MOV ECX,ESI
00470B3F  C7 86 80 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x580],0x7
00470B49  E8 BA 3D F9 FF            CALL 0x00404908
LAB_00470b4e:
00470B4E  0F BF 07                  MOVSX EAX,word ptr [EDI]
00470B51  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00470B54  0F BF 96 5E 05 00 00      MOVSX EDX,word ptr [ESI + 0x55e]
00470B5B  50                        PUSH EAX
00470B5C  51                        PUSH ECX
00470B5D  52                        PUSH EDX
00470B5E  8B CE                     MOV ECX,ESI
00470B60  E8 06 44 F9 FF            CALL 0x00404f6b
00470B65  6A 00                     PUSH 0x0
00470B67  E9 BF 02 00 00            JMP 0x00470e2b
LAB_00470b6c:
00470B6C  68 44 AB 7A 00            PUSH 0x7aab44
00470B71  68 CC 4C 7A 00            PUSH 0x7a4ccc
00470B76  6A 00                     PUSH 0x0
00470B78  6A 00                     PUSH 0x0
00470B7A  68 6C 2A 00 00            PUSH 0x2a6c
00470B7F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470B84  E8 47 C9 23 00            CALL 0x006ad4d0
00470B89  83 C4 18                  ADD ESP,0x18
00470B8C  85 C0                     TEST EAX,EAX
00470B8E  74 01                     JZ 0x00470b91
00470B90  CC                        INT3
LAB_00470b91:
00470B91  68 6D 2A 00 00            PUSH 0x2a6d
00470B96  E9 AB 00 00 00            JMP 0x00470c46
LAB_00470b9b:
00470B9B  83 F8 07                  CMP EAX,0x7
00470B9E  0F 85 C5 00 00 00         JNZ 0x00470c69
00470BA4  6A 02                     PUSH 0x2
00470BA6  8B CE                     MOV ECX,ESI
00470BA8  E8 31 26 F9 FF            CALL 0x004031de
00470BAD  83 F8 FF                  CMP EAX,-0x1
00470BB0  74 6A                     JZ 0x00470c1c
00470BB2  85 C0                     TEST EAX,EAX
00470BB4  0F 84 27 F3 FF FF         JZ 0x0046fee1
00470BBA  3B C7                     CMP EAX,EDI
00470BBC  75 50                     JNZ 0x00470c0e
00470BBE  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00470BC2  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00470BC6  8D BE 62 05 00 00         LEA EDI,[ESI + 0x562]
00470BCC  8D 9E 60 05 00 00         LEA EBX,[ESI + 0x560]
00470BD2  57                        PUSH EDI
00470BD3  8D 96 5E 05 00 00         LEA EDX,[ESI + 0x55e]
00470BD9  53                        PUSH EBX
00470BDA  52                        PUSH EDX
00470BDB  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00470BDF  6A 03                     PUSH 0x3
00470BE1  50                        PUSH EAX
00470BE2  51                        PUSH ECX
00470BE3  52                        PUSH EDX
00470BE4  50                        PUSH EAX
00470BE5  51                        PUSH ECX
LAB_00470be6:
00470BE6  52                        PUSH EDX
00470BE7  8B CE                     MOV ECX,ESI
00470BE9  E8 1A 3D F9 FF            CALL 0x00404908
00470BEE  0F BF 07                  MOVSX EAX,word ptr [EDI]
00470BF1  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00470BF4  0F BF 96 5E 05 00 00      MOVSX EDX,word ptr [ESI + 0x55e]
00470BFB  50                        PUSH EAX
00470BFC  51                        PUSH ECX
00470BFD  52                        PUSH EDX
LAB_00470bfe:
00470BFE  8B CE                     MOV ECX,ESI
00470C00  E8 66 43 F9 FF            CALL 0x00404f6b
00470C05  6A 00                     PUSH 0x0
00470C07  8B CE                     MOV ECX,ESI
00470C09  E8 D0 25 F9 FF            CALL 0x004031de
LAB_00470c0e:
00470C0E  B8 02 00 00 00            MOV EAX,0x2
00470C13  5F                        POP EDI
00470C14  5E                        POP ESI
00470C15  5B                        POP EBX
00470C16  8B E5                     MOV ESP,EBP
00470C18  5D                        POP EBP
00470C19  C2 04 00                  RET 0x4
LAB_00470c1c:
00470C1C  68 18 AB 7A 00            PUSH 0x7aab18
00470C21  68 CC 4C 7A 00            PUSH 0x7a4ccc
00470C26  6A 00                     PUSH 0x0
00470C28  6A 00                     PUSH 0x0
00470C2A  68 8C 2A 00 00            PUSH 0x2a8c
00470C2F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470C34  E8 97 C8 23 00            CALL 0x006ad4d0
00470C39  83 C4 18                  ADD ESP,0x18
00470C3C  85 C0                     TEST EAX,EAX
00470C3E  74 01                     JZ 0x00470c41
00470C40  CC                        INT3
LAB_00470c41:
00470C41  68 8C 2A 00 00            PUSH 0x2a8c
STBoatC::ToDok::cf_error_exit_00470C46:
00470C46  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00470C4B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470C50  50                        PUSH EAX
00470C51  68 FF FF 00 00            PUSH 0xffff
00470C56  E8 E5 51 23 00            CALL 0x006a5e40
00470C5B  B8 FF FF 00 00            MOV EAX,0xffff
00470C60  5F                        POP EDI
00470C61  5E                        POP ESI
00470C62  5B                        POP EBX
00470C63  8B E5                     MOV ESP,EBP
00470C65  5D                        POP EBP
00470C66  C2 04 00                  RET 0x4
LAB_00470c69:
00470C69  83 F8 08                  CMP EAX,0x8
00470C6C  75 50                     JNZ 0x00470cbe
00470C6E  6A 02                     PUSH 0x2
00470C70  8B CE                     MOV ECX,ESI
00470C72  E8 67 25 F9 FF            CALL 0x004031de
00470C77  83 F8 FF                  CMP EAX,-0x1
00470C7A  74 67                     JZ 0x00470ce3
00470C7C  85 C0                     TEST EAX,EAX
00470C7E  0F 84 5D F2 FF FF         JZ 0x0046fee1
00470C84  3B C7                     CMP EAX,EDI
00470C86  75 86                     JNZ 0x00470c0e
00470C88  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00470C8C  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00470C90  8D BE 62 05 00 00         LEA EDI,[ESI + 0x562]
00470C96  8D 9E 60 05 00 00         LEA EBX,[ESI + 0x560]
00470C9C  8D 86 5E 05 00 00         LEA EAX,[ESI + 0x55e]
00470CA2  57                        PUSH EDI
00470CA3  53                        PUSH EBX
00470CA4  50                        PUSH EAX
00470CA5  6A 01                     PUSH 0x1
00470CA7  51                        PUSH ECX
00470CA8  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00470CAC  52                        PUSH EDX
00470CAD  66 8B 17                  MOV DX,word ptr [EDI]
00470CB0  51                        PUSH ECX
00470CB1  66 8B 0B                  MOV CX,word ptr [EBX]
00470CB4  52                        PUSH EDX
00470CB5  66 8B 10                  MOV DX,word ptr [EAX]
00470CB8  51                        PUSH ECX
00470CB9  E9 28 FF FF FF            JMP 0x00470be6
LAB_00470cbe:
00470CBE  68 F0 AA 7A 00            PUSH 0x7aaaf0
00470CC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
00470CC8  6A 00                     PUSH 0x0
00470CCA  6A 00                     PUSH 0x0
00470CCC  68 B3 2A 00 00            PUSH 0x2ab3
00470CD1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00470CD6  E8 F5 C7 23 00            CALL 0x006ad4d0
00470CDB  83 C4 18                  ADD ESP,0x18
00470CDE  85 C0                     TEST EAX,EAX
00470CE0  74 01                     JZ 0x00470ce3
00470CE2  CC                        INT3
LAB_00470ce3:
00470CE3  83 C8 FF                  OR EAX,0xffffffff
00470CE6  5F                        POP EDI
00470CE7  5E                        POP ESI
00470CE8  5B                        POP EBX
00470CE9  8B E5                     MOV ESP,EBP
00470CEB  5D                        POP EBP
00470CEC  C2 04 00                  RET 0x4
LAB_00470cef:
00470CEF  B9 17 00 00 00            MOV ECX,0x17
00470CF4  33 C0                     XOR EAX,EAX
00470CF6  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
00470CFC  F3 AB                     STOSD.REP ES:EDI
00470CFE  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
00470D04  8B 86 16 07 00 00         MOV EAX,dword ptr [ESI + 0x716]
00470D0A  3B 86 12 07 00 00         CMP EAX,dword ptr [ESI + 0x712]
00470D10  0F 84 CB F1 FF FF         JZ 0x0046fee1
00470D16  66 8B 86 A0 03 00 00      MOV AX,word ptr [ESI + 0x3a0]
00470D1D  66 8B 8E A4 03 00 00      MOV CX,word ptr [ESI + 0x3a4]
00470D24  66 8B 96 A2 03 00 00      MOV DX,word ptr [ESI + 0x3a2]
00470D2B  66 85 C0                  TEST AX,AX
00470D2E  0F 8C AD F1 FF FF         JL 0x0046fee1
00470D34  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00470D3B  66 3B C7                  CMP AX,DI
00470D3E  0F 8D 9D F1 FF FF         JGE 0x0046fee1
00470D44  66 85 D2                  TEST DX,DX
00470D47  0F 8C 94 F1 FF FF         JL 0x0046fee1
00470D4D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00470D54  0F 8D 87 F1 FF FF         JGE 0x0046fee1
00470D5A  66 85 C9                  TEST CX,CX
00470D5D  0F 8C 7E F1 FF FF         JL 0x0046fee1
00470D63  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00470D6A  0F 8D 71 F1 FF FF         JGE 0x0046fee1
00470D70  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00470D77  0F BF C9                  MOVSX ECX,CX
00470D7A  0F BF D2                  MOVSX EDX,DX
00470D7D  0F AF CB                  IMUL ECX,EBX
00470D80  0F BF FF                  MOVSX EDI,DI
00470D83  0F AF D7                  IMUL EDX,EDI
00470D86  0F BF C0                  MOVSX EAX,AX
00470D89  03 CA                     ADD ECX,EDX
00470D8B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00470D91  03 C8                     ADD ECX,EAX
00470D93  33 DB                     XOR EBX,EBX
00470D95  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
00470D98  3B FB                     CMP EDI,EBX
00470D9A  0F 84 41 F1 FF FF         JZ 0x0046fee1
00470DA0  8B 07                     MOV EAX,dword ptr [EDI]
00470DA2  8B CF                     MOV ECX,EDI
00470DA4  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00470DA7  83 F8 33                  CMP EAX,0x33
00470DAA  0F 85 31 F1 FF FF         JNZ 0x0046fee1
00470DB0  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00470DB3  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00470DB6  3B C8                     CMP ECX,EAX
00470DB8  0F 85 23 F1 FF FF         JNZ 0x0046fee1
00470DBE  66 8B 96 A0 03 00 00      MOV DX,word ptr [ESI + 0x3a0]
00470DC5  89 9E 80 05 00 00         MOV dword ptr [ESI + 0x580],EBX
00470DCB  66 89 96 54 05 00 00      MOV word ptr [ESI + 0x554],DX
00470DD2  66 8B 86 A2 03 00 00      MOV AX,word ptr [ESI + 0x3a2]
00470DD9  66 89 86 56 05 00 00      MOV word ptr [ESI + 0x556],AX
00470DE0  66 8B 8E A4 03 00 00      MOV CX,word ptr [ESI + 0x3a4]
00470DE7  66 89 8E 58 05 00 00      MOV word ptr [ESI + 0x558],CX
00470DEE  89 9E 7C 05 00 00         MOV dword ptr [ESI + 0x57c],EBX
00470DF4  89 9E 78 05 00 00         MOV dword ptr [ESI + 0x578],EBX
00470DFA  89 9E 74 05 00 00         MOV dword ptr [ESI + 0x574],EBX
00470E00  0F BF 96 58 05 00 00      MOVSX EDX,word ptr [ESI + 0x558]
00470E07  0F BF 86 56 05 00 00      MOVSX EAX,word ptr [ESI + 0x556]
00470E0E  0F BF 8E 54 05 00 00      MOVSX ECX,word ptr [ESI + 0x554]
00470E15  42                        INC EDX
00470E16  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00470E20  52                        PUSH EDX
00470E21  50                        PUSH EAX
00470E22  51                        PUSH ECX
LAB_00470e23:
00470E23  8B CE                     MOV ECX,ESI
00470E25  E8 41 41 F9 FF            CALL 0x00404f6b
00470E2A  53                        PUSH EBX
STBoatC::ToDok::cf_common_exit_00470E2B:
00470E2B  8B CE                     MOV ECX,ESI
00470E2D  E8 AC 23 F9 FF            CALL 0x004031de
STBoatC::ToDok::cf_common_exit_00470E32:
00470E32  8B 16                     MOV EDX,dword ptr [ESI]
00470E34  8B CE                     MOV ECX,ESI
00470E36  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00470E3C  F7 D8                     NEG EAX
00470E3E  1B C0                     SBB EAX,EAX
00470E40  5F                        POP EDI
00470E41  24 FD                     AND AL,0xfd
00470E43  5E                        POP ESI
00470E44  83 C0 02                  ADD EAX,0x2
00470E47  5B                        POP EBX
00470E48  8B E5                     MOV ESP,EBP
00470E4A  5D                        POP EBP
00470E4B  C2 04 00                  RET 0x4
