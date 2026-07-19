STBoatC::UnLoadRC:
0046D450  55                        PUSH EBP
0046D451  8B EC                     MOV EBP,ESP
0046D453  83 EC 24                  SUB ESP,0x24
0046D456  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046D459  53                        PUSH EBX
0046D45A  56                        PUSH ESI
0046D45B  57                        PUSH EDI
0046D45C  85 C0                     TEST EAX,EAX
0046D45E  8B F1                     MOV ESI,ECX
0046D460  0F 84 46 14 00 00         JZ 0x0046e8ac
0046D466  BB 01 00 00 00            MOV EBX,0x1
0046D46B  3B C3                     CMP EAX,EBX
0046D46D  0F 84 39 14 00 00         JZ 0x0046e8ac
0046D473  8B 86 4C 05 00 00         MOV EAX,dword ptr [ESI + 0x54c]
0046D479  85 C0                     TEST EAX,EAX
0046D47B  0F 85 C4 02 00 00         JNZ 0x0046d745
0046D481  6A 02                     PUSH 0x2
0046D483  E8 56 5D F9 FF            CALL 0x004031de
0046D488  40                        INC EAX
0046D489  83 F8 04                  CMP EAX,0x4
0046D48C  0F 87 7F 13 00 00         JA 0x0046e811
switchD_0046d492::switchD:
0046D492  FF 24 85 10 EA 46 00      JMP dword ptr [EAX*0x4 + 0x46ea10]
switchD_0046d492::caseD_ffffffff:
0046D499  68 DC A9 7A 00            PUSH 0x7aa9dc
0046D49E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046D4A3  6A 00                     PUSH 0x0
0046D4A5  6A 00                     PUSH 0x0
0046D4A7  68 38 26 00 00            PUSH 0x2638
0046D4AC  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046D4B1  E8 1A 00 24 00            CALL 0x006ad4d0
0046D4B6  83 C4 18                  ADD ESP,0x18
0046D4B9  85 C0                     TEST EAX,EAX
0046D4BB  74 01                     JZ 0x0046d4be
0046D4BD  CC                        INT3
LAB_0046d4be:
0046D4BE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0046D4C3  68 38 26 00 00            PUSH 0x2638
0046D4C8  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046D4CD  50                        PUSH EAX
0046D4CE  68 FF FF 00 00            PUSH 0xffff
0046D4D3  E8 68 89 23 00            CALL 0x006a5e40
0046D4D8  B8 FF FF 00 00            MOV EAX,0xffff
0046D4DD  5F                        POP EDI
0046D4DE  5E                        POP ESI
0046D4DF  5B                        POP EBX
0046D4E0  8B E5                     MOV ESP,EBP
0046D4E2  5D                        POP EBP
0046D4E3  C2 04 00                  RET 0x4
switchD_0046d492::caseD_0:
0046D4E6  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046D4ED  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046D4F4  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046D4FB  66 85 C0                  TEST AX,AX
0046D4FE  7C 50                     JL 0x0046d550
0046D500  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046D507  66 3B C7                  CMP AX,DI
0046D50A  7D 44                     JGE 0x0046d550
0046D50C  66 85 D2                  TEST DX,DX
0046D50F  7C 3F                     JL 0x0046d550
0046D511  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046D518  7D 36                     JGE 0x0046d550
0046D51A  66 85 C9                  TEST CX,CX
0046D51D  7C 31                     JL 0x0046d550
0046D51F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046D526  7D 28                     JGE 0x0046d550
0046D528  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046D52F  0F BF C9                  MOVSX ECX,CX
0046D532  0F AF D9                  IMUL EBX,ECX
0046D535  0F BF CF                  MOVSX ECX,DI
0046D538  0F BF D2                  MOVSX EDX,DX
0046D53B  0F AF CA                  IMUL ECX,EDX
0046D53E  0F BF C0                  MOVSX EAX,AX
0046D541  03 D9                     ADD EBX,ECX
0046D543  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0046D549  03 D8                     ADD EBX,EAX
0046D54B  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
0046D54E  EB 02                     JMP 0x0046d552
LAB_0046d550:
0046D550  33 FF                     XOR EDI,EDI
LAB_0046d552:
0046D552  8B CE                     MOV ECX,ESI
0046D554  E8 72 74 F9 FF            CALL 0x004049cb
0046D559  83 F8 01                  CMP EAX,0x1
0046D55C  0F 85 AA 00 00 00         JNZ 0x0046d60c
0046D562  85 FF                     TEST EDI,EDI
0046D564  0F 84 D7 00 00 00         JZ 0x0046d641
0046D56A  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0046D56D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046D570  3B D0                     CMP EDX,EAX
0046D572  0F 85 94 00 00 00         JNZ 0x0046d60c
0046D578  8B 07                     MOV EAX,dword ptr [EDI]
0046D57A  8B CF                     MOV ECX,EDI
0046D57C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046D57F  83 F8 3B                  CMP EAX,0x3b
0046D582  74 0C                     JZ 0x0046d590
0046D584  8B 17                     MOV EDX,dword ptr [EDI]
0046D586  8B CF                     MOV ECX,EDI
0046D588  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046D58B  83 F8 60                  CMP EAX,0x60
0046D58E  75 7C                     JNZ 0x0046d60c
LAB_0046d590:
0046D590  8B CF                     MOV ECX,EDI
0046D592  E8 D9 7E F9 FF            CALL 0x00405470
0046D597  83 F8 01                  CMP EAX,0x1
0046D59A  74 70                     JZ 0x0046d60c
0046D59C  8D BE 3A 05 00 00         LEA EDI,[ESI + 0x53a]
0046D5A2  66 8B 8E 2E 05 00 00      MOV CX,word ptr [ESI + 0x52e]
0046D5A9  8D 9E 38 05 00 00         LEA EBX,[ESI + 0x538]
0046D5AF  66 8B 96 2C 05 00 00      MOV DX,word ptr [ESI + 0x52c]
0046D5B6  8D 86 36 05 00 00         LEA EAX,[ESI + 0x536]
0046D5BC  57                        PUSH EDI
0046D5BD  53                        PUSH EBX
0046D5BE  50                        PUSH EAX
0046D5BF  66 8B 86 30 05 00 00      MOV AX,word ptr [ESI + 0x530]
0046D5C6  6A 01                     PUSH 0x1
0046D5C8  66 40                     INC AX
0046D5CA  50                        PUSH EAX
0046D5CB  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0046D5CF  51                        PUSH ECX
0046D5D0  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0046D5D4  52                        PUSH EDX
0046D5D5  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0046D5D9  50                        PUSH EAX
0046D5DA  51                        PUSH ECX
0046D5DB  52                        PUSH EDX
0046D5DC  8B CE                     MOV ECX,ESI
0046D5DE  E8 25 73 F9 FF            CALL 0x00404908
0046D5E3  0F BF 07                  MOVSX EAX,word ptr [EDI]
0046D5E6  0F BF 0B                  MOVSX ECX,word ptr [EBX]
0046D5E9  0F BF 96 36 05 00 00      MOVSX EDX,word ptr [ESI + 0x536]
0046D5F0  50                        PUSH EAX
0046D5F1  51                        PUSH ECX
0046D5F2  C7 86 4C 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x54c],0x1
0046D5FC  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046D606  52                        PUSH EDX
0046D607  E9 F5 11 00 00            JMP 0x0046e801
LAB_0046d60c:
0046D60C  85 FF                     TEST EDI,EDI
0046D60E  74 31                     JZ 0x0046d641
0046D610  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0046D613  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0046D616  3B C1                     CMP EAX,ECX
0046D618  75 27                     JNZ 0x0046d641
0046D61A  8B 17                     MOV EDX,dword ptr [EDI]
0046D61C  8B CF                     MOV ECX,EDI
0046D61E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046D621  83 F8 3B                  CMP EAX,0x3b
0046D624  74 0C                     JZ 0x0046d632
0046D626  8B 07                     MOV EAX,dword ptr [EDI]
0046D628  8B CF                     MOV ECX,EDI
0046D62A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046D62D  83 F8 60                  CMP EAX,0x60
0046D630  75 0F                     JNZ 0x0046d641
LAB_0046d632:
0046D632  C7 86 4C 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x54c],0x2
0046D63C  E9 D7 01 00 00            JMP 0x0046d818
LAB_0046d641:
0046D641  8B CE                     MOV ECX,ESI
0046D643  E8 0D 62 F9 FF            CALL 0x00403855
0046D648  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
LAB_0046d652:
0046D652  8B 16                     MOV EDX,dword ptr [ESI]
0046D654  8B CE                     MOV ECX,ESI
0046D656  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046D65C  F7 D8                     NEG EAX
0046D65E  1B C0                     SBB EAX,EAX
0046D660  5F                        POP EDI
0046D661  5E                        POP ESI
0046D662  5B                        POP EBX
0046D663  8B E5                     MOV ESP,EBP
0046D665  5D                        POP EBP
0046D666  C2 04 00                  RET 0x4
switchD_0046d492::caseD_3:
0046D669  0F BF 86 30 05 00 00      MOVSX EAX,word ptr [ESI + 0x530]
0046D670  0F BF 8E 2E 05 00 00      MOVSX ECX,word ptr [ESI + 0x52e]
0046D677  0F BF 96 2C 05 00 00      MOVSX EDX,word ptr [ESI + 0x52c]
0046D67E  40                        INC EAX
0046D67F  50                        PUSH EAX
0046D680  51                        PUSH ECX
0046D681  52                        PUSH EDX
0046D682  E9 7A 11 00 00            JMP 0x0046e801
switchD_0046d492::caseD_1:
0046D687  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046D68E  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046D695  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046D69C  66 85 C0                  TEST AX,AX
0046D69F  7C 7C                     JL 0x0046d71d
0046D6A1  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046D6A8  66 3B C7                  CMP AX,DI
0046D6AB  7D 70                     JGE 0x0046d71d
0046D6AD  66 85 D2                  TEST DX,DX
0046D6B0  7C 6B                     JL 0x0046d71d
0046D6B2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046D6B9  7D 62                     JGE 0x0046d71d
0046D6BB  66 85 C9                  TEST CX,CX
0046D6BE  7C 5D                     JL 0x0046d71d
0046D6C0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046D6C7  7D 54                     JGE 0x0046d71d
0046D6C9  0F BF D2                  MOVSX EDX,DX
0046D6CC  0F BF FF                  MOVSX EDI,DI
0046D6CF  0F AF D7                  IMUL EDX,EDI
0046D6D2  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0046D6D9  0F BF C9                  MOVSX ECX,CX
0046D6DC  0F AF F9                  IMUL EDI,ECX
0046D6DF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0046D6E5  03 D7                     ADD EDX,EDI
0046D6E7  0F BF C0                  MOVSX EAX,AX
0046D6EA  03 D0                     ADD EDX,EAX
0046D6EC  8B 3C D1                  MOV EDI,dword ptr [ECX + EDX*0x8]
0046D6EF  85 FF                     TEST EDI,EDI
0046D6F1  74 2A                     JZ 0x0046d71d
0046D6F3  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0046D6F6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046D6F9  3B D0                     CMP EDX,EAX
0046D6FB  75 20                     JNZ 0x0046d71d
0046D6FD  8B 07                     MOV EAX,dword ptr [EDI]
0046D6FF  8B CF                     MOV ECX,EDI
0046D701  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046D704  83 F8 3B                  CMP EAX,0x3b
0046D707  0F 84 04 11 00 00         JZ 0x0046e811
0046D70D  8B 17                     MOV EDX,dword ptr [EDI]
0046D70F  8B CF                     MOV ECX,EDI
0046D711  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046D714  83 F8 60                  CMP EAX,0x60
0046D717  0F 84 F4 10 00 00         JZ 0x0046e811
LAB_0046d71d:
0046D71D  8B CE                     MOV ECX,ESI
0046D71F  E8 31 61 F9 FF            CALL 0x00403855
0046D724  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
LAB_0046d72e:
0046D72E  8B 06                     MOV EAX,dword ptr [ESI]
0046D730  8B CE                     MOV ECX,ESI
0046D732  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046D738  F7 D8                     NEG EAX
0046D73A  1B C0                     SBB EAX,EAX
0046D73C  5F                        POP EDI
0046D73D  5E                        POP ESI
0046D73E  5B                        POP EBX
0046D73F  8B E5                     MOV ESP,EBP
0046D741  5D                        POP EBP
0046D742  C2 04 00                  RET 0x4
LAB_0046d745:
0046D745  3B C3                     CMP EAX,EBX
0046D747  0F 85 84 02 00 00         JNZ 0x0046d9d1
0046D74D  6A 02                     PUSH 0x2
0046D74F  8B CE                     MOV ECX,ESI
0046D751  E8 88 5A F9 FF            CALL 0x004031de
0046D756  40                        INC EAX
0046D757  83 F8 04                  CMP EAX,0x4
0046D75A  0F 87 B1 10 00 00         JA 0x0046e811
switchD_0046d760::switchD:
0046D760  FF 24 85 24 EA 46 00      JMP dword ptr [EAX*0x4 + 0x46ea24]
switchD_0046d760::caseD_ffffffff:
0046D767  68 A4 A9 7A 00            PUSH 0x7aa9a4
0046D76C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046D771  6A 00                     PUSH 0x0
0046D773  6A 00                     PUSH 0x0
0046D775  68 78 26 00 00            PUSH 0x2678
0046D77A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046D77F  E8 4C FD 23 00            CALL 0x006ad4d0
0046D784  83 C4 18                  ADD ESP,0x18
0046D787  85 C0                     TEST EAX,EAX
0046D789  74 01                     JZ 0x0046d78c
0046D78B  CC                        INT3
LAB_0046d78c:
0046D78C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0046D791  68 78 26 00 00            PUSH 0x2678
0046D796  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046D79B  50                        PUSH EAX
0046D79C  68 FF FF 00 00            PUSH 0xffff
0046D7A1  E8 9A 86 23 00            CALL 0x006a5e40
0046D7A6  B8 FF FF 00 00            MOV EAX,0xffff
0046D7AB  5F                        POP EDI
0046D7AC  5E                        POP ESI
0046D7AD  5B                        POP EBX
0046D7AE  8B E5                     MOV ESP,EBP
0046D7B0  5D                        POP EBP
0046D7B1  C2 04 00                  RET 0x4
switchD_0046d760::caseD_0:
0046D7B4  8B CE                     MOV ECX,ESI
0046D7B6  E8 10 72 F9 FF            CALL 0x004049cb
0046D7BB  3B C3                     CMP EAX,EBX
0046D7BD  75 45                     JNZ 0x0046d804
0046D7BF  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046D7C6  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046D7CD  8D BE 3A 05 00 00         LEA EDI,[ESI + 0x53a]
0046D7D3  8D 9E 38 05 00 00         LEA EBX,[ESI + 0x538]
0046D7D9  8D 86 36 05 00 00         LEA EAX,[ESI + 0x536]
0046D7DF  57                        PUSH EDI
0046D7E0  53                        PUSH EBX
0046D7E1  50                        PUSH EAX
0046D7E2  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046D7E9  66 41                     INC CX
0046D7EB  6A 01                     PUSH 0x1
0046D7ED  51                        PUSH ECX
0046D7EE  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0046D7F2  52                        PUSH EDX
0046D7F3  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0046D7F7  50                        PUSH EAX
0046D7F8  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0046D7FC  51                        PUSH ECX
0046D7FD  52                        PUSH EDX
0046D7FE  50                        PUSH EAX
0046D7FF  E9 E6 0F 00 00            JMP 0x0046e7ea
LAB_0046d804:
0046D804  C7 86 4C 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x54c],0x2
0046D80E  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
LAB_0046d818:
0046D818  6A 00                     PUSH 0x0
0046D81A  8B CE                     MOV ECX,ESI
0046D81C  E8 0A 62 F9 FF            CALL 0x00403a2b
0046D821  40                        INC EAX
0046D822  F7 D8                     NEG EAX
0046D824  1B C0                     SBB EAX,EAX
0046D826  83 E0 03                  AND EAX,0x3
0046D829  48                        DEC EAX
0046D82A  5F                        POP EDI
0046D82B  5E                        POP ESI
0046D82C  5B                        POP EBX
0046D82D  8B E5                     MOV ESP,EBP
0046D82F  5D                        POP EBP
0046D830  C2 04 00                  RET 0x4
switchD_0046d760::caseD_3:
0046D833  8B CE                     MOV ECX,ESI
0046D835  E8 91 71 F9 FF            CALL 0x004049cb
0046D83A  3B C3                     CMP EAX,EBX
0046D83C  75 46                     JNZ 0x0046d884
0046D83E  8D 8E 3A 05 00 00         LEA ECX,[ESI + 0x53a]
0046D844  8D 96 38 05 00 00         LEA EDX,[ESI + 0x538]
0046D84A  51                        PUSH ECX
0046D84B  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046D852  8D 86 36 05 00 00         LEA EAX,[ESI + 0x536]
0046D858  52                        PUSH EDX
0046D859  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046D860  50                        PUSH EAX
0046D861  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046D868  66 41                     INC CX
0046D86A  53                        PUSH EBX
0046D86B  51                        PUSH ECX
0046D86C  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0046D870  52                        PUSH EDX
0046D871  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0046D875  50                        PUSH EAX
0046D876  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0046D87A  51                        PUSH ECX
0046D87B  52                        PUSH EDX
0046D87C  50                        PUSH EAX
0046D87D  8B CE                     MOV ECX,ESI
0046D87F  E8 84 70 F9 FF            CALL 0x00404908
LAB_0046d884:
0046D884  0F BF 8E 3A 05 00 00      MOVSX ECX,word ptr [ESI + 0x53a]
0046D88B  0F BF 96 38 05 00 00      MOVSX EDX,word ptr [ESI + 0x538]
0046D892  51                        PUSH ECX
0046D893  E9 60 0F 00 00            JMP 0x0046e7f8
switchD_0046d760::caseD_1:
0046D898  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046D89F  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046D8A6  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046D8AD  66 85 C0                  TEST AX,AX
0046D8B0  0F 8C FD 00 00 00         JL 0x0046d9b3
0046D8B6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046D8BD  66 3B C7                  CMP AX,DI
0046D8C0  0F 8D ED 00 00 00         JGE 0x0046d9b3
0046D8C6  66 85 D2                  TEST DX,DX
0046D8C9  0F 8C E4 00 00 00         JL 0x0046d9b3
0046D8CF  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046D8D6  0F 8D D7 00 00 00         JGE 0x0046d9b3
0046D8DC  66 85 C9                  TEST CX,CX
0046D8DF  0F 8C CE 00 00 00         JL 0x0046d9b3
0046D8E5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046D8EC  0F 8D C1 00 00 00         JGE 0x0046d9b3
0046D8F2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046D8F9  0F BF C9                  MOVSX ECX,CX
0046D8FC  0F BF D2                  MOVSX EDX,DX
0046D8FF  0F AF CB                  IMUL ECX,EBX
0046D902  0F BF FF                  MOVSX EDI,DI
0046D905  0F AF D7                  IMUL EDX,EDI
0046D908  0F BF C0                  MOVSX EAX,AX
0046D90B  03 CA                     ADD ECX,EDX
0046D90D  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046D913  03 C8                     ADD ECX,EAX
0046D915  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046D918  85 FF                     TEST EDI,EDI
0046D91A  0F 84 93 00 00 00         JZ 0x0046d9b3
0046D920  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0046D923  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0046D926  3B C1                     CMP EAX,ECX
0046D928  0F 85 85 00 00 00         JNZ 0x0046d9b3
0046D92E  8B 17                     MOV EDX,dword ptr [EDI]
0046D930  8B CF                     MOV ECX,EDI
0046D932  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046D935  83 F8 3B                  CMP EAX,0x3b
0046D938  74 0C                     JZ 0x0046d946
0046D93A  8B 07                     MOV EAX,dword ptr [EDI]
0046D93C  8B CF                     MOV ECX,EDI
0046D93E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046D941  83 F8 60                  CMP EAX,0x60
0046D944  75 6D                     JNZ 0x0046d9b3
LAB_0046d946:
0046D946  8B CF                     MOV ECX,EDI
0046D948  E8 23 7B F9 FF            CALL 0x00405470
0046D94D  83 F8 01                  CMP EAX,0x1
0046D950  0F 85 BB 0E 00 00         JNZ 0x0046e811
0046D956  57                        PUSH EDI
0046D957  8B CE                     MOV ECX,ESI
0046D959  E8 44 44 F9 FF            CALL 0x00401da2
0046D95E  83 F8 01                  CMP EAX,0x1
0046D961  0F 85 AA 0E 00 00         JNZ 0x0046e811
0046D967  8B CE                     MOV ECX,ESI
0046D969  E8 E7 5E F9 FF            CALL 0x00403855
0046D96E  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
0046D971  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046D974  89 8E 32 05 00 00         MOV dword ptr [ESI + 0x532],ECX
0046D97A  52                        PUSH EDX
0046D97B  8B CF                     MOV ECX,EDI
0046D97D  E8 50 73 F9 FF            CALL 0x00404cd2
0046D982  0F BF 86 40 05 00 00      MOVSX EAX,word ptr [ESI + 0x540]
0046D989  0F BF 8E 3E 05 00 00      MOVSX ECX,word ptr [ESI + 0x53e]
0046D990  0F BF 96 3C 05 00 00      MOVSX EDX,word ptr [ESI + 0x53c]
0046D997  50                        PUSH EAX
0046D998  51                        PUSH ECX
0046D999  C7 86 44 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x544],0x0
0046D9A3  C7 86 4C 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x54c],0x3
0046D9AD  52                        PUSH EDX
0046D9AE  E9 4E 0E 00 00            JMP 0x0046e801
LAB_0046d9b3:
0046D9B3  8B CE                     MOV ECX,ESI
0046D9B5  E8 9B 5E F9 FF            CALL 0x00403855
0046D9BA  8B 06                     MOV EAX,dword ptr [ESI]
0046D9BC  8B CE                     MOV ECX,ESI
0046D9BE  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046D9C4  F7 D8                     NEG EAX
0046D9C6  1B C0                     SBB EAX,EAX
0046D9C8  5F                        POP EDI
0046D9C9  5E                        POP ESI
0046D9CA  5B                        POP EBX
0046D9CB  8B E5                     MOV ESP,EBP
0046D9CD  5D                        POP EBP
0046D9CE  C2 04 00                  RET 0x4
LAB_0046d9d1:
0046D9D1  83 F8 02                  CMP EAX,0x2
0046D9D4  0F 85 75 01 00 00         JNZ 0x0046db4f
0046D9DA  8B BE 44 05 00 00         MOV EDI,dword ptr [ESI + 0x544]
0046D9E0  50                        PUSH EAX
0046D9E1  47                        INC EDI
0046D9E2  8B CE                     MOV ECX,ESI
0046D9E4  89 BE 44 05 00 00         MOV dword ptr [ESI + 0x544],EDI
0046D9EA  E8 3C 60 F9 FF            CALL 0x00403a2b
0046D9EF  83 F8 FF                  CMP EAX,-0x1
0046D9F2  75 0B                     JNZ 0x0046d9ff
0046D9F4  0B C0                     OR EAX,EAX
0046D9F6  5F                        POP EDI
0046D9F7  5E                        POP ESI
0046D9F8  5B                        POP EBX
0046D9F9  8B E5                     MOV ESP,EBP
0046D9FB  5D                        POP EBP
0046D9FC  C2 04 00                  RET 0x4
LAB_0046d9ff:
0046D9FF  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
0046DA05  85 C0                     TEST EAX,EAX
0046DA07  0F 85 34 01 00 00         JNZ 0x0046db41
0046DA0D  8B 86 44 05 00 00         MOV EAX,dword ptr [ESI + 0x544]
0046DA13  B9 32 00 00 00            MOV ECX,0x32
0046DA18  99                        CDQ
0046DA19  F7 F9                     IDIV ECX
0046DA1B  3B D3                     CMP EDX,EBX
0046DA1D  0F 85 1E 01 00 00         JNZ 0x0046db41
0046DA23  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046DA2A  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046DA31  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046DA38  66 85 C0                  TEST AX,AX
0046DA3B  0F 8C DC FC FF FF         JL 0x0046d71d
0046DA41  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046DA48  66 3B C7                  CMP AX,DI
0046DA4B  0F 8D CC FC FF FF         JGE 0x0046d71d
0046DA51  66 85 D2                  TEST DX,DX
0046DA54  0F 8C C3 FC FF FF         JL 0x0046d71d
0046DA5A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046DA61  0F 8D B6 FC FF FF         JGE 0x0046d71d
0046DA67  66 85 C9                  TEST CX,CX
0046DA6A  0F 8C AD FC FF FF         JL 0x0046d71d
0046DA70  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046DA77  0F 8D A0 FC FF FF         JGE 0x0046d71d
0046DA7D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046DA84  0F BF C9                  MOVSX ECX,CX
0046DA87  0F BF D2                  MOVSX EDX,DX
0046DA8A  0F AF CB                  IMUL ECX,EBX
0046DA8D  0F BF FF                  MOVSX EDI,DI
0046DA90  0F AF D7                  IMUL EDX,EDI
0046DA93  0F BF C0                  MOVSX EAX,AX
0046DA96  03 CA                     ADD ECX,EDX
0046DA98  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046DA9E  03 C8                     ADD ECX,EAX
0046DAA0  33 DB                     XOR EBX,EBX
0046DAA2  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046DAA5  3B FB                     CMP EDI,EBX
0046DAA7  0F 84 70 FC FF FF         JZ 0x0046d71d
0046DAAD  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0046DAB0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0046DAB3  3B C1                     CMP EAX,ECX
0046DAB5  0F 85 62 FC FF FF         JNZ 0x0046d71d
0046DABB  8B 17                     MOV EDX,dword ptr [EDI]
0046DABD  8B CF                     MOV ECX,EDI
0046DABF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046DAC2  83 F8 3B                  CMP EAX,0x3b
0046DAC5  74 10                     JZ 0x0046dad7
0046DAC7  8B 07                     MOV EAX,dword ptr [EDI]
0046DAC9  8B CF                     MOV ECX,EDI
0046DACB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046DACE  83 F8 60                  CMP EAX,0x60
0046DAD1  0F 85 46 FC FF FF         JNZ 0x0046d71d
LAB_0046dad7:
0046DAD7  8B CF                     MOV ECX,EDI
0046DAD9  E8 92 79 F9 FF            CALL 0x00405470
0046DADE  83 F8 01                  CMP EAX,0x1
0046DAE1  75 5E                     JNZ 0x0046db41
0046DAE3  57                        PUSH EDI
0046DAE4  8B CE                     MOV ECX,ESI
0046DAE6  E8 B7 42 F9 FF            CALL 0x00401da2
0046DAEB  83 F8 01                  CMP EAX,0x1
0046DAEE  75 51                     JNZ 0x0046db41
0046DAF0  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
0046DAF3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046DAF6  89 8E 32 05 00 00         MOV dword ptr [ESI + 0x532],ECX
0046DAFC  52                        PUSH EDX
0046DAFD  8B CF                     MOV ECX,EDI
0046DAFF  E8 CE 71 F9 FF            CALL 0x00404cd2
0046DB04  0F BF 86 40 05 00 00      MOVSX EAX,word ptr [ESI + 0x540]
0046DB0B  0F BF 8E 3E 05 00 00      MOVSX ECX,word ptr [ESI + 0x53e]
0046DB12  0F BF 96 3C 05 00 00      MOVSX EDX,word ptr [ESI + 0x53c]
0046DB19  50                        PUSH EAX
0046DB1A  51                        PUSH ECX
0046DB1B  52                        PUSH EDX
0046DB1C  8B CE                     MOV ECX,ESI
0046DB1E  89 9E 44 05 00 00         MOV dword ptr [ESI + 0x544],EBX
0046DB24  C7 86 4C 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x54c],0x3
0046DB2E  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
0046DB34  E8 32 74 F9 FF            CALL 0x00404f6b
0046DB39  53                        PUSH EBX
0046DB3A  8B CE                     MOV ECX,ESI
0046DB3C  E8 9D 56 F9 FF            CALL 0x004031de
LAB_0046db41:
0046DB41  B8 02 00 00 00            MOV EAX,0x2
0046DB46  5F                        POP EDI
0046DB47  5E                        POP ESI
0046DB48  5B                        POP EBX
0046DB49  8B E5                     MOV ESP,EBP
0046DB4B  5D                        POP EBP
0046DB4C  C2 04 00                  RET 0x4
LAB_0046db4f:
0046DB4F  BF 03 00 00 00            MOV EDI,0x3
0046DB54  3B C7                     CMP EAX,EDI
0046DB56  0F 85 8F 02 00 00         JNZ 0x0046ddeb
0046DB5C  6A 02                     PUSH 0x2
0046DB5E  8B CE                     MOV ECX,ESI
0046DB60  E8 79 56 F9 FF            CALL 0x004031de
0046DB65  40                        INC EAX
0046DB66  83 F8 04                  CMP EAX,0x4
0046DB69  0F 87 84 0E 00 00         JA 0x0046e9f3
switchD_0046db6f::switchD:
0046DB6F  FF 24 85 38 EA 46 00      JMP dword ptr [EAX*0x4 + 0x46ea38]
switchD_0046db6f::caseD_ffffffff:
0046DB76  68 70 A9 7A 00            PUSH 0x7aa970
0046DB7B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046DB80  6A 00                     PUSH 0x0
0046DB82  6A 00                     PUSH 0x0
0046DB84  68 D9 26 00 00            PUSH 0x26d9
0046DB89  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046DB8E  E8 3D F9 23 00            CALL 0x006ad4d0
0046DB93  83 C4 18                  ADD ESP,0x18
0046DB96  85 C0                     TEST EAX,EAX
0046DB98  74 01                     JZ 0x0046db9b
0046DB9A  CC                        INT3
LAB_0046db9b:
0046DB9B  68 D9 26 00 00            PUSH 0x26d9
0046DBA0  E9 B2 0C 00 00            JMP 0x0046e857
switchD_0046db6f::caseD_0:
0046DBA5  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046DBAC  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046DBB3  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046DBBA  66 85 C0                  TEST AX,AX
0046DBBD  0F 8C 8F FA FF FF         JL 0x0046d652
0046DBC3  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046DBCA  66 3B C7                  CMP AX,DI
0046DBCD  0F 8D 7F FA FF FF         JGE 0x0046d652
0046DBD3  66 85 D2                  TEST DX,DX
0046DBD6  0F 8C 76 FA FF FF         JL 0x0046d652
0046DBDC  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046DBE3  0F 8D 69 FA FF FF         JGE 0x0046d652
0046DBE9  66 85 C9                  TEST CX,CX
0046DBEC  0F 8C 60 FA FF FF         JL 0x0046d652
0046DBF2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046DBF9  0F 8D 53 FA FF FF         JGE 0x0046d652
0046DBFF  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046DC06  0F BF C9                  MOVSX ECX,CX
0046DC09  0F BF D2                  MOVSX EDX,DX
0046DC0C  0F AF CB                  IMUL ECX,EBX
0046DC0F  0F BF FF                  MOVSX EDI,DI
0046DC12  0F AF D7                  IMUL EDX,EDI
0046DC15  0F BF C0                  MOVSX EAX,AX
0046DC18  03 CA                     ADD ECX,EDX
0046DC1A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046DC20  03 C8                     ADD ECX,EAX
0046DC22  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046DC25  85 FF                     TEST EDI,EDI
0046DC27  0F 84 25 FA FF FF         JZ 0x0046d652
0046DC2D  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0046DC30  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0046DC33  3B C1                     CMP EAX,ECX
0046DC35  0F 85 17 FA FF FF         JNZ 0x0046d652
0046DC3B  8B 17                     MOV EDX,dword ptr [EDI]
0046DC3D  8B CF                     MOV ECX,EDI
0046DC3F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046DC42  83 F8 3B                  CMP EAX,0x3b
0046DC45  74 10                     JZ 0x0046dc57
0046DC47  8B 07                     MOV EAX,dword ptr [EDI]
0046DC49  8B CF                     MOV ECX,EDI
0046DC4B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046DC4E  83 F8 60                  CMP EAX,0x60
0046DC51  0F 85 FB F9 FF FF         JNZ 0x0046d652
LAB_0046dc57:
0046DC57  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0046DC5B  66 3B 8E 3C 05 00 00      CMP CX,word ptr [ESI + 0x53c]
0046DC62  75 4A                     JNZ 0x0046dcae
0046DC64  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0046DC68  66 3B 96 3E 05 00 00      CMP DX,word ptr [ESI + 0x53e]
0046DC6F  75 3D                     JNZ 0x0046dcae
0046DC71  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0046DC75  66 3B 86 40 05 00 00      CMP AX,word ptr [ESI + 0x540]
0046DC7C  75 30                     JNZ 0x0046dcae
0046DC7E  8B 06                     MOV EAX,dword ptr [ESI]
0046DC80  8B CE                     MOV ECX,ESI
0046DC82  C7 86 4C 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x54c],0x4
0046DC8C  C7 86 50 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x550],0x0
0046DC96  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046DC9C  F7 D8                     NEG EAX
0046DC9E  1B C0                     SBB EAX,EAX
0046DCA0  24 FD                     AND AL,0xfd
0046DCA2  83 C0 02                  ADD EAX,0x2
0046DCA5  5F                        POP EDI
0046DCA6  5E                        POP ESI
0046DCA7  5B                        POP EBX
0046DCA8  8B E5                     MOV ESP,EBP
0046DCAA  5D                        POP EBP
0046DCAB  C2 04 00                  RET 0x4
LAB_0046dcae:
0046DCAE  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0046DCB1  51                        PUSH ECX
0046DCB2  8B CF                     MOV ECX,EDI
0046DCB4  E8 11 50 F9 FF            CALL 0x00402cca
LAB_0046dcb9:
0046DCB9  33 C0                     XOR EAX,EAX
0046DCBB  5F                        POP EDI
0046DCBC  5E                        POP ESI
0046DCBD  5B                        POP EBX
0046DCBE  8B E5                     MOV ESP,EBP
0046DCC0  5D                        POP EBP
0046DCC1  C2 04 00                  RET 0x4
switchD_0046db6f::caseD_3:
0046DCC4  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046DCCB  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046DCD2  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046DCD9  66 85 C0                  TEST AX,AX
0046DCDC  0F 8C E3 00 00 00         JL 0x0046ddc5
0046DCE2  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046DCE9  66 3B C7                  CMP AX,DI
0046DCEC  0F 8D D3 00 00 00         JGE 0x0046ddc5
0046DCF2  66 85 D2                  TEST DX,DX
0046DCF5  0F 8C CA 00 00 00         JL 0x0046ddc5
0046DCFB  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046DD02  0F 8D BD 00 00 00         JGE 0x0046ddc5
0046DD08  66 85 C9                  TEST CX,CX
0046DD0B  0F 8C B4 00 00 00         JL 0x0046ddc5
0046DD11  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046DD18  0F 8D A7 00 00 00         JGE 0x0046ddc5
0046DD1E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046DD25  0F BF C9                  MOVSX ECX,CX
0046DD28  0F BF D2                  MOVSX EDX,DX
0046DD2B  0F AF CB                  IMUL ECX,EBX
0046DD2E  0F BF FF                  MOVSX EDI,DI
0046DD31  0F AF D7                  IMUL EDX,EDI
0046DD34  0F BF C0                  MOVSX EAX,AX
0046DD37  03 CA                     ADD ECX,EDX
0046DD39  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046DD3F  03 C8                     ADD ECX,EAX
0046DD41  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0046DD44  85 C0                     TEST EAX,EAX
0046DD46  74 7D                     JZ 0x0046ddc5
0046DD48  EB 73                     JMP 0x0046ddbd
switchD_0046db6f::caseD_1:
0046DD4A  8B CE                     MOV ECX,ESI
0046DD4C  E8 04 5B F9 FF            CALL 0x00403855
0046DD51  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046DD58  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046DD5F  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046DD66  66 85 C0                  TEST AX,AX
0046DD69  7C 5A                     JL 0x0046ddc5
0046DD6B  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046DD72  66 3B C7                  CMP AX,DI
0046DD75  7D 4E                     JGE 0x0046ddc5
0046DD77  66 85 D2                  TEST DX,DX
0046DD7A  7C 49                     JL 0x0046ddc5
0046DD7C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046DD83  7D 40                     JGE 0x0046ddc5
0046DD85  66 85 C9                  TEST CX,CX
0046DD88  7C 3B                     JL 0x0046ddc5
0046DD8A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046DD91  7D 32                     JGE 0x0046ddc5
0046DD93  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046DD9A  0F BF C9                  MOVSX ECX,CX
0046DD9D  0F BF D2                  MOVSX EDX,DX
0046DDA0  0F AF CB                  IMUL ECX,EBX
0046DDA3  0F BF FF                  MOVSX EDI,DI
0046DDA6  0F AF D7                  IMUL EDX,EDI
0046DDA9  0F BF C0                  MOVSX EAX,AX
0046DDAC  03 CA                     ADD ECX,EDX
0046DDAE  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046DDB4  03 C8                     ADD ECX,EAX
0046DDB6  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0046DDB9  85 C0                     TEST EAX,EAX
0046DDBB  74 08                     JZ 0x0046ddc5
LAB_0046ddbd:
0046DDBD  50                        PUSH EAX
0046DDBE  8B CE                     MOV ECX,ESI
0046DDC0  E8 DD 3F F9 FF            CALL 0x00401da2
LAB_0046ddc5:
0046DDC5  0F BF 86 40 05 00 00      MOVSX EAX,word ptr [ESI + 0x540]
0046DDCC  0F BF 8E 3E 05 00 00      MOVSX ECX,word ptr [ESI + 0x53e]
0046DDD3  0F BF 96 3C 05 00 00      MOVSX EDX,word ptr [ESI + 0x53c]
0046DDDA  50                        PUSH EAX
0046DDDB  51                        PUSH ECX
0046DDDC  52                        PUSH EDX
0046DDDD  8B CE                     MOV ECX,ESI
0046DDDF  E8 87 71 F9 FF            CALL 0x00404f6b
0046DDE4  6A 00                     PUSH 0x0
0046DDE6  E9 01 0C 00 00            JMP 0x0046e9ec
LAB_0046ddeb:
0046DDEB  83 F8 04                  CMP EAX,0x4
0046DDEE  0F 85 AD 03 00 00         JNZ 0x0046e1a1
0046DDF4  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046DDFA  85 C0                     TEST EAX,EAX
0046DDFC  75 5B                     JNZ 0x0046de59
0046DDFE  66 8B 86 30 05 00 00      MOV AX,word ptr [ESI + 0x530]
0046DE05  8B 16                     MOV EDX,dword ptr [ESI]
0046DE07  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046DE0C  05 2C 01 00 00            ADD EAX,0x12c
0046DE11  50                        PUSH EAX
0046DE12  66 8B 86 2E 05 00 00      MOV AX,word ptr [ESI + 0x52e]
0046DE19  66 40                     INC AX
0046DE1B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046DE1E  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046DE21  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0046DE24  50                        PUSH EAX
0046DE25  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046DE2C  66 40                     INC AX
0046DE2E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046DE31  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046DE34  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0046DE37  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046DE3B  50                        PUSH EAX
0046DE3C  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046DE40  51                        PUSH ECX
0046DE41  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046DE45  50                        PUSH EAX
0046DE46  51                        PUSH ECX
0046DE47  8B CE                     MOV ECX,ESI
0046DE49  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046DE4C  66 89 86 42 05 00 00      MOV word ptr [ESI + 0x542],AX
0046DE53  89 9E 50 05 00 00         MOV dword ptr [ESI + 0x550],EBX
LAB_0046de59:
0046DE59  39 9E 50 05 00 00         CMP dword ptr [ESI + 0x550],EBX
0046DE5F  75 75                     JNZ 0x0046ded6
0046DE61  66 8B 96 42 05 00 00      MOV DX,word ptr [ESI + 0x542]
0046DE68  8B CE                     MOV ECX,ESI
0046DE6A  52                        PUSH EDX
0046DE6B  E8 42 52 F9 FF            CALL 0x004030b2
0046DE70  50                        PUSH EAX
0046DE71  8B CE                     MOV ECX,ESI
0046DE73  E8 84 44 F9 FF            CALL 0x004022fc
0046DE78  83 F8 FF                  CMP EAX,-0x1
0046DE7B  74 2A                     JZ 0x0046dea7
0046DE7D  85 C0                     TEST EAX,EAX
0046DE7F  75 55                     JNZ 0x0046ded6
0046DE81  8B 06                     MOV EAX,dword ptr [ESI]
0046DE83  8B CE                     MOV ECX,ESI
0046DE85  C7 86 50 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x550],0x2
0046DE8F  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046DE95  F7 D8                     NEG EAX
0046DE97  1B C0                     SBB EAX,EAX
0046DE99  24 FD                     AND AL,0xfd
0046DE9B  83 C0 02                  ADD EAX,0x2
0046DE9E  5F                        POP EDI
0046DE9F  5E                        POP ESI
0046DEA0  5B                        POP EBX
0046DEA1  8B E5                     MOV ESP,EBP
0046DEA3  5D                        POP EBP
0046DEA4  C2 04 00                  RET 0x4
LAB_0046dea7:
0046DEA7  68 44 A9 7A 00            PUSH 0x7aa944
0046DEAC  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046DEB1  6A 00                     PUSH 0x0
0046DEB3  6A 00                     PUSH 0x0
0046DEB5  68 12 27 00 00            PUSH 0x2712
0046DEBA  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046DEBF  E8 0C F6 23 00            CALL 0x006ad4d0
0046DEC4  83 C4 18                  ADD ESP,0x18
0046DEC7  85 C0                     TEST EAX,EAX
0046DEC9  74 01                     JZ 0x0046decc
0046DECB  CC                        INT3
LAB_0046decc:
0046DECC  68 13 27 00 00            PUSH 0x2713
0046DED1  E9 81 09 00 00            JMP 0x0046e857
LAB_0046ded6:
0046DED6  83 BE 50 05 00 00 02      CMP dword ptr [ESI + 0x550],0x2
0046DEDD  75 58                     JNZ 0x0046df37
0046DEDF  66 8B 86 30 05 00 00      MOV AX,word ptr [ESI + 0x530]
0046DEE6  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046DEE9  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046DEEE  05 2C 01 00 00            ADD EAX,0x12c
0046DEF3  52                        PUSH EDX
0046DEF4  50                        PUSH EAX
0046DEF5  66 8B 86 2E 05 00 00      MOV AX,word ptr [ESI + 0x52e]
0046DEFC  66 40                     INC AX
0046DEFE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046DF01  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046DF04  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0046DF07  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046DF0E  66 40                     INC AX
0046DF10  52                        PUSH EDX
0046DF11  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046DF14  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046DF17  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0046DF1A  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046DF1E  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046DF22  52                        PUSH EDX
0046DF23  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046DF27  50                        PUSH EAX
0046DF28  51                        PUSH ECX
0046DF29  52                        PUSH EDX
0046DF2A  8B CE                     MOV ECX,ESI
0046DF2C  E8 24 45 F9 FF            CALL 0x00402455
0046DF31  89 BE 50 05 00 00         MOV dword ptr [ESI + 0x550],EDI
LAB_0046df37:
0046DF37  39 BE 50 05 00 00         CMP dword ptr [ESI + 0x550],EDI
0046DF3D  0F 85 B0 0A 00 00         JNZ 0x0046e9f3
0046DF43  8D 45 F4                  LEA EAX,[EBP + -0xc]
0046DF46  8D 4D F0                  LEA ECX,[EBP + -0x10]
0046DF49  50                        PUSH EAX
0046DF4A  51                        PUSH ECX
0046DF4B  8B CE                     MOV ECX,ESI
0046DF4D  E8 F5 48 F9 FF            CALL 0x00402847
0046DF52  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046DF58  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0046DF5B  84 C9                     TEST CL,CL
0046DF5D  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0046DF64  0F 86 B0 01 00 00         JBE 0x0046e11a
0046DF6A  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
0046DF70  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0046DF73  EB 05                     JMP 0x0046df7a
LAB_0046df75:
0046DF75  BB 01 00 00 00            MOV EBX,0x1
LAB_0046df7a:
0046DF7A  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046DF7E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0046DF81  50                        PUSH EAX
0046DF82  8B 01                     MOV EAX,dword ptr [ECX]
0046DF84  83 EC 08                  SUB ESP,0x8
0046DF87  8B D4                     MOV EDX,ESP
0046DF89  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0046DF8D  89 02                     MOV dword ptr [EDX],EAX
0046DF8F  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0046DF93  8D 55 DC                  LEA EDX,[EBP + -0x24]
0046DF96  52                        PUSH EDX
0046DF97  8B CE                     MOV ECX,ESI
0046DF99  E8 8E 54 F9 FF            CALL 0x0040342c
0046DF9E  8B 08                     MOV ECX,dword ptr [EAX]
0046DFA0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0046DFA3  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0046DFA7  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0046DFAC  3B C3                     CMP EAX,EBX
0046DFAE  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0046DFB1  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
0046DFB5  0F 85 96 00 00 00         JNZ 0x0046e051
0046DFBB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046DFC1  6A 00                     PUSH 0x0
0046DFC3  6A 00                     PUSH 0x0
0046DFC5  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0046DFCB  6A FF                     PUSH -0x1
0046DFCD  8B CF                     MOV ECX,EDI
0046DFCF  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046DFD2  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046DFD8  6A 00                     PUSH 0x0
0046DFDA  6A 00                     PUSH 0x0
0046DFDC  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
0046DFE2  6A 00                     PUSH 0x0
0046DFE4  8B D3                     MOV EDX,EBX
0046DFE6  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0046DFE9  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046DFEF  6A 00                     PUSH 0x0
0046DFF1  6A 00                     PUSH 0x0
0046DFF3  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0046DFF9  6A 00                     PUSH 0x0
0046DFFB  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046DFFE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0046E001  D9 46 70                  FLD float ptr [ESI + 0x70]
0046E004  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0046E00A  E8 79 02 2C 00            CALL 0x0072e288
0046E00F  0F BF C8                  MOVSX ECX,AX
0046E012  8B C7                     MOV EAX,EDI
0046E014  33 D2                     XOR EDX,EDX
0046E016  C1 E8 10                  SHR EAX,0x10
0046E019  BF 07 00 00 00            MOV EDI,0x7
0046E01E  F7 F7                     DIV EDI
0046E020  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
0046E024  03 CA                     ADD ECX,EDX
0046E026  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046E02A  03 CA                     ADD ECX,EDX
0046E02C  33 D2                     XOR EDX,EDX
0046E02E  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0046E032  8B C3                     MOV EAX,EBX
0046E034  51                        PUSH ECX
0046E035  8B CF                     MOV ECX,EDI
0046E037  C1 E8 10                  SHR EAX,0x10
0046E03A  F7 F1                     DIV ECX
0046E03C  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046E040  0F BF 4D E6               MOVSX ECX,word ptr [EBP + -0x1a]
0046E044  03 D0                     ADD EDX,EAX
0046E046  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0046E049  2B D1                     SUB EDX,ECX
0046E04B  83 EA 03                  SUB EDX,0x3
0046E04E  52                        PUSH EDX
0046E04F  EB 7A                     JMP 0x0046e0cb
LAB_0046e051:
0046E051  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046E057  05 39 30 00 00            ADD EAX,0x3039
0046E05C  BB 07 00 00 00            MOV EBX,0x7
0046E061  8B C8                     MOV ECX,EAX
0046E063  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046E066  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046E06C  81 C1 39 30 00 00         ADD ECX,0x3039
0046E072  6A 00                     PUSH 0x0
0046E074  8B D1                     MOV EDX,ECX
0046E076  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0046E079  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046E07F  C1 E8 10                  SHR EAX,0x10
0046E082  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0046E088  33 D2                     XOR EDX,EDX
0046E08A  F7 F3                     DIV EBX
0046E08C  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046E08F  6A 00                     PUSH 0x0
0046E091  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0046E095  6A FF                     PUSH -0x1
0046E097  6A 00                     PUSH 0x0
0046E099  6A 00                     PUSH 0x0
0046E09B  6A 00                     PUSH 0x0
0046E09D  6A 00                     PUSH 0x0
0046E09F  6A 00                     PUSH 0x0
0046E0A1  6A 00                     PUSH 0x0
0046E0A3  03 D0                     ADD EDX,EAX
0046E0A5  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
0046E0A9  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0046E0AD  8B C1                     MOV EAX,ECX
0046E0AF  52                        PUSH EDX
0046E0B0  33 D2                     XOR EDX,EDX
0046E0B2  C1 E8 10                  SHR EAX,0x10
0046E0B5  8B CB                     MOV ECX,EBX
0046E0B7  F7 F1                     DIV ECX
0046E0B9  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046E0BD  0F BF 4D E6               MOVSX ECX,word ptr [EBP + -0x1a]
0046E0C1  03 D0                     ADD EDX,EAX
0046E0C3  8B C7                     MOV EAX,EDI
0046E0C5  2B D1                     SUB EDX,ECX
0046E0C7  83 EA 03                  SUB EDX,0x3
0046E0CA  52                        PUSH EDX
LAB_0046e0cb:
0046E0CB  C1 E8 10                  SHR EAX,0x10
0046E0CE  33 D2                     XOR EDX,EDX
0046E0D0  B9 07 00 00 00            MOV ECX,0x7
0046E0D5  F7 F1                     DIV ECX
0046E0D7  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0046E0DB  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
0046E0DF  03 D0                     ADD EDX,EAX
0046E0E1  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0046E0E5  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0046E0EB  52                        PUSH EDX
0046E0EC  6A 07                     PUSH 0x7
0046E0EE  6A 02                     PUSH 0x2
0046E0F0  6A 01                     PUSH 0x1
0046E0F2  E8 3C 33 F9 FF            CALL 0x00401433
0046E0F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046E0FA  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0046E0FD  33 C9                     XOR ECX,ECX
0046E0FF  40                        INC EAX
0046E100  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046E106  83 C7 06                  ADD EDI,0x6
0046E109  3B C1                     CMP EAX,ECX
0046E10B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0046E10E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0046E111  0F 8C 5E FE FF FF         JL 0x0046df75
0046E117  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0046e11a:
0046E11A  83 F8 FF                  CMP EAX,-0x1
0046E11D  74 34                     JZ 0x0046e153
0046E11F  85 C0                     TEST EAX,EAX
0046E121  0F 85 CC 08 00 00         JNZ 0x0046e9f3
0046E127  89 86 50 05 00 00         MOV dword ptr [ESI + 0x550],EAX
0046E12D  8B 06                     MOV EAX,dword ptr [ESI]
0046E12F  8B CE                     MOV ECX,ESI
0046E131  C7 86 4C 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x54c],0x5
0046E13B  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046E141  F7 D8                     NEG EAX
0046E143  1B C0                     SBB EAX,EAX
0046E145  24 FD                     AND AL,0xfd
0046E147  83 C0 02                  ADD EAX,0x2
0046E14A  5F                        POP EDI
0046E14B  5E                        POP ESI
0046E14C  5B                        POP EBX
0046E14D  8B E5                     MOV ESP,EBP
0046E14F  5D                        POP EBP
0046E150  C2 04 00                  RET 0x4
LAB_0046e153:
0046E153  68 18 A9 7A 00            PUSH 0x7aa918
0046E158  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046E15D  6A 00                     PUSH 0x0
0046E15F  6A 00                     PUSH 0x0
0046E161  68 38 27 00 00            PUSH 0x2738
0046E166  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E16B  E8 60 F3 23 00            CALL 0x006ad4d0
0046E170  83 C4 18                  ADD ESP,0x18
0046E173  85 C0                     TEST EAX,EAX
0046E175  74 01                     JZ 0x0046e178
0046E177  CC                        INT3
LAB_0046e178:
0046E178  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0046E17E  68 39 27 00 00            PUSH 0x2739
0046E183  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E188  52                        PUSH EDX
0046E189  68 FF FF 00 00            PUSH 0xffff
0046E18E  E8 AD 7C 23 00            CALL 0x006a5e40
0046E193  B8 FF FF 00 00            MOV EAX,0xffff
0046E198  5F                        POP EDI
0046E199  5E                        POP ESI
0046E19A  5B                        POP EBX
0046E19B  8B E5                     MOV ESP,EBP
0046E19D  5D                        POP EBP
0046E19E  C2 04 00                  RET 0x4
LAB_0046e1a1:
0046E1A1  83 F8 05                  CMP EAX,0x5
0046E1A4  0F 85 05 02 00 00         JNZ 0x0046e3af
0046E1AA  8B 8E 44 05 00 00         MOV ECX,dword ptr [ESI + 0x544]
0046E1B0  41                        INC ECX
0046E1B1  8B C1                     MOV EAX,ECX
0046E1B3  89 8E 44 05 00 00         MOV dword ptr [ESI + 0x544],ECX
0046E1B9  99                        CDQ
0046E1BA  B9 0A 00 00 00            MOV ECX,0xa
0046E1BF  F7 F9                     IDIV ECX
0046E1C1  3B D3                     CMP EDX,EBX
0046E1C3  0F 85 48 06 00 00         JNZ 0x0046e811
0046E1C9  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0046E1D0  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0046E1D7  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0046E1DE  66 85 C0                  TEST AX,AX
0046E1E1  0F 8C A8 01 00 00         JL 0x0046e38f
0046E1E7  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
0046E1EE  66 3B C3                  CMP AX,BX
0046E1F1  0F 8D 98 01 00 00         JGE 0x0046e38f
0046E1F7  66 85 D2                  TEST DX,DX
0046E1FA  0F 8C 8F 01 00 00         JL 0x0046e38f
0046E200  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046E207  0F 8D 82 01 00 00         JGE 0x0046e38f
0046E20D  66 85 C9                  TEST CX,CX
0046E210  0F 8C 79 01 00 00         JL 0x0046e38f
0046E216  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046E21D  0F 8D 6C 01 00 00         JGE 0x0046e38f
0046E223  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0046E22A  0F BF C9                  MOVSX ECX,CX
0046E22D  0F AF CF                  IMUL ECX,EDI
0046E230  0F BF D2                  MOVSX EDX,DX
0046E233  0F BF FB                  MOVSX EDI,BX
0046E236  0F AF D7                  IMUL EDX,EDI
0046E239  0F BF C0                  MOVSX EAX,AX
0046E23C  03 CA                     ADD ECX,EDX
0046E23E  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046E244  03 C8                     ADD ECX,EAX
0046E246  8B 1C CA                  MOV EBX,dword ptr [EDX + ECX*0x8]
0046E249  85 DB                     TEST EBX,EBX
0046E24B  0F 84 3E 01 00 00         JZ 0x0046e38f
0046E251  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0046E254  8B 8E 32 05 00 00         MOV ECX,dword ptr [ESI + 0x532]
0046E25A  3B C1                     CMP EAX,ECX
0046E25C  0F 85 2D 01 00 00         JNZ 0x0046e38f
0046E262  8B 83 B4 04 00 00         MOV EAX,dword ptr [EBX + 0x4b4]
0046E268  85 C0                     TEST EAX,EAX
0046E26A  0F 85 1F 01 00 00         JNZ 0x0046e38f
0046E270  83 BB 45 02 00 00 06      CMP dword ptr [EBX + 0x245],0x6
0046E277  0F 84 12 01 00 00         JZ 0x0046e38f
0046E27D  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
0046E283  B9 78 00 00 00            MOV ECX,0x78
0046E288  99                        CDQ
0046E289  F7 F9                     IDIV ECX
0046E28B  83 FA 01                  CMP EDX,0x1
0046E28E  75 42                     JNZ 0x0046e2d2
0046E290  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0046E296  83 F8 08                  CMP EAX,0x8
0046E299  74 26                     JZ 0x0046e2c1
0046E29B  83 F8 14                  CMP EAX,0x14
0046E29E  74 0E                     JZ 0x0046e2ae
0046E2A0  83 F8 1A                  CMP EAX,0x1a
0046E2A3  75 2D                     JNZ 0x0046e2d2
0046E2A5  8B 16                     MOV EDX,dword ptr [ESI]
0046E2A7  68 9E 01 00 00            PUSH 0x19e
0046E2AC  EB 1A                     JMP 0x0046e2c8
LAB_0046e2ae:
0046E2AE  8B 06                     MOV EAX,dword ptr [ESI]
0046E2B0  68 5F 01 00 00            PUSH 0x15f
0046E2B5  6A 03                     PUSH 0x3
0046E2B7  8B CE                     MOV ECX,ESI
0046E2B9  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
0046E2BF  EB 11                     JMP 0x0046e2d2
LAB_0046e2c1:
0046E2C1  8B 16                     MOV EDX,dword ptr [ESI]
0046E2C3  68 FB 00 00 00            PUSH 0xfb
LAB_0046e2c8:
0046E2C8  6A 03                     PUSH 0x3
0046E2CA  8B CE                     MOV ECX,ESI
0046E2CC  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_0046e2d2:
0046E2D2  8B 86 D2 07 00 00         MOV EAX,dword ptr [ESI + 0x7d2]
0046E2D8  BF 01 00 00 00            MOV EDI,0x1
0046E2DD  85 C0                     TEST EAX,EAX
0046E2DF  7E 29                     JLE 0x0046e30a
0046E2E1  3B C7                     CMP EAX,EDI
0046E2E3  7D 02                     JGE 0x0046e2e7
0046E2E5  8B F8                     MOV EDI,EAX
LAB_0046e2e7:
0046E2E7  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0046E2EA  8B CB                     MOV ECX,EBX
0046E2EC  50                        PUSH EAX
0046E2ED  68 DC 00 00 00            PUSH 0xdc
0046E2F2  E8 C9 7B F9 FF            CALL 0x00405ec0
0046E2F7  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0046E2FA  51                        PUSH ECX
0046E2FB  8B CB                     MOV ECX,EBX
0046E2FD  E8 6A 48 F9 FF            CALL 0x00402b6c
0046E302  29 BE D2 07 00 00         SUB dword ptr [ESI + 0x7d2],EDI
0046E308  EB 69                     JMP 0x0046e373
LAB_0046e30a:
0046E30A  8B 86 D6 07 00 00         MOV EAX,dword ptr [ESI + 0x7d6]
0046E310  85 C0                     TEST EAX,EAX
0046E312  7E 2A                     JLE 0x0046e33e
0046E314  83 F8 01                  CMP EAX,0x1
0046E317  7D 02                     JGE 0x0046e31b
0046E319  8B F8                     MOV EDI,EAX
LAB_0046e31b:
0046E31B  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
0046E31E  8B CB                     MOV ECX,EBX
0046E320  52                        PUSH EDX
0046E321  68 DD 00 00 00            PUSH 0xdd
0046E326  E8 95 7B F9 FF            CALL 0x00405ec0
0046E32B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0046E32E  8B CB                     MOV ECX,EBX
0046E330  50                        PUSH EAX
0046E331  E8 36 48 F9 FF            CALL 0x00402b6c
0046E336  29 BE D6 07 00 00         SUB dword ptr [ESI + 0x7d6],EDI
0046E33C  EB 35                     JMP 0x0046e373
LAB_0046e33e:
0046E33E  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
0046E344  85 C0                     TEST EAX,EAX
0046E346  7E 2B                     JLE 0x0046e373
0046E348  83 F8 01                  CMP EAX,0x1
0046E34B  7D 02                     JGE 0x0046e34f
0046E34D  8B F8                     MOV EDI,EAX
LAB_0046e34f:
0046E34F  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
0046E352  C1 E1 02                  SHL ECX,0x2
0046E355  51                        PUSH ECX
0046E356  68 DE 00 00 00            PUSH 0xde
0046E35B  8B CB                     MOV ECX,EBX
0046E35D  E8 5E 7B F9 FF            CALL 0x00405ec0
0046E362  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046E365  8B CB                     MOV ECX,EBX
0046E367  52                        PUSH EDX
0046E368  E8 FF 47 F9 FF            CALL 0x00402b6c
0046E36D  29 BE DA 07 00 00         SUB dword ptr [ESI + 0x7da],EDI
LAB_0046e373:
0046E373  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
0046E379  8B 96 D6 07 00 00         MOV EDX,dword ptr [ESI + 0x7d6]
0046E37F  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
0046E385  03 C2                     ADD EAX,EDX
0046E387  03 C1                     ADD EAX,ECX
0046E389  0F 85 82 04 00 00         JNZ 0x0046e811
LAB_0046e38f:
0046E38F  8B CE                     MOV ECX,ESI
0046E391  E8 75 58 F9 FF            CALL 0x00403c0b
0046E396  C7 86 44 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x544],0x0
0046E3A0  C7 86 4C 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x54c],0x6
0046E3AA  E9 62 04 00 00            JMP 0x0046e811
LAB_0046e3af:
0046E3AF  83 F8 06                  CMP EAX,0x6
0046E3B2  0F 85 E6 03 00 00         JNZ 0x0046e79e
0046E3B8  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
0046E3BE  41                        INC ECX
0046E3BF  8B C1                     MOV EAX,ECX
0046E3C1  89 8E 48 05 00 00         MOV dword ptr [ESI + 0x548],ECX
0046E3C7  83 F8 46                  CMP EAX,0x46
0046E3CA  0F 8C 91 00 00 00         JL 0x0046e461
0046E3D0  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046E3D6  85 C0                     TEST EAX,EAX
0046E3D8  75 53                     JNZ 0x0046e42d
0046E3DA  66 8B 86 40 05 00 00      MOV AX,word ptr [ESI + 0x540]
0046E3E1  66 8B 8E 3E 05 00 00      MOV CX,word ptr [ESI + 0x53e]
0046E3E8  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046E3ED  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046E3F2  83 C0 64                  ADD EAX,0x64
0046E3F5  8B 16                     MOV EDX,dword ptr [ESI]
0046E3F7  50                        PUSH EAX
0046E3F8  66 8B 86 3C 05 00 00      MOV AX,word ptr [ESI + 0x53c]
0046E3FF  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046E404  83 C1 64                  ADD ECX,0x64
0046E407  83 C0 64                  ADD EAX,0x64
0046E40A  51                        PUSH ECX
0046E40B  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046E40F  50                        PUSH EAX
0046E410  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046E414  51                        PUSH ECX
0046E415  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046E419  50                        PUSH EAX
0046E41A  51                        PUSH ECX
0046E41B  8B CE                     MOV ECX,ESI
0046E41D  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046E420  66 89 86 42 05 00 00      MOV word ptr [ESI + 0x542],AX
0046E427  89 9E 50 05 00 00         MOV dword ptr [ESI + 0x550],EBX
LAB_0046e42d:
0046E42D  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046E433  3B C3                     CMP EAX,EBX
0046E435  75 75                     JNZ 0x0046e4ac
0046E437  66 8B 96 42 05 00 00      MOV DX,word ptr [ESI + 0x542]
0046E43E  8B CE                     MOV ECX,ESI
0046E440  52                        PUSH EDX
0046E441  E8 6C 4C F9 FF            CALL 0x004030b2
0046E446  50                        PUSH EAX
0046E447  8B CE                     MOV ECX,ESI
0046E449  E8 AE 3E F9 FF            CALL 0x004022fc
0046E44E  83 F8 FF                  CMP EAX,-0x1
0046E451  74 2A                     JZ 0x0046e47d
0046E453  85 C0                     TEST EAX,EAX
0046E455  75 0A                     JNZ 0x0046e461
0046E457  C7 86 50 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x550],0x2
LAB_0046e461:
0046E461  8B 06                     MOV EAX,dword ptr [ESI]
0046E463  8B CE                     MOV ECX,ESI
0046E465  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046E46B  F7 D8                     NEG EAX
0046E46D  1B C0                     SBB EAX,EAX
0046E46F  24 FD                     AND AL,0xfd
0046E471  83 C0 02                  ADD EAX,0x2
0046E474  5F                        POP EDI
0046E475  5E                        POP ESI
0046E476  5B                        POP EBX
0046E477  8B E5                     MOV ESP,EBP
0046E479  5D                        POP EBP
0046E47A  C2 04 00                  RET 0x4
LAB_0046e47d:
0046E47D  68 EC A8 7A 00            PUSH 0x7aa8ec
0046E482  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046E487  6A 00                     PUSH 0x0
0046E489  6A 00                     PUSH 0x0
0046E48B  68 98 27 00 00            PUSH 0x2798
0046E490  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E495  E8 36 F0 23 00            CALL 0x006ad4d0
0046E49A  83 C4 18                  ADD ESP,0x18
0046E49D  85 C0                     TEST EAX,EAX
0046E49F  74 01                     JZ 0x0046e4a2
0046E4A1  CC                        INT3
LAB_0046e4a2:
0046E4A2  68 99 27 00 00            PUSH 0x2799
0046E4A7  E9 AB 03 00 00            JMP 0x0046e857
LAB_0046e4ac:
0046E4AC  83 F8 02                  CMP EAX,0x2
0046E4AF  75 50                     JNZ 0x0046e501
0046E4B1  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046E4B4  66 8B 86 40 05 00 00      MOV AX,word ptr [ESI + 0x540]
0046E4BB  66 8B 8E 3E 05 00 00      MOV CX,word ptr [ESI + 0x53e]
0046E4C2  52                        PUSH EDX
0046E4C3  66 8B 96 3C 05 00 00      MOV DX,word ptr [ESI + 0x53c]
0046E4CA  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046E4CF  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046E4D4  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046E4D9  83 C0 64                  ADD EAX,0x64
0046E4DC  83 C1 64                  ADD ECX,0x64
0046E4DF  50                        PUSH EAX
0046E4E0  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046E4E4  83 C2 64                  ADD EDX,0x64
0046E4E7  51                        PUSH ECX
0046E4E8  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046E4EC  52                        PUSH EDX
0046E4ED  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046E4F1  50                        PUSH EAX
0046E4F2  51                        PUSH ECX
0046E4F3  52                        PUSH EDX
0046E4F4  8B CE                     MOV ECX,ESI
0046E4F6  E8 5A 3F F9 FF            CALL 0x00402455
0046E4FB  89 BE 50 05 00 00         MOV dword ptr [ESI + 0x550],EDI
LAB_0046e501:
0046E501  39 BE 50 05 00 00         CMP dword ptr [ESI + 0x550],EDI
0046E507  0F 85 54 FF FF FF         JNZ 0x0046e461
0046E50D  8D 45 F0                  LEA EAX,[EBP + -0x10]
0046E510  8D 4D F4                  LEA ECX,[EBP + -0xc]
0046E513  50                        PUSH EAX
0046E514  51                        PUSH ECX
0046E515  8B CE                     MOV ECX,ESI
0046E517  E8 2B 43 F9 FF            CALL 0x00402847
0046E51C  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046E522  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0046E525  84 C9                     TEST CL,CL
0046E527  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0046E52E  0F 86 B0 01 00 00         JBE 0x0046e6e4
0046E534  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
0046E53A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0046E53D  EB 05                     JMP 0x0046e544
LAB_0046e53f:
0046E53F  BB 01 00 00 00            MOV EBX,0x1
LAB_0046e544:
0046E544  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046E548  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0046E54B  50                        PUSH EAX
0046E54C  8B 01                     MOV EAX,dword ptr [ECX]
0046E54E  83 EC 08                  SUB ESP,0x8
0046E551  8B D4                     MOV EDX,ESP
0046E553  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0046E557  89 02                     MOV dword ptr [EDX],EAX
0046E559  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0046E55D  8D 55 DC                  LEA EDX,[EBP + -0x24]
0046E560  52                        PUSH EDX
0046E561  8B CE                     MOV ECX,ESI
0046E563  E8 C4 4E F9 FF            CALL 0x0040342c
0046E568  8B 08                     MOV ECX,dword ptr [EAX]
0046E56A  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0046E56D  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0046E571  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0046E576  3B C3                     CMP EAX,EBX
0046E578  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0046E57B  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
0046E57F  0F 85 96 00 00 00         JNZ 0x0046e61b
0046E585  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046E58B  6A 00                     PUSH 0x0
0046E58D  6A 00                     PUSH 0x0
0046E58F  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0046E595  6A FF                     PUSH -0x1
0046E597  8B CF                     MOV ECX,EDI
0046E599  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046E59C  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046E5A2  6A 00                     PUSH 0x0
0046E5A4  6A 00                     PUSH 0x0
0046E5A6  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
0046E5AC  6A 00                     PUSH 0x0
0046E5AE  8B D3                     MOV EDX,EBX
0046E5B0  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0046E5B3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046E5B9  6A 00                     PUSH 0x0
0046E5BB  6A 00                     PUSH 0x0
0046E5BD  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0046E5C3  6A 00                     PUSH 0x0
0046E5C5  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046E5C8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0046E5CB  D9 46 70                  FLD float ptr [ESI + 0x70]
0046E5CE  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0046E5D4  E8 AF FC 2B 00            CALL 0x0072e288
0046E5D9  0F BF C8                  MOVSX ECX,AX
0046E5DC  8B C7                     MOV EAX,EDI
0046E5DE  33 D2                     XOR EDX,EDX
0046E5E0  C1 E8 10                  SHR EAX,0x10
0046E5E3  BF 07 00 00 00            MOV EDI,0x7
0046E5E8  F7 F7                     DIV EDI
0046E5EA  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
0046E5EE  03 CA                     ADD ECX,EDX
0046E5F0  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046E5F4  03 CA                     ADD ECX,EDX
0046E5F6  33 D2                     XOR EDX,EDX
0046E5F8  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0046E5FC  8B C3                     MOV EAX,EBX
0046E5FE  51                        PUSH ECX
0046E5FF  8B CF                     MOV ECX,EDI
0046E601  C1 E8 10                  SHR EAX,0x10
0046E604  F7 F1                     DIV ECX
0046E606  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046E60A  0F BF 4D E6               MOVSX ECX,word ptr [EBP + -0x1a]
0046E60E  03 D0                     ADD EDX,EAX
0046E610  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0046E613  2B D1                     SUB EDX,ECX
0046E615  83 EA 03                  SUB EDX,0x3
0046E618  52                        PUSH EDX
0046E619  EB 7A                     JMP 0x0046e695
LAB_0046e61b:
0046E61B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046E621  05 39 30 00 00            ADD EAX,0x3039
0046E626  BB 07 00 00 00            MOV EBX,0x7
0046E62B  8B C8                     MOV ECX,EAX
0046E62D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046E630  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046E636  81 C1 39 30 00 00         ADD ECX,0x3039
0046E63C  6A 00                     PUSH 0x0
0046E63E  8B D1                     MOV EDX,ECX
0046E640  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0046E643  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046E649  C1 E8 10                  SHR EAX,0x10
0046E64C  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0046E652  33 D2                     XOR EDX,EDX
0046E654  F7 F3                     DIV EBX
0046E656  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046E659  6A 00                     PUSH 0x0
0046E65B  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0046E65F  6A FF                     PUSH -0x1
0046E661  6A 00                     PUSH 0x0
0046E663  6A 00                     PUSH 0x0
0046E665  6A 00                     PUSH 0x0
0046E667  6A 00                     PUSH 0x0
0046E669  6A 00                     PUSH 0x0
0046E66B  6A 00                     PUSH 0x0
0046E66D  03 D0                     ADD EDX,EAX
0046E66F  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
0046E673  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0046E677  8B C1                     MOV EAX,ECX
0046E679  52                        PUSH EDX
0046E67A  33 D2                     XOR EDX,EDX
0046E67C  C1 E8 10                  SHR EAX,0x10
0046E67F  8B CB                     MOV ECX,EBX
0046E681  F7 F1                     DIV ECX
0046E683  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046E687  0F BF 4D E6               MOVSX ECX,word ptr [EBP + -0x1a]
0046E68B  03 D0                     ADD EDX,EAX
0046E68D  8B C7                     MOV EAX,EDI
0046E68F  2B D1                     SUB EDX,ECX
0046E691  83 EA 03                  SUB EDX,0x3
0046E694  52                        PUSH EDX
LAB_0046e695:
0046E695  C1 E8 10                  SHR EAX,0x10
0046E698  33 D2                     XOR EDX,EDX
0046E69A  B9 07 00 00 00            MOV ECX,0x7
0046E69F  F7 F1                     DIV ECX
0046E6A1  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0046E6A5  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
0046E6A9  03 D0                     ADD EDX,EAX
0046E6AB  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0046E6AF  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0046E6B5  52                        PUSH EDX
0046E6B6  6A 07                     PUSH 0x7
0046E6B8  6A 02                     PUSH 0x2
0046E6BA  6A 01                     PUSH 0x1
0046E6BC  E8 72 2D F9 FF            CALL 0x00401433
0046E6C1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046E6C4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0046E6C7  33 C9                     XOR ECX,ECX
0046E6C9  40                        INC EAX
0046E6CA  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046E6D0  83 C7 06                  ADD EDI,0x6
0046E6D3  3B C1                     CMP EAX,ECX
0046E6D5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0046E6D8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0046E6DB  0F 8C 5E FE FF FF         JL 0x0046e53f
0046E6E1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0046e6e4:
0046E6E4  83 F8 FF                  CMP EAX,-0x1
0046E6E7  74 67                     JZ 0x0046e750
0046E6E9  85 C0                     TEST EAX,EAX
0046E6EB  0F 85 70 FD FF FF         JNZ 0x0046e461
0046E6F1  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0046E6F5  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0046E6F9  8D BE 3A 05 00 00         LEA EDI,[ESI + 0x53a]
0046E6FF  8D 9E 38 05 00 00         LEA EBX,[ESI + 0x538]
0046E705  57                        PUSH EDI
0046E706  8D 96 36 05 00 00         LEA EDX,[ESI + 0x536]
0046E70C  53                        PUSH EBX
0046E70D  52                        PUSH EDX
0046E70E  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0046E712  6A 02                     PUSH 0x2
0046E714  50                        PUSH EAX
0046E715  51                        PUSH ECX
0046E716  52                        PUSH EDX
0046E717  50                        PUSH EAX
0046E718  51                        PUSH ECX
0046E719  52                        PUSH EDX
0046E71A  8B CE                     MOV ECX,ESI
0046E71C  C7 86 4C 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x54c],0x7
0046E726  E8 DD 61 F9 FF            CALL 0x00404908
0046E72B  0F BF 17                  MOVSX EDX,word ptr [EDI]
0046E72E  0F BF 03                  MOVSX EAX,word ptr [EBX]
0046E731  0F BF 8E 36 05 00 00      MOVSX ECX,word ptr [ESI + 0x536]
0046E738  52                        PUSH EDX
0046E739  50                        PUSH EAX
0046E73A  51                        PUSH ECX
0046E73B  8B CE                     MOV ECX,ESI
0046E73D  E8 29 68 F9 FF            CALL 0x00404f6b
0046E742  6A 00                     PUSH 0x0
0046E744  8B CE                     MOV ECX,ESI
0046E746  E8 93 4A F9 FF            CALL 0x004031de
0046E74B  E9 11 FD FF FF            JMP 0x0046e461
LAB_0046e750:
0046E750  68 C0 A8 7A 00            PUSH 0x7aa8c0
0046E755  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046E75A  6A 00                     PUSH 0x0
0046E75C  6A 00                     PUSH 0x0
0046E75E  68 BD 27 00 00            PUSH 0x27bd
0046E763  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E768  E8 63 ED 23 00            CALL 0x006ad4d0
0046E76D  83 C4 18                  ADD ESP,0x18
0046E770  85 C0                     TEST EAX,EAX
0046E772  74 01                     JZ 0x0046e775
0046E774  CC                        INT3
LAB_0046e775:
0046E775  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0046E77B  68 BE 27 00 00            PUSH 0x27be
0046E780  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E785  52                        PUSH EDX
0046E786  68 FF FF 00 00            PUSH 0xffff
0046E78B  E8 B0 76 23 00            CALL 0x006a5e40
0046E790  B8 FF FF 00 00            MOV EAX,0xffff
0046E795  5F                        POP EDI
0046E796  5E                        POP ESI
0046E797  5B                        POP EBX
0046E798  8B E5                     MOV ESP,EBP
0046E79A  5D                        POP EBP
0046E79B  C2 04 00                  RET 0x4
LAB_0046e79e:
0046E79E  83 F8 07                  CMP EAX,0x7
0046E7A1  0F 85 D4 00 00 00         JNZ 0x0046e87b
0046E7A7  6A 02                     PUSH 0x2
0046E7A9  8B CE                     MOV ECX,ESI
0046E7AB  E8 2E 4A F9 FF            CALL 0x004031de
0046E7B0  83 F8 FF                  CMP EAX,-0x1
0046E7B3  74 78                     JZ 0x0046e82d
0046E7B5  85 C0                     TEST EAX,EAX
0046E7B7  0F 84 71 EF FF FF         JZ 0x0046d72e
0046E7BD  3B C7                     CMP EAX,EDI
0046E7BF  75 50                     JNZ 0x0046e811
0046E7C1  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0046E7C5  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0046E7C9  8D BE 3A 05 00 00         LEA EDI,[ESI + 0x53a]
0046E7CF  8D 9E 38 05 00 00         LEA EBX,[ESI + 0x538]
0046E7D5  57                        PUSH EDI
0046E7D6  8D 96 36 05 00 00         LEA EDX,[ESI + 0x536]
0046E7DC  53                        PUSH EBX
0046E7DD  52                        PUSH EDX
0046E7DE  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0046E7E2  6A 02                     PUSH 0x2
0046E7E4  50                        PUSH EAX
0046E7E5  51                        PUSH ECX
0046E7E6  52                        PUSH EDX
0046E7E7  50                        PUSH EAX
0046E7E8  51                        PUSH ECX
0046E7E9  52                        PUSH EDX
LAB_0046e7ea:
0046E7EA  8B CE                     MOV ECX,ESI
0046E7EC  E8 17 61 F9 FF            CALL 0x00404908
0046E7F1  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0046E7F4  0F BF 13                  MOVSX EDX,word ptr [EBX]
0046E7F7  51                        PUSH ECX
LAB_0046e7f8:
0046E7F8  0F BF 86 36 05 00 00      MOVSX EAX,word ptr [ESI + 0x536]
0046E7FF  52                        PUSH EDX
0046E800  50                        PUSH EAX
LAB_0046e801:
0046E801  8B CE                     MOV ECX,ESI
0046E803  E8 63 67 F9 FF            CALL 0x00404f6b
0046E808  6A 00                     PUSH 0x0
0046E80A  8B CE                     MOV ECX,ESI
0046E80C  E8 CD 49 F9 FF            CALL 0x004031de
switchD_0046d492::caseD_2:
0046E811  8B 16                     MOV EDX,dword ptr [ESI]
0046E813  8B CE                     MOV ECX,ESI
0046E815  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046E81B  F7 D8                     NEG EAX
0046E81D  1B C0                     SBB EAX,EAX
0046E81F  24 FD                     AND AL,0xfd
0046E821  83 C0 02                  ADD EAX,0x2
0046E824  5F                        POP EDI
0046E825  5E                        POP ESI
0046E826  5B                        POP EBX
0046E827  8B E5                     MOV ESP,EBP
0046E829  5D                        POP EBP
0046E82A  C2 04 00                  RET 0x4
LAB_0046e82d:
0046E82D  68 84 A8 7A 00            PUSH 0x7aa884
0046E832  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046E837  6A 00                     PUSH 0x0
0046E839  6A 00                     PUSH 0x0
0046E83B  68 D5 27 00 00            PUSH 0x27d5
0046E840  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E845  E8 86 EC 23 00            CALL 0x006ad4d0
0046E84A  83 C4 18                  ADD ESP,0x18
0046E84D  85 C0                     TEST EAX,EAX
0046E84F  74 01                     JZ 0x0046e852
0046E851  CC                        INT3
LAB_0046e852:
0046E852  68 D5 27 00 00            PUSH 0x27d5
LAB_0046e857:
0046E857  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046E85D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E862  51                        PUSH ECX
0046E863  68 FF FF 00 00            PUSH 0xffff
0046E868  E8 D3 75 23 00            CALL 0x006a5e40
0046E86D  B8 FF FF 00 00            MOV EAX,0xffff
0046E872  5F                        POP EDI
0046E873  5E                        POP ESI
0046E874  5B                        POP EBX
0046E875  8B E5                     MOV ESP,EBP
0046E877  5D                        POP EBP
0046E878  C2 04 00                  RET 0x4
LAB_0046e87b:
0046E87B  68 58 A8 7A 00            PUSH 0x7aa858
0046E880  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046E885  6A 00                     PUSH 0x0
0046E887  6A 00                     PUSH 0x0
0046E889  68 E8 27 00 00            PUSH 0x27e8
0046E88E  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046E893  E8 38 EC 23 00            CALL 0x006ad4d0
0046E898  83 C4 18                  ADD ESP,0x18
0046E89B  85 C0                     TEST EAX,EAX
0046E89D  74 01                     JZ 0x0046e8a0
0046E89F  CC                        INT3
LAB_0046e8a0:
0046E8A0  83 C8 FF                  OR EAX,0xffffffff
0046E8A3  5F                        POP EDI
0046E8A4  5E                        POP ESI
0046E8A5  5B                        POP EBX
0046E8A6  8B E5                     MOV ESP,EBP
0046E8A8  5D                        POP EBP
0046E8A9  C2 04 00                  RET 0x4
LAB_0046e8ac:
0046E8AC  B9 17 00 00 00            MOV ECX,0x17
0046E8B1  33 C0                     XOR EAX,EAX
0046E8B3  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0046E8B9  F3 AB                     STOSD.REP ES:EDI
0046E8BB  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
0046E8C1  8B 96 DA 07 00 00         MOV EDX,dword ptr [ESI + 0x7da]
0046E8C7  8B 8E D6 07 00 00         MOV ECX,dword ptr [ESI + 0x7d6]
0046E8CD  8B 86 D2 07 00 00         MOV EAX,dword ptr [ESI + 0x7d2]
0046E8D3  03 D1                     ADD EDX,ECX
0046E8D5  03 D0                     ADD EDX,EAX
0046E8D7  0F 84 DC F3 FF FF         JZ 0x0046dcb9
0046E8DD  66 8B 86 96 03 00 00      MOV AX,word ptr [ESI + 0x396]
0046E8E4  66 8B 8E 9A 03 00 00      MOV CX,word ptr [ESI + 0x39a]
0046E8EB  66 8B 96 98 03 00 00      MOV DX,word ptr [ESI + 0x398]
0046E8F2  66 85 C0                  TEST AX,AX
0046E8F5  0F 8C BE F3 FF FF         JL 0x0046dcb9
0046E8FB  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046E902  66 3B C7                  CMP AX,DI
0046E905  0F 8D AE F3 FF FF         JGE 0x0046dcb9
0046E90B  66 85 D2                  TEST DX,DX
0046E90E  0F 8C A5 F3 FF FF         JL 0x0046dcb9
0046E914  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046E91B  0F 8D 98 F3 FF FF         JGE 0x0046dcb9
0046E921  66 85 C9                  TEST CX,CX
0046E924  0F 8C 8F F3 FF FF         JL 0x0046dcb9
0046E92A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046E931  0F 8D 82 F3 FF FF         JGE 0x0046dcb9
0046E937  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046E93E  0F BF C9                  MOVSX ECX,CX
0046E941  0F AF D9                  IMUL EBX,ECX
0046E944  0F BF CF                  MOVSX ECX,DI
0046E947  0F BF D2                  MOVSX EDX,DX
0046E94A  0F AF CA                  IMUL ECX,EDX
0046E94D  0F BF C0                  MOVSX EAX,AX
0046E950  03 D9                     ADD EBX,ECX
0046E952  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0046E958  03 D8                     ADD EBX,EAX
0046E95A  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
0046E95D  33 DB                     XOR EBX,EBX
0046E95F  3B FB                     CMP EDI,EBX
0046E961  0F 84 52 F3 FF FF         JZ 0x0046dcb9
0046E967  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0046E96A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046E96D  3B D0                     CMP EDX,EAX
0046E96F  0F 85 44 F3 FF FF         JNZ 0x0046dcb9
0046E975  8B 07                     MOV EAX,dword ptr [EDI]
0046E977  8B CF                     MOV ECX,EDI
0046E979  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0046E97C  83 F8 3B                  CMP EAX,0x3b
0046E97F  74 10                     JZ 0x0046e991
0046E981  8B 17                     MOV EDX,dword ptr [EDI]
0046E983  8B CF                     MOV ECX,EDI
0046E985  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0046E988  83 F8 60                  CMP EAX,0x60
0046E98B  0F 85 28 F3 FF FF         JNZ 0x0046dcb9
LAB_0046e991:
0046E991  66 8B 96 9A 03 00 00      MOV DX,word ptr [ESI + 0x39a]
0046E998  66 8B 8E 98 03 00 00      MOV CX,word ptr [ESI + 0x398]
0046E99F  66 8B 86 96 03 00 00      MOV AX,word ptr [ESI + 0x396]
0046E9A6  66 89 96 30 05 00 00      MOV word ptr [ESI + 0x530],DX
0046E9AD  0F BF D2                  MOVSX EDX,DX
0046E9B0  42                        INC EDX
0046E9B1  66 89 8E 2E 05 00 00      MOV word ptr [ESI + 0x52e],CX
0046E9B8  52                        PUSH EDX
0046E9B9  66 89 86 2C 05 00 00      MOV word ptr [ESI + 0x52c],AX
0046E9C0  0F BF C9                  MOVSX ECX,CX
0046E9C3  0F BF D0                  MOVSX EDX,AX
0046E9C6  51                        PUSH ECX
0046E9C7  52                        PUSH EDX
0046E9C8  8B CE                     MOV ECX,ESI
0046E9CA  89 9E 48 05 00 00         MOV dword ptr [ESI + 0x548],EBX
0046E9D0  89 9E 44 05 00 00         MOV dword ptr [ESI + 0x544],EBX
0046E9D6  89 9E 4C 05 00 00         MOV dword ptr [ESI + 0x54c],EBX
0046E9DC  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0046E9E6  E8 80 65 F9 FF            CALL 0x00404f6b
0046E9EB  53                        PUSH EBX
LAB_0046e9ec:
0046E9EC  8B CE                     MOV ECX,ESI
0046E9EE  E8 EB 47 F9 FF            CALL 0x004031de
switchD_0046db6f::caseD_2:
0046E9F3  8B 06                     MOV EAX,dword ptr [ESI]
0046E9F5  8B CE                     MOV ECX,ESI
0046E9F7  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046E9FD  F7 D8                     NEG EAX
0046E9FF  1B C0                     SBB EAX,EAX
0046EA01  5F                        POP EDI
0046EA02  24 FD                     AND AL,0xfd
0046EA04  5E                        POP ESI
0046EA05  83 C0 02                  ADD EAX,0x2
0046EA08  5B                        POP EBX
0046EA09  8B E5                     MOV ESP,EBP
0046EA0B  5D                        POP EBP
0046EA0C  C2 04 00                  RET 0x4
