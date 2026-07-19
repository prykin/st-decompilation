STBoatC::Teleport:
00479600  55                        PUSH EBP
00479601  8B EC                     MOV EBP,ESP
00479603  83 EC 2C                  SUB ESP,0x2c
00479606  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00479609  53                        PUSH EBX
0047960A  56                        PUSH ESI
0047960B  57                        PUSH EDI
0047960C  33 FF                     XOR EDI,EDI
0047960E  8B F1                     MOV ESI,ECX
00479610  3B C7                     CMP EAX,EDI
00479612  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00479615  BB 01 00 00 00            MOV EBX,0x1
0047961A  0F 84 19 1D 00 00         JZ 0x0047b339
00479620  3B C3                     CMP EAX,EBX
00479622  0F 84 11 1D 00 00         JZ 0x0047b339
00479628  8B 86 63 06 00 00         MOV EAX,dword ptr [ESI + 0x663]
0047962E  3B C7                     CMP EAX,EDI
00479630  0F 85 43 03 00 00         JNZ 0x00479979
00479636  6A 02                     PUSH 0x2
00479638  E8 A1 9B F8 FF            CALL 0x004031de
0047963D  40                        INC EAX
0047963E  83 F8 04                  CMP EAX,0x4
00479641  0F 87 B5 1C 00 00         JA 0x0047b2fc
switchD_00479647::switchD:
00479647  FF 24 85 F4 B6 47 00      JMP dword ptr [EAX*0x4 + 0x47b6f4]
switchD_00479647::caseD_ffffffff:
0047964E  68 F8 B4 7A 00            PUSH 0x7ab4f8
00479653  68 CC 4C 7A 00            PUSH 0x7a4ccc
00479658  6A 00                     PUSH 0x0
0047965A  6A 00                     PUSH 0x0
0047965C  68 25 35 00 00            PUSH 0x3525
00479661  68 3C 9D 7A 00            PUSH 0x7a9d3c
00479666  E8 65 3E 23 00            CALL 0x006ad4d0
0047966B  83 C4 18                  ADD ESP,0x18
0047966E  85 C0                     TEST EAX,EAX
00479670  74 01                     JZ 0x00479673
00479672  CC                        INT3
LAB_00479673:
00479673  68 25 35 00 00            PUSH 0x3525
00479678  E9 29 05 00 00            JMP 0x00479ba6
switchD_00479647::caseD_0:
0047967D  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00479687  8B 86 35 06 00 00         MOV EAX,dword ptr [ESI + 0x635]
0047968D  3B C3                     CMP EAX,EBX
0047968F  0F 85 97 00 00 00         JNZ 0x0047972c
00479695  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
0047969C  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
004796A3  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
004796AA  66 85 C0                  TEST AX,AX
004796AD  7C 4F                     JL 0x004796fe
004796AF  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004796B6  66 3B C7                  CMP AX,DI
004796B9  7D 43                     JGE 0x004796fe
004796BB  66 85 D2                  TEST DX,DX
004796BE  7C 3E                     JL 0x004796fe
004796C0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004796C7  7D 35                     JGE 0x004796fe
004796C9  66 85 C9                  TEST CX,CX
004796CC  7C 30                     JL 0x004796fe
004796CE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004796D5  7D 27                     JGE 0x004796fe
004796D7  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004796DE  0F BF C9                  MOVSX ECX,CX
004796E1  0F AF D9                  IMUL EBX,ECX
004796E4  0F BF D2                  MOVSX EDX,DX
004796E7  0F BF CF                  MOVSX ECX,DI
004796EA  0F AF D1                  IMUL EDX,ECX
004796ED  03 DA                     ADD EBX,EDX
004796EF  0F BF D0                  MOVSX EDX,AX
004796F2  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004796F7  03 DA                     ADD EBX,EDX
004796F9  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
004796FC  EB 02                     JMP 0x00479700
LAB_004796fe:
004796FE  33 C9                     XOR ECX,ECX
LAB_00479700:
00479700  85 C9                     TEST ECX,ECX
00479702  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479705  0F 84 63 02 00 00         JZ 0x0047996e
0047970B  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047970E  8B 86 49 06 00 00         MOV EAX,dword ptr [ESI + 0x649]
00479714  3B D0                     CMP EDX,EAX
00479716  0F 85 52 02 00 00         JNZ 0x0047996e
0047971C  8B 01                     MOV EAX,dword ptr [ECX]
0047971E  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00479724  85 C0                     TEST EAX,EAX
00479726  0F 84 42 02 00 00         JZ 0x0047996e
LAB_0047972c:
0047972C  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
00479733  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
0047973A  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
00479741  66 85 C0                  TEST AX,AX
00479744  7C 4F                     JL 0x00479795
00479746  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047974D  66 3B C7                  CMP AX,DI
00479750  7D 43                     JGE 0x00479795
00479752  66 85 D2                  TEST DX,DX
00479755  7C 3E                     JL 0x00479795
00479757  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047975E  7D 35                     JGE 0x00479795
00479760  66 85 C9                  TEST CX,CX
00479763  7C 30                     JL 0x00479795
00479765  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047976C  7D 27                     JGE 0x00479795
0047976E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479775  0F BF C9                  MOVSX ECX,CX
00479778  0F AF D9                  IMUL EBX,ECX
0047977B  0F BF D2                  MOVSX EDX,DX
0047977E  0F BF CF                  MOVSX ECX,DI
00479781  0F AF D1                  IMUL EDX,ECX
00479784  03 DA                     ADD EBX,EDX
00479786  0F BF D0                  MOVSX EDX,AX
00479789  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0047978E  03 DA                     ADD EBX,EDX
00479790  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
00479793  EB 02                     JMP 0x00479797
LAB_00479795:
00479795  33 C9                     XOR ECX,ECX
LAB_00479797:
00479797  85 C9                     TEST ECX,ECX
00479799  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047979C  0F 84 CC 01 00 00         JZ 0x0047996e
004797A2  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004797A5  8B 86 3F 06 00 00         MOV EAX,dword ptr [ESI + 0x63f]
004797AB  3B D0                     CMP EDX,EAX
004797AD  0F 85 BB 01 00 00         JNZ 0x0047996e
004797B3  8B 01                     MOV EAX,dword ptr [ECX]
004797B5  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004797BB  85 C0                     TEST EAX,EAX
004797BD  0F 84 AB 01 00 00         JZ 0x0047996e
004797C3  8D BE 55 06 00 00         LEA EDI,[ESI + 0x655]
004797C9  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
004797CF  8D 86 51 06 00 00         LEA EAX,[ESI + 0x651]
004797D5  57                        PUSH EDI
004797D6  53                        PUSH EBX
004797D7  50                        PUSH EAX
004797D8  8B CE                     MOV ECX,ESI
004797DA  E8 1B 92 F8 FF            CALL 0x004029fa
004797DF  83 F8 01                  CMP EAX,0x1
004797E2  0F 85 51 06 00 00         JNZ 0x00479e39
004797E8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004797EB  56                        PUSH ESI
004797EC  E8 6E 8C F8 FF            CALL 0x0040245f
004797F1  83 F8 01                  CMP EAX,0x1
004797F4  0F 85 3F 06 00 00         JNZ 0x00479e39
004797FA  C7 86 63 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x663],0x2
00479804  E9 D3 1A 00 00            JMP 0x0047b2dc
switchD_00479647::caseD_3:
00479809  0F BF 8E 3D 06 00 00      MOVSX ECX,word ptr [ESI + 0x63d]
00479810  0F BF 96 3B 06 00 00      MOVSX EDX,word ptr [ESI + 0x63b]
00479817  0F BF 86 39 06 00 00      MOVSX EAX,word ptr [ESI + 0x639]
0047981E  41                        INC ECX
0047981F  51                        PUSH ECX
00479820  52                        PUSH EDX
00479821  E9 C5 1A 00 00            JMP 0x0047b2eb
switchD_00479647::caseD_1:
00479826  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047982D  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
00479834  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
0047983B  66 85 C0                  TEST AX,AX
0047983E  7C 54                     JL 0x00479894
00479840  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479847  66 3B C7                  CMP AX,DI
0047984A  7D 48                     JGE 0x00479894
0047984C  66 85 D2                  TEST DX,DX
0047984F  7C 43                     JL 0x00479894
00479851  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479858  7D 3A                     JGE 0x00479894
0047985A  66 85 C9                  TEST CX,CX
0047985D  7C 35                     JL 0x00479894
0047985F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479866  7D 2C                     JGE 0x00479894
00479868  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047986F  0F BF C9                  MOVSX ECX,CX
00479872  0F AF D9                  IMUL EBX,ECX
00479875  0F BF D2                  MOVSX EDX,DX
00479878  0F BF CF                  MOVSX ECX,DI
0047987B  0F AF D1                  IMUL EDX,ECX
0047987E  03 DA                     ADD EBX,EDX
00479880  0F BF D0                  MOVSX EDX,AX
00479883  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00479888  03 DA                     ADD EBX,EDX
0047988A  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
0047988D  BB 01 00 00 00            MOV EBX,0x1
00479892  EB 02                     JMP 0x00479896
LAB_00479894:
00479894  33 C9                     XOR ECX,ECX
LAB_00479896:
00479896  85 C9                     TEST ECX,ECX
00479898  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047989B  0F 84 BC 00 00 00         JZ 0x0047995d
004798A1  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004798A4  8B 86 3F 06 00 00         MOV EAX,dword ptr [ESI + 0x63f]
004798AA  3B D0                     CMP EDX,EAX
004798AC  0F 85 AB 00 00 00         JNZ 0x0047995d
004798B2  8B 01                     MOV EAX,dword ptr [ECX]
004798B4  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004798BA  85 C0                     TEST EAX,EAX
004798BC  0F 84 9B 00 00 00         JZ 0x0047995d
004798C2  39 9E 35 06 00 00         CMP dword ptr [ESI + 0x635],EBX
004798C8  0F 85 2E 1A 00 00         JNZ 0x0047b2fc
004798CE  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
004798D5  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
004798DC  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
004798E3  66 85 C0                  TEST AX,AX
004798E6  7C 4F                     JL 0x00479937
004798E8  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004798EF  66 3B C7                  CMP AX,DI
004798F2  7D 43                     JGE 0x00479937
004798F4  66 85 D2                  TEST DX,DX
004798F7  7C 3E                     JL 0x00479937
004798F9  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479900  7D 35                     JGE 0x00479937
00479902  66 85 C9                  TEST CX,CX
00479905  7C 30                     JL 0x00479937
00479907  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047990E  7D 27                     JGE 0x00479937
00479910  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479917  0F BF C9                  MOVSX ECX,CX
0047991A  0F AF D9                  IMUL EBX,ECX
0047991D  0F BF D2                  MOVSX EDX,DX
00479920  0F BF CF                  MOVSX ECX,DI
00479923  0F AF D1                  IMUL EDX,ECX
00479926  03 DA                     ADD EBX,EDX
00479928  0F BF D0                  MOVSX EDX,AX
0047992B  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00479930  03 DA                     ADD EBX,EDX
00479932  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
00479935  EB 02                     JMP 0x00479939
LAB_00479937:
00479937  33 C9                     XOR ECX,ECX
LAB_00479939:
00479939  85 C9                     TEST ECX,ECX
0047993B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047993E  74 1D                     JZ 0x0047995d
00479940  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00479943  8B 86 49 06 00 00         MOV EAX,dword ptr [ESI + 0x649]
00479949  3B D0                     CMP EDX,EAX
0047994B  75 10                     JNZ 0x0047995d
0047994D  8B 01                     MOV EAX,dword ptr [ECX]
0047994F  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00479955  85 C0                     TEST EAX,EAX
00479957  0F 85 9F 19 00 00         JNZ 0x0047b2fc
LAB_0047995d:
0047995D  8B CE                     MOV ECX,ESI
0047995F  E8 F1 9E F8 FF            CALL 0x00403855
00479964  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
LAB_0047996e:
0047996E  33 C0                     XOR EAX,EAX
00479970  5F                        POP EDI
00479971  5E                        POP ESI
00479972  5B                        POP EBX
00479973  8B E5                     MOV ESP,EBP
00479975  5D                        POP EBP
00479976  C2 04 00                  RET 0x4
LAB_00479979:
00479979  3B C3                     CMP EAX,EBX
0047997B  0F 85 D9 01 00 00         JNZ 0x00479b5a
00479981  8B 86 5D 06 00 00         MOV EAX,dword ptr [ESI + 0x65d]
00479987  6A 02                     PUSH 0x2
00479989  40                        INC EAX
0047998A  8B CE                     MOV ECX,ESI
0047998C  89 86 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EAX
00479992  E8 94 A0 F8 FF            CALL 0x00403a2b
00479997  83 F8 FF                  CMP EAX,-0x1
0047999A  75 0B                     JNZ 0x004799a7
0047999C  0B C0                     OR EAX,EAX
0047999E  5F                        POP EDI
0047999F  5E                        POP ESI
004799A0  5B                        POP EBX
004799A1  8B E5                     MOV ESP,EBP
004799A3  5D                        POP EBP
004799A4  C2 04 00                  RET 0x4
LAB_004799a7:
004799A7  39 BE 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EDI
004799AD  0F 85 49 19 00 00         JNZ 0x0047b2fc
004799B3  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
004799BD  0F 85 39 19 00 00         JNZ 0x0047b2fc
004799C3  8B 86 5D 06 00 00         MOV EAX,dword ptr [ESI + 0x65d]
004799C9  B9 0A 00 00 00            MOV ECX,0xa
004799CE  99                        CDQ
004799CF  F7 F9                     IDIV ECX
004799D1  85 D2                     TEST EDX,EDX
004799D3  0F 85 23 19 00 00         JNZ 0x0047b2fc
004799D9  39 9E 35 06 00 00         CMP dword ptr [ESI + 0x635],EBX
004799DF  0F 85 97 00 00 00         JNZ 0x00479a7c
004799E5  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
004799EC  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
004799F3  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
004799FA  66 85 C0                  TEST AX,AX
004799FD  7C 4F                     JL 0x00479a4e
004799FF  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479A06  66 3B C7                  CMP AX,DI
00479A09  7D 43                     JGE 0x00479a4e
00479A0B  66 85 D2                  TEST DX,DX
00479A0E  7C 3E                     JL 0x00479a4e
00479A10  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479A17  7D 35                     JGE 0x00479a4e
00479A19  66 85 C9                  TEST CX,CX
00479A1C  7C 30                     JL 0x00479a4e
00479A1E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479A25  7D 27                     JGE 0x00479a4e
00479A27  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479A2E  0F BF C9                  MOVSX ECX,CX
00479A31  0F AF D9                  IMUL EBX,ECX
00479A34  0F BF D2                  MOVSX EDX,DX
00479A37  0F BF CF                  MOVSX ECX,DI
00479A3A  0F AF D1                  IMUL EDX,ECX
00479A3D  03 DA                     ADD EBX,EDX
00479A3F  0F BF D0                  MOVSX EDX,AX
00479A42  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00479A47  03 DA                     ADD EBX,EDX
00479A49  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
00479A4C  EB 02                     JMP 0x00479a50
LAB_00479a4e:
00479A4E  33 C9                     XOR ECX,ECX
LAB_00479a50:
00479A50  85 C9                     TEST ECX,ECX
00479A52  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479A55  0F 84 13 FF FF FF         JZ 0x0047996e
00479A5B  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00479A5E  8B 86 49 06 00 00         MOV EAX,dword ptr [ESI + 0x649]
00479A64  3B D0                     CMP EDX,EAX
00479A66  0F 85 02 FF FF FF         JNZ 0x0047996e
00479A6C  8B 01                     MOV EAX,dword ptr [ECX]
00479A6E  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00479A74  85 C0                     TEST EAX,EAX
00479A76  0F 84 F2 FE FF FF         JZ 0x0047996e
LAB_00479a7c:
00479A7C  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
00479A83  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
00479A8A  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
00479A91  66 85 C0                  TEST AX,AX
00479A94  7C 50                     JL 0x00479ae6
00479A96  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479A9D  66 3B C7                  CMP AX,DI
00479AA0  7D 44                     JGE 0x00479ae6
00479AA2  66 85 D2                  TEST DX,DX
00479AA5  7C 3F                     JL 0x00479ae6
00479AA7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479AAE  7D 36                     JGE 0x00479ae6
00479AB0  66 85 C9                  TEST CX,CX
00479AB3  7C 31                     JL 0x00479ae6
00479AB5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479ABC  7D 28                     JGE 0x00479ae6
00479ABE  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479AC5  0F BF C9                  MOVSX ECX,CX
00479AC8  0F BF D2                  MOVSX EDX,DX
00479ACB  0F AF CB                  IMUL ECX,EBX
00479ACE  0F BF FF                  MOVSX EDI,DI
00479AD1  0F AF D7                  IMUL EDX,EDI
00479AD4  0F BF C0                  MOVSX EAX,AX
00479AD7  03 CA                     ADD ECX,EDX
00479AD9  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00479ADF  03 C8                     ADD ECX,EAX
00479AE1  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00479AE4  EB 02                     JMP 0x00479ae8
LAB_00479ae6:
00479AE6  33 C9                     XOR ECX,ECX
LAB_00479ae8:
00479AE8  85 C9                     TEST ECX,ECX
00479AEA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479AED  0F 84 7B FE FF FF         JZ 0x0047996e
00479AF3  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00479AF6  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
00479AFC  3B C2                     CMP EAX,EDX
00479AFE  0F 85 6A FE FF FF         JNZ 0x0047996e
00479B04  8B 11                     MOV EDX,dword ptr [ECX]
00479B06  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00479B0C  85 C0                     TEST EAX,EAX
00479B0E  0F 84 5A FE FF FF         JZ 0x0047996e
00479B14  8D BE 55 06 00 00         LEA EDI,[ESI + 0x655]
00479B1A  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
00479B20  8D 86 51 06 00 00         LEA EAX,[ESI + 0x651]
00479B26  57                        PUSH EDI
00479B27  53                        PUSH EBX
00479B28  50                        PUSH EAX
00479B29  8B CE                     MOV ECX,ESI
00479B2B  E8 CA 8E F8 FF            CALL 0x004029fa
00479B30  83 F8 01                  CMP EAX,0x1
00479B33  0F 85 C3 17 00 00         JNZ 0x0047b2fc
00479B39  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00479B3C  56                        PUSH ESI
00479B3D  E8 1D 89 F8 FF            CALL 0x0040245f
00479B42  83 F8 01                  CMP EAX,0x1
00479B45  0F 85 B1 17 00 00         JNZ 0x0047b2fc
00479B4B  C7 86 63 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x663],0x2
00479B55  E9 29 02 00 00            JMP 0x00479d83
LAB_00479b5a:
00479B5A  83 F8 02                  CMP EAX,0x2
00479B5D  0F 85 53 04 00 00         JNZ 0x00479fb6
00479B63  50                        PUSH EAX
00479B64  8B CE                     MOV ECX,ESI
00479B66  E8 73 96 F8 FF            CALL 0x004031de
00479B6B  40                        INC EAX
00479B6C  83 F8 04                  CMP EAX,0x4
00479B6F  0F 87 87 17 00 00         JA 0x0047b2fc
switchD_00479b75::switchD:
00479B75  FF 24 85 08 B7 47 00      JMP dword ptr [EAX*0x4 + 0x47b708]
switchD_00479b75::caseD_ffffffff:
00479B7C  68 C4 B4 7A 00            PUSH 0x7ab4c4
00479B81  68 CC 4C 7A 00            PUSH 0x7a4ccc
00479B86  6A 00                     PUSH 0x0
00479B88  6A 00                     PUSH 0x0
00479B8A  68 96 35 00 00            PUSH 0x3596
00479B8F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00479B94  E8 37 39 23 00            CALL 0x006ad4d0
00479B99  83 C4 18                  ADD ESP,0x18
00479B9C  85 C0                     TEST EAX,EAX
00479B9E  74 01                     JZ 0x00479ba1
00479BA0  CC                        INT3
LAB_00479ba1:
00479BA1  68 96 35 00 00            PUSH 0x3596
LAB_00479ba6:
00479BA6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00479BAB  68 3C 9D 7A 00            PUSH 0x7a9d3c
00479BB0  50                        PUSH EAX
00479BB1  68 FF FF 00 00            PUSH 0xffff
00479BB6  E8 85 C2 22 00            CALL 0x006a5e40
00479BBB  B8 FF FF 00 00            MOV EAX,0xffff
00479BC0  5F                        POP EDI
00479BC1  5E                        POP ESI
00479BC2  5B                        POP EBX
00479BC3  8B E5                     MOV ESP,EBP
00479BC5  5D                        POP EBP
00479BC6  C2 04 00                  RET 0x4
switchD_00479b75::caseD_0:
00479BC9  39 9E 35 06 00 00         CMP dword ptr [ESI + 0x635],EBX
00479BCF  0F 85 98 00 00 00         JNZ 0x00479c6d
00479BD5  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
00479BDC  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
00479BE3  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
00479BEA  66 85 C0                  TEST AX,AX
00479BED  7C 50                     JL 0x00479c3f
00479BEF  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479BF6  66 3B C7                  CMP AX,DI
00479BF9  7D 44                     JGE 0x00479c3f
00479BFB  66 85 D2                  TEST DX,DX
00479BFE  7C 3F                     JL 0x00479c3f
00479C00  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479C07  7D 36                     JGE 0x00479c3f
00479C09  66 85 C9                  TEST CX,CX
00479C0C  7C 31                     JL 0x00479c3f
00479C0E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479C15  7D 28                     JGE 0x00479c3f
00479C17  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479C1E  0F BF C9                  MOVSX ECX,CX
00479C21  0F BF D2                  MOVSX EDX,DX
00479C24  0F AF CB                  IMUL ECX,EBX
00479C27  0F BF FF                  MOVSX EDI,DI
00479C2A  0F AF D7                  IMUL EDX,EDI
00479C2D  0F BF C0                  MOVSX EAX,AX
00479C30  03 CA                     ADD ECX,EDX
00479C32  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00479C38  03 C8                     ADD ECX,EAX
00479C3A  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00479C3D  EB 02                     JMP 0x00479c41
LAB_00479c3f:
00479C3F  33 C9                     XOR ECX,ECX
LAB_00479c41:
00479C41  85 C9                     TEST ECX,ECX
00479C43  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479C46  0F 84 22 FD FF FF         JZ 0x0047996e
00479C4C  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00479C4F  8B 96 49 06 00 00         MOV EDX,dword ptr [ESI + 0x649]
00479C55  3B C2                     CMP EAX,EDX
00479C57  0F 85 11 FD FF FF         JNZ 0x0047996e
00479C5D  8B 11                     MOV EDX,dword ptr [ECX]
00479C5F  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00479C65  85 C0                     TEST EAX,EAX
00479C67  0F 84 01 FD FF FF         JZ 0x0047996e
LAB_00479c6d:
00479C6D  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
00479C74  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
00479C7B  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
00479C82  66 85 C0                  TEST AX,AX
00479C85  7C 50                     JL 0x00479cd7
00479C87  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479C8E  66 3B C7                  CMP AX,DI
00479C91  7D 44                     JGE 0x00479cd7
00479C93  66 85 D2                  TEST DX,DX
00479C96  7C 3F                     JL 0x00479cd7
00479C98  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479C9F  7D 36                     JGE 0x00479cd7
00479CA1  66 85 C9                  TEST CX,CX
00479CA4  7C 31                     JL 0x00479cd7
00479CA6  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479CAD  7D 28                     JGE 0x00479cd7
00479CAF  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479CB6  0F BF C9                  MOVSX ECX,CX
00479CB9  0F BF D2                  MOVSX EDX,DX
00479CBC  0F AF CB                  IMUL ECX,EBX
00479CBF  0F BF FF                  MOVSX EDI,DI
00479CC2  0F AF D7                  IMUL EDX,EDI
00479CC5  0F BF C0                  MOVSX EAX,AX
00479CC8  03 CA                     ADD ECX,EDX
00479CCA  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00479CD0  03 C8                     ADD ECX,EAX
00479CD2  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00479CD5  EB 02                     JMP 0x00479cd9
LAB_00479cd7:
00479CD7  33 C9                     XOR ECX,ECX
LAB_00479cd9:
00479CD9  85 C9                     TEST ECX,ECX
00479CDB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479CDE  0F 84 8A FC FF FF         JZ 0x0047996e
00479CE4  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00479CE7  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
00479CED  3B C2                     CMP EAX,EDX
00479CEF  0F 85 79 FC FF FF         JNZ 0x0047996e
00479CF5  8B 11                     MOV EDX,dword ptr [ECX]
00479CF7  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00479CFD  85 C0                     TEST EAX,EAX
00479CFF  0F 84 69 FC FF FF         JZ 0x0047996e
00479D05  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00479D09  66 3B 86 51 06 00 00      CMP AX,word ptr [ESI + 0x651]
00479D10  75 3C                     JNZ 0x00479d4e
00479D12  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00479D16  66 3B 8E 53 06 00 00      CMP CX,word ptr [ESI + 0x653]
00479D1D  75 2F                     JNZ 0x00479d4e
00479D1F  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00479D23  66 3B 96 55 06 00 00      CMP DX,word ptr [ESI + 0x655]
00479D2A  75 22                     JNZ 0x00479d4e
00479D2C  C7 86 63 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x663],0x3
00479D36  C7 86 67 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x667],0x0
00479D40  B8 02 00 00 00            MOV EAX,0x2
00479D45  5F                        POP EDI
00479D46  5E                        POP ESI
00479D47  5B                        POP EBX
00479D48  8B E5                     MOV ESP,EBP
00479D4A  5D                        POP EBP
00479D4B  C2 04 00                  RET 0x4
LAB_00479d4e:
00479D4E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00479D51  56                        PUSH ESI
00479D52  E8 1A AC F8 FF            CALL 0x00404971
00479D57  33 C0                     XOR EAX,EAX
00479D59  5F                        POP EDI
00479D5A  5E                        POP ESI
00479D5B  5B                        POP EBX
00479D5C  8B E5                     MOV ESP,EBP
00479D5E  5D                        POP EBP
00479D5F  C2 04 00                  RET 0x4
switchD_00479b75::caseD_3:
00479D62  8D BE 55 06 00 00         LEA EDI,[ESI + 0x655]
00479D68  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
00479D6E  8D 86 51 06 00 00         LEA EAX,[ESI + 0x651]
00479D74  57                        PUSH EDI
00479D75  53                        PUSH EBX
00479D76  50                        PUSH EAX
00479D77  8B CE                     MOV ECX,ESI
00479D79  E8 7C 8C F8 FF            CALL 0x004029fa
00479D7E  83 F8 01                  CMP EAX,0x1
00479D81  75 15                     JNZ 0x00479d98
LAB_00479d83:
00479D83  0F BF 07                  MOVSX EAX,word ptr [EDI]
00479D86  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00479D89  0F BF 96 51 06 00 00      MOVSX EDX,word ptr [ESI + 0x651]
00479D90  50                        PUSH EAX
00479D91  51                        PUSH ECX
00479D92  52                        PUSH EDX
00479D93  E9 54 15 00 00            JMP 0x0047b2ec
LAB_00479d98:
00479D98  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
00479D9F  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
00479DA6  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
00479DAD  66 85 C0                  TEST AX,AX
00479DB0  7C 50                     JL 0x00479e02
00479DB2  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479DB9  66 3B C7                  CMP AX,DI
00479DBC  7D 44                     JGE 0x00479e02
00479DBE  66 85 D2                  TEST DX,DX
00479DC1  7C 3F                     JL 0x00479e02
00479DC3  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479DCA  7D 36                     JGE 0x00479e02
00479DCC  66 85 C9                  TEST CX,CX
00479DCF  7C 31                     JL 0x00479e02
00479DD1  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479DD8  7D 28                     JGE 0x00479e02
00479DDA  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479DE1  0F BF C9                  MOVSX ECX,CX
00479DE4  0F BF D2                  MOVSX EDX,DX
00479DE7  0F AF CB                  IMUL ECX,EBX
00479DEA  0F BF FF                  MOVSX EDI,DI
00479DED  0F AF D7                  IMUL EDX,EDI
00479DF0  0F BF C0                  MOVSX EAX,AX
00479DF3  03 CA                     ADD ECX,EDX
00479DF5  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00479DFB  03 C8                     ADD ECX,EAX
00479DFD  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00479E00  EB 02                     JMP 0x00479e04
LAB_00479e02:
00479E02  33 C9                     XOR ECX,ECX
LAB_00479e04:
00479E04  85 C9                     TEST ECX,ECX
00479E06  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479E09  0F 84 5F FB FF FF         JZ 0x0047996e
00479E0F  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00479E12  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
00479E18  3B C2                     CMP EAX,EDX
00479E1A  0F 85 4E FB FF FF         JNZ 0x0047996e
00479E20  8B 11                     MOV EDX,dword ptr [ECX]
00479E22  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00479E28  85 C0                     TEST EAX,EAX
00479E2A  0F 84 3E FB FF FF         JZ 0x0047996e
00479E30  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00479E33  56                        PUSH ESI
00479E34  E8 38 AB F8 FF            CALL 0x00404971
LAB_00479e39:
00479E39  6A 00                     PUSH 0x0
00479E3B  8B CE                     MOV ECX,ESI
00479E3D  C7 86 63 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x663],0x1
00479E47  C7 86 5D 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x65d],0x0
00479E51  E8 D5 9B F8 FF            CALL 0x00403a2b
00479E56  83 F8 FF                  CMP EAX,-0x1
00479E59  0F 85 9D 14 00 00         JNZ 0x0047b2fc
LAB_00479e5f:
00479E5F  83 C8 FF                  OR EAX,0xffffffff
00479E62  5F                        POP EDI
00479E63  5E                        POP ESI
00479E64  5B                        POP EBX
00479E65  8B E5                     MOV ESP,EBP
00479E67  5D                        POP EBP
00479E68  C2 04 00                  RET 0x4
switchD_00479b75::caseD_1:
00479E6B  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
00479E72  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
00479E79  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
00479E80  66 85 C0                  TEST AX,AX
00479E83  7C 55                     JL 0x00479eda
00479E85  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479E8C  66 3B C7                  CMP AX,DI
00479E8F  7D 49                     JGE 0x00479eda
00479E91  66 85 D2                  TEST DX,DX
00479E94  7C 44                     JL 0x00479eda
00479E96  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479E9D  7D 3B                     JGE 0x00479eda
00479E9F  66 85 C9                  TEST CX,CX
00479EA2  7C 36                     JL 0x00479eda
00479EA4  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479EAB  7D 2D                     JGE 0x00479eda
00479EAD  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479EB4  0F BF C9                  MOVSX ECX,CX
00479EB7  0F BF D2                  MOVSX EDX,DX
00479EBA  0F AF CB                  IMUL ECX,EBX
00479EBD  0F BF FF                  MOVSX EDI,DI
00479EC0  0F AF D7                  IMUL EDX,EDI
00479EC3  0F BF C0                  MOVSX EAX,AX
00479EC6  03 CA                     ADD ECX,EDX
00479EC8  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00479ECE  03 C8                     ADD ECX,EAX
00479ED0  BB 01 00 00 00            MOV EBX,0x1
00479ED5  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00479ED8  EB 02                     JMP 0x00479edc
LAB_00479eda:
00479EDA  33 C9                     XOR ECX,ECX
LAB_00479edc:
00479EDC  85 C9                     TEST ECX,ECX
00479EDE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479EE1  0F 84 BD 00 00 00         JZ 0x00479fa4
00479EE7  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00479EEA  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
00479EF0  3B C2                     CMP EAX,EDX
00479EF2  0F 85 AC 00 00 00         JNZ 0x00479fa4
00479EF8  8B 11                     MOV EDX,dword ptr [ECX]
00479EFA  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00479F00  85 C0                     TEST EAX,EAX
00479F02  0F 84 9C 00 00 00         JZ 0x00479fa4
00479F08  39 9E 35 06 00 00         CMP dword ptr [ESI + 0x635],EBX
00479F0E  0F 85 E8 13 00 00         JNZ 0x0047b2fc
00479F14  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
00479F1B  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
00479F22  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
00479F29  66 85 C0                  TEST AX,AX
00479F2C  7C 50                     JL 0x00479f7e
00479F2E  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00479F35  66 3B C7                  CMP AX,DI
00479F38  7D 44                     JGE 0x00479f7e
00479F3A  66 85 D2                  TEST DX,DX
00479F3D  7C 3F                     JL 0x00479f7e
00479F3F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00479F46  7D 36                     JGE 0x00479f7e
00479F48  66 85 C9                  TEST CX,CX
00479F4B  7C 31                     JL 0x00479f7e
00479F4D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00479F54  7D 28                     JGE 0x00479f7e
00479F56  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00479F5D  0F BF C9                  MOVSX ECX,CX
00479F60  0F BF D2                  MOVSX EDX,DX
00479F63  0F AF CB                  IMUL ECX,EBX
00479F66  0F BF FF                  MOVSX EDI,DI
00479F69  0F AF D7                  IMUL EDX,EDI
00479F6C  0F BF C0                  MOVSX EAX,AX
00479F6F  03 CA                     ADD ECX,EDX
00479F71  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00479F77  03 C8                     ADD ECX,EAX
00479F79  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00479F7C  EB 02                     JMP 0x00479f80
LAB_00479f7e:
00479F7E  33 C9                     XOR ECX,ECX
LAB_00479f80:
00479F80  85 C9                     TEST ECX,ECX
00479F82  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00479F85  74 1D                     JZ 0x00479fa4
00479F87  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00479F8A  8B 96 49 06 00 00         MOV EDX,dword ptr [ESI + 0x649]
00479F90  3B C2                     CMP EAX,EDX
00479F92  75 10                     JNZ 0x00479fa4
00479F94  8B 11                     MOV EDX,dword ptr [ECX]
00479F96  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00479F9C  85 C0                     TEST EAX,EAX
00479F9E  0F 85 58 13 00 00         JNZ 0x0047b2fc
LAB_00479fa4:
00479FA4  8B CE                     MOV ECX,ESI
00479FA6  E8 AA 98 F8 FF            CALL 0x00403855
00479FAB  33 C0                     XOR EAX,EAX
00479FAD  5F                        POP EDI
00479FAE  5E                        POP ESI
00479FAF  5B                        POP EBX
00479FB0  8B E5                     MOV ESP,EBP
00479FB2  5D                        POP EBP
00479FB3  C2 04 00                  RET 0x4
LAB_00479fb6:
00479FB6  83 F8 03                  CMP EAX,0x3
00479FB9  0F 85 2E 05 00 00         JNZ 0x0047a4ed
00479FBF  39 BE 67 06 00 00         CMP dword ptr [ESI + 0x667],EDI
00479FC5  75 5B                     JNZ 0x0047a022
00479FC7  66 8B 86 3D 06 00 00      MOV AX,word ptr [ESI + 0x63d]
00479FCE  8B 16                     MOV EDX,dword ptr [ESI]
00479FD0  66 69 C0 C8 00            IMUL AX,AX,0xc8
00479FD5  05 2C 01 00 00            ADD EAX,0x12c
00479FDA  50                        PUSH EAX
00479FDB  66 8B 86 3B 06 00 00      MOV AX,word ptr [ESI + 0x63b]
00479FE2  66 40                     INC AX
00479FE4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00479FE7  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00479FEA  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00479FED  50                        PUSH EAX
00479FEE  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
00479FF5  66 40                     INC AX
00479FF7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00479FFA  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00479FFD  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0047A000  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0047A004  50                        PUSH EAX
0047A005  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047A009  51                        PUSH ECX
0047A00A  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047A00E  50                        PUSH EAX
0047A00F  51                        PUSH ECX
0047A010  8B CE                     MOV ECX,ESI
0047A012  FF 52 10                  CALL dword ptr [EDX + 0x10]
0047A015  66 89 86 61 06 00 00      MOV word ptr [ESI + 0x661],AX
0047A01C  89 9E 67 06 00 00         MOV dword ptr [ESI + 0x667],EBX
LAB_0047a022:
0047A022  8B 86 67 06 00 00         MOV EAX,dword ptr [ESI + 0x667]
0047A028  3B C3                     CMP EAX,EBX
0047A02A  75 58                     JNZ 0x0047a084
0047A02C  66 8B 96 61 06 00 00      MOV DX,word ptr [ESI + 0x661]
0047A033  8B CE                     MOV ECX,ESI
0047A035  52                        PUSH EDX
0047A036  E8 77 90 F8 FF            CALL 0x004030b2
0047A03B  50                        PUSH EAX
0047A03C  8B CE                     MOV ECX,ESI
0047A03E  E8 B9 82 F8 FF            CALL 0x004022fc
0047A043  83 F8 FF                  CMP EAX,-0x1
0047A046  74 0D                     JZ 0x0047a055
0047A048  3B C7                     CMP EAX,EDI
0047A04A  0F 85 65 0D 00 00         JNZ 0x0047adb5
0047A050  E9 56 0D 00 00            JMP 0x0047adab
LAB_0047a055:
0047A055  68 98 B4 7A 00            PUSH 0x7ab498
0047A05A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047A05F  57                        PUSH EDI
0047A060  57                        PUSH EDI
0047A061  68 F4 35 00 00            PUSH 0x35f4
0047A066  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047A06B  E8 60 34 23 00            CALL 0x006ad4d0
0047A070  83 C4 18                  ADD ESP,0x18
0047A073  85 C0                     TEST EAX,EAX
0047A075  74 01                     JZ 0x0047a078
0047A077  CC                        INT3
LAB_0047a078:
0047A078  83 C8 FF                  OR EAX,0xffffffff
0047A07B  5F                        POP EDI
0047A07C  5E                        POP ESI
0047A07D  5B                        POP EBX
0047A07E  8B E5                     MOV ESP,EBP
0047A080  5D                        POP EBP
0047A081  C2 04 00                  RET 0x4
LAB_0047a084:
0047A084  83 F8 02                  CMP EAX,0x2
0047A087  75 5D                     JNZ 0x0047a0e6
0047A089  66 8B 96 3D 06 00 00      MOV DX,word ptr [ESI + 0x63d]
0047A090  66 8B 86 3B 06 00 00      MOV AX,word ptr [ESI + 0x63b]
0047A097  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047A09C  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0047A09F  81 C2 2C 01 00 00         ADD EDX,0x12c
0047A0A5  66 40                     INC AX
0047A0A7  51                        PUSH ECX
0047A0A8  52                        PUSH EDX
0047A0A9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047A0AC  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047A0AF  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047A0B2  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047A0B9  66 40                     INC AX
0047A0BB  52                        PUSH EDX
0047A0BC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047A0BF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047A0C2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047A0C5  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0047A0C9  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0047A0CD  52                        PUSH EDX
0047A0CE  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047A0D2  50                        PUSH EAX
0047A0D3  51                        PUSH ECX
0047A0D4  52                        PUSH EDX
0047A0D5  8B CE                     MOV ECX,ESI
0047A0D7  E8 79 83 F8 FF            CALL 0x00402455
0047A0DC  C7 86 67 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x667],0x3
LAB_0047a0e6:
0047A0E6  83 BE 67 06 00 00 03      CMP dword ptr [ESI + 0x667],0x3
0047A0ED  0F 85 76 02 00 00         JNZ 0x0047a369
0047A0F3  8D 45 E8                  LEA EAX,[EBP + -0x18]
0047A0F6  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0047A0F9  50                        PUSH EAX
0047A0FA  51                        PUSH ECX
0047A0FB  8B CE                     MOV ECX,ESI
0047A0FD  E8 45 87 F8 FF            CALL 0x00402847
0047A102  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047A105  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0047A108  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047A10E  B9 07 00 00 00            MOV ECX,0x7
0047A113  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047A119  33 D2                     XOR EDX,EDX
0047A11B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047A11E  C1 E8 10                  SHR EAX,0x10
0047A121  F7 F1                     DIV ECX
0047A123  8B FA                     MOV EDI,EDX
0047A125  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047A128  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047A12E  83 EF 03                  SUB EDI,0x3
0047A131  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047A137  33 D2                     XOR EDX,EDX
0047A139  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047A13C  C1 E8 10                  SHR EAX,0x10
0047A13F  F7 F1                     DIV ECX
0047A141  8B DA                     MOV EBX,EDX
0047A143  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047A146  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047A14C  83 EB 03                  SUB EBX,0x3
0047A14F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047A155  33 D2                     XOR EDX,EDX
0047A157  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047A15A  C1 E8 10                  SHR EAX,0x10
0047A15D  F7 F1                     DIV ECX
0047A15F  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
0047A165  83 EA 03                  SUB EDX,0x3
0047A168  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0047A16B  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0047A171  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
0047A175  99                        CDQ
0047A176  2B C2                     SUB EAX,EDX
0047A178  D1 F8                     SAR EAX,0x1
0047A17A  3B C8                     CMP ECX,EAX
0047A17C  0F 8F 09 01 00 00         JG 0x0047a28b
0047A182  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
0047A188  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0047A18F  84 C0                     TEST AL,AL
0047A191  0F 86 F4 00 00 00         JBE 0x0047a28b
0047A197  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047A19D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0047a1a0:
0047A1A0  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047A1A4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0047A1A7  51                        PUSH ECX
0047A1A8  8B 0A                     MOV ECX,dword ptr [EDX]
0047A1AA  83 EC 08                  SUB ESP,0x8
0047A1AD  8B C4                     MOV EAX,ESP
0047A1AF  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
0047A1B3  89 08                     MOV dword ptr [EAX],ECX
0047A1B5  8B CE                     MOV ECX,ESI
0047A1B7  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0047A1BB  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0047A1BE  50                        PUSH EAX
0047A1BF  E8 68 92 F8 FF            CALL 0x0040342c
0047A1C4  8B 08                     MOV ECX,dword ptr [EAX]
0047A1C6  6A 00                     PUSH 0x0
0047A1C8  6A 00                     PUSH 0x0
0047A1CA  6A FF                     PUSH -0x1
0047A1CC  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0047A1D0  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0047A1D5  6A 00                     PUSH 0x0
0047A1D7  6A 00                     PUSH 0x0
0047A1D9  6A 00                     PUSH 0x0
0047A1DB  6A 00                     PUSH 0x0
0047A1DD  83 F8 01                  CMP EAX,0x1
0047A1E0  6A 00                     PUSH 0x0
0047A1E2  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0047A1E5  66 89 55 E0               MOV word ptr [EBP + -0x20],DX
0047A1E9  6A 00                     PUSH 0x0
0047A1EB  75 41                     JNZ 0x0047a22e
0047A1ED  D9 46 70                  FLD float ptr [ESI + 0x70]
0047A1F0  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047A1F6  E8 8D 40 2B 00            CALL 0x0072e288
0047A1FB  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047A1FF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0047A202  0F BF C0                  MOVSX EAX,AX
0047A205  03 CA                     ADD ECX,EDX
0047A207  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
0047A20B  03 C8                     ADD ECX,EAX
0047A20D  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047A211  03 D1                     ADD EDX,ECX
0047A213  0F BF 4D DE               MOVSX ECX,word ptr [EBP + -0x22]
0047A217  2B C1                     SUB EAX,ECX
0047A219  52                        PUSH EDX
0047A21A  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047A21E  03 C3                     ADD EAX,EBX
0047A220  8B CF                     MOV ECX,EDI
0047A222  50                        PUSH EAX
0047A223  03 CA                     ADD ECX,EDX
0047A225  0F BF 45 DC               MOVSX EAX,word ptr [EBP + -0x24]
0047A229  03 C1                     ADD EAX,ECX
0047A22B  50                        PUSH EAX
0047A22C  EB 2C                     JMP 0x0047a25a
LAB_0047a22e:
0047A22E  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047A232  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
0047A236  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0047A239  03 CA                     ADD ECX,EDX
0047A23B  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047A23F  03 C1                     ADD EAX,ECX
0047A241  50                        PUSH EAX
0047A242  0F BF 45 DE               MOVSX EAX,word ptr [EBP + -0x22]
0047A246  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047A24A  2B D0                     SUB EDX,EAX
0047A24C  8B C7                     MOV EAX,EDI
0047A24E  03 D3                     ADD EDX,EBX
0047A250  03 C1                     ADD EAX,ECX
0047A252  52                        PUSH EDX
0047A253  0F BF 55 DC               MOVSX EDX,word ptr [EBP + -0x24]
0047A257  03 D0                     ADD EDX,EAX
0047A259  52                        PUSH EDX
LAB_0047a25a:
0047A25A  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047A260  6A 07                     PUSH 0x7
0047A262  6A 02                     PUSH 0x2
0047A264  6A 01                     PUSH 0x1
0047A266  E8 C8 71 F8 FF            CALL 0x00401433
0047A26B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0047A26E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0047A271  83 C1 06                  ADD ECX,0x6
0047A274  40                        INC EAX
0047A275  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0047A278  33 C9                     XOR ECX,ECX
0047A27A  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047A280  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0047A283  3B C1                     CMP EAX,ECX
0047A285  0F 8C 15 FF FF FF         JL 0x0047a1a0
LAB_0047a28b:
0047A28B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0047A28E  83 F8 FF                  CMP EAX,-0x1
0047A291  0F 84 25 02 00 00         JZ 0x0047a4bc
0047A297  85 C0                     TEST EAX,EAX
0047A299  0F 85 CA 00 00 00         JNZ 0x0047a369
0047A29F  83 BE 35 06 00 00 01      CMP dword ptr [ESI + 0x635],0x1
0047A2A6  0F 85 D9 00 00 00         JNZ 0x0047a385
0047A2AC  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
0047A2B3  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
0047A2BA  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
0047A2C1  66 85 C0                  TEST AX,AX
0047A2C4  7C 50                     JL 0x0047a316
0047A2C6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047A2CD  66 3B C7                  CMP AX,DI
0047A2D0  7D 44                     JGE 0x0047a316
0047A2D2  66 85 D2                  TEST DX,DX
0047A2D5  7C 3F                     JL 0x0047a316
0047A2D7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047A2DE  7D 36                     JGE 0x0047a316
0047A2E0  66 85 C9                  TEST CX,CX
0047A2E3  7C 31                     JL 0x0047a316
0047A2E5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047A2EC  7D 28                     JGE 0x0047a316
0047A2EE  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047A2F5  0F BF C9                  MOVSX ECX,CX
0047A2F8  0F BF D2                  MOVSX EDX,DX
0047A2FB  0F AF CB                  IMUL ECX,EBX
0047A2FE  0F BF FF                  MOVSX EDI,DI
0047A301  0F AF D7                  IMUL EDX,EDI
0047A304  0F BF C0                  MOVSX EAX,AX
0047A307  03 CA                     ADD ECX,EDX
0047A309  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047A30F  03 C8                     ADD ECX,EAX
0047A311  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047A314  EB 02                     JMP 0x0047a318
LAB_0047a316:
0047A316  33 C9                     XOR ECX,ECX
LAB_0047a318:
0047A318  85 C9                     TEST ECX,ECX
0047A31A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047A31D  74 2F                     JZ 0x0047a34e
0047A31F  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047A322  8B 96 49 06 00 00         MOV EDX,dword ptr [ESI + 0x649]
0047A328  3B C2                     CMP EAX,EDX
0047A32A  75 22                     JNZ 0x0047a34e
0047A32C  8B 11                     MOV EDX,dword ptr [ECX]
0047A32E  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047A334  85 C0                     TEST EAX,EAX
0047A336  74 16                     JZ 0x0047a34e
0047A338  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047A33B  8B 88 B4 04 00 00         MOV ECX,dword ptr [EAX + 0x4b4]
0047A341  85 C9                     TEST ECX,ECX
0047A343  75 09                     JNZ 0x0047a34e
0047A345  83 B8 45 02 00 00 06      CMP dword ptr [EAX + 0x245],0x6
0047A34C  75 37                     JNZ 0x0047a385
LAB_0047a34e:
0047A34E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0047A353  8D 55 08                  LEA EDX,[EBP + 0x8]
0047A356  52                        PUSH EDX
0047A357  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0047A35D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0047a360:
0047A360  6A 03                     PUSH 0x3
0047A362  8B CE                     MOV ECX,ESI
0047A364  E8 BD 7D F8 FF            CALL 0x00402126
LAB_0047a369:
0047A369  8B 16                     MOV EDX,dword ptr [ESI]
0047A36B  8B CE                     MOV ECX,ESI
0047A36D  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047A373  F7 D8                     NEG EAX
0047A375  1B C0                     SBB EAX,EAX
0047A377  24 FD                     AND AL,0xfd
0047A379  83 C0 02                  ADD EAX,0x2
0047A37C  5F                        POP EDI
0047A37D  5E                        POP ESI
0047A37E  5B                        POP EBX
0047A37F  8B E5                     MOV ESP,EBP
0047A381  5D                        POP EBP
0047A382  C2 04 00                  RET 0x4
LAB_0047a385:
0047A385  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047A38C  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
0047A393  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
0047A39A  66 85 C0                  TEST AX,AX
0047A39D  7C 50                     JL 0x0047a3ef
0047A39F  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047A3A6  66 3B C7                  CMP AX,DI
0047A3A9  7D 44                     JGE 0x0047a3ef
0047A3AB  66 85 D2                  TEST DX,DX
0047A3AE  7C 3F                     JL 0x0047a3ef
0047A3B0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047A3B7  7D 36                     JGE 0x0047a3ef
0047A3B9  66 85 C9                  TEST CX,CX
0047A3BC  7C 31                     JL 0x0047a3ef
0047A3BE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047A3C5  7D 28                     JGE 0x0047a3ef
0047A3C7  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047A3CE  0F BF C9                  MOVSX ECX,CX
0047A3D1  0F BF D2                  MOVSX EDX,DX
0047A3D4  0F AF CB                  IMUL ECX,EBX
0047A3D7  0F BF FF                  MOVSX EDI,DI
0047A3DA  0F AF D7                  IMUL EDX,EDI
0047A3DD  0F BF C0                  MOVSX EAX,AX
0047A3E0  03 CA                     ADD ECX,EDX
0047A3E2  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047A3E8  03 C8                     ADD ECX,EAX
0047A3EA  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047A3ED  EB 02                     JMP 0x0047a3f1
LAB_0047a3ef:
0047A3EF  33 C9                     XOR ECX,ECX
LAB_0047a3f1:
0047A3F1  85 C9                     TEST ECX,ECX
0047A3F3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047A3F6  0F 84 A8 00 00 00         JZ 0x0047a4a4
0047A3FC  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047A3FF  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
0047A405  3B C2                     CMP EAX,EDX
0047A407  0F 85 97 00 00 00         JNZ 0x0047a4a4
0047A40D  8B 11                     MOV EDX,dword ptr [ECX]
0047A40F  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047A415  85 C0                     TEST EAX,EAX
0047A417  0F 84 87 00 00 00         JZ 0x0047a4a4
0047A41D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047A420  8B 81 B4 04 00 00         MOV EAX,dword ptr [ECX + 0x4b4]
0047A426  85 C0                     TEST EAX,EAX
0047A428  75 7A                     JNZ 0x0047a4a4
0047A42A  83 B9 45 02 00 00 06      CMP dword ptr [ECX + 0x245],0x6
0047A431  74 71                     JZ 0x0047a4a4
0047A433  8D BE 5B 06 00 00         LEA EDI,[ESI + 0x65b]
0047A439  8D 9E 59 06 00 00         LEA EBX,[ESI + 0x659]
0047A43F  8D 86 57 06 00 00         LEA EAX,[ESI + 0x657]
0047A445  57                        PUSH EDI
0047A446  53                        PUSH EBX
0047A447  50                        PUSH EAX
0047A448  C7 86 42 07 00 00 01 00 00 00  MOV dword ptr [ESI + 0x742],0x1
0047A452  E8 67 99 F8 FF            CALL 0x00403dbe
0047A457  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0047A45A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047A45D  50                        PUSH EAX
0047A45E  E8 1D AF F8 FF            CALL 0x00405380
0047A463  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0047A466  0F BF 13                  MOVSX EDX,word ptr [EBX]
0047A469  0F BF 86 57 06 00 00      MOVSX EAX,word ptr [ESI + 0x657]
0047A470  51                        PUSH ECX
0047A471  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
0047A477  52                        PUSH EDX
0047A478  50                        PUSH EAX
0047A479  E8 04 71 F8 FF            CALL 0x00401582
0047A47E  C7 86 67 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x667],0x0
0047A488  8B 96 35 06 00 00         MOV EDX,dword ptr [ESI + 0x635]
0047A48E  33 C9                     XOR ECX,ECX
0047A490  83 FA 01                  CMP EDX,0x1
0047A493  0F 95 C1                  SETNZ CL
0047A496  83 C1 04                  ADD ECX,0x4
0047A499  89 8E 63 06 00 00         MOV dword ptr [ESI + 0x663],ECX
0047A49F  E9 C5 FE FF FF            JMP 0x0047a369
LAB_0047a4a4:
0047A4A4  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0047A4AA  8D 4D 08                  LEA ECX,[EBP + 0x8]
0047A4AD  51                        PUSH ECX
0047A4AE  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0047A4B4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0047A4B7  E9 A4 FE FF FF            JMP 0x0047a360
LAB_0047a4bc:
0047A4BC  68 6C B4 7A 00            PUSH 0x7ab46c
0047A4C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047A4C6  6A 00                     PUSH 0x0
0047A4C8  6A 00                     PUSH 0x0
0047A4CA  68 1B 36 00 00            PUSH 0x361b
0047A4CF  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047A4D4  E8 F7 2F 23 00            CALL 0x006ad4d0
0047A4D9  83 C4 18                  ADD ESP,0x18
0047A4DC  85 C0                     TEST EAX,EAX
0047A4DE  74 01                     JZ 0x0047a4e1
0047A4E0  CC                        INT3
LAB_0047a4e1:
0047A4E1  83 C8 FF                  OR EAX,0xffffffff
0047A4E4  5F                        POP EDI
0047A4E5  5E                        POP ESI
0047A4E6  5B                        POP EBX
0047A4E7  8B E5                     MOV ESP,EBP
0047A4E9  5D                        POP EBP
0047A4EA  C2 04 00                  RET 0x4
LAB_0047a4ed:
0047A4ED  83 F8 04                  CMP EAX,0x4
0047A4F0  0F 85 FE 03 00 00         JNZ 0x0047a8f4
0047A4F6  39 BE 67 06 00 00         CMP dword ptr [ESI + 0x667],EDI
0047A4FC  0F 85 81 00 00 00         JNZ 0x0047a583
0047A502  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047A508  83 F8 07                  CMP EAX,0x7
0047A50B  74 0A                     JZ 0x0047a517
0047A50D  83 F8 13                  CMP EAX,0x13
0047A510  74 05                     JZ 0x0047a517
0047A512  83 F8 1B                  CMP EAX,0x1b
0047A515  75 40                     JNZ 0x0047a557
LAB_0047a517:
0047A517  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047A51D  3B C7                     CMP EAX,EDI
0047A51F  74 36                     JZ 0x0047a557
0047A521  8D 4D FC                  LEA ECX,[EBP + -0x4]
0047A524  51                        PUSH ECX
0047A525  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047A52B  50                        PUSH EAX
0047A52C  E8 9F BD 26 00            CALL 0x006e62d0
0047A531  83 F8 FC                  CMP EAX,-0x4
0047A534  74 21                     JZ 0x0047a557
0047A536  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047A53A  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047A53E  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047A542  57                        PUSH EDI
0047A543  52                        PUSH EDX
0047A544  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0047A547  50                        PUSH EAX
0047A548  51                        PUSH ECX
0047A549  57                        PUSH EDI
0047A54A  8D 8A D5 01 00 00         LEA ECX,[EDX + 0x1d5]
0047A550  E8 77 AD F8 FF            CALL 0x004052cc
0047A555  EB 17                     JMP 0x0047a56e
LAB_0047a557:
0047A557  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047A55B  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047A55F  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047A563  57                        PUSH EDI
0047A564  50                        PUSH EAX
0047A565  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0047A56B  51                        PUSH ECX
0047A56C  52                        PUSH EDX
0047A56D  57                        PUSH EDI
LAB_0047a56e:
0047A56E  50                        PUSH EAX
0047A56F  E8 31 AC F8 FF            CALL 0x004051a5
0047A574  83 C4 18                  ADD ESP,0x18
0047A577  89 9E 67 06 00 00         MOV dword ptr [ESI + 0x667],EBX
0047A57D  89 BE 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EDI
LAB_0047a583:
0047A583  39 9E 67 06 00 00         CMP dword ptr [ESI + 0x667],EBX
0047A589  0F 85 00 02 00 00         JNZ 0x0047a78f
0047A58F  8B 8E 5D 06 00 00         MOV ECX,dword ptr [ESI + 0x65d]
0047A595  41                        INC ECX
0047A596  8B C1                     MOV EAX,ECX
0047A598  89 8E 5D 06 00 00         MOV dword ptr [ESI + 0x65d],ECX
0047A59E  83 F8 16                  CMP EAX,0x16
0047A5A1  0F 85 E8 01 00 00         JNZ 0x0047a78f
0047A5A7  8B CE                     MOV ECX,ESI
0047A5A9  C7 86 67 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x667],0x2
0047A5B3  89 BE 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EDI
0047A5B9  E8 8E A0 F8 FF            CALL 0x0040464c
0047A5BE  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047A5C4  83 F8 0B                  CMP EAX,0xb
0047A5C7  74 05                     JZ 0x0047a5ce
0047A5C9  83 F8 23                  CMP EAX,0x23
0047A5CC  75 3D                     JNZ 0x0047a60b
LAB_0047a5ce:
0047A5CE  39 9E 1D 02 00 00         CMP dword ptr [ESI + 0x21d],EBX
0047A5D4  75 35                     JNZ 0x0047a60b
0047A5D6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047A5D9  33 C9                     XOR ECX,ECX
0047A5DB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0047A5E1  3B C1                     CMP EAX,ECX
0047A5E3  75 26                     JNZ 0x0047a60b
0047A5E5  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047A5E8  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0047A5EE  C1 EA 10                  SHR EDX,0x10
0047A5F1  81 E2 FF 00 00 00         AND EDX,0xff
0047A5F7  33 C0                     XOR EAX,EAX
0047A5F9  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0047A5FD  80 CE 02                  OR DH,0x2
0047A600  C1 E2 10                  SHL EDX,0x10
0047A603  0B D0                     OR EDX,EAX
0047A605  52                        PUSH EDX
0047A606  E8 75 C1 26 00            CALL 0x006e6780
LAB_0047a60b:
0047A60B  0F BF 8E 5B 06 00 00      MOVSX ECX,word ptr [ESI + 0x65b]
0047A612  0F BF 96 59 06 00 00      MOVSX EDX,word ptr [ESI + 0x659]
0047A619  0F BF 86 57 06 00 00      MOVSX EAX,word ptr [ESI + 0x657]
0047A620  51                        PUSH ECX
0047A621  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
0047A627  52                        PUSH EDX
0047A628  50                        PUSH EAX
0047A629  E8 A6 77 F8 FF            CALL 0x00401dd4
0047A62E  66 8B 8E 5B 06 00 00      MOV CX,word ptr [ESI + 0x65b]
0047A635  66 8B 96 59 06 00 00      MOV DX,word ptr [ESI + 0x659]
0047A63C  66 8B 86 57 06 00 00      MOV AX,word ptr [ESI + 0x657]
0047A643  53                        PUSH EBX
0047A644  51                        PUSH ECX
0047A645  52                        PUSH EDX
0047A646  50                        PUSH EAX
0047A647  8B CE                     MOV ECX,ESI
0047A649  E8 11 83 F8 FF            CALL 0x0040295f
0047A64E  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
0047A655  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0047A65B  66 40                     INC AX
0047A65D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047A660  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047A663  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0047A666  66 8B 86 45 06 00 00      MOV AX,word ptr [ESI + 0x645]
0047A66D  66 40                     INC AX
0047A66F  51                        PUSH ECX
0047A670  66 89 4E 41               MOV word ptr [ESI + 0x41],CX
0047A674  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0047A677  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0047A67A  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0047A67D  66 8B 96 47 06 00 00      MOV DX,word ptr [ESI + 0x647]
0047A684  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047A689  81 C2 2C 01 00 00         ADD EDX,0x12c
0047A68F  66 89 46 43               MOV word ptr [ESI + 0x43],AX
0047A693  66 89 56 45               MOV word ptr [ESI + 0x45],DX
0047A697  0F BF D2                  MOVSX EDX,DX
0047A69A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0047A69D  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047A6A0  0F BF C0                  MOVSX EAX,AX
0047A6A3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047A6A9  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0047A6AC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047A6B2  D9 1C 24                  FSTP float ptr [ESP]
0047A6B5  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047A6B8  51                        PUSH ECX
0047A6B9  0F BF C9                  MOVSX ECX,CX
0047A6BC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047A6C2  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0047A6C5  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047A6CB  D9 1C 24                  FSTP float ptr [ESP]
0047A6CE  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047A6D1  51                        PUSH ECX
0047A6D2  8B CF                     MOV ECX,EDI
0047A6D4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047A6DA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047A6E0  D9 1C 24                  FSTP float ptr [ESP]
0047A6E3  E8 F1 9E F8 FF            CALL 0x004045d9
0047A6E8  8B 96 0A 07 00 00         MOV EDX,dword ptr [ESI + 0x70a]
0047A6EE  8B CE                     MOV ECX,ESI
0047A6F0  52                        PUSH EDX
0047A6F1  E8 AB 7C F8 FF            CALL 0x004023a1
0047A6F6  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047A6FC  83 F8 07                  CMP EAX,0x7
0047A6FF  74 0A                     JZ 0x0047a70b
0047A701  83 F8 13                  CMP EAX,0x13
0047A704  74 05                     JZ 0x0047a70b
0047A706  83 F8 1B                  CMP EAX,0x1b
0047A709  75 59                     JNZ 0x0047a764
LAB_0047a70b:
0047A70B  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047A711  85 C0                     TEST EAX,EAX
0047A713  74 4F                     JZ 0x0047a764
0047A715  8D 4D FC                  LEA ECX,[EBP + -0x4]
0047A718  51                        PUSH ECX
0047A719  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047A71F  50                        PUSH EAX
0047A720  E8 AB BB 26 00            CALL 0x006e62d0
0047A725  83 F8 FC                  CMP EAX,-0x4
0047A728  74 3A                     JZ 0x0047a764
0047A72A  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047A72E  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047A732  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047A736  6A 00                     PUSH 0x0
0047A738  52                        PUSH EDX
0047A739  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0047A73C  50                        PUSH EAX
0047A73D  51                        PUSH ECX
0047A73E  6A 00                     PUSH 0x0
0047A740  8D 8A D5 01 00 00         LEA ECX,[EDX + 0x1d5]
0047A746  E8 81 AB F8 FF            CALL 0x004052cc
0047A74B  50                        PUSH EAX
0047A74C  E8 54 AA F8 FF            CALL 0x004051a5
0047A751  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047A754  83 C4 18                  ADD ESP,0x18
0047A757  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
0047A75D  E8 AD 95 F8 FF            CALL 0x00403d0f
0047A762  EB 22                     JMP 0x0047a786
LAB_0047a764:
0047A764  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047A768  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047A76C  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047A770  6A 00                     PUSH 0x0
0047A772  51                        PUSH ECX
0047A773  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
0047A779  52                        PUSH EDX
0047A77A  50                        PUSH EAX
0047A77B  6A 00                     PUSH 0x0
0047A77D  51                        PUSH ECX
0047A77E  E8 22 AA F8 FF            CALL 0x004051a5
0047A783  83 C4 18                  ADD ESP,0x18
LAB_0047a786:
0047A786  8B CF                     MOV ECX,EDI
0047A788  E8 82 95 F8 FF            CALL 0x00403d0f
0047A78D  33 FF                     XOR EDI,EDI
LAB_0047a78f:
0047A78F  83 BE 67 06 00 00 02      CMP dword ptr [ESI + 0x667],0x2
0047A796  0F 85 18 01 00 00         JNZ 0x0047a8b4
0047A79C  8B 8E 5D 06 00 00         MOV ECX,dword ptr [ESI + 0x65d]
0047A7A2  41                        INC ECX
0047A7A3  8B C1                     MOV EAX,ECX
0047A7A5  89 8E 5D 06 00 00         MOV dword ptr [ESI + 0x65d],ECX
0047A7AB  83 F8 16                  CMP EAX,0x16
0047A7AE  0F 85 00 01 00 00         JNZ 0x0047a8b4
0047A7B4  C7 86 67 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x667],0x3
0047A7BE  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047A7C4  83 F8 07                  CMP EAX,0x7
0047A7C7  89 BE 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EDI
0047A7CD  74 0A                     JZ 0x0047a7d9
0047A7CF  83 F8 13                  CMP EAX,0x13
0047A7D2  74 05                     JZ 0x0047a7d9
0047A7D4  83 F8 1B                  CMP EAX,0x1b
0047A7D7  75 2E                     JNZ 0x0047a807
LAB_0047a7d9:
0047A7D9  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047A7DF  3B C7                     CMP EAX,EDI
0047A7E1  74 24                     JZ 0x0047a807
0047A7E3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047A7E9  8D 55 FC                  LEA EDX,[EBP + -0x4]
0047A7EC  52                        PUSH EDX
0047A7ED  50                        PUSH EAX
0047A7EE  E8 DD BA 26 00            CALL 0x006e62d0
0047A7F3  83 F8 FC                  CMP EAX,-0x4
0047A7F6  74 0F                     JZ 0x0047a807
0047A7F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047A7FB  57                        PUSH EDI
0047A7FC  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
0047A802  E8 7B 81 F8 FF            CALL 0x00402982
LAB_0047a807:
0047A807  57                        PUSH EDI
0047A808  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0047A80E  E8 6F 81 F8 FF            CALL 0x00402982
0047A813  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047A819  83 F8 0B                  CMP EAX,0xb
0047A81C  74 09                     JZ 0x0047a827
0047A81E  83 F8 23                  CMP EAX,0x23
0047A821  0F 85 8D 00 00 00         JNZ 0x0047a8b4
LAB_0047a827:
0047A827  39 9E 1D 02 00 00         CMP dword ptr [ESI + 0x21d],EBX
0047A82D  0F 85 81 00 00 00         JNZ 0x0047a8b4
0047A833  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047A836  33 C9                     XOR ECX,ECX
0047A838  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0047A83E  3B C1                     CMP EAX,ECX
0047A840  75 72                     JNZ 0x0047a8b4
0047A842  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047A845  33 C0                     XOR EAX,EAX
0047A847  DB 86 0D 01 00 00         FILD dword ptr [ESI + 0x10d]
0047A84D  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0047A851  C1 EA 10                  SHR EDX,0x10
0047A854  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047A85A  81 E2 FF 00 00 00         AND EDX,0xff
0047A860  80 CE 02                  OR DH,0x2
0047A863  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0047A869  C1 E2 10                  SHL EDX,0x10
0047A86C  0B D0                     OR EDX,EAX
0047A86E  52                        PUSH EDX
0047A86F  6A 28                     PUSH 0x28
0047A871  51                        PUSH ECX
0047A872  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047A876  D9 1C 24                  FSTP float ptr [ESP]
0047A879  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0047A87C  51                        PUSH ECX
0047A87D  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047A880  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047A884  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047A88A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0047A88D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047A893  D9 1C 24                  FSTP float ptr [ESP]
0047A896  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047A899  51                        PUSH ECX
0047A89A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0047A8A0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047A8A6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047A8AC  D9 1C 24                  FSTP float ptr [ESP]
0047A8AF  E8 5C BE 26 00            CALL 0x006e6710
LAB_0047a8b4:
0047A8B4  83 BE 67 06 00 00 03      CMP dword ptr [ESI + 0x667],0x3
0047A8BB  0F 85 F4 04 00 00         JNZ 0x0047adb5
0047A8C1  8B 8E 5D 06 00 00         MOV ECX,dword ptr [ESI + 0x65d]
0047A8C7  41                        INC ECX
0047A8C8  8B C1                     MOV EAX,ECX
0047A8CA  89 8E 5D 06 00 00         MOV dword ptr [ESI + 0x65d],ECX
0047A8D0  83 F8 0A                  CMP EAX,0xa
0047A8D3  0F 85 DC 04 00 00         JNZ 0x0047adb5
0047A8D9  C7 86 63 06 00 00 06 00 00 00  MOV dword ptr [ESI + 0x663],0x6
0047A8E3  89 BE 67 06 00 00         MOV dword ptr [ESI + 0x667],EDI
0047A8E9  89 BE 42 07 00 00         MOV dword ptr [ESI + 0x742],EDI
0047A8EF  E9 C1 04 00 00            JMP 0x0047adb5
LAB_0047a8f4:
0047A8F4  83 F8 05                  CMP EAX,0x5
0047A8F7  0F 85 20 04 00 00         JNZ 0x0047ad1d
0047A8FD  39 BE 67 06 00 00         CMP dword ptr [ESI + 0x667],EDI
0047A903  0F 85 81 00 00 00         JNZ 0x0047a98a
0047A909  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047A90F  83 F8 07                  CMP EAX,0x7
0047A912  74 0A                     JZ 0x0047a91e
0047A914  83 F8 13                  CMP EAX,0x13
0047A917  74 05                     JZ 0x0047a91e
0047A919  83 F8 1B                  CMP EAX,0x1b
0047A91C  75 40                     JNZ 0x0047a95e
LAB_0047a91e:
0047A91E  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047A924  3B C7                     CMP EAX,EDI
0047A926  74 36                     JZ 0x0047a95e
0047A928  8D 4D FC                  LEA ECX,[EBP + -0x4]
0047A92B  51                        PUSH ECX
0047A92C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047A932  50                        PUSH EAX
0047A933  E8 98 B9 26 00            CALL 0x006e62d0
0047A938  83 F8 FC                  CMP EAX,-0x4
0047A93B  74 21                     JZ 0x0047a95e
0047A93D  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047A941  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047A945  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047A949  57                        PUSH EDI
0047A94A  52                        PUSH EDX
0047A94B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0047A94E  50                        PUSH EAX
0047A94F  51                        PUSH ECX
0047A950  57                        PUSH EDI
0047A951  8D 8A D5 01 00 00         LEA ECX,[EDX + 0x1d5]
0047A957  E8 70 A9 F8 FF            CALL 0x004052cc
0047A95C  EB 17                     JMP 0x0047a975
LAB_0047a95e:
0047A95E  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047A962  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047A966  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047A96A  57                        PUSH EDI
0047A96B  50                        PUSH EAX
0047A96C  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0047A972  51                        PUSH ECX
0047A973  52                        PUSH EDX
0047A974  57                        PUSH EDI
LAB_0047a975:
0047A975  50                        PUSH EAX
0047A976  E8 2A A8 F8 FF            CALL 0x004051a5
0047A97B  83 C4 18                  ADD ESP,0x18
0047A97E  89 9E 67 06 00 00         MOV dword ptr [ESI + 0x667],EBX
0047A984  89 BE 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EDI
LAB_0047a98a:
0047A98A  39 9E 67 06 00 00         CMP dword ptr [ESI + 0x667],EBX
0047A990  0F 85 F0 01 00 00         JNZ 0x0047ab86
0047A996  8B 8E 5D 06 00 00         MOV ECX,dword ptr [ESI + 0x65d]
0047A99C  41                        INC ECX
0047A99D  8B C1                     MOV EAX,ECX
0047A99F  89 8E 5D 06 00 00         MOV dword ptr [ESI + 0x65d],ECX
0047A9A5  83 F8 16                  CMP EAX,0x16
0047A9A8  0F 85 D8 01 00 00         JNZ 0x0047ab86
0047A9AE  B8 02 00 00 00            MOV EAX,0x2
0047A9B3  89 BE 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EDI
0047A9B9  89 86 67 06 00 00         MOV dword ptr [ESI + 0x667],EAX
0047A9BF  8B 8E 35 06 00 00         MOV ECX,dword ptr [ESI + 0x635]
0047A9C5  3B C8                     CMP ECX,EAX
0047A9C7  75 71                     JNZ 0x0047aa3a
0047A9C9  8B 86 1E 07 00 00         MOV EAX,dword ptr [ESI + 0x71e]
0047A9CF  83 C0 F6                  ADD EAX,-0xa
0047A9D2  89 86 1E 07 00 00         MOV dword ptr [ESI + 0x71e],EAX
0047A9D8  79 06                     JNS 0x0047a9e0
0047A9DA  89 BE 1E 07 00 00         MOV dword ptr [ESI + 0x71e],EDI
LAB_0047a9e0:
0047A9E0  39 BE 4D 06 00 00         CMP dword ptr [ESI + 0x64d],EDI
0047A9E6  74 24                     JZ 0x0047aa0c
0047A9E8  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
0047A9EE  3B CF                     CMP ECX,EDI
0047A9F0  74 1A                     JZ 0x0047aa0c
0047A9F2  8B 96 F7 06 00 00         MOV EDX,dword ptr [ESI + 0x6f7]
0047A9F8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047A9FB  52                        PUSH EDX
0047A9FC  50                        PUSH EAX
0047A9FD  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0047AA01  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0047AA05  52                        PUSH EDX
0047AA06  50                        PUSH EAX
0047AA07  E8 0E 88 F8 FF            CALL 0x0040321a
LAB_0047aa0c:
0047AA0C  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
0047AA12  0F BF 96 5B 06 00 00      MOVSX EDX,word ptr [ESI + 0x65b]
0047AA19  0F BF 86 59 06 00 00      MOVSX EAX,word ptr [ESI + 0x659]
0047AA20  51                        PUSH ECX
0047AA21  52                        PUSH EDX
0047AA22  0F BF 8E 57 06 00 00      MOVSX ECX,word ptr [ESI + 0x657]
0047AA29  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047AA2C  50                        PUSH EAX
0047AA2D  51                        PUSH ECX
0047AA2E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0047AA34  52                        PUSH EDX
0047AA35  E8 9D 7F F8 FF            CALL 0x004029d7
LAB_0047aa3a:
0047AA3A  8B CE                     MOV ECX,ESI
0047AA3C  E8 0B 9C F8 FF            CALL 0x0040464c
0047AA41  0F BF 86 5B 06 00 00      MOVSX EAX,word ptr [ESI + 0x65b]
0047AA48  0F BF 8E 59 06 00 00      MOVSX ECX,word ptr [ESI + 0x659]
0047AA4F  0F BF 96 57 06 00 00      MOVSX EDX,word ptr [ESI + 0x657]
0047AA56  50                        PUSH EAX
0047AA57  51                        PUSH ECX
0047AA58  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
0047AA5E  52                        PUSH EDX
0047AA5F  E8 70 73 F8 FF            CALL 0x00401dd4
0047AA64  66 8B 86 5B 06 00 00      MOV AX,word ptr [ESI + 0x65b]
0047AA6B  66 8B 8E 59 06 00 00      MOV CX,word ptr [ESI + 0x659]
0047AA72  66 8B 96 57 06 00 00      MOV DX,word ptr [ESI + 0x657]
0047AA79  53                        PUSH EBX
0047AA7A  50                        PUSH EAX
0047AA7B  51                        PUSH ECX
0047AA7C  52                        PUSH EDX
0047AA7D  8B CE                     MOV ECX,ESI
0047AA7F  E8 DB 7E F8 FF            CALL 0x0040295f
0047AA84  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047AA88  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0047AA8B  51                        PUSH ECX
0047AA8C  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047AA8F  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047AA93  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047AA99  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0047AA9C  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0047AAA2  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047AAA6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047AAAC  D9 1C 24                  FSTP float ptr [ESP]
0047AAAF  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047AAB2  51                        PUSH ECX
0047AAB3  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0047AAB6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047AABC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047AAC2  D9 1C 24                  FSTP float ptr [ESP]
0047AAC5  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0047AAC8  51                        PUSH ECX
0047AAC9  8B CF                     MOV ECX,EDI
0047AACB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0047AAD1  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0047AAD7  D9 1C 24                  FSTP float ptr [ESP]
0047AADA  E8 FA 9A F8 FF            CALL 0x004045d9
0047AADF  8B 86 0A 07 00 00         MOV EAX,dword ptr [ESI + 0x70a]
0047AAE5  8B CE                     MOV ECX,ESI
0047AAE7  50                        PUSH EAX
0047AAE8  E8 B4 78 F8 FF            CALL 0x004023a1
0047AAED  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047AAF3  83 F8 07                  CMP EAX,0x7
0047AAF6  74 0A                     JZ 0x0047ab02
0047AAF8  83 F8 13                  CMP EAX,0x13
0047AAFB  74 05                     JZ 0x0047ab02
0047AAFD  83 F8 1B                  CMP EAX,0x1b
0047AB00  75 59                     JNZ 0x0047ab5b
LAB_0047ab02:
0047AB02  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047AB08  85 C0                     TEST EAX,EAX
0047AB0A  74 4F                     JZ 0x0047ab5b
0047AB0C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0047AB0F  51                        PUSH ECX
0047AB10  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047AB16  50                        PUSH EAX
0047AB17  E8 B4 B7 26 00            CALL 0x006e62d0
0047AB1C  83 F8 FC                  CMP EAX,-0x4
0047AB1F  74 3A                     JZ 0x0047ab5b
0047AB21  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047AB25  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047AB29  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047AB2D  6A 00                     PUSH 0x0
0047AB2F  52                        PUSH EDX
0047AB30  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0047AB33  50                        PUSH EAX
0047AB34  51                        PUSH ECX
0047AB35  6A 00                     PUSH 0x0
0047AB37  8D 8A D5 01 00 00         LEA ECX,[EDX + 0x1d5]
0047AB3D  E8 8A A7 F8 FF            CALL 0x004052cc
0047AB42  50                        PUSH EAX
0047AB43  E8 5D A6 F8 FF            CALL 0x004051a5
0047AB48  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047AB4B  83 C4 18                  ADD ESP,0x18
0047AB4E  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
0047AB54  E8 B6 91 F8 FF            CALL 0x00403d0f
0047AB59  EB 22                     JMP 0x0047ab7d
LAB_0047ab5b:
0047AB5B  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047AB5F  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047AB63  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047AB67  6A 00                     PUSH 0x0
0047AB69  51                        PUSH ECX
0047AB6A  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
0047AB70  52                        PUSH EDX
0047AB71  50                        PUSH EAX
0047AB72  6A 00                     PUSH 0x0
0047AB74  51                        PUSH ECX
0047AB75  E8 2B A6 F8 FF            CALL 0x004051a5
0047AB7A  83 C4 18                  ADD ESP,0x18
LAB_0047ab7d:
0047AB7D  8B CF                     MOV ECX,EDI
0047AB7F  E8 8B 91 F8 FF            CALL 0x00403d0f
0047AB84  33 FF                     XOR EDI,EDI
LAB_0047ab86:
0047AB86  83 BE 67 06 00 00 02      CMP dword ptr [ESI + 0x667],0x2
0047AB8D  75 73                     JNZ 0x0047ac02
0047AB8F  8B 8E 5D 06 00 00         MOV ECX,dword ptr [ESI + 0x65d]
0047AB95  41                        INC ECX
0047AB96  8B C1                     MOV EAX,ECX
0047AB98  89 8E 5D 06 00 00         MOV dword ptr [ESI + 0x65d],ECX
0047AB9E  83 F8 16                  CMP EAX,0x16
0047ABA1  75 5F                     JNZ 0x0047ac02
0047ABA3  C7 86 67 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x667],0x3
0047ABAD  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047ABB3  83 F8 07                  CMP EAX,0x7
0047ABB6  89 BE 5D 06 00 00         MOV dword ptr [ESI + 0x65d],EDI
0047ABBC  74 0A                     JZ 0x0047abc8
0047ABBE  83 F8 13                  CMP EAX,0x13
0047ABC1  74 05                     JZ 0x0047abc8
0047ABC3  83 F8 1B                  CMP EAX,0x1b
0047ABC6  75 2E                     JNZ 0x0047abf6
LAB_0047abc8:
0047ABC8  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047ABCE  3B C7                     CMP EAX,EDI
0047ABD0  74 24                     JZ 0x0047abf6
0047ABD2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047ABD8  8D 55 FC                  LEA EDX,[EBP + -0x4]
0047ABDB  52                        PUSH EDX
0047ABDC  50                        PUSH EAX
0047ABDD  E8 EE B6 26 00            CALL 0x006e62d0
0047ABE2  83 F8 FC                  CMP EAX,-0x4
0047ABE5  74 0F                     JZ 0x0047abf6
0047ABE7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047ABEA  57                        PUSH EDI
0047ABEB  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
0047ABF1  E8 8C 7D F8 FF            CALL 0x00402982
LAB_0047abf6:
0047ABF6  57                        PUSH EDI
0047ABF7  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0047ABFD  E8 80 7D F8 FF            CALL 0x00402982
LAB_0047ac02:
0047AC02  83 BE 67 06 00 00 03      CMP dword ptr [ESI + 0x667],0x3
0047AC09  0F 85 A6 01 00 00         JNZ 0x0047adb5
0047AC0F  8B 8E 5D 06 00 00         MOV ECX,dword ptr [ESI + 0x65d]
0047AC15  41                        INC ECX
0047AC16  8B C1                     MOV EAX,ECX
0047AC18  89 8E 5D 06 00 00         MOV dword ptr [ESI + 0x65d],ECX
0047AC1E  83 F8 0A                  CMP EAX,0xa
0047AC21  0F 85 8E 01 00 00         JNZ 0x0047adb5
0047AC27  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047AC2E  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
0047AC35  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
0047AC3C  66 3B C7                  CMP AX,DI
0047AC3F  89 BE 42 07 00 00         MOV dword ptr [ESI + 0x742],EDI
0047AC45  7C 50                     JL 0x0047ac97
0047AC47  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047AC4E  66 3B C7                  CMP AX,DI
0047AC51  7D 44                     JGE 0x0047ac97
0047AC53  66 85 D2                  TEST DX,DX
0047AC56  7C 3F                     JL 0x0047ac97
0047AC58  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047AC5F  7D 36                     JGE 0x0047ac97
0047AC61  66 85 C9                  TEST CX,CX
0047AC64  7C 31                     JL 0x0047ac97
0047AC66  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047AC6D  7D 28                     JGE 0x0047ac97
0047AC6F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047AC76  0F BF C9                  MOVSX ECX,CX
0047AC79  0F BF D2                  MOVSX EDX,DX
0047AC7C  0F AF CB                  IMUL ECX,EBX
0047AC7F  0F BF FF                  MOVSX EDI,DI
0047AC82  0F AF D7                  IMUL EDX,EDI
0047AC85  0F BF C0                  MOVSX EAX,AX
0047AC88  03 CA                     ADD ECX,EDX
0047AC8A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047AC90  03 C8                     ADD ECX,EAX
0047AC92  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047AC95  EB 02                     JMP 0x0047ac99
LAB_0047ac97:
0047AC97  33 C9                     XOR ECX,ECX
LAB_0047ac99:
0047AC99  85 C9                     TEST ECX,ECX
0047AC9B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047AC9E  74 22                     JZ 0x0047acc2
0047ACA0  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047ACA3  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
0047ACA9  3B C2                     CMP EAX,EDX
0047ACAB  75 15                     JNZ 0x0047acc2
0047ACAD  8B 11                     MOV EDX,dword ptr [ECX]
0047ACAF  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047ACB5  85 C0                     TEST EAX,EAX
0047ACB7  74 09                     JZ 0x0047acc2
0047ACB9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047ACBC  56                        PUSH ESI
0047ACBD  E8 AF 9C F8 FF            CALL 0x00404971
LAB_0047acc2:
0047ACC2  8B 06                     MOV EAX,dword ptr [ESI]
0047ACC4  8B CE                     MOV ECX,ESI
0047ACC6  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047ACCC  85 C0                     TEST EAX,EAX
0047ACCE  74 0C                     JZ 0x0047acdc
0047ACD0  83 C8 FF                  OR EAX,0xffffffff
0047ACD3  5F                        POP EDI
0047ACD4  5E                        POP ESI
0047ACD5  5B                        POP EBX
0047ACD6  8B E5                     MOV ESP,EBP
0047ACD8  5D                        POP EBP
0047ACD9  C2 04 00                  RET 0x4
LAB_0047acdc:
0047ACDC  0F BF 4E 5F               MOVSX ECX,word ptr [ESI + 0x5f]
0047ACE0  0F BF 56 5D               MOVSX EDX,word ptr [ESI + 0x5d]
0047ACE4  0F BF 46 5B               MOVSX EAX,word ptr [ESI + 0x5b]
0047ACE8  51                        PUSH ECX
0047ACE9  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
0047ACEF  52                        PUSH EDX
0047ACF0  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047ACF3  50                        PUSH EAX
0047ACF4  51                        PUSH ECX
0047ACF5  52                        PUSH EDX
0047ACF6  E8 BE 8B F8 FF            CALL 0x004038b9
0047ACFB  83 C4 14                  ADD ESP,0x14
0047ACFE  85 C0                     TEST EAX,EAX
0047AD00  0F 84 68 EC FF FF         JZ 0x0047996e
0047AD06  68 AF 00 00 00            PUSH 0xaf
0047AD0B  8B CE                     MOV ECX,ESI
0047AD0D  E8 02 90 F8 FF            CALL 0x00403d14
0047AD12  33 C0                     XOR EAX,EAX
0047AD14  5F                        POP EDI
0047AD15  5E                        POP ESI
0047AD16  5B                        POP EBX
0047AD17  8B E5                     MOV ESP,EBP
0047AD19  5D                        POP EBP
0047AD1A  C2 04 00                  RET 0x4
LAB_0047ad1d:
0047AD1D  83 F8 06                  CMP EAX,0x6
0047AD20  0F 85 57 05 00 00         JNZ 0x0047b27d
0047AD26  39 BE 67 06 00 00         CMP dword ptr [ESI + 0x667],EDI
0047AD2C  75 53                     JNZ 0x0047ad81
0047AD2E  66 8B 86 5B 06 00 00      MOV AX,word ptr [ESI + 0x65b]
0047AD35  66 8B 8E 59 06 00 00      MOV CX,word ptr [ESI + 0x659]
0047AD3C  66 69 C0 C8 00            IMUL AX,AX,0xc8
0047AD41  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047AD46  83 C0 64                  ADD EAX,0x64
0047AD49  8B 16                     MOV EDX,dword ptr [ESI]
0047AD4B  50                        PUSH EAX
0047AD4C  66 8B 86 57 06 00 00      MOV AX,word ptr [ESI + 0x657]
0047AD53  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047AD58  83 C1 64                  ADD ECX,0x64
0047AD5B  83 C0 64                  ADD EAX,0x64
0047AD5E  51                        PUSH ECX
0047AD5F  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0047AD63  50                        PUSH EAX
0047AD64  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047AD68  51                        PUSH ECX
0047AD69  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047AD6D  50                        PUSH EAX
0047AD6E  51                        PUSH ECX
0047AD6F  8B CE                     MOV ECX,ESI
0047AD71  FF 52 10                  CALL dword ptr [EDX + 0x10]
0047AD74  66 89 86 61 06 00 00      MOV word ptr [ESI + 0x661],AX
0047AD7B  89 9E 67 06 00 00         MOV dword ptr [ESI + 0x667],EBX
LAB_0047ad81:
0047AD81  8B 86 67 06 00 00         MOV EAX,dword ptr [ESI + 0x667]
0047AD87  3B C3                     CMP EAX,EBX
0047AD89  75 75                     JNZ 0x0047ae00
0047AD8B  66 8B 96 61 06 00 00      MOV DX,word ptr [ESI + 0x661]
0047AD92  8B CE                     MOV ECX,ESI
0047AD94  52                        PUSH EDX
0047AD95  E8 18 83 F8 FF            CALL 0x004030b2
0047AD9A  50                        PUSH EAX
0047AD9B  8B CE                     MOV ECX,ESI
0047AD9D  E8 5A 75 F8 FF            CALL 0x004022fc
0047ADA2  83 F8 FF                  CMP EAX,-0x1
0047ADA5  74 2A                     JZ 0x0047add1
0047ADA7  3B C7                     CMP EAX,EDI
0047ADA9  75 0A                     JNZ 0x0047adb5
LAB_0047adab:
0047ADAB  C7 86 67 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x667],0x2
LAB_0047adb5:
0047ADB5  8B 06                     MOV EAX,dword ptr [ESI]
0047ADB7  8B CE                     MOV ECX,ESI
0047ADB9  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047ADBF  F7 D8                     NEG EAX
0047ADC1  1B C0                     SBB EAX,EAX
0047ADC3  24 FD                     AND AL,0xfd
0047ADC5  83 C0 02                  ADD EAX,0x2
0047ADC8  5F                        POP EDI
0047ADC9  5E                        POP ESI
0047ADCA  5B                        POP EBX
0047ADCB  8B E5                     MOV ESP,EBP
0047ADCD  5D                        POP EBP
0047ADCE  C2 04 00                  RET 0x4
LAB_0047add1:
0047ADD1  68 40 B4 7A 00            PUSH 0x7ab440
0047ADD6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047ADDB  57                        PUSH EDI
0047ADDC  57                        PUSH EDI
0047ADDD  68 E3 36 00 00            PUSH 0x36e3
0047ADE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047ADE7  E8 E4 26 23 00            CALL 0x006ad4d0
0047ADEC  83 C4 18                  ADD ESP,0x18
0047ADEF  85 C0                     TEST EAX,EAX
0047ADF1  74 01                     JZ 0x0047adf4
0047ADF3  CC                        INT3
LAB_0047adf4:
0047ADF4  83 C8 FF                  OR EAX,0xffffffff
0047ADF7  5F                        POP EDI
0047ADF8  5E                        POP ESI
0047ADF9  5B                        POP EBX
0047ADFA  8B E5                     MOV ESP,EBP
0047ADFC  5D                        POP EBP
0047ADFD  C2 04 00                  RET 0x4
LAB_0047ae00:
0047AE00  83 F8 02                  CMP EAX,0x2
0047AE03  75 54                     JNZ 0x0047ae59
0047AE05  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0047AE08  66 8B 96 5B 06 00 00      MOV DX,word ptr [ESI + 0x65b]
0047AE0F  66 8B 86 59 06 00 00      MOV AX,word ptr [ESI + 0x659]
0047AE16  51                        PUSH ECX
0047AE17  66 8B 8E 57 06 00 00      MOV CX,word ptr [ESI + 0x657]
0047AE1E  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047AE23  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047AE28  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047AE2D  83 C2 64                  ADD EDX,0x64
0047AE30  83 C0 64                  ADD EAX,0x64
0047AE33  52                        PUSH EDX
0047AE34  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047AE38  83 C1 64                  ADD ECX,0x64
0047AE3B  50                        PUSH EAX
0047AE3C  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047AE40  51                        PUSH ECX
0047AE41  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047AE45  52                        PUSH EDX
0047AE46  50                        PUSH EAX
0047AE47  51                        PUSH ECX
0047AE48  8B CE                     MOV ECX,ESI
0047AE4A  E8 06 76 F8 FF            CALL 0x00402455
0047AE4F  C7 86 67 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x667],0x3
LAB_0047ae59:
0047AE59  83 BE 67 06 00 00 03      CMP dword ptr [ESI + 0x667],0x3
0047AE60  0F 85 4F FF FF FF         JNZ 0x0047adb5
0047AE66  8D 55 E8                  LEA EDX,[EBP + -0x18]
0047AE69  8D 45 EC                  LEA EAX,[EBP + -0x14]
0047AE6C  52                        PUSH EDX
0047AE6D  50                        PUSH EAX
0047AE6E  8B CE                     MOV ECX,ESI
0047AE70  E8 D2 79 F8 FF            CALL 0x00402847
0047AE75  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0047AE78  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0047AE7B  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047AE81  33 D2                     XOR EDX,EDX
0047AE83  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0047AE89  B9 07 00 00 00            MOV ECX,0x7
0047AE8E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047AE91  C1 E8 10                  SHR EAX,0x10
0047AE94  F7 F1                     DIV ECX
0047AE96  8B FA                     MOV EDI,EDX
0047AE98  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047AE9B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047AEA1  83 EF 03                  SUB EDI,0x3
0047AEA4  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047AEAA  33 D2                     XOR EDX,EDX
0047AEAC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047AEAF  C1 E8 10                  SHR EAX,0x10
0047AEB2  F7 F1                     DIV ECX
0047AEB4  8B DA                     MOV EBX,EDX
0047AEB6  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047AEB9  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047AEBF  83 EB 03                  SUB EBX,0x3
0047AEC2  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047AEC8  33 D2                     XOR EDX,EDX
0047AECA  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047AECD  C1 E8 10                  SHR EAX,0x10
0047AED0  F7 F1                     DIV ECX
0047AED2  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
0047AED8  83 EA 03                  SUB EDX,0x3
0047AEDB  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0047AEDE  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0047AEE4  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
0047AEE8  99                        CDQ
0047AEE9  2B C2                     SUB EAX,EDX
0047AEEB  D1 F8                     SAR EAX,0x1
0047AEED  3B C8                     CMP ECX,EAX
0047AEEF  0F 8F 09 01 00 00         JG 0x0047affe
0047AEF5  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
0047AEFB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0047AF02  84 C0                     TEST AL,AL
0047AF04  0F 86 F4 00 00 00         JBE 0x0047affe
0047AF0A  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047AF10  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0047af13:
0047AF13  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047AF17  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0047AF1A  51                        PUSH ECX
0047AF1B  8B 0A                     MOV ECX,dword ptr [EDX]
0047AF1D  83 EC 08                  SUB ESP,0x8
0047AF20  8B C4                     MOV EAX,ESP
0047AF22  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
0047AF26  89 08                     MOV dword ptr [EAX],ECX
0047AF28  8B CE                     MOV ECX,ESI
0047AF2A  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0047AF2E  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0047AF31  50                        PUSH EAX
0047AF32  E8 F5 84 F8 FF            CALL 0x0040342c
0047AF37  8B 08                     MOV ECX,dword ptr [EAX]
0047AF39  6A 00                     PUSH 0x0
0047AF3B  6A 00                     PUSH 0x0
0047AF3D  6A FF                     PUSH -0x1
0047AF3F  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0047AF43  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0047AF48  6A 00                     PUSH 0x0
0047AF4A  6A 00                     PUSH 0x0
0047AF4C  6A 00                     PUSH 0x0
0047AF4E  6A 00                     PUSH 0x0
0047AF50  83 F8 01                  CMP EAX,0x1
0047AF53  6A 00                     PUSH 0x0
0047AF55  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0047AF58  66 89 55 E0               MOV word ptr [EBP + -0x20],DX
0047AF5C  6A 00                     PUSH 0x0
0047AF5E  75 41                     JNZ 0x0047afa1
0047AF60  D9 46 70                  FLD float ptr [ESI + 0x70]
0047AF63  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047AF69  E8 1A 33 2B 00            CALL 0x0072e288
0047AF6E  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047AF72  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0047AF75  0F BF C0                  MOVSX EAX,AX
0047AF78  03 CA                     ADD ECX,EDX
0047AF7A  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
0047AF7E  03 C8                     ADD ECX,EAX
0047AF80  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047AF84  03 D1                     ADD EDX,ECX
0047AF86  0F BF 4D DE               MOVSX ECX,word ptr [EBP + -0x22]
0047AF8A  2B C1                     SUB EAX,ECX
0047AF8C  52                        PUSH EDX
0047AF8D  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047AF91  03 C3                     ADD EAX,EBX
0047AF93  8B CF                     MOV ECX,EDI
0047AF95  50                        PUSH EAX
0047AF96  03 CA                     ADD ECX,EDX
0047AF98  0F BF 45 DC               MOVSX EAX,word ptr [EBP + -0x24]
0047AF9C  03 C1                     ADD EAX,ECX
0047AF9E  50                        PUSH EAX
0047AF9F  EB 2C                     JMP 0x0047afcd
LAB_0047afa1:
0047AFA1  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047AFA5  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
0047AFA9  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0047AFAC  03 CA                     ADD ECX,EDX
0047AFAE  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047AFB2  03 C1                     ADD EAX,ECX
0047AFB4  50                        PUSH EAX
0047AFB5  0F BF 45 DE               MOVSX EAX,word ptr [EBP + -0x22]
0047AFB9  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047AFBD  2B D0                     SUB EDX,EAX
0047AFBF  8B C7                     MOV EAX,EDI
0047AFC1  03 D3                     ADD EDX,EBX
0047AFC3  03 C1                     ADD EAX,ECX
0047AFC5  52                        PUSH EDX
0047AFC6  0F BF 55 DC               MOVSX EDX,word ptr [EBP + -0x24]
0047AFCA  03 D0                     ADD EDX,EAX
0047AFCC  52                        PUSH EDX
LAB_0047afcd:
0047AFCD  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047AFD3  6A 07                     PUSH 0x7
0047AFD5  6A 02                     PUSH 0x2
0047AFD7  6A 01                     PUSH 0x1
0047AFD9  E8 55 64 F8 FF            CALL 0x00401433
0047AFDE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0047AFE1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0047AFE4  83 C1 06                  ADD ECX,0x6
0047AFE7  40                        INC EAX
0047AFE8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0047AFEB  33 C9                     XOR ECX,ECX
0047AFED  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047AFF3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0047AFF6  3B C1                     CMP EAX,ECX
0047AFF8  0F 8C 15 FF FF FF         JL 0x0047af13
LAB_0047affe:
0047AFFE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0047B001  83 F8 FF                  CMP EAX,-0x1
0047B004  0F 84 42 02 00 00         JZ 0x0047b24c
0047B00A  85 C0                     TEST EAX,EAX
0047B00C  0F 85 A3 FD FF FF         JNZ 0x0047adb5
0047B012  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047B019  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
0047B020  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
0047B027  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047B02E  66 85 C0                  TEST AX,AX
0047B031  7C 49                     JL 0x0047b07c
0047B033  66 3B C7                  CMP AX,DI
0047B036  7D 44                     JGE 0x0047b07c
0047B038  66 85 D2                  TEST DX,DX
0047B03B  7C 3F                     JL 0x0047b07c
0047B03D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047B044  7D 36                     JGE 0x0047b07c
0047B046  66 85 C9                  TEST CX,CX
0047B049  7C 31                     JL 0x0047b07c
0047B04B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047B052  7D 28                     JGE 0x0047b07c
0047B054  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047B05B  0F BF C9                  MOVSX ECX,CX
0047B05E  0F AF CB                  IMUL ECX,EBX
0047B061  0F BF D2                  MOVSX EDX,DX
0047B064  0F BF DF                  MOVSX EBX,DI
0047B067  0F AF D3                  IMUL EDX,EBX
0047B06A  0F BF C0                  MOVSX EAX,AX
0047B06D  03 CA                     ADD ECX,EDX
0047B06F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047B075  03 C8                     ADD ECX,EAX
0047B077  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047B07A  EB 02                     JMP 0x0047b07e
LAB_0047b07c:
0047B07C  33 C9                     XOR ECX,ECX
LAB_0047b07e:
0047B07E  85 C9                     TEST ECX,ECX
0047B080  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047B083  74 29                     JZ 0x0047b0ae
0047B085  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047B088  8B 96 3F 06 00 00         MOV EDX,dword ptr [ESI + 0x63f]
0047B08E  3B C2                     CMP EAX,EDX
0047B090  75 1C                     JNZ 0x0047b0ae
0047B092  8B 11                     MOV EDX,dword ptr [ECX]
0047B094  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047B09A  85 C0                     TEST EAX,EAX
0047B09C  74 09                     JZ 0x0047b0a7
0047B09E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047B0A1  56                        PUSH ESI
0047B0A2  E8 CA 98 F8 FF            CALL 0x00404971
LAB_0047b0a7:
0047B0A7  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_0047b0ae:
0047B0AE  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
0047B0B5  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
0047B0BC  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
0047B0C3  66 85 C0                  TEST AX,AX
0047B0C6  7C 49                     JL 0x0047b111
0047B0C8  66 3B C7                  CMP AX,DI
0047B0CB  7D 44                     JGE 0x0047b111
0047B0CD  66 85 D2                  TEST DX,DX
0047B0D0  7C 3F                     JL 0x0047b111
0047B0D2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047B0D9  7D 36                     JGE 0x0047b111
0047B0DB  66 85 C9                  TEST CX,CX
0047B0DE  7C 31                     JL 0x0047b111
0047B0E0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047B0E7  7D 28                     JGE 0x0047b111
0047B0E9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047B0F0  0F BF C9                  MOVSX ECX,CX
0047B0F3  0F BF D2                  MOVSX EDX,DX
0047B0F6  0F AF CB                  IMUL ECX,EBX
0047B0F9  0F BF FF                  MOVSX EDI,DI
0047B0FC  0F AF D7                  IMUL EDX,EDI
0047B0FF  0F BF C0                  MOVSX EAX,AX
0047B102  03 CA                     ADD ECX,EDX
0047B104  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047B10A  03 C8                     ADD ECX,EAX
0047B10C  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047B10F  EB 02                     JMP 0x0047b113
LAB_0047b111:
0047B111  33 C9                     XOR ECX,ECX
LAB_0047b113:
0047B113  85 C9                     TEST ECX,ECX
0047B115  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047B118  0F 84 A7 00 00 00         JZ 0x0047b1c5
0047B11E  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047B121  8B 96 49 06 00 00         MOV EDX,dword ptr [ESI + 0x649]
0047B127  3B C2                     CMP EAX,EDX
0047B129  0F 85 96 00 00 00         JNZ 0x0047b1c5
0047B12F  8B 11                     MOV EDX,dword ptr [ECX]
0047B131  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047B137  85 C0                     TEST EAX,EAX
0047B139  0F 84 86 00 00 00         JZ 0x0047b1c5
0047B13F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047B142  8D BE 55 06 00 00         LEA EDI,[ESI + 0x655]
0047B148  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
0047B14E  8D 8E 51 06 00 00         LEA ECX,[ESI + 0x651]
0047B154  8B 90 2C 04 00 00         MOV EDX,dword ptr [EAX + 0x42c]
0047B15A  85 D2                     TEST EDX,EDX
0047B15C  74 24                     JZ 0x0047b182
0047B15E  85 C9                     TEST ECX,ECX
0047B160  74 08                     JZ 0x0047b16a
0047B162  8B 90 30 04 00 00         MOV EDX,dword ptr [EAX + 0x430]
0047B168  89 11                     MOV dword ptr [ECX],EDX
LAB_0047b16a:
0047B16A  85 DB                     TEST EBX,EBX
0047B16C  74 08                     JZ 0x0047b176
0047B16E  8B 88 34 04 00 00         MOV ECX,dword ptr [EAX + 0x434]
0047B174  89 0B                     MOV dword ptr [EBX],ECX
LAB_0047b176:
0047B176  85 FF                     TEST EDI,EDI
0047B178  74 08                     JZ 0x0047b182
0047B17A  8B 90 38 04 00 00         MOV EDX,dword ptr [EAX + 0x438]
0047B180  89 17                     MOV dword ptr [EDI],EDX
LAB_0047b182:
0047B182  8B 88 2C 04 00 00         MOV ECX,dword ptr [EAX + 0x42c]
0047B188  85 C9                     TEST ECX,ECX
0047B18A  0F 85 8D 00 00 00         JNZ 0x0047b21d
0047B190  66 8B 86 47 06 00 00      MOV AX,word ptr [ESI + 0x647]
0047B197  66 8B 8E 45 06 00 00      MOV CX,word ptr [ESI + 0x645]
0047B19E  57                        PUSH EDI
0047B19F  8D 96 51 06 00 00         LEA EDX,[ESI + 0x651]
0047B1A5  53                        PUSH EBX
0047B1A6  66 40                     INC AX
0047B1A8  52                        PUSH EDX
0047B1A9  66 8B 96 43 06 00 00      MOV DX,word ptr [ESI + 0x643]
0047B1B0  6A 02                     PUSH 0x2
0047B1B2  50                        PUSH EAX
0047B1B3  51                        PUSH ECX
0047B1B4  52                        PUSH EDX
0047B1B5  50                        PUSH EAX
0047B1B6  51                        PUSH ECX
0047B1B7  52                        PUSH EDX
0047B1B8  8B CE                     MOV ECX,ESI
0047B1BA  E8 49 97 F8 FF            CALL 0x00404908
0047B1BF  85 C0                     TEST EAX,EAX
0047B1C1  75 5A                     JNZ 0x0047b21d
0047B1C3  EB 3F                     JMP 0x0047b204
LAB_0047b1c5:
0047B1C5  66 8B 86 47 06 00 00      MOV AX,word ptr [ESI + 0x647]
0047B1CC  66 8B 8E 45 06 00 00      MOV CX,word ptr [ESI + 0x645]
0047B1D3  8D BE 55 06 00 00         LEA EDI,[ESI + 0x655]
0047B1D9  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
0047B1DF  57                        PUSH EDI
0047B1E0  8D 96 51 06 00 00         LEA EDX,[ESI + 0x651]
0047B1E6  53                        PUSH EBX
0047B1E7  66 40                     INC AX
0047B1E9  52                        PUSH EDX
0047B1EA  66 8B 96 43 06 00 00      MOV DX,word ptr [ESI + 0x643]
0047B1F1  6A 02                     PUSH 0x2
0047B1F3  50                        PUSH EAX
0047B1F4  51                        PUSH ECX
0047B1F5  52                        PUSH EDX
0047B1F6  50                        PUSH EAX
0047B1F7  51                        PUSH ECX
0047B1F8  52                        PUSH EDX
0047B1F9  8B CE                     MOV ECX,ESI
0047B1FB  E8 08 97 F8 FF            CALL 0x00404908
0047B200  85 C0                     TEST EAX,EAX
0047B202  75 19                     JNZ 0x0047b21d
LAB_0047b204:
0047B204  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0047B208  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0047B20C  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0047B210  66 89 86 51 06 00 00      MOV word ptr [ESI + 0x651],AX
0047B217  66 89 0B                  MOV word ptr [EBX],CX
0047B21A  66 89 17                  MOV word ptr [EDI],DX
LAB_0047b21d:
0047B21D  0F BF 07                  MOVSX EAX,word ptr [EDI]
0047B220  0F BF 0B                  MOVSX ECX,word ptr [EBX]
0047B223  0F BF 96 51 06 00 00      MOVSX EDX,word ptr [ESI + 0x651]
0047B22A  50                        PUSH EAX
0047B22B  51                        PUSH ECX
0047B22C  52                        PUSH EDX
0047B22D  8B CE                     MOV ECX,ESI
0047B22F  E8 37 9D F8 FF            CALL 0x00404f6b
0047B234  6A 00                     PUSH 0x0
0047B236  8B CE                     MOV ECX,ESI
0047B238  E8 A1 7F F8 FF            CALL 0x004031de
0047B23D  C7 86 63 06 00 00 07 00 00 00  MOV dword ptr [ESI + 0x663],0x7
0047B247  E9 69 FB FF FF            JMP 0x0047adb5
LAB_0047b24c:
0047B24C  68 14 B4 7A 00            PUSH 0x7ab414
0047B251  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047B256  6A 00                     PUSH 0x0
0047B258  6A 00                     PUSH 0x0
0047B25A  68 0A 37 00 00            PUSH 0x370a
0047B25F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047B264  E8 67 22 23 00            CALL 0x006ad4d0
0047B269  83 C4 18                  ADD ESP,0x18
0047B26C  85 C0                     TEST EAX,EAX
0047B26E  74 01                     JZ 0x0047b271
0047B270  CC                        INT3
LAB_0047b271:
0047B271  83 C8 FF                  OR EAX,0xffffffff
0047B274  5F                        POP EDI
0047B275  5E                        POP ESI
0047B276  5B                        POP EBX
0047B277  8B E5                     MOV ESP,EBP
0047B279  5D                        POP EBP
0047B27A  C2 04 00                  RET 0x4
LAB_0047b27d:
0047B27D  83 F8 07                  CMP EAX,0x7
0047B280  0F 85 84 00 00 00         JNZ 0x0047b30a
0047B286  6A 02                     PUSH 0x2
0047B288  8B CE                     MOV ECX,ESI
0047B28A  E8 4F 7F F8 FF            CALL 0x004031de
0047B28F  83 F8 FF                  CMP EAX,-0x1
0047B292  0F 84 C7 EB FF FF         JZ 0x00479e5f
0047B298  3B C7                     CMP EAX,EDI
0047B29A  0F 84 3C FA FF FF         JZ 0x0047acdc
0047B2A0  83 F8 03                  CMP EAX,0x3
0047B2A3  75 57                     JNZ 0x0047b2fc
0047B2A5  66 8B 86 55 06 00 00      MOV AX,word ptr [ESI + 0x655]
0047B2AC  66 8B 96 51 06 00 00      MOV DX,word ptr [ESI + 0x651]
0047B2B3  8D BE 55 06 00 00         LEA EDI,[ESI + 0x655]
0047B2B9  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
0047B2BF  8D 8E 51 06 00 00         LEA ECX,[ESI + 0x651]
0047B2C5  57                        PUSH EDI
0047B2C6  53                        PUSH EBX
0047B2C7  66 40                     INC AX
0047B2C9  51                        PUSH ECX
0047B2CA  66 8B 0B                  MOV CX,word ptr [EBX]
0047B2CD  6A 01                     PUSH 0x1
0047B2CF  50                        PUSH EAX
0047B2D0  51                        PUSH ECX
0047B2D1  52                        PUSH EDX
0047B2D2  50                        PUSH EAX
0047B2D3  51                        PUSH ECX
0047B2D4  52                        PUSH EDX
0047B2D5  8B CE                     MOV ECX,ESI
0047B2D7  E8 2C 96 F8 FF            CALL 0x00404908
LAB_0047b2dc:
0047B2DC  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0047B2DF  0F BF 13                  MOVSX EDX,word ptr [EBX]
0047B2E2  0F BF 86 51 06 00 00      MOVSX EAX,word ptr [ESI + 0x651]
0047B2E9  51                        PUSH ECX
0047B2EA  52                        PUSH EDX
LAB_0047b2eb:
0047B2EB  50                        PUSH EAX
LAB_0047b2ec:
0047B2EC  8B CE                     MOV ECX,ESI
0047B2EE  E8 78 9C F8 FF            CALL 0x00404f6b
0047B2F3  6A 00                     PUSH 0x0
LAB_0047b2f5:
0047B2F5  8B CE                     MOV ECX,ESI
0047B2F7  E8 E2 7E F8 FF            CALL 0x004031de
switchD_00479647::caseD_2:
0047B2FC  B8 02 00 00 00            MOV EAX,0x2
0047B301  5F                        POP EDI
0047B302  5E                        POP ESI
0047B303  5B                        POP EBX
0047B304  8B E5                     MOV ESP,EBP
0047B306  5D                        POP EBP
0047B307  C2 04 00                  RET 0x4
LAB_0047b30a:
0047B30A  68 E8 B3 7A 00            PUSH 0x7ab3e8
0047B30F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047B314  57                        PUSH EDI
0047B315  57                        PUSH EDI
0047B316  68 44 37 00 00            PUSH 0x3744
0047B31B  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047B320  E8 AB 21 23 00            CALL 0x006ad4d0
0047B325  83 C4 18                  ADD ESP,0x18
0047B328  85 C0                     TEST EAX,EAX
0047B32A  74 01                     JZ 0x0047b32d
0047B32C  CC                        INT3
LAB_0047b32d:
0047B32D  83 C8 FF                  OR EAX,0xffffffff
0047B330  5F                        POP EDI
0047B331  5E                        POP ESI
0047B332  5B                        POP EBX
0047B333  8B E5                     MOV ESP,EBP
0047B335  5D                        POP EBP
0047B336  C2 04 00                  RET 0x4
LAB_0047b339:
0047B339  B9 17 00 00 00            MOV ECX,0x17
0047B33E  33 C0                     XOR EAX,EAX
0047B340  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0047B346  33 DB                     XOR EBX,EBX
0047B348  F3 AB                     STOSD.REP ES:EDI
0047B34A  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
0047B350  8B 86 05 04 00 00         MOV EAX,dword ptr [ESI + 0x405]
0047B356  89 86 35 06 00 00         MOV dword ptr [ESI + 0x635],EAX
0047B35C  66 8B 8E 09 04 00 00      MOV CX,word ptr [ESI + 0x409]
0047B363  66 89 8E 39 06 00 00      MOV word ptr [ESI + 0x639],CX
0047B36A  66 8B 96 0B 04 00 00      MOV DX,word ptr [ESI + 0x40b]
0047B371  66 89 96 3B 06 00 00      MOV word ptr [ESI + 0x63b],DX
0047B378  66 8B 86 0D 04 00 00      MOV AX,word ptr [ESI + 0x40d]
0047B37F  66 89 86 3D 06 00 00      MOV word ptr [ESI + 0x63d],AX
0047B386  66 8B 8E 0F 04 00 00      MOV CX,word ptr [ESI + 0x40f]
0047B38D  66 89 8E 43 06 00 00      MOV word ptr [ESI + 0x643],CX
0047B394  66 8B 96 11 04 00 00      MOV DX,word ptr [ESI + 0x411]
0047B39B  66 89 96 45 06 00 00      MOV word ptr [ESI + 0x645],DX
0047B3A2  66 8B 86 13 04 00 00      MOV AX,word ptr [ESI + 0x413]
0047B3A9  66 89 86 47 06 00 00      MOV word ptr [ESI + 0x647],AX
0047B3B0  89 9E 4D 06 00 00         MOV dword ptr [ESI + 0x64d],EBX
0047B3B6  8B 16                     MOV EDX,dword ptr [ESI]
0047B3B8  8B CE                     MOV ECX,ESI
0047B3BA  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047B3C0  85 C0                     TEST EAX,EAX
0047B3C2  74 0C                     JZ 0x0047b3d0
0047B3C4  83 C8 FF                  OR EAX,0xffffffff
0047B3C7  5F                        POP EDI
0047B3C8  5E                        POP ESI
0047B3C9  5B                        POP EBX
0047B3CA  8B E5                     MOV ESP,EBP
0047B3CC  5D                        POP EBP
0047B3CD  C2 04 00                  RET 0x4
LAB_0047b3d0:
0047B3D0  8B 86 35 06 00 00         MOV EAX,dword ptr [ESI + 0x635]
0047B3D6  2B C3                     SUB EAX,EBX
0047B3D8  0F 84 45 02 00 00         JZ 0x0047b623
0047B3DE  48                        DEC EAX
0047B3DF  0F 84 15 01 00 00         JZ 0x0047b4fa
0047B3E5  48                        DEC EAX
0047B3E6  74 32                     JZ 0x0047b41a
0047B3E8  68 AC B3 7A 00            PUSH 0x7ab3ac
0047B3ED  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047B3F2  53                        PUSH EBX
0047B3F3  53                        PUSH EBX
0047B3F4  68 1B 35 00 00            PUSH 0x351b
0047B3F9  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047B3FE  E8 CD 20 23 00            CALL 0x006ad4d0
0047B403  83 C4 18                  ADD ESP,0x18
0047B406  85 C0                     TEST EAX,EAX
0047B408  0F 84 60 E5 FF FF         JZ 0x0047996e
0047B40E  CC                        INT3
LAB_0047b41a:
0047B41A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0047B41D  8D 96 4D 06 00 00         LEA EDX,[ESI + 0x64d]
0047B423  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0047B429  05 39 30 00 00            ADD EAX,0x3039
0047B42E  8D 9E 5B 06 00 00         LEA EBX,[ESI + 0x65b]
0047B434  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047B437  52                        PUSH EDX
0047B438  0F BF 96 45 06 00 00      MOVSX EDX,word ptr [ESI + 0x645]
0047B43F  C1 E8 10                  SHR EAX,0x10
0047B442  8D 8E 59 06 00 00         LEA ECX,[ESI + 0x659]
0047B448  50                        PUSH EAX
0047B449  0F BF 86 43 06 00 00      MOVSX EAX,word ptr [ESI + 0x643]
0047B450  53                        PUSH EBX
0047B451  51                        PUSH ECX
0047B452  0F BF 8E 47 06 00 00      MOVSX ECX,word ptr [ESI + 0x647]
0047B459  8D BE 57 06 00 00         LEA EDI,[ESI + 0x657]
0047B45F  57                        PUSH EDI
0047B460  51                        PUSH ECX
0047B461  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
0047B467  52                        PUSH EDX
0047B468  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047B46B  50                        PUSH EAX
0047B46C  51                        PUSH ECX
0047B46D  52                        PUSH EDX
0047B46E  E8 3F 5E F8 FF            CALL 0x004012b2
0047B473  83 C4 28                  ADD ESP,0x28
0047B476  66 83 3F FF               CMP word ptr [EDI],-0x1
0047B47A  0F 8E EE E4 FF FF         JLE 0x0047996e
0047B480  66 83 BE 59 06 00 00 FF   CMP word ptr [ESI + 0x659],-0x1
0047B488  0F 8E E0 E4 FF FF         JLE 0x0047996e
0047B48E  66 83 3B FF               CMP word ptr [EBX],-0x1
0047B492  0F 8E D6 E4 FF FF         JLE 0x0047996e
0047B498  33 C0                     XOR EAX,EAX
0047B49A  C7 86 42 07 00 00 01 00 00 00  MOV dword ptr [ESI + 0x742],0x1
0047B4A4  89 86 3F 06 00 00         MOV dword ptr [ESI + 0x63f],EAX
0047B4AA  89 86 49 06 00 00         MOV dword ptr [ESI + 0x649],EAX
0047B4B0  39 05 CC 0B 80 00         CMP dword ptr [0x00800bcc],EAX
0047B4B6  75 05                     JNZ 0x0047b4bd
0047B4B8  E8 D8 8E F8 FF            CALL 0x00404395
LAB_0047b4bd:
0047B4BD  0F BF 03                  MOVSX EAX,word ptr [EBX]
0047B4C0  0F BF 8E 59 06 00 00      MOVSX ECX,word ptr [ESI + 0x659]
0047B4C7  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047B4CA  50                        PUSH EAX
0047B4CB  51                        PUSH ECX
0047B4CC  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
0047B4D2  52                        PUSH EDX
0047B4D3  E8 AA 60 F8 FF            CALL 0x00401582
0047B4D8  C7 86 63 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x663],0x5
0047B4E2  C7 86 67 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x667],0x0
0047B4EC  5F                        POP EDI
0047B4ED  5E                        POP ESI
0047B4EE  B8 02 00 00 00            MOV EAX,0x2
0047B4F3  5B                        POP EBX
0047B4F4  8B E5                     MOV ESP,EBP
0047B4F6  5D                        POP EBP
0047B4F7  C2 04 00                  RET 0x4
LAB_0047b4fa:
0047B4FA  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047B501  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
0047B508  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
0047B50F  66 3B C3                  CMP AX,BX
0047B512  7C 51                     JL 0x0047b565
0047B514  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047B51B  66 3B C7                  CMP AX,DI
0047B51E  7D 45                     JGE 0x0047b565
0047B520  66 3B D3                  CMP DX,BX
0047B523  7C 40                     JL 0x0047b565
0047B525  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047B52C  7D 37                     JGE 0x0047b565
0047B52E  66 3B CB                  CMP CX,BX
0047B531  7C 32                     JL 0x0047b565
0047B533  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047B53A  7D 29                     JGE 0x0047b565
0047B53C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047B543  0F BF C9                  MOVSX ECX,CX
0047B546  0F AF D9                  IMUL EBX,ECX
0047B549  0F BF D2                  MOVSX EDX,DX
0047B54C  0F BF CF                  MOVSX ECX,DI
0047B54F  0F AF D1                  IMUL EDX,ECX
0047B552  03 DA                     ADD EBX,EDX
0047B554  0F BF D0                  MOVSX EDX,AX
0047B557  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0047B55C  03 DA                     ADD EBX,EDX
0047B55E  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
0047B561  33 DB                     XOR EBX,EBX
0047B563  EB 02                     JMP 0x0047b567
LAB_0047b565:
0047B565  33 C9                     XOR ECX,ECX
LAB_0047b567:
0047B567  3B CB                     CMP ECX,EBX
0047B569  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047B56C  0F 84 FC E3 FF FF         JZ 0x0047996e
0047B572  8B 11                     MOV EDX,dword ptr [ECX]
0047B574  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0047B577  83 F8 6C                  CMP EAX,0x6c
0047B57A  0F 85 EE E3 FF FF         JNZ 0x0047996e
0047B580  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047B583  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0047B586  89 8E 3F 06 00 00         MOV dword ptr [ESI + 0x63f],ECX
0047B58C  66 8B 86 43 06 00 00      MOV AX,word ptr [ESI + 0x643]
0047B593  66 8B 8E 47 06 00 00      MOV CX,word ptr [ESI + 0x647]
0047B59A  66 8B 96 45 06 00 00      MOV DX,word ptr [ESI + 0x645]
0047B5A1  66 3B C3                  CMP AX,BX
0047B5A4  7C 51                     JL 0x0047b5f7
0047B5A6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047B5AD  66 3B C7                  CMP AX,DI
0047B5B0  7D 45                     JGE 0x0047b5f7
0047B5B2  66 3B D3                  CMP DX,BX
0047B5B5  7C 40                     JL 0x0047b5f7
0047B5B7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047B5BE  7D 37                     JGE 0x0047b5f7
0047B5C0  66 3B CB                  CMP CX,BX
0047B5C3  7C 32                     JL 0x0047b5f7
0047B5C5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047B5CC  7D 29                     JGE 0x0047b5f7
0047B5CE  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047B5D5  0F BF C9                  MOVSX ECX,CX
0047B5D8  0F AF D9                  IMUL EBX,ECX
0047B5DB  0F BF D2                  MOVSX EDX,DX
0047B5DE  0F BF CF                  MOVSX ECX,DI
0047B5E1  0F AF D1                  IMUL EDX,ECX
0047B5E4  03 DA                     ADD EBX,EDX
0047B5E6  0F BF D0                  MOVSX EDX,AX
0047B5E9  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0047B5EE  03 DA                     ADD EBX,EDX
0047B5F0  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
0047B5F3  33 DB                     XOR EBX,EBX
0047B5F5  EB 02                     JMP 0x0047b5f9
LAB_0047b5f7:
0047B5F7  33 C9                     XOR ECX,ECX
LAB_0047b5f9:
0047B5F9  3B CB                     CMP ECX,EBX
0047B5FB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047B5FE  0F 84 6A E3 FF FF         JZ 0x0047996e
0047B604  8B 11                     MOV EDX,dword ptr [ECX]
0047B606  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0047B609  83 F8 6C                  CMP EAX,0x6c
0047B60C  0F 85 5C E3 FF FF         JNZ 0x0047996e
0047B612  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047B615  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0047B618  89 8E 49 06 00 00         MOV dword ptr [ESI + 0x649],ECX
0047B61E  E9 92 00 00 00            JMP 0x0047b6b5
LAB_0047b623:
0047B623  66 8B 86 39 06 00 00      MOV AX,word ptr [ESI + 0x639]
0047B62A  66 8B 8E 3D 06 00 00      MOV CX,word ptr [ESI + 0x63d]
0047B631  66 8B 96 3B 06 00 00      MOV DX,word ptr [ESI + 0x63b]
0047B638  66 3B C3                  CMP AX,BX
0047B63B  7C 51                     JL 0x0047b68e
0047B63D  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047B644  66 3B C7                  CMP AX,DI
0047B647  7D 45                     JGE 0x0047b68e
0047B649  66 3B D3                  CMP DX,BX
0047B64C  7C 40                     JL 0x0047b68e
0047B64E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047B655  7D 37                     JGE 0x0047b68e
0047B657  66 3B CB                  CMP CX,BX
0047B65A  7C 32                     JL 0x0047b68e
0047B65C  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047B663  7D 29                     JGE 0x0047b68e
0047B665  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047B66C  0F BF C9                  MOVSX ECX,CX
0047B66F  0F AF D9                  IMUL EBX,ECX
0047B672  0F BF D2                  MOVSX EDX,DX
0047B675  0F BF CF                  MOVSX ECX,DI
0047B678  0F AF D1                  IMUL EDX,ECX
0047B67B  03 DA                     ADD EBX,EDX
0047B67D  0F BF D0                  MOVSX EDX,AX
0047B680  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0047B685  03 DA                     ADD EBX,EDX
0047B687  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
0047B68A  33 DB                     XOR EBX,EBX
0047B68C  EB 02                     JMP 0x0047b690
LAB_0047b68e:
0047B68E  33 C9                     XOR ECX,ECX
LAB_0047b690:
0047B690  3B CB                     CMP ECX,EBX
0047B692  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047B695  0F 84 D3 E2 FF FF         JZ 0x0047996e
0047B69B  8B 11                     MOV EDX,dword ptr [ECX]
0047B69D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0047B6A0  83 F8 37                  CMP EAX,0x37
0047B6A3  0F 85 C5 E2 FF FF         JNZ 0x0047996e
0047B6A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047B6AC  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0047B6AF  89 8E 3F 06 00 00         MOV dword ptr [ESI + 0x63f],ECX
LAB_0047b6b5:
0047B6B5  89 9E 63 06 00 00         MOV dword ptr [ESI + 0x663],EBX
0047B6BB  89 9E 67 06 00 00         MOV dword ptr [ESI + 0x667],EBX
0047B6C1  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0047B6CB  0F BF 96 3D 06 00 00      MOVSX EDX,word ptr [ESI + 0x63d]
0047B6D2  0F BF 86 3B 06 00 00      MOVSX EAX,word ptr [ESI + 0x63b]
0047B6D9  0F BF 8E 39 06 00 00      MOVSX ECX,word ptr [ESI + 0x639]
0047B6E0  42                        INC EDX
0047B6E1  52                        PUSH EDX
0047B6E2  50                        PUSH EAX
0047B6E3  51                        PUSH ECX
0047B6E4  8B CE                     MOV ECX,ESI
0047B6E6  E8 80 98 F8 FF            CALL 0x00404f6b
0047B6EB  53                        PUSH EBX
0047B6EC  E9 04 FC FF FF            JMP 0x0047b2f5
