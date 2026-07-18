FUN_004cd790:
004CD790  55                        PUSH EBP
004CD791  8B EC                     MOV EBP,ESP
004CD793  83 EC 08                  SUB ESP,0x8
004CD796  53                        PUSH EBX
004CD797  8B D9                     MOV EBX,ECX
004CD799  56                        PUSH ESI
004CD79A  57                        PUSH EDI
004CD79B  8B 83 B4 05 00 00         MOV EAX,dword ptr [EBX + 0x5b4]
004CD7A1  8B 8B B0 05 00 00         MOV ECX,dword ptr [EBX + 0x5b0]
004CD7A7  48                        DEC EAX
004CD7A8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004CD7AB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004CD7AE  0F 88 96 00 00 00         JS 0x004cd84a
004CD7B4  66 8B 93 B8 05 00 00      MOV DX,word ptr [EBX + 0x5b8]
004CD7BB  66 85 C9                  TEST CX,CX
004CD7BE  0F 8C 86 00 00 00         JL 0x004cd84a
004CD7C4  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004CD7CB  66 3B CE                  CMP CX,SI
004CD7CE  7D 7A                     JGE 0x004cd84a
004CD7D0  66 85 C0                  TEST AX,AX
004CD7D3  7C 75                     JL 0x004cd84a
004CD7D5  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004CD7DC  7D 6C                     JGE 0x004cd84a
004CD7DE  66 85 D2                  TEST DX,DX
004CD7E1  7C 67                     JL 0x004cd84a
004CD7E3  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004CD7EA  7D 5E                     JGE 0x004cd84a
004CD7EC  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004CD7F3  0F BF D2                  MOVSX EDX,DX
004CD7F6  0F AF FA                  IMUL EDI,EDX
004CD7F9  0F BF D6                  MOVSX EDX,SI
004CD7FC  0F BF C0                  MOVSX EAX,AX
004CD7FF  0F AF D0                  IMUL EDX,EAX
004CD802  0F BF C9                  MOVSX ECX,CX
004CD805  03 FA                     ADD EDI,EDX
004CD807  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004CD80D  03 F9                     ADD EDI,ECX
004CD80F  8B 34 FA                  MOV ESI,dword ptr [EDX + EDI*0x8]
004CD812  85 F6                     TEST ESI,ESI
004CD814  74 34                     JZ 0x004cd84a
004CD816  8B 06                     MOV EAX,dword ptr [ESI]
004CD818  8B CE                     MOV ECX,ESI
004CD81A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CD81D  83 F8 54                  CMP EAX,0x54
004CD820  7C 28                     JL 0x004cd84a
004CD822  8B 16                     MOV EDX,dword ptr [ESI]
004CD824  8B CE                     MOV ECX,ESI
004CD826  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CD829  83 F8 5A                  CMP EAX,0x5a
004CD82C  7F 1C                     JG 0x004cd84a
004CD82E  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CD834  85 C0                     TEST EAX,EAX
004CD836  75 12                     JNZ 0x004cd84a
004CD838  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004CD83B  6A 01                     PUSH 0x1
004CD83D  8B CE                     MOV ECX,ESI
004CD83F  89 86 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EAX
004CD845  E8 68 5D F3 FF            CALL 0x004035b2
LAB_004cd84a:
004CD84A  8B BB B4 05 00 00         MOV EDI,dword ptr [EBX + 0x5b4]
004CD850  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004CD857  47                        INC EDI
004CD858  3B F9                     CMP EDI,ECX
004CD85A  0F 8D 99 00 00 00         JGE 0x004cd8f9
004CD860  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004CD863  66 8B 83 B8 05 00 00      MOV AX,word ptr [EBX + 0x5b8]
004CD86A  66 85 C9                  TEST CX,CX
004CD86D  0F 8C 86 00 00 00         JL 0x004cd8f9
004CD873  66 3B 0D 40 B2 7F 00      CMP CX,word ptr [0x007fb240]
004CD87A  7D 7D                     JGE 0x004cd8f9
004CD87C  66 85 FF                  TEST DI,DI
004CD87F  7C 78                     JL 0x004cd8f9
004CD881  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004CD888  7D 6F                     JGE 0x004cd8f9
004CD88A  66 85 C0                  TEST AX,AX
004CD88D  7C 6A                     JL 0x004cd8f9
004CD88F  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004CD896  7D 61                     JGE 0x004cd8f9
004CD898  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004CD89F  0F BF C0                  MOVSX EAX,AX
004CD8A2  0F AF D0                  IMUL EDX,EAX
004CD8A5  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004CD8AC  0F BF F7                  MOVSX ESI,DI
004CD8AF  0F AF C6                  IMUL EAX,ESI
004CD8B2  0F BF C9                  MOVSX ECX,CX
004CD8B5  03 D0                     ADD EDX,EAX
004CD8B7  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004CD8BC  03 D1                     ADD EDX,ECX
004CD8BE  8B 34 D0                  MOV ESI,dword ptr [EAX + EDX*0x8]
004CD8C1  85 F6                     TEST ESI,ESI
004CD8C3  74 34                     JZ 0x004cd8f9
004CD8C5  8B 16                     MOV EDX,dword ptr [ESI]
004CD8C7  8B CE                     MOV ECX,ESI
004CD8C9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CD8CC  83 F8 54                  CMP EAX,0x54
004CD8CF  7C 28                     JL 0x004cd8f9
004CD8D1  8B 06                     MOV EAX,dword ptr [ESI]
004CD8D3  8B CE                     MOV ECX,ESI
004CD8D5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CD8D8  83 F8 5A                  CMP EAX,0x5a
004CD8DB  7F 1C                     JG 0x004cd8f9
004CD8DD  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CD8E3  85 C0                     TEST EAX,EAX
004CD8E5  75 12                     JNZ 0x004cd8f9
004CD8E7  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004CD8EA  6A 01                     PUSH 0x1
004CD8EC  89 8E D3 05 00 00         MOV dword ptr [ESI + 0x5d3],ECX
004CD8F2  8B CE                     MOV ECX,ESI
004CD8F4  E8 B9 5C F3 FF            CALL 0x004035b2
LAB_004cd8f9:
004CD8F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004CD8FC  8B 9A B0 05 00 00         MOV EBX,dword ptr [EDX + 0x5b0]
004CD902  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004CD909  43                        INC EBX
004CD90A  3B DA                     CMP EBX,EDX
004CD90C  0F 8D 5D 01 00 00         JGE 0x004cda6f
004CD912  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CD915  8B 88 B4 05 00 00         MOV ECX,dword ptr [EAX + 0x5b4]
004CD91B  49                        DEC ECX
004CD91C  0F 88 92 00 00 00         JS 0x004cd9b4
004CD922  66 8B 80 B8 05 00 00      MOV AX,word ptr [EAX + 0x5b8]
004CD929  66 85 DB                  TEST BX,BX
004CD92C  0F 8C 82 00 00 00         JL 0x004cd9b4
004CD932  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
004CD939  7D 79                     JGE 0x004cd9b4
004CD93B  66 85 C9                  TEST CX,CX
004CD93E  7C 74                     JL 0x004cd9b4
004CD940  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004CD947  7D 6B                     JGE 0x004cd9b4
004CD949  66 85 C0                  TEST AX,AX
004CD94C  7C 66                     JL 0x004cd9b4
004CD94E  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004CD955  7D 5D                     JGE 0x004cd9b4
004CD957  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CD95E  0F BF C0                  MOVSX EAX,AX
004CD961  0F BF C9                  MOVSX ECX,CX
004CD964  0F AF F0                  IMUL ESI,EAX
004CD967  0F AF CA                  IMUL ECX,EDX
004CD96A  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004CD96F  03 F1                     ADD ESI,ECX
004CD971  0F BF D3                  MOVSX EDX,BX
004CD974  03 F2                     ADD ESI,EDX
004CD976  8B 34 F0                  MOV ESI,dword ptr [EAX + ESI*0x8]
004CD979  85 F6                     TEST ESI,ESI
004CD97B  74 37                     JZ 0x004cd9b4
004CD97D  8B 16                     MOV EDX,dword ptr [ESI]
004CD97F  8B CE                     MOV ECX,ESI
004CD981  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CD984  83 F8 54                  CMP EAX,0x54
004CD987  7C 2B                     JL 0x004cd9b4
004CD989  8B 06                     MOV EAX,dword ptr [ESI]
004CD98B  8B CE                     MOV ECX,ESI
004CD98D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CD990  83 F8 5A                  CMP EAX,0x5a
004CD993  7F 1F                     JG 0x004cd9b4
004CD995  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CD99B  85 C0                     TEST EAX,EAX
004CD99D  75 15                     JNZ 0x004cd9b4
004CD99F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CD9A2  6A 01                     PUSH 0x1
004CD9A4  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004CD9A7  8B CE                     MOV ECX,ESI
004CD9A9  89 96 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EDX
004CD9AF  E8 FE 5B F3 FF            CALL 0x004035b2
LAB_004cd9b4:
004CD9B4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CD9B7  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004CD9BE  8B B8 B4 05 00 00         MOV EDI,dword ptr [EAX + 0x5b4]
004CD9C4  83 C7 02                  ADD EDI,0x2
004CD9C7  3B F9                     CMP EDI,ECX
004CD9C9  0F 8D A0 00 00 00         JGE 0x004cda6f
004CD9CF  8B D0                     MOV EDX,EAX
004CD9D1  66 85 DB                  TEST BX,BX
004CD9D4  66 8B 82 B8 05 00 00      MOV AX,word ptr [EDX + 0x5b8]
004CD9DB  0F 8C 8E 00 00 00         JL 0x004cda6f
004CD9E1  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
004CD9E8  0F 8D 81 00 00 00         JGE 0x004cda6f
004CD9EE  66 85 FF                  TEST DI,DI
004CD9F1  7C 7C                     JL 0x004cda6f
004CD9F3  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004CD9FA  7D 73                     JGE 0x004cda6f
004CD9FC  66 85 C0                  TEST AX,AX
004CD9FF  7C 6E                     JL 0x004cda6f
004CDA01  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004CDA08  7D 65                     JGE 0x004cda6f
004CDA0A  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004CDA11  0F BF D0                  MOVSX EDX,AX
004CDA14  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004CDA1B  0F AF CA                  IMUL ECX,EDX
004CDA1E  0F BF D7                  MOVSX EDX,DI
004CDA21  0F AF C2                  IMUL EAX,EDX
004CDA24  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004CDA2A  03 C8                     ADD ECX,EAX
004CDA2C  0F BF C3                  MOVSX EAX,BX
004CDA2F  03 C8                     ADD ECX,EAX
004CDA31  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
004CDA34  85 F6                     TEST ESI,ESI
004CDA36  74 37                     JZ 0x004cda6f
004CDA38  8B 06                     MOV EAX,dword ptr [ESI]
004CDA3A  8B CE                     MOV ECX,ESI
004CDA3C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CDA3F  83 F8 54                  CMP EAX,0x54
004CDA42  7C 2B                     JL 0x004cda6f
004CDA44  8B 16                     MOV EDX,dword ptr [ESI]
004CDA46  8B CE                     MOV ECX,ESI
004CDA48  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CDA4B  83 F8 5A                  CMP EAX,0x5a
004CDA4E  7F 1F                     JG 0x004cda6f
004CDA50  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CDA56  85 C0                     TEST EAX,EAX
004CDA58  75 15                     JNZ 0x004cda6f
004CDA5A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CDA5D  6A 01                     PUSH 0x1
004CDA5F  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004CDA62  89 8E D3 05 00 00         MOV dword ptr [ESI + 0x5d3],ECX
004CDA68  8B CE                     MOV ECX,ESI
004CDA6A  E8 43 5B F3 FF            CALL 0x004035b2
LAB_004cda6f:
004CDA6F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004CDA72  8B 9A B0 05 00 00         MOV EBX,dword ptr [EDX + 0x5b0]
004CDA78  4B                        DEC EBX
004CDA79  0F 88 4F 01 00 00         JS 0x004cdbce
004CDA7F  66 8B 82 B8 05 00 00      MOV AX,word ptr [EDX + 0x5b8]
004CDA86  66 85 DB                  TEST BX,BX
004CDA89  0F 8C 8B 00 00 00         JL 0x004cdb1a
004CDA8F  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004CDA96  66 3B D9                  CMP BX,CX
004CDA99  7D 7F                     JGE 0x004cdb1a
004CDA9B  66 85 FF                  TEST DI,DI
004CDA9E  7C 7A                     JL 0x004cdb1a
004CDAA0  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004CDAA7  7D 71                     JGE 0x004cdb1a
004CDAA9  66 85 C0                  TEST AX,AX
004CDAAC  7C 6C                     JL 0x004cdb1a
004CDAAE  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004CDAB5  7D 63                     JGE 0x004cdb1a
004CDAB7  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CDABE  0F BF C0                  MOVSX EAX,AX
004CDAC1  0F AF F0                  IMUL ESI,EAX
004CDAC4  0F BF C9                  MOVSX ECX,CX
004CDAC7  0F BF C7                  MOVSX EAX,DI
004CDACA  0F AF C8                  IMUL ECX,EAX
004CDACD  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004CDAD2  03 F1                     ADD ESI,ECX
004CDAD4  0F BF CB                  MOVSX ECX,BX
004CDAD7  03 F1                     ADD ESI,ECX
004CDAD9  8B 34 F0                  MOV ESI,dword ptr [EAX + ESI*0x8]
004CDADC  85 F6                     TEST ESI,ESI
004CDADE  74 3A                     JZ 0x004cdb1a
004CDAE0  8B 16                     MOV EDX,dword ptr [ESI]
004CDAE2  8B CE                     MOV ECX,ESI
004CDAE4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CDAE7  83 F8 54                  CMP EAX,0x54
004CDAEA  7C 2B                     JL 0x004cdb17
004CDAEC  8B 06                     MOV EAX,dword ptr [ESI]
004CDAEE  8B CE                     MOV ECX,ESI
004CDAF0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CDAF3  83 F8 5A                  CMP EAX,0x5a
004CDAF6  7F 1F                     JG 0x004cdb17
004CDAF8  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CDAFE  85 C0                     TEST EAX,EAX
004CDB00  75 15                     JNZ 0x004cdb17
004CDB02  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CDB05  6A 01                     PUSH 0x1
004CDB07  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004CDB0A  8B CE                     MOV ECX,ESI
004CDB0C  89 96 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EDX
004CDB12  E8 9B 5A F3 FF            CALL 0x004035b2
LAB_004cdb17:
004CDB17  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_004cdb1a:
004CDB1A  8B BA B4 05 00 00         MOV EDI,dword ptr [EDX + 0x5b4]
004CDB20  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004CDB27  47                        INC EDI
004CDB28  3B F8                     CMP EDI,EAX
004CDB2A  0F 8D 9E 00 00 00         JGE 0x004cdbce
004CDB30  66 8B 82 B8 05 00 00      MOV AX,word ptr [EDX + 0x5b8]
004CDB37  66 85 DB                  TEST BX,BX
004CDB3A  0F 8C 8E 00 00 00         JL 0x004cdbce
004CDB40  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
004CDB47  0F 8D 81 00 00 00         JGE 0x004cdbce
004CDB4D  66 85 FF                  TEST DI,DI
004CDB50  7C 7C                     JL 0x004cdbce
004CDB52  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004CDB59  7D 73                     JGE 0x004cdbce
004CDB5B  66 85 C0                  TEST AX,AX
004CDB5E  7C 6E                     JL 0x004cdbce
004CDB60  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004CDB67  7D 65                     JGE 0x004cdbce
004CDB69  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004CDB70  0F BF D0                  MOVSX EDX,AX
004CDB73  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004CDB7A  0F AF CA                  IMUL ECX,EDX
004CDB7D  0F BF D7                  MOVSX EDX,DI
004CDB80  0F AF C2                  IMUL EAX,EDX
004CDB83  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004CDB89  03 C8                     ADD ECX,EAX
004CDB8B  0F BF C3                  MOVSX EAX,BX
004CDB8E  03 C8                     ADD ECX,EAX
004CDB90  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
004CDB93  85 F6                     TEST ESI,ESI
004CDB95  74 37                     JZ 0x004cdbce
004CDB97  8B 06                     MOV EAX,dword ptr [ESI]
004CDB99  8B CE                     MOV ECX,ESI
004CDB9B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CDB9E  83 F8 54                  CMP EAX,0x54
004CDBA1  7C 2B                     JL 0x004cdbce
004CDBA3  8B 16                     MOV EDX,dword ptr [ESI]
004CDBA5  8B CE                     MOV ECX,ESI
004CDBA7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CDBAA  83 F8 5A                  CMP EAX,0x5a
004CDBAD  7F 1F                     JG 0x004cdbce
004CDBAF  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CDBB5  85 C0                     TEST EAX,EAX
004CDBB7  75 15                     JNZ 0x004cdbce
004CDBB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CDBBC  6A 01                     PUSH 0x1
004CDBBE  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004CDBC1  89 8E D3 05 00 00         MOV dword ptr [ESI + 0x5d3],ECX
004CDBC7  8B CE                     MOV ECX,ESI
004CDBC9  E8 E4 59 F3 FF            CALL 0x004035b2
LAB_004cdbce:
004CDBCE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CDBD1  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004CDBD8  8B 98 B0 05 00 00         MOV EBX,dword ptr [EAX + 0x5b0]
004CDBDE  83 C3 02                  ADD EBX,0x2
004CDBE1  3B D9                     CMP EBX,ECX
004CDBE3  0F 8D 40 01 00 00         JGE 0x004cdd29
004CDBE9  66 8B 80 B8 05 00 00      MOV AX,word ptr [EAX + 0x5b8]
004CDBF0  66 85 DB                  TEST BX,BX
004CDBF3  0F 8C 82 00 00 00         JL 0x004cdc7b
004CDBF9  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
004CDC00  7D 79                     JGE 0x004cdc7b
004CDC02  66 85 FF                  TEST DI,DI
004CDC05  7C 74                     JL 0x004cdc7b
004CDC07  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004CDC0E  7D 6B                     JGE 0x004cdc7b
004CDC10  66 85 C0                  TEST AX,AX
004CDC13  7C 66                     JL 0x004cdc7b
004CDC15  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004CDC1C  7D 5D                     JGE 0x004cdc7b
004CDC1E  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004CDC25  0F BF C0                  MOVSX EAX,AX
004CDC28  0F AF D0                  IMUL EDX,EAX
004CDC2B  0F BF C7                  MOVSX EAX,DI
004CDC2E  0F AF C1                  IMUL EAX,ECX
004CDC31  0F BF CB                  MOVSX ECX,BX
004CDC34  03 D0                     ADD EDX,EAX
004CDC36  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004CDC3B  03 D1                     ADD EDX,ECX
004CDC3D  8B 34 D0                  MOV ESI,dword ptr [EAX + EDX*0x8]
004CDC40  85 F6                     TEST ESI,ESI
004CDC42  74 37                     JZ 0x004cdc7b
004CDC44  8B 16                     MOV EDX,dword ptr [ESI]
004CDC46  8B CE                     MOV ECX,ESI
004CDC48  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CDC4B  83 F8 54                  CMP EAX,0x54
004CDC4E  7C 2B                     JL 0x004cdc7b
004CDC50  8B 06                     MOV EAX,dword ptr [ESI]
004CDC52  8B CE                     MOV ECX,ESI
004CDC54  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CDC57  83 F8 5A                  CMP EAX,0x5a
004CDC5A  7F 1F                     JG 0x004cdc7b
004CDC5C  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CDC62  85 C0                     TEST EAX,EAX
004CDC64  75 15                     JNZ 0x004cdc7b
004CDC66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CDC69  6A 01                     PUSH 0x1
004CDC6B  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004CDC6E  8B CE                     MOV ECX,ESI
004CDC70  89 96 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EDX
004CDC76  E8 37 59 F3 FF            CALL 0x004035b2
LAB_004cdc7b:
004CDC7B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004CDC7E  66 8B 35 42 B2 7F 00      MOV SI,word ptr [0x007fb242]
004CDC85  0F BF CE                  MOVSX ECX,SI
004CDC88  8B 87 B4 05 00 00         MOV EAX,dword ptr [EDI + 0x5b4]
004CDC8E  40                        INC EAX
004CDC8F  3B C1                     CMP EAX,ECX
004CDC91  0F 8D 92 00 00 00         JGE 0x004cdd29
004CDC97  66 8B 8F B8 05 00 00      MOV CX,word ptr [EDI + 0x5b8]
004CDC9E  66 85 DB                  TEST BX,BX
004CDCA1  0F 8C 82 00 00 00         JL 0x004cdd29
004CDCA7  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004CDCAE  66 3B DA                  CMP BX,DX
004CDCB1  7D 76                     JGE 0x004cdd29
004CDCB3  66 85 C0                  TEST AX,AX
004CDCB6  7C 71                     JL 0x004cdd29
004CDCB8  66 3B C6                  CMP AX,SI
004CDCBB  7D 6C                     JGE 0x004cdd29
004CDCBD  66 85 C9                  TEST CX,CX
004CDCC0  7C 67                     JL 0x004cdd29
004CDCC2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004CDCC9  7D 5E                     JGE 0x004cdd29
004CDCCB  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CDCD2  0F BF C9                  MOVSX ECX,CX
004CDCD5  0F BF D2                  MOVSX EDX,DX
004CDCD8  0F AF F1                  IMUL ESI,ECX
004CDCDB  0F BF C0                  MOVSX EAX,AX
004CDCDE  0F AF D0                  IMUL EDX,EAX
004CDCE1  0F BF CB                  MOVSX ECX,BX
004CDCE4  03 F2                     ADD ESI,EDX
004CDCE6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004CDCEC  03 F1                     ADD ESI,ECX
004CDCEE  8B 34 F2                  MOV ESI,dword ptr [EDX + ESI*0x8]
004CDCF1  85 F6                     TEST ESI,ESI
004CDCF3  74 34                     JZ 0x004cdd29
004CDCF5  8B 06                     MOV EAX,dword ptr [ESI]
004CDCF7  8B CE                     MOV ECX,ESI
004CDCF9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CDCFC  83 F8 54                  CMP EAX,0x54
004CDCFF  7C 28                     JL 0x004cdd29
004CDD01  8B 16                     MOV EDX,dword ptr [ESI]
004CDD03  8B CE                     MOV ECX,ESI
004CDD05  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CDD08  83 F8 5A                  CMP EAX,0x5a
004CDD0B  7F 1C                     JG 0x004cdd29
004CDD0D  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CDD13  85 C0                     TEST EAX,EAX
004CDD15  75 12                     JNZ 0x004cdd29
004CDD17  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004CDD1A  6A 01                     PUSH 0x1
004CDD1C  8B CE                     MOV ECX,ESI
004CDD1E  89 86 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EAX
004CDD24  E8 89 58 F3 FF            CALL 0x004035b2
LAB_004cdd29:
004CDD29  5F                        POP EDI
004CDD2A  5E                        POP ESI
004CDD2B  33 C0                     XOR EAX,EAX
004CDD2D  5B                        POP EBX
004CDD2E  8B E5                     MOV ESP,EBP
004CDD30  5D                        POP EBP
004CDD31  C3                        RET
